// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from composition_interfaces:srv/ListNodes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "composition_interfaces/srv/list_nodes.hpp"


#ifndef COMPOSITION_INTERFACES__SRV__DETAIL__LIST_NODES__BUILDER_HPP_
#define COMPOSITION_INTERFACES__SRV__DETAIL__LIST_NODES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "composition_interfaces/srv/detail/list_nodes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace composition_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::composition_interfaces::srv::ListNodes_Request>()
{
  return ::composition_interfaces::srv::ListNodes_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace composition_interfaces


namespace composition_interfaces
{

namespace srv
{

namespace builder
{

class Init_ListNodes_Response_unique_ids
{
public:
  explicit Init_ListNodes_Response_unique_ids(::composition_interfaces::srv::ListNodes_Response & msg)
  : msg_(msg)
  {}
  ::composition_interfaces::srv::ListNodes_Response unique_ids(::composition_interfaces::srv::ListNodes_Response::_unique_ids_type arg)
  {
    msg_.unique_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::composition_interfaces::srv::ListNodes_Response msg_;
};

class Init_ListNodes_Response_full_node_names
{
public:
  Init_ListNodes_Response_full_node_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListNodes_Response_unique_ids full_node_names(::composition_interfaces::srv::ListNodes_Response::_full_node_names_type arg)
  {
    msg_.full_node_names = std::move(arg);
    return Init_ListNodes_Response_unique_ids(msg_);
  }

private:
  ::composition_interfaces::srv::ListNodes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::composition_interfaces::srv::ListNodes_Response>()
{
  return composition_interfaces::srv::builder::Init_ListNodes_Response_full_node_names();
}

}  // namespace composition_interfaces


namespace composition_interfaces
{

namespace srv
{

namespace builder
{

class Init_ListNodes_Event_response
{
public:
  explicit Init_ListNodes_Event_response(::composition_interfaces::srv::ListNodes_Event & msg)
  : msg_(msg)
  {}
  ::composition_interfaces::srv::ListNodes_Event response(::composition_interfaces::srv::ListNodes_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::composition_interfaces::srv::ListNodes_Event msg_;
};

class Init_ListNodes_Event_request
{
public:
  explicit Init_ListNodes_Event_request(::composition_interfaces::srv::ListNodes_Event & msg)
  : msg_(msg)
  {}
  Init_ListNodes_Event_response request(::composition_interfaces::srv::ListNodes_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ListNodes_Event_response(msg_);
  }

private:
  ::composition_interfaces::srv::ListNodes_Event msg_;
};

class Init_ListNodes_Event_info
{
public:
  Init_ListNodes_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListNodes_Event_request info(::composition_interfaces::srv::ListNodes_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ListNodes_Event_request(msg_);
  }

private:
  ::composition_interfaces::srv::ListNodes_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::composition_interfaces::srv::ListNodes_Event>()
{
  return composition_interfaces::srv::builder::Init_ListNodes_Event_info();
}

}  // namespace composition_interfaces

#endif  // COMPOSITION_INTERFACES__SRV__DETAIL__LIST_NODES__BUILDER_HPP_
