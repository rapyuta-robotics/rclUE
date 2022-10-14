// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from trajectory_msgs:msg/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__TRAITS_HPP_
#define TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__TRAITS_HPP_

#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<trajectory_msgs::msg::JointTrajectory>()
{
  return "trajectory_msgs::msg::JointTrajectory";
}

template<>
inline const char * name<trajectory_msgs::msg::JointTrajectory>()
{
  return "trajectory_msgs/msg/JointTrajectory";
}

template<>
struct has_fixed_size<trajectory_msgs::msg::JointTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<trajectory_msgs::msg::JointTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<trajectory_msgs::msg::JointTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__TRAITS_HPP_
