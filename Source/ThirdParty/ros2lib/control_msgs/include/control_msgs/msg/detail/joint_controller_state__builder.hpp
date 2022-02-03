// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/JointControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__BUILDER_HPP_

#include "control_msgs/msg/detail/joint_controller_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_JointControllerState_antiwindup
{
public:
  explicit Init_JointControllerState_antiwindup(::control_msgs::msg::JointControllerState & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::JointControllerState antiwindup(::control_msgs::msg::JointControllerState::_antiwindup_type arg)
  {
    msg_.antiwindup = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::JointControllerState msg_;
};

class Init_JointControllerState_i_clamp
{
public:
  explicit Init_JointControllerState_i_clamp(::control_msgs::msg::JointControllerState & msg)
  : msg_(msg)
  {}
  Init_JointControllerState_antiwindup i_clamp(::control_msgs::msg::JointControllerState::_i_clamp_type arg)
  {
    msg_.i_clamp = std::move(arg);
    return Init_JointControllerState_antiwindup(msg_);
  }

private:
  ::control_msgs::msg::JointControllerState msg_;
};

class Init_JointControllerState_d
{
public:
  explicit Init_JointControllerState_d(::control_msgs::msg::JointControllerState & msg)
  : msg_(msg)
  {}
  Init_JointControllerState_i_clamp d(::control_msgs::msg::JointControllerState::_d_type arg)
  {
    msg_.d = std::move(arg);
    return Init_JointControllerState_i_clamp(msg_);
  }

private:
  ::control_msgs::msg::JointControllerState msg_;
};

class Init_JointControllerState_i
{
public:
  explicit Init_JointControllerState_i(::control_msgs::msg::JointControllerState & msg)
  : msg_(msg)
  {}
  Init_JointControllerState_d i(::control_msgs::msg::JointControllerState::_i_type arg)
  {
    msg_.i = std::move(arg);
    return Init_JointControllerState_d(msg_);
  }

private:
  ::control_msgs::msg::JointControllerState msg_;
};

class Init_JointControllerState_p
{
public:
  explicit Init_JointControllerState_p(::control_msgs::msg::JointControllerState & msg)
  : msg_(msg)
  {}
  Init_JointControllerState_i p(::control_msgs::msg::JointControllerState::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_JointControllerState_i(msg_);
  }

private:
  ::control_msgs::msg::JointControllerState msg_;
};

class Init_JointControllerState_command
{
public:
  explicit Init_JointControllerState_command(::control_msgs::msg::JointControllerState & msg)
  : msg_(msg)
  {}
  Init_JointControllerState_p command(::control_msgs::msg::JointControllerState::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_JointControllerState_p(msg_);
  }

private:
  ::control_msgs::msg::JointControllerState msg_;
};

class Init_JointControllerState_time_step
{
public:
  explicit Init_JointControllerState_time_step(::control_msgs::msg::JointControllerState & msg)
  : msg_(msg)
  {}
  Init_JointControllerState_command time_step(::control_msgs::msg::JointControllerState::_time_step_type arg)
  {
    msg_.time_step = std::move(arg);
    return Init_JointControllerState_command(msg_);
  }

private:
  ::control_msgs::msg::JointControllerState msg_;
};

class Init_JointControllerState_error
{
public:
  explicit Init_JointControllerState_error(::control_msgs::msg::JointControllerState & msg)
  : msg_(msg)
  {}
  Init_JointControllerState_time_step error(::control_msgs::msg::JointControllerState::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_JointControllerState_time_step(msg_);
  }

private:
  ::control_msgs::msg::JointControllerState msg_;
};

class Init_JointControllerState_process_value_dot
{
public:
  explicit Init_JointControllerState_process_value_dot(::control_msgs::msg::JointControllerState & msg)
  : msg_(msg)
  {}
  Init_JointControllerState_error process_value_dot(::control_msgs::msg::JointControllerState::_process_value_dot_type arg)
  {
    msg_.process_value_dot = std::move(arg);
    return Init_JointControllerState_error(msg_);
  }

private:
  ::control_msgs::msg::JointControllerState msg_;
};

class Init_JointControllerState_process_value
{
public:
  explicit Init_JointControllerState_process_value(::control_msgs::msg::JointControllerState & msg)
  : msg_(msg)
  {}
  Init_JointControllerState_process_value_dot process_value(::control_msgs::msg::JointControllerState::_process_value_type arg)
  {
    msg_.process_value = std::move(arg);
    return Init_JointControllerState_process_value_dot(msg_);
  }

private:
  ::control_msgs::msg::JointControllerState msg_;
};

class Init_JointControllerState_set_point
{
public:
  explicit Init_JointControllerState_set_point(::control_msgs::msg::JointControllerState & msg)
  : msg_(msg)
  {}
  Init_JointControllerState_process_value set_point(::control_msgs::msg::JointControllerState::_set_point_type arg)
  {
    msg_.set_point = std::move(arg);
    return Init_JointControllerState_process_value(msg_);
  }

private:
  ::control_msgs::msg::JointControllerState msg_;
};

class Init_JointControllerState_header
{
public:
  Init_JointControllerState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointControllerState_set_point header(::control_msgs::msg::JointControllerState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointControllerState_set_point(msg_);
  }

private:
  ::control_msgs::msg::JointControllerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::JointControllerState>()
{
  return control_msgs::msg::builder::Init_JointControllerState_header();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__BUILDER_HPP_
