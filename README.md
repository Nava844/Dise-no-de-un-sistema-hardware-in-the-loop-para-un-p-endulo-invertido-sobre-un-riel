# Diseño de un sistema hardware in the loop para un péndulo invertido sobre un riel
![Pendulo](https://github.com/Nava844/Dise-no-de-un-sistema-hardware-in-the-loop-para-un-p-endulo-invertido-sobre-un-riel/blob/main/ros2_ws/src/Renders/Pendulo%20de%20furuta.png)
## RViz y Gazebo
![RViz](https://upload.wikimedia.org/wikipedia/commons/9/97/RViz_icon.svg)  
*Icono de RViz*
![Gazebo](https://upload.wikimedia.org/wikipedia/commons/1/12/Gazebo_Sim_Logo.svg)  
*Icono de Gazebo*

---
### Comandos para correr la simulación

```bash
cd ros2_ws/
colcon build
# Starting >>> modelo_robot
# Finished <<< modelo_robot [0.19s]                
# Summary: 1 package finished [0.48s]
source install/setup.bash
ros2 launch modelo_robot robot_simulation_launch.py


