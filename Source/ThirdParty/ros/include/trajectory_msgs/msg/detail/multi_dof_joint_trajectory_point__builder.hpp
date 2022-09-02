// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from trajectory_msgs:msg/MultiDOFJointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY_POINT__BUILDER_HPP_
#define TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY_POINT__BUILDER_HPP_

#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace trajectory_msgs
{

namespace msg
{

namespace builder
{

class Init_MultiDOFJointTrajectoryPoint_time_from_start
{
public:
  explicit Init_MultiDOFJointTrajectoryPoint_time_from_start(::trajectory_msgs::msg::MultiDOFJointTrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::trajectory_msgs::msg::MultiDOFJointTrajectoryPoint time_from_start(::trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::_time_from_start_type arg)
  {
    msg_.time_from_start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trajectory_msgs::msg::MultiDOFJointTrajectoryPoint msg_;
};

class Init_MultiDOFJointTrajectoryPoint_accelerations
{
public:
  explicit Init_MultiDOFJointTrajectoryPoint_accelerations(::trajectory_msgs::msg::MultiDOFJointTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_MultiDOFJointTrajectoryPoint_time_from_start accelerations(::trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::_accelerations_type arg)
  {
    msg_.accelerations = std::move(arg);
    return Init_MultiDOFJointTrajectoryPoint_time_from_start(msg_);
  }

private:
  ::trajectory_msgs::msg::MultiDOFJointTrajectoryPoint msg_;
};

class Init_MultiDOFJointTrajectoryPoint_velocities
{
public:
  explicit Init_MultiDOFJointTrajectoryPoint_velocities(::trajectory_msgs::msg::MultiDOFJointTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_MultiDOFJointTrajectoryPoint_accelerations velocities(::trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_MultiDOFJointTrajectoryPoint_accelerations(msg_);
  }

private:
  ::trajectory_msgs::msg::MultiDOFJointTrajectoryPoint msg_;
};

class Init_MultiDOFJointTrajectoryPoint_transforms
{
public:
  Init_MultiDOFJointTrajectoryPoint_transforms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiDOFJointTrajectoryPoint_velocities transforms(::trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::_transforms_type arg)
  {
    msg_.transforms = std::move(arg);
    return Init_MultiDOFJointTrajectoryPoint_velocities(msg_);
  }

private:
  ::trajectory_msgs::msg::MultiDOFJointTrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>()
{
  return trajectory_msgs::msg::builder::Init_MultiDOFJointTrajectoryPoint_transforms();
}

}  // namespace trajectory_msgs

#endif  // TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY_POINT__BUILDER_HPP_
