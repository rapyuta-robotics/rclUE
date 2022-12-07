// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rcl_interfaces:srv/GetParameters.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DETAIL__GET_PARAMETERS__BUILDER_HPP_
#define RCL_INTERFACES__SRV__DETAIL__GET_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rcl_interfaces/srv/detail/get_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rcl_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetParameters_Request_names
{
public:
  Init_GetParameters_Request_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rcl_interfaces::srv::GetParameters_Request names(::rcl_interfaces::srv::GetParameters_Request::_names_type arg)
  {
    msg_.names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rcl_interfaces::srv::GetParameters_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rcl_interfaces::srv::GetParameters_Request>()
{
  return rcl_interfaces::srv::builder::Init_GetParameters_Request_names();
}

}  // namespace rcl_interfaces


namespace rcl_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetParameters_Response_values
{
public:
  Init_GetParameters_Response_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rcl_interfaces::srv::GetParameters_Response values(::rcl_interfaces::srv::GetParameters_Response::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rcl_interfaces::srv::GetParameters_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rcl_interfaces::srv::GetParameters_Response>()
{
  return rcl_interfaces::srv::builder::Init_GetParameters_Response_values();
}

}  // namespace rcl_interfaces

#endif  // RCL_INTERFACES__SRV__DETAIL__GET_PARAMETERS__BUILDER_HPP_
