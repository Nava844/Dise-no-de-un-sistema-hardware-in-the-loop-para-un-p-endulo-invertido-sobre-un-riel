# Diseño de un sistema hardware in the loop para un péndulo invertido sobre un riel
![Pendulo](https://github.com/Nava844/Dise-no-de-un-sistema-hardware-in-the-loop-para-un-p-endulo-invertido-sobre-un-riel/blob/main/ros2_ws/src/Renders/Pendulo%20de%20furuta.png)
## Recursos necesarios para el proyecto

Para este proyecto, es necesario tener instalados los siguientes componentes:

- **ROS 2 Jazzy Jalisco**  
  Guía de instalación:  
  [https://docs-ros-org.translate.goog/en/jazzy/Installation/Alternatives/Ubuntu-Development-Setup.html?_x_tr_sl=en&_x_tr_tl=es&_x_tr_hl=es&_x_tr_pto=tc](https://docs-ros-org.translate.goog/en/jazzy/Installation/Alternatives/Ubuntu-Development-Setup.html?_x_tr_sl=en&_x_tr_tl=es&_x_tr_hl=es&_x_tr_pto=tc)

- **micro-ROS**  
  Sitio oficial:  
  [https://micro.ros.org/](https://micro.ros.org/)

- **Gazebo Harmonic**  
  Guía de instalación:  
  [https://gazebosim-org.translate.goog/docs/harmonic/install_ubuntu/?_x_tr_sl=en&_x_tr_tl=es&_x_tr_hl=es&_x_tr_pto=tc](https://gazebosim-org.translate.goog/docs/harmonic/install_ubuntu/?_x_tr_sl=en&_x_tr_tl=es&_x_tr_hl=es&_x_tr_pto=tc)

## RViz y Gazebo
https://github.com/user-attachments/assets/40fa5955-9b4c-4265-8a6d-3a43da75b027
## Costruir el Espacio de Trabajo
Los siguientes comandos son necesarios para cargar el entorno de Ros2 y guardar cambios.
```bash
cd ros2_ws/
colcon build
source install/setup.bash
```
## Ejecutar lanzador
Este comando manda a llamar a Rviz y Gazebo desde el archivo robot_simulation_launch.py
```bash
ros2 launch modelo_robot robot_simulation_launch.py
```
## Comado para mover el carro
Estos comandos le mandan un dato en metros y en radianes a los topicos declarados en el final.sdf y en el archivo robot_simulation_launch.py
```bash
ros2 topic pub /movil_cmd std_msgs/msg/Float64 '{data: 0.22}'
ros2 topic pub /pendulo std_msgs/msg/Float64 '{data: 2.8}'
```
