// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from nav_msgs:msg/Goals.idl
// generated code does not contain a copyright notice
#include "nav_msgs/msg/detail/goals__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "nav_msgs/msg/detail/goals__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  std_msgs::msg::Header &);

size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);

size_t
max_serialized_size_Header(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace std_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::PoseStamped &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  geometry_msgs::msg::PoseStamped &);

size_t get_serialized_size(
  const geometry_msgs::msg::PoseStamped &,
  size_t current_alignment);

size_t
max_serialized_size_PoseStamped(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace nav_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
cdr_serialize(
  const nav_msgs::msg::Goals & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: goals
  {
    size_t size = ros_message.goals.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.goals[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  nav_msgs::msg::Goals & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: goals
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.goals.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.goals[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
get_serialized_size(
  const nav_msgs::msg::Goals & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: goals
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.goals.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.goals[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_nav_msgs
max_serialized_size_Goals(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Header(
    full_bounded,
    current_alignment);
  // Member: goals
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _Goals__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const nav_msgs::msg::Goals *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Goals__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nav_msgs::msg::Goals *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Goals__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nav_msgs::msg::Goals *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Goals__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const nav_msgs::msg::Goals *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Goals__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Goals(&full_bounded, 0);
}

static message_type_support_callbacks_t _Goals__callbacks = {
  "nav_msgs::msg",
  "Goals",
  _Goals__cdr_serialize,
  _Goals__cdr_deserialize,
  _Goals__get_serialized_size,
  _Goals__get_serialized_size_with_initial_alignment,
  _Goals__max_serialized_size
};

static rosidl_message_type_support_t _Goals__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Goals__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace nav_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_nav_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nav_msgs::msg::Goals>()
{
  return &nav_msgs::msg::typesupport_microxrcedds_cpp::_Goals__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, nav_msgs, msg, Goals)() {
  return &nav_msgs::msg::typesupport_microxrcedds_cpp::_Goals__handle;
}

#ifdef __cplusplus
}
#endif
