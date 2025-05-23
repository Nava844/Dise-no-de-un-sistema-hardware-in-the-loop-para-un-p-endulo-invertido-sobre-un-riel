// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from type_description_interfaces:msg/KeyValue.idl
// generated code does not contain a copyright notice
#include "type_description_interfaces/msg/detail/key_value__rosidl_typesupport_fastrtps_cpp.hpp"
#include "type_description_interfaces/msg/detail/key_value__functions.h"
#include "type_description_interfaces/msg/detail/key_value__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace type_description_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_type_description_interfaces
cdr_serialize(
  const type_description_interfaces::msg::KeyValue & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: key
  cdr << ros_message.key;

  // Member: value
  cdr << ros_message.value;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_type_description_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  type_description_interfaces::msg::KeyValue & ros_message)
{
  // Member: key
  cdr >> ros_message.key;

  // Member: value
  cdr >> ros_message.value;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_type_description_interfaces
get_serialized_size(
  const type_description_interfaces::msg::KeyValue & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: key
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.key.size() + 1);

  // Member: value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.value.size() + 1);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_type_description_interfaces
max_serialized_size_KeyValue(
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

  // Member: key
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: value
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = type_description_interfaces::msg::KeyValue;
    is_plain =
      (
      offsetof(DataType, value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_type_description_interfaces
cdr_serialize_key(
  const type_description_interfaces::msg::KeyValue & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: key
  cdr << ros_message.key;

  // Member: value
  cdr << ros_message.value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_type_description_interfaces
get_serialized_size_key(
  const type_description_interfaces::msg::KeyValue & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: key
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.key.size() + 1);

  // Member: value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.value.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_type_description_interfaces
max_serialized_size_key_KeyValue(
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

  // Member: key
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: value
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = type_description_interfaces::msg::KeyValue;
    is_plain =
      (
      offsetof(DataType, value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _KeyValue__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const type_description_interfaces::msg::KeyValue *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _KeyValue__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<type_description_interfaces::msg::KeyValue *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _KeyValue__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const type_description_interfaces::msg::KeyValue *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _KeyValue__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_KeyValue(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _KeyValue__callbacks = {
  "type_description_interfaces::msg",
  "KeyValue",
  _KeyValue__cdr_serialize,
  _KeyValue__cdr_deserialize,
  _KeyValue__get_serialized_size,
  _KeyValue__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _KeyValue__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_KeyValue__callbacks,
  get_message_typesupport_handle_function,
  &type_description_interfaces__msg__KeyValue__get_type_hash,
  &type_description_interfaces__msg__KeyValue__get_type_description,
  &type_description_interfaces__msg__KeyValue__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace type_description_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_type_description_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<type_description_interfaces::msg::KeyValue>()
{
  return &type_description_interfaces::msg::typesupport_fastrtps_cpp::_KeyValue__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, type_description_interfaces, msg, KeyValue)() {
  return &type_description_interfaces::msg::typesupport_fastrtps_cpp::_KeyValue__handle;
}

#ifdef __cplusplus
}
#endif
