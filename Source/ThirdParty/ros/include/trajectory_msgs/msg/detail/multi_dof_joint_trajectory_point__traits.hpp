// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from trajectory_msgs:msg/MultiDOFJointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY_POINT__TRAITS_HPP_
#define TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY_POINT__TRAITS_HPP_

#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>()
{
  return "trajectory_msgs::msg::MultiDOFJointTrajectoryPoint";
}

template<>
inline const char * name<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>()
{
  return "trajectory_msgs/msg/MultiDOFJointTrajectoryPoint";
}

template<>
struct has_fixed_size<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY_POINT__TRAITS_HPP_
