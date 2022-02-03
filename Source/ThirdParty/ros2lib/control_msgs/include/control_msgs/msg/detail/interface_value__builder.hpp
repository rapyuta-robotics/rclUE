// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/InterfaceValue.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__INTERFACE_VALUE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__INTERFACE_VALUE__BUILDER_HPP_

#include "control_msgs/msg/detail/interface_value__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_InterfaceValue_values
{
public:
  explicit Init_InterfaceValue_values(::control_msgs::msg::InterfaceValue & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::InterfaceValue values(::control_msgs::msg::InterfaceValue::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::InterfaceValue msg_;
};

class Init_InterfaceValue_interface_names
{
public:
  Init_InterfaceValue_interface_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InterfaceValue_values interface_names(::control_msgs::msg::InterfaceValue::_interface_names_type arg)
  {
    msg_.interface_names = std::move(arg);
    return Init_InterfaceValue_values(msg_);
  }

private:
  ::control_msgs::msg::InterfaceValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::InterfaceValue>()
{
  return control_msgs::msg::builder::Init_InterfaceValue_interface_names();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__INTERFACE_VALUE__BUILDER_HPP_
