cmake_minimum_required(VERSION 3.8)
project(modelo_robot)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(robot_state_publisher REQUIRED)
find_package(ros_gz_sim REQUIRED)  # ← AÑADIDO

# Install URDF and other configuration files
install(DIRECTORY urdf/
  DESTINATION share/${PROJECT_NAME}/urdf
)

# Install launch files
install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

# Optional: Create an executable (si estás desarrollando un nodo C++)
# add_executable(modelo_robot_node src/modelo_robot_node.cpp)
# ament_target_dependencies(modelo_robot_node rclcpp robot_state_publisher gazebo_ros)  # ← AÑADIDO si usas el ejecutable

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
