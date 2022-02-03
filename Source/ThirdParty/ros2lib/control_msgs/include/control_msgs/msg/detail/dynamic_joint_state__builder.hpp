// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/DynamicJointState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__DYNAMIC_JOINT_STATE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__DYNAMIC_JOINT_STATE__BUILDER_HPP_

#include "control_msgs/msg/detail/dynamic_joint_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamicJointState_interface_values
{
public:
  explicit Init_DynamicJointState_interface_values(::control_msgs::msg::DynamicJointState & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::DynamicJointState interface_values(::control_msgs::msg::DynamicJointState::_interface_values_type arg)
  {
    msg_.interface_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::DynamicJointState msg_;
};

class Init_DynamicJointState_joint_names
{
public:
  explicit Init_DynamicJointState_joint_names(::control_msgs::msg::DynamicJointState & msg)
  : msg_(msg)
  {}
  Init_DynamicJointState_interface_values joint_names(::control_msgs::msg::DynamicJointState::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_DynamicJointState_interface_values(msg_);
  }

private:
  ::control_msgs::msg::DynamicJointState msg_;
};

class Init_DynamicJointState_header
{
public:
  Init_DynamicJointState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicJointState_joint_names header(::control_msgs::msg::DynamicJointState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DynamicJointState_joint_names(msg_);
  }

private:
  ::control_msgs::msg::DynamicJointState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::DynamicJointState>()
{
  return control_msgs::msg::builder::Init_DynamicJointState_header();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__DYNAMIC_JOINT_STATE__BUILDER_HPP_
