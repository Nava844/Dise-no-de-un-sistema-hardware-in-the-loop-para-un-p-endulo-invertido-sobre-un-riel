from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    pkg_path = get_package_share_directory("modelo_robot")
    world_path = os.path.join(pkg_path, "urdf", "mimundo.sdf")

    # Lanzar Gazebo con el mundo
    gz_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("ros_gz_sim"),
                "launch",
                "gz_sim.launch.py"
            )
        ),
        launch_arguments={"gz_args": f"-r {world_path}"}.items(),
    )

    return LaunchDescription([
        gz_sim
    ])
