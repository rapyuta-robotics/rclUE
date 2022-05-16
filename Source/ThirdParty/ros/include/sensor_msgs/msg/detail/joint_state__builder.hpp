// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_

#include "sensor_msgs/msg/detail/joint_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_JointState_effort
{
public:
  explicit Init_JointState_effort(::sensor_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::JointState effort(::sensor_msgs::msg::JointState::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::JointState msg_;
};

class Init_JointState_velocity
{
public:
  explicit Init_JointState_velocity(::sensor_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_effort velocity(::sensor_msgs::msg::JointState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_JointState_effort(msg_);
  }

private:
  ::sensor_msgs::msg::JointState msg_;
};

class Init_JointState_position
{
public:
  explicit Init_JointState_position(::sensor_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_velocity position(::sensor_msgs::msg::JointState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_JointState_velocity(msg_);
  }

private:
  ::sensor_msgs::msg::JointState msg_;
};

class Init_JointState_name
{
public:
  explicit Init_JointState_name(::sensor_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_position name(::sensor_msgs::msg::JointState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointState_position(msg_);
  }

private:
  ::sensor_msgs::msg::JointState msg_;
};

class Init_JointState_header
{
public:
  Init_JointState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointState_name header(::sensor_msgs::msg::JointState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointState_name(msg_);
  }

private:
  ::sensor_msgs::msg::JointState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::JointState>()
{
  return sensor_msgs::msg::builder::Init_JointState_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
