// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from drive_base_msgs:msg/BaseInfo.idl
// generated code does not contain a copyright notice
#ifndef DRIVE_BASE_MSGS__MSG__DETAIL__BASE_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define DRIVE_BASE_MSGS__MSG__DETAIL__BASE_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "drive_base_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "drive_base_msgs/msg/detail/base_info__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drive_base_msgs
bool cdr_serialize_drive_base_msgs__msg__BaseInfo(
  const drive_base_msgs__msg__BaseInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drive_base_msgs
bool cdr_deserialize_drive_base_msgs__msg__BaseInfo(
  eprosima::fastcdr::Cdr &,
  drive_base_msgs__msg__BaseInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drive_base_msgs
size_t get_serialized_size_drive_base_msgs__msg__BaseInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drive_base_msgs
size_t max_serialized_size_drive_base_msgs__msg__BaseInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drive_base_msgs
bool cdr_serialize_key_drive_base_msgs__msg__BaseInfo(
  const drive_base_msgs__msg__BaseInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drive_base_msgs
size_t get_serialized_size_key_drive_base_msgs__msg__BaseInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drive_base_msgs
size_t max_serialized_size_key_drive_base_msgs__msg__BaseInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drive_base_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, drive_base_msgs, msg, BaseInfo)();

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_BASE_MSGS__MSG__DETAIL__BASE_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
