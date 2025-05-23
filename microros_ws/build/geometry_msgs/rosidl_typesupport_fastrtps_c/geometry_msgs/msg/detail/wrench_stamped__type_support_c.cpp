// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from geometry_msgs:msg/WrenchStamped.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/wrench_stamped__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "geometry_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "geometry_msgs/msg/detail/wrench_stamped__struct.h"
#include "geometry_msgs/msg/detail/wrench_stamped__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/wrench__functions.h"  // wrench
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_geometry_msgs__msg__Wrench(
  const geometry_msgs__msg__Wrench * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_geometry_msgs__msg__Wrench(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Wrench * ros_message);

size_t get_serialized_size_geometry_msgs__msg__Wrench(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geometry_msgs__msg__Wrench(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_geometry_msgs__msg__Wrench(
  const geometry_msgs__msg__Wrench * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_geometry_msgs__msg__Wrench(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_geometry_msgs__msg__Wrench(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Wrench)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_geometry_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_geometry_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_geometry_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_geometry_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_geometry_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_geometry_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_geometry_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_geometry_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _WrenchStamped__ros_msg_type = geometry_msgs__msg__WrenchStamped;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geometry_msgs
bool cdr_serialize_geometry_msgs__msg__WrenchStamped(
  const geometry_msgs__msg__WrenchStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: wrench
  {
    cdr_serialize_geometry_msgs__msg__Wrench(
      &ros_message->wrench, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geometry_msgs
bool cdr_deserialize_geometry_msgs__msg__WrenchStamped(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__WrenchStamped * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: wrench
  {
    cdr_deserialize_geometry_msgs__msg__Wrench(cdr, &ros_message->wrench);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geometry_msgs
size_t get_serialized_size_geometry_msgs__msg__WrenchStamped(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WrenchStamped__ros_msg_type * ros_message = static_cast<const _WrenchStamped__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: wrench
  current_alignment += get_serialized_size_geometry_msgs__msg__Wrench(
    &(ros_message->wrench), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geometry_msgs
size_t max_serialized_size_geometry_msgs__msg__WrenchStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: wrench
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Wrench(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = geometry_msgs__msg__WrenchStamped;
    is_plain =
      (
      offsetof(DataType, wrench) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geometry_msgs
bool cdr_serialize_key_geometry_msgs__msg__WrenchStamped(
  const geometry_msgs__msg__WrenchStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: wrench
  {
    cdr_serialize_key_geometry_msgs__msg__Wrench(
      &ros_message->wrench, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geometry_msgs
size_t get_serialized_size_key_geometry_msgs__msg__WrenchStamped(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WrenchStamped__ros_msg_type * ros_message = static_cast<const _WrenchStamped__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: wrench
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Wrench(
    &(ros_message->wrench), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geometry_msgs
size_t max_serialized_size_key_geometry_msgs__msg__WrenchStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: wrench
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Wrench(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = geometry_msgs__msg__WrenchStamped;
    is_plain =
      (
      offsetof(DataType, wrench) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _WrenchStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const geometry_msgs__msg__WrenchStamped * ros_message = static_cast<const geometry_msgs__msg__WrenchStamped *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_geometry_msgs__msg__WrenchStamped(ros_message, cdr);
}

static bool _WrenchStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  geometry_msgs__msg__WrenchStamped * ros_message = static_cast<geometry_msgs__msg__WrenchStamped *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_geometry_msgs__msg__WrenchStamped(cdr, ros_message);
}

static uint32_t _WrenchStamped__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_geometry_msgs__msg__WrenchStamped(
      untyped_ros_message, 0));
}

static size_t _WrenchStamped__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_geometry_msgs__msg__WrenchStamped(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WrenchStamped = {
  "geometry_msgs::msg",
  "WrenchStamped",
  _WrenchStamped__cdr_serialize,
  _WrenchStamped__cdr_deserialize,
  _WrenchStamped__get_serialized_size,
  _WrenchStamped__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _WrenchStamped__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WrenchStamped,
  get_message_typesupport_handle_function,
  &geometry_msgs__msg__WrenchStamped__get_type_hash,
  &geometry_msgs__msg__WrenchStamped__get_type_description,
  &geometry_msgs__msg__WrenchStamped__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, WrenchStamped)() {
  return &_WrenchStamped__type_support;
}

#if defined(__cplusplus)
}
#endif
