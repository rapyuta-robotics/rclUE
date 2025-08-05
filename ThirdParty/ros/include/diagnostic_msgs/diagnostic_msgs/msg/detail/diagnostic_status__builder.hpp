// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from diagnostic_msgs:msg/DiagnosticStatus.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__BUILDER_HPP_
#define DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace diagnostic_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticStatus_values
{
public:
  explicit Init_DiagnosticStatus_values(::diagnostic_msgs::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  ::diagnostic_msgs::msg::DiagnosticStatus values(::diagnostic_msgs::msg::DiagnosticStatus::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diagnostic_msgs::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_hardware_id
{
public:
  explicit Init_DiagnosticStatus_hardware_id(::diagnostic_msgs::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_DiagnosticStatus_values hardware_id(::diagnostic_msgs::msg::DiagnosticStatus::_hardware_id_type arg)
  {
    msg_.hardware_id = std::move(arg);
    return Init_DiagnosticStatus_values(msg_);
  }

private:
  ::diagnostic_msgs::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_message
{
public:
  explicit Init_DiagnosticStatus_message(::diagnostic_msgs::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_DiagnosticStatus_hardware_id message(::diagnostic_msgs::msg::DiagnosticStatus::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_DiagnosticStatus_hardware_id(msg_);
  }

private:
  ::diagnostic_msgs::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_name
{
public:
  explicit Init_DiagnosticStatus_name(::diagnostic_msgs::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_DiagnosticStatus_message name(::diagnostic_msgs::msg::DiagnosticStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_DiagnosticStatus_message(msg_);
  }

private:
  ::diagnostic_msgs::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_level
{
public:
  Init_DiagnosticStatus_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticStatus_name level(::diagnostic_msgs::msg::DiagnosticStatus::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_DiagnosticStatus_name(msg_);
  }

private:
  ::diagnostic_msgs::msg::DiagnosticStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::diagnostic_msgs::msg::DiagnosticStatus>()
{
  return diagnostic_msgs::msg::builder::Init_DiagnosticStatus_level();
}

}  // namespace diagnostic_msgs

#endif  // DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__BUILDER_HPP_
