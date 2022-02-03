// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/PidState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__PID_STATE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__PID_STATE__BUILDER_HPP_

#include "control_msgs/msg/detail/pid_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_PidState_output
{
public:
  explicit Init_PidState_output(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::PidState output(::control_msgs::msg::PidState::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_i_min
{
public:
  explicit Init_PidState_i_min(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_output i_min(::control_msgs::msg::PidState::_i_min_type arg)
  {
    msg_.i_min = std::move(arg);
    return Init_PidState_output(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_i_max
{
public:
  explicit Init_PidState_i_max(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_i_min i_max(::control_msgs::msg::PidState::_i_max_type arg)
  {
    msg_.i_max = std::move(arg);
    return Init_PidState_i_min(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_d_term
{
public:
  explicit Init_PidState_d_term(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_i_max d_term(::control_msgs::msg::PidState::_d_term_type arg)
  {
    msg_.d_term = std::move(arg);
    return Init_PidState_i_max(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_i_term
{
public:
  explicit Init_PidState_i_term(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_d_term i_term(::control_msgs::msg::PidState::_i_term_type arg)
  {
    msg_.i_term = std::move(arg);
    return Init_PidState_d_term(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_p_term
{
public:
  explicit Init_PidState_p_term(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_i_term p_term(::control_msgs::msg::PidState::_p_term_type arg)
  {
    msg_.p_term = std::move(arg);
    return Init_PidState_i_term(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_d_error
{
public:
  explicit Init_PidState_d_error(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_p_term d_error(::control_msgs::msg::PidState::_d_error_type arg)
  {
    msg_.d_error = std::move(arg);
    return Init_PidState_p_term(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_i_error
{
public:
  explicit Init_PidState_i_error(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_d_error i_error(::control_msgs::msg::PidState::_i_error_type arg)
  {
    msg_.i_error = std::move(arg);
    return Init_PidState_d_error(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_p_error
{
public:
  explicit Init_PidState_p_error(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_i_error p_error(::control_msgs::msg::PidState::_p_error_type arg)
  {
    msg_.p_error = std::move(arg);
    return Init_PidState_i_error(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_error_dot
{
public:
  explicit Init_PidState_error_dot(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_p_error error_dot(::control_msgs::msg::PidState::_error_dot_type arg)
  {
    msg_.error_dot = std::move(arg);
    return Init_PidState_p_error(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_error
{
public:
  explicit Init_PidState_error(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_error_dot error(::control_msgs::msg::PidState::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_PidState_error_dot(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_timestep
{
public:
  explicit Init_PidState_timestep(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_error timestep(::control_msgs::msg::PidState::_timestep_type arg)
  {
    msg_.timestep = std::move(arg);
    return Init_PidState_error(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_header
{
public:
  Init_PidState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PidState_timestep header(::control_msgs::msg::PidState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PidState_timestep(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::PidState>()
{
  return control_msgs::msg::builder::Init_PidState_header();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__PID_STATE__BUILDER_HPP_
