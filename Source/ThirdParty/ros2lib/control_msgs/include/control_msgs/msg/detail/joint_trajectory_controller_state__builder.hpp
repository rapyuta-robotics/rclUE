// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/JointTrajectoryControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__BUILDER_HPP_

#include "control_msgs/msg/detail/joint_trajectory_controller_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_JointTrajectoryControllerState_error
{
public:
  explicit Init_JointTrajectoryControllerState_error(::control_msgs::msg::JointTrajectoryControllerState & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::JointTrajectoryControllerState error(::control_msgs::msg::JointTrajectoryControllerState::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

class Init_JointTrajectoryControllerState_actual
{
public:
  explicit Init_JointTrajectoryControllerState_actual(::control_msgs::msg::JointTrajectoryControllerState & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryControllerState_error actual(::control_msgs::msg::JointTrajectoryControllerState::_actual_type arg)
  {
    msg_.actual = std::move(arg);
    return Init_JointTrajectoryControllerState_error(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

class Init_JointTrajectoryControllerState_desired
{
public:
  explicit Init_JointTrajectoryControllerState_desired(::control_msgs::msg::JointTrajectoryControllerState & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryControllerState_actual desired(::control_msgs::msg::JointTrajectoryControllerState::_desired_type arg)
  {
    msg_.desired = std::move(arg);
    return Init_JointTrajectoryControllerState_actual(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

class Init_JointTrajectoryControllerState_joint_names
{
public:
  explicit Init_JointTrajectoryControllerState_joint_names(::control_msgs::msg::JointTrajectoryControllerState & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryControllerState_desired joint_names(::control_msgs::msg::JointTrajectoryControllerState::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_JointTrajectoryControllerState_desired(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

class Init_JointTrajectoryControllerState_header
{
public:
  Init_JointTrajectoryControllerState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectoryControllerState_joint_names header(::control_msgs::msg::JointTrajectoryControllerState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointTrajectoryControllerState_joint_names(msg_);
  }

private:
  ::control_msgs::msg::JointTrajectoryControllerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::JointTrajectoryControllerState>()
{
  return control_msgs::msg::builder::Init_JointTrajectoryControllerState_header();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__BUILDER_HPP_
