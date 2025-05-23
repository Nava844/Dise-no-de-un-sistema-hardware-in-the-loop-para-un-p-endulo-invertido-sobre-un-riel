#include <Arduino.h>
#include <PID_v1.h>
#include <math.h>
#include <micro_ros_arduino.h>
#include <rcl/rcl.h>
#include <std_msgs/msg/float64.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

// Pines hardware
const int potPin = 2;
const int IN1 = 18, IN2 = 19, PWMA = 5, STBY = 21;
const int encoderPinA = 27, encoderPinB = 26;

// PID variables y parámetros
double angleInput = 0, angleSetpoint = 0;
double angleOutput_suave = 0, angleOutput_agresivo = 0;
double carroInput = 0, carroSetpoint = 0;
double carroOutput_suave = 0, carroOutput_agresivo = 0;

// PID parámetros
PID anglePID_suave(&angleInput, &angleOutput_suave, &angleSetpoint, 15, 0.8, 7, DIRECT);
PID anglePID_agresivo(&angleInput, &angleOutput_agresivo, &angleSetpoint, 150, 0.4, 35, DIRECT);
PID carroPID_suave(&carroInput, &carroOutput_suave, &carroSetpoint, 0.3, 0.05, 0.02, DIRECT);
PID carroPID_agresivo(&carroInput, &carroOutput_agresivo, &carroSetpoint, 0.8, 0.1, 0.05, DIRECT);

// Encoder
volatile long encoderCount = 0;
int lastEncoded = 0;

// Constantes físicas
const double pasosPorCm = 94;
const double limiteMin = -15.0, limiteMax = 15.0, zonaFrenado = 3.0;
double angleInputFiltrado = 0;
const double alphaFiltro = 0.4;

// Swing-up
bool levantarPendulo = false;
unsigned long tiempoSwing = 0;
const unsigned long intervaloSwing = 400;
int direccionSwing = 1;

// Modo PID
const double umbralCambioModo = 2.0;
const double histeresis = 0.5;
bool modoAgresivo = true;

// micro-ROS
rcl_publisher_t pendulo_pub, carro_pub;
std_msgs__msg__Float64 msg_pendulo, msg_carro;
rclc_executor_t executor;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;

// Encoder interrupt
void IRAM_ATTR updateEncoder() {
  int MSB = digitalRead(encoderPinA);
  int LSB = digitalRead(encoderPinB);
  int encoded = (MSB << 1) | LSB;
  int sum = (lastEncoded << 2) | encoded;
  if (sum == 0b1101 || sum == 0b0100 || sum == 0b0010 || sum == 0b1011) encoderCount++;
  if (sum == 0b1110 || sum == 0b0111 || sum == 0b0001 || sum == 0b1000) encoderCount--;
  lastEncoded = encoded;
}

void setup() {
  // Hardware
  pinMode(IN1, OUTPUT); pinMode(IN2, OUTPUT); pinMode(PWMA, OUTPUT); pinMode(STBY, OUTPUT);
  pinMode(potPin, INPUT);
  pinMode(encoderPinA, INPUT); pinMode(encoderPinB, INPUT);
  attachInterrupt(digitalPinToInterrupt(encoderPinA), updateEncoder, CHANGE);
  attachInterrupt(digitalPinToInterrupt(encoderPinB), updateEncoder, CHANGE);
  digitalWrite(STBY, HIGH);

  delay(1000);
  int lecturaRaw = analogRead(potPin);
  angleSetpoint = map(lecturaRaw, 50, 4000, -180, 180);
  angleInputFiltrado = angleSetpoint;
  carroSetpoint = 0;

  anglePID_suave.SetMode(AUTOMATIC); anglePID_suave.SetOutputLimits(-200, 200);
  anglePID_agresivo.SetMode(AUTOMATIC); anglePID_agresivo.SetOutputLimits(-200, 200);
  carroPID_suave.SetMode(AUTOMATIC); carroPID_suave.SetOutputLimits(-100, 100);
  carroPID_agresivo.SetMode(AUTOMATIC); carroPID_agresivo.SetOutputLimits(-100, 100);

  // micro-ROS
  set_microros_transports();
  allocator = rcl_get_default_allocator();
  rclc_support_init(&support, 0, NULL, &allocator);
  rclc_node_init_default(&node, "pendulo_node", "", &support);
  rclc_publisher_init_default(&pendulo_pub, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float64), "/pendulo");
  rclc_publisher_init_default(&carro_pub, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float64), "/movil_cmd");

  rclc_executor_init(&executor, &support.context, 1, &allocator);
}

void loop() {
  // Lecturas
  int lecturaRaw = analogRead(potPin);
  double angleMedida = map(lecturaRaw, 50, 4000, -180, 180);
  angleInputFiltrado = alphaFiltro * angleMedida + (1 - alphaFiltro) * angleInputFiltrado;
  angleInput = angleInputFiltrado;

  noInterrupts();
  long encoderCopy = encoderCount;
  interrupts();
  carroInput = encoderCopy / pasosPorCm;

  double errorAngulo = angleInput - angleSetpoint;
  levantarPendulo = abs(errorAngulo) > 30;

  if (levantarPendulo) {
    unsigned long ahora = millis();
    if (ahora - tiempoSwing > intervaloSwing) {
      direccionSwing *= -1;
      tiempoSwing = ahora;
    }
    digitalWrite(IN1, direccionSwing > 0 ? HIGH : LOW);
    digitalWrite(IN2, direccionSwing > 0 ? LOW : HIGH);
    analogWrite(PWMA, 200);
  } else {
    if (!modoAgresivo && abs(errorAngulo) > umbralCambioModo + histeresis) modoAgresivo = true;
    else if (modoAgresivo && abs(errorAngulo) < umbralCambioModo - histeresis) modoAgresivo = false;

    if (modoAgresivo) {
      carroSetpoint = 0.0;
      anglePID_agresivo.Compute();
      carroPID_agresivo.Compute();
    } else {
      carroSetpoint = 0.0;
      anglePID_suave.Compute();
      carroPID_suave.Compute();
    }

    carroSetpoint = constrain(carroSetpoint, limiteMin, limiteMax);
    double carroOutput = modoAgresivo ? carroOutput_agresivo : carroOutput_suave;
    double angleOutput = modoAgresivo ? angleOutput_agresivo : angleOutput_suave;

    if (carroInput < limiteMin + zonaFrenado && carroOutput < 0) {
      double factor = (carroInput - limiteMin) / zonaFrenado;
      carroOutput *= constrain(factor, 0.0, 1.0);
    } else if (carroInput > limiteMax - zonaFrenado && carroOutput > 0) {
      double factor = (limiteMax - carroInput) / zonaFrenado;
      carroOutput *= constrain(factor, 0.0, 1.0);
    }

    double factorAngle = modoAgresivo ? 0.8 : 0.6;
    double controlTotal = factorAngle * angleOutput + (1.0 - factorAngle) * carroOutput;

    if (abs(controlTotal) < 15.0) {
      controlTotal *= abs(controlTotal) / 15.0;
    }

    controlTotal = 150.0 * tanh(controlTotal / 150.0);
    static double outputFiltrado = 0;
    outputFiltrado = 0.3 * controlTotal + 0.7 * outputFiltrado;

    digitalWrite(IN1, outputFiltrado > 0 ? HIGH : LOW);
    digitalWrite(IN2, outputFiltrado > 0 ? LOW : HIGH);
    analogWrite(PWMA, constrain(abs(outputFiltrado), 30, 255));
  }

  // micro-ROS publishing
  msg_pendulo.data = angleInput * (PI / 180.0);
  msg_carro.data = carroInput / 100.0;
  rcl_publish(&pendulo_pub, &msg_pendulo, NULL);
  rcl_publish(&carro_pub, &msg_carro, NULL);

  delay(5);  // 5 ms
}
