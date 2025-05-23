cmake_minimum_required(VERSION 3.5)

project(nav_msgs)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)

set(msg_files
  "msg/Goals.msg"
  "msg/GridCells.msg"
  "msg/MapMetaData.msg"
  "msg/OccupancyGrid.msg"
  "msg/Odometry.msg"
  "msg/Path.msg"
)
set(srv_files
  "srv/GetMap.srv"
  "srv/GetPlan.srv"
  "srv/LoadMap.srv"
  "srv/SetMap.srv"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  ${srv_files}
  DEPENDENCIES builtin_interfaces geometry_msgs std_msgs
  ADD_LINTER_TESTS
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()
