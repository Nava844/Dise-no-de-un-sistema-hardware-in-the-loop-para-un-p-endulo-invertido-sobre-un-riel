import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, RegisterEventHandler
from launch.event_handlers import OnProcessStart
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Rutas de archivos
    urdf_file_name = 'final.urdf'
    urdf_path = os.path.join(
        get_package_share_directory('modelo_robot'),
        'urdf',
        urdf_file_name)
    
    sdf_world_path = '/home/nava/ros2_ws/src/modelo_robot/urdf/mimundo.sdf'
    sdf_robot_path = '/home/nava/ros2_ws/src/modelo_robot/urdf/final.sdf'

    with open(urdf_path, 'r') as infp:
        robot_desc = infp.read()

    # Lanzar Gazebo con el mundo
    world_cmd = ExecuteProcess(
        cmd=['gz', 'sim', '-v', '4', '-r', sdf_world_path],
        output='screen'
    )

    # Spawn del robot en Gazebo
    spawn_robot = ExecuteProcess(
        cmd=['gz', 'service', '-s', '/world/default/create',
             '--reqtype', 'gz.msgs.EntityFactory',
             '--reptype', 'gz.msgs.Boolean',
             '--timeout', '1000',
             '--req', 'sdf_filename: "' + sdf_robot_path + '" name: "final" pose { position { z: 0.5 } }'],
        output='screen'
    )

    # Nodos ROS 2
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[
            {'robot_description': robot_desc},
            {'use_sim_time': True}
        ]
    )
    Node(
    package='modelo_robot',
    executable='control_gazebo_node.py',
    name='control_gazebo_node',
    output='screen'
    )

    
    # Bridge configurado correctamente
    gz_bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            "/pendulo@std_msgs/msg/Float64@gz.msgs.Double",
            "/movil_cmd@std_msgs/msg/Float64@gz.msgs.Double",
            "/odom@nav_msgs/msg/Odometry@gz.msgs.Odometry",
            "/tf@tf2_msgs/msg/TFMessage@gz.msgs.Pose_V",
            "/joint_states@sensor_msgs/msg/JointState@gz.msgs.Model",
        ],
        output='screen',
        parameters=[{'use_sim_time': True}],
    )

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
    )

    
    launch_description = LaunchDescription([
        DeclareLaunchArgument(
            name='gui',
            default_value='True',
            description='Usar GUI para el joint_state_publisher'
        ),
        world_cmd,
        robot_state_publisher_node, 
        RegisterEventHandler(
            event_handler=OnProcessStart(
                target_action=world_cmd,
                on_start=[spawn_robot]
            )
        ),
        RegisterEventHandler(
            event_handler=OnProcessStart(
                target_action=spawn_robot,
                on_start=[gz_bridge]  
            )
        ),
        rviz_node 
    ])

    return launch_description