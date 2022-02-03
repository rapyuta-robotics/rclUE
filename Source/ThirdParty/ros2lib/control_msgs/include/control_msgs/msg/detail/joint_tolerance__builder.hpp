// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/JointTolerance.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_TOLERANCE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_TOLERANCE__BUILDER_HPP_

#include "control_msgs/msg/detail/joint_tolerance__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_JointTolerance_acceleration
{
public:
  explicit Init_JointTolerance_acceleration(::control_msgs::msg::JointTolerance & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::JointTolerance acceleration(::control_msgs::msg::JointTolerance::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::JointTolerance msg_;
};

class Init_JointTolerance_velocity
{
public:
  explicit Init_JointTolerance_velocity(::control_msgs::msg::JointTolerance & msg)
  : msg_(msg)
  {}
  Init_JointTolerance_acceleration velocity(::control_msgs::msg::JointTolerance::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_JointTolerance_acceleration(msg_);
  }

private:
  ::control_msgs::msg::JointTolerance msg_;
};

class Init_JointTolerance_position
{
public:
  explicit Init_JointTolerance_position(::control_msgs::msg::JointTolerance & msg)
  : msg_(msg)
  {}
  Init_JointTolerance_velocity position(::control_msgs::msg::JointTolerance::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_JointTolerance_velocity(msg_);
  }

private:
  ::control_msgs::msg::JointTolerance msg_;
};

class Init_JointTolerance_name
{
public:
  Init_JointTolerance_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTolerance_position name(::control_msgs::msg::JointTolerance::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointTolerance_position(msg_);
  }

private:
  ::control_msgs::msg::JointTolerance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::JointTolerance>()
{
  return control_msgs::msg::builder::Init_JointTolerance_name();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_TOLERANCE__BUILDER_HPP_
