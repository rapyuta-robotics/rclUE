// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from trajectory_msgs:msg/JointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_POINT__BUILDER_HPP_
#define TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace trajectory_msgs
{

namespace msg
{

namespace builder
{

class Init_JointTrajectoryPoint_time_from_start
{
public:
  explicit Init_JointTrajectoryPoint_time_from_start(::trajectory_msgs::msg::JointTrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::trajectory_msgs::msg::JointTrajectoryPoint time_from_start(::trajectory_msgs::msg::JointTrajectoryPoint::_time_from_start_type arg)
  {
    msg_.time_from_start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trajectory_msgs::msg::JointTrajectoryPoint msg_;
};

class Init_JointTrajectoryPoint_effort
{
public:
  explicit Init_JointTrajectoryPoint_effort(::trajectory_msgs::msg::JointTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryPoint_time_from_start effort(::trajectory_msgs::msg::JointTrajectoryPoint::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return Init_JointTrajectoryPoint_time_from_start(msg_);
  }

private:
  ::trajectory_msgs::msg::JointTrajectoryPoint msg_;
};

class Init_JointTrajectoryPoint_accelerations
{
public:
  explicit Init_JointTrajectoryPoint_accelerations(::trajectory_msgs::msg::JointTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryPoint_effort accelerations(::trajectory_msgs::msg::JointTrajectoryPoint::_accelerations_type arg)
  {
    msg_.accelerations = std::move(arg);
    return Init_JointTrajectoryPoint_effort(msg_);
  }

private:
  ::trajectory_msgs::msg::JointTrajectoryPoint msg_;
};

class Init_JointTrajectoryPoint_velocities
{
public:
  explicit Init_JointTrajectoryPoint_velocities(::trajectory_msgs::msg::JointTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryPoint_accelerations velocities(::trajectory_msgs::msg::JointTrajectoryPoint::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_JointTrajectoryPoint_accelerations(msg_);
  }

private:
  ::trajectory_msgs::msg::JointTrajectoryPoint msg_;
};

class Init_JointTrajectoryPoint_positions
{
public:
  Init_JointTrajectoryPoint_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectoryPoint_velocities positions(::trajectory_msgs::msg::JointTrajectoryPoint::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_JointTrajectoryPoint_velocities(msg_);
  }

private:
  ::trajectory_msgs::msg::JointTrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::trajectory_msgs::msg::JointTrajectoryPoint>()
{
  return trajectory_msgs::msg::builder::Init_JointTrajectoryPoint_positions();
}

}  // namespace trajectory_msgs

#endif  // TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_POINT__BUILDER_HPP_
