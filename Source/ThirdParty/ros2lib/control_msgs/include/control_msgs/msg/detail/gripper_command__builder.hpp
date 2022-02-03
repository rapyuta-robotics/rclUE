// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_

#include "control_msgs/msg/detail/gripper_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperCommand_max_effort
{
public:
  explicit Init_GripperCommand_max_effort(::control_msgs::msg::GripperCommand & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::GripperCommand max_effort(::control_msgs::msg::GripperCommand::_max_effort_type arg)
  {
    msg_.max_effort = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::GripperCommand msg_;
};

class Init_GripperCommand_position
{
public:
  Init_GripperCommand_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCommand_max_effort position(::control_msgs::msg::GripperCommand::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GripperCommand_max_effort(msg_);
  }

private:
  ::control_msgs::msg::GripperCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::GripperCommand>()
{
  return control_msgs::msg::builder::Init_GripperCommand_position();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_
