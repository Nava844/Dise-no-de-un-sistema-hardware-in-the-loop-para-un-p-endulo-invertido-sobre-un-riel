# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/nava/microros_ws/src/uros/micro-ROS-demos/rclc/fragmented_publication"
  "/home/nava/microros_ws/build/micro_ros_demos_rclc/fragmented_publication/src/fragmented_publication-build"
  "/home/nava/microros_ws/build/micro_ros_demos_rclc/temp_install"
  "/home/nava/microros_ws/build/micro_ros_demos_rclc/fragmented_publication/tmp"
  "/home/nava/microros_ws/build/micro_ros_demos_rclc/fragmented_publication/src/fragmented_publication-stamp"
  "/home/nava/microros_ws/build/micro_ros_demos_rclc/fragmented_publication/src"
  "/home/nava/microros_ws/build/micro_ros_demos_rclc/fragmented_publication/src/fragmented_publication-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/nava/microros_ws/build/micro_ros_demos_rclc/fragmented_publication/src/fragmented_publication-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/nava/microros_ws/build/micro_ros_demos_rclc/fragmented_publication/src/fragmented_publication-stamp${cfgdir}") # cfgdir has leading slash
endif()
