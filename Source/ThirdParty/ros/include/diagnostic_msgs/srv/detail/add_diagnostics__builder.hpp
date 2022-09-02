// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from diagnostic_msgs:srv/AddDiagnostics.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__BUILDER_HPP_
#define DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__BUILDER_HPP_

#include "diagnostic_msgs/srv/detail/add_diagnostics__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace diagnostic_msgs
{

namespace srv
{

namespace builder
{

class Init_AddDiagnostics_Request_load_namespace
{
public:
  Init_AddDiagnostics_Request_load_namespace()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::diagnostic_msgs::srv::AddDiagnostics_Request load_namespace(::diagnostic_msgs::srv::AddDiagnostics_Request::_load_namespace_type arg)
  {
    msg_.load_namespace = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diagnostic_msgs::srv::AddDiagnostics_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::diagnostic_msgs::srv::AddDiagnostics_Request>()
{
  return diagnostic_msgs::srv::builder::Init_AddDiagnostics_Request_load_namespace();
}

}  // namespace diagnostic_msgs


namespace diagnostic_msgs
{

namespace srv
{

namespace builder
{

class Init_AddDiagnostics_Response_message
{
public:
  explicit Init_AddDiagnostics_Response_message(::diagnostic_msgs::srv::AddDiagnostics_Response & msg)
  : msg_(msg)
  {}
  ::diagnostic_msgs::srv::AddDiagnostics_Response message(::diagnostic_msgs::srv::AddDiagnostics_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diagnostic_msgs::srv::AddDiagnostics_Response msg_;
};

class Init_AddDiagnostics_Response_success
{
public:
  Init_AddDiagnostics_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddDiagnostics_Response_message success(::diagnostic_msgs::srv::AddDiagnostics_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AddDiagnostics_Response_message(msg_);
  }

private:
  ::diagnostic_msgs::srv::AddDiagnostics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::diagnostic_msgs::srv::AddDiagnostics_Response>()
{
  return diagnostic_msgs::srv::builder::Init_AddDiagnostics_Response_success();
}

}  // namespace diagnostic_msgs

#endif  // DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__BUILDER_HPP_
