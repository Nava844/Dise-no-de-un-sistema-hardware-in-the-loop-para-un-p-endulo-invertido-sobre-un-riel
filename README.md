# Diseño de un sistema hardware in the loop para un péndulo invertido sobre un riel
![Pendulo](https://github.com/Nava844/Dise-no-de-un-sistema-hardware-in-the-loop-para-un-p-endulo-invertido-sobre-un-riel/blob/main/ros2_ws/src/Renders/Pendulo%20de%20furuta.png)
## RViz y Gazebo

---
### Comandos para correr la simulación

```bash
cd ros2_ws/
colcon build
source install/setup.bash
ros2 launch modelo_robot robot_simulation_launch.py

---
### Comando para mover el carro desde Ros2

```bash
ros2 topic pub /movil_cmd std_msgs/msg/Float64 '{data: 0.22}'
