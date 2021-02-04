// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rcl_interfaces:srv/GetParameterTypes.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DETAIL__GET_PARAMETER_TYPES__BUILDER_HPP_
#define RCL_INTERFACES__SRV__DETAIL__GET_PARAMETER_TYPES__BUILDER_HPP_

#include "rcl_interfaces/srv/detail/get_parameter_types__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rcl_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetParameterTypes_Request_names
{
public:
  Init_GetParameterTypes_Request_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rcl_interfaces::srv::GetParameterTypes_Request names(::rcl_interfaces::srv::GetParameterTypes_Request::_names_type arg)
  {
    msg_.names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rcl_interfaces::srv::GetParameterTypes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rcl_interfaces::srv::GetParameterTypes_Request>()
{
  return rcl_interfaces::srv::builder::Init_GetParameterTypes_Request_names();
}

}  // namespace rcl_interfaces


namespace rcl_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetParameterTypes_Response_types
{
public:
  Init_GetParameterTypes_Response_types()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rcl_interfaces::srv::GetParameterTypes_Response types(::rcl_interfaces::srv::GetParameterTypes_Response::_types_type arg)
  {
    msg_.types = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rcl_interfaces::srv::GetParameterTypes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rcl_interfaces::srv::GetParameterTypes_Response>()
{
  return rcl_interfaces::srv::builder::Init_GetParameterTypes_Response_types();
}

}  // namespace rcl_interfaces

#endif  // RCL_INTERFACES__SRV__DETAIL__GET_PARAMETER_TYPES__BUILDER_HPP_
