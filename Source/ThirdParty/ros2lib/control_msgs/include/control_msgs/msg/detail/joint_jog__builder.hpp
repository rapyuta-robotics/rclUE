// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/JointJog.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_JOG__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_JOG__BUILDER_HPP_

#include "control_msgs/msg/detail/joint_jog__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_JointJog_duration
{
public:
  explicit Init_JointJog_duration(::control_msgs::msg::JointJog & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::JointJog duration(::control_msgs::msg::JointJog::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::JointJog msg_;
};

class Init_JointJog_velocities
{
public:
  explicit Init_JointJog_velocities(::control_msgs::msg::JointJog & msg)
  : msg_(msg)
  {}
  Init_JointJog_duration velocities(::control_msgs::msg::JointJog::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_JointJog_duration(msg_);
  }

private:
  ::control_msgs::msg::JointJog msg_;
};

class Init_JointJog_displacements
{
public:
  explicit Init_JointJog_displacements(::control_msgs::msg::JointJog & msg)
  : msg_(msg)
  {}
  Init_JointJog_velocities displacements(::control_msgs::msg::JointJog::_displacements_type arg)
  {
    msg_.displacements = std::move(arg);
    return Init_JointJog_velocities(msg_);
  }

private:
  ::control_msgs::msg::JointJog msg_;
};

class Init_JointJog_joint_names
{
public:
  explicit Init_JointJog_joint_names(::control_msgs::msg::JointJog & msg)
  : msg_(msg)
  {}
  Init_JointJog_displacements joint_names(::control_msgs::msg::JointJog::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_JointJog_displacements(msg_);
  }

private:
  ::control_msgs::msg::JointJog msg_;
};

class Init_JointJog_header
{
public:
  Init_JointJog_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointJog_joint_names header(::control_msgs::msg::JointJog::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointJog_joint_names(msg_);
  }

private:
  ::control_msgs::msg::JointJog msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::JointJog>()
{
  return control_msgs::msg::builder::Init_JointJog_header();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_JOG__BUILDER_HPP_
