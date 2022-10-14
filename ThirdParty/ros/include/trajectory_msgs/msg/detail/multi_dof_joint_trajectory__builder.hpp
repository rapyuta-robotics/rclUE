// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from trajectory_msgs:msg/MultiDOFJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY__BUILDER_HPP_
#define TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY__BUILDER_HPP_

#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace trajectory_msgs
{

namespace msg
{

namespace builder
{

class Init_MultiDOFJointTrajectory_points
{
public:
  explicit Init_MultiDOFJointTrajectory_points(::trajectory_msgs::msg::MultiDOFJointTrajectory & msg)
  : msg_(msg)
  {}
  ::trajectory_msgs::msg::MultiDOFJointTrajectory points(::trajectory_msgs::msg::MultiDOFJointTrajectory::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trajectory_msgs::msg::MultiDOFJointTrajectory msg_;
};

class Init_MultiDOFJointTrajectory_joint_names
{
public:
  explicit Init_MultiDOFJointTrajectory_joint_names(::trajectory_msgs::msg::MultiDOFJointTrajectory & msg)
  : msg_(msg)
  {}
  Init_MultiDOFJointTrajectory_points joint_names(::trajectory_msgs::msg::MultiDOFJointTrajectory::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_MultiDOFJointTrajectory_points(msg_);
  }

private:
  ::trajectory_msgs::msg::MultiDOFJointTrajectory msg_;
};

class Init_MultiDOFJointTrajectory_header
{
public:
  Init_MultiDOFJointTrajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiDOFJointTrajectory_joint_names header(::trajectory_msgs::msg::MultiDOFJointTrajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MultiDOFJointTrajectory_joint_names(msg_);
  }

private:
  ::trajectory_msgs::msg::MultiDOFJointTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::trajectory_msgs::msg::MultiDOFJointTrajectory>()
{
  return trajectory_msgs::msg::builder::Init_MultiDOFJointTrajectory_header();
}

}  // namespace trajectory_msgs

#endif  // TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY__BUILDER_HPP_
