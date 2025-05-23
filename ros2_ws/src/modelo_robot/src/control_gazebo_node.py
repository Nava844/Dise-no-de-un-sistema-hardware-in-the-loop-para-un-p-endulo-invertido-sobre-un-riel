import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64  # O usa el tipo correcto según el mensaje que necesites

class ControlGazeboNode(Node):
    def __init__(self):
        super().__init__('control_gazebo_node')
        # Aquí se crea el publicador, asumiendo que el mensaje es un Float64
        self.publisher = self.create_publisher(Float64, '/movil_cmd', 10)
        
        # Publicar a intervalos regulares
        self.timer = self.create_timer(1.0, self.timer_callback)  # 1 segundo de intervalo
        self.get_logger().info('Nodo de control de Gazebo funcionando')

    def timer_callback(self):
        msg = Float64()
        msg.data = -0.3  # Este es el comando de velocidad que se enviará al robot
        self.publisher.publish(msg)
        self.get_logger().info(f'Enviando mensaje: {msg.data}')

def main(args=None):
    rclpy.init(args=args)
    node = ControlGazeboNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
