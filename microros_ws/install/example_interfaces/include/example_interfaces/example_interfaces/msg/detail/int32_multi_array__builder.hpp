// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from example_interfaces:msg/Int32MultiArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "example_interfaces/msg/int32_multi_array.hpp"


#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__INT32_MULTI_ARRAY__BUILDER_HPP_
#define EXAMPLE_INTERFACES__MSG__DETAIL__INT32_MULTI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "example_interfaces/msg/detail/int32_multi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace example_interfaces
{

namespace msg
{

namespace builder
{

class Init_Int32MultiArray_data
{
public:
  explicit Init_Int32MultiArray_data(::example_interfaces::msg::Int32MultiArray & msg)
  : msg_(msg)
  {}
  ::example_interfaces::msg::Int32MultiArray data(::example_interfaces::msg::Int32MultiArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::msg::Int32MultiArray msg_;
};

class Init_Int32MultiArray_layout
{
public:
  Init_Int32MultiArray_layout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Int32MultiArray_data layout(::example_interfaces::msg::Int32MultiArray::_layout_type arg)
  {
    msg_.layout = std::move(arg);
    return Init_Int32MultiArray_data(msg_);
  }

private:
  ::example_interfaces::msg::Int32MultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::msg::Int32MultiArray>()
{
  return example_interfaces::msg::builder::Init_Int32MultiArray_layout();
}

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__INT32_MULTI_ARRAY__BUILDER_HPP_
