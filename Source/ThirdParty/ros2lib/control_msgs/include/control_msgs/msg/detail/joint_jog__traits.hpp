// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/JointJog.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_JOG__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_JOG__TRAITS_HPP_

#include "control_msgs/msg/detail/joint_jog__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::msg::JointJog>()
{
  return "control_msgs::msg::JointJog";
}

template<>
inline const char * name<control_msgs::msg::JointJog>()
{
  return "control_msgs/msg/JointJog";
}

template<>
struct has_fixed_size<control_msgs::msg::JointJog>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::msg::JointJog>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::msg::JointJog>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_JOG__TRAITS_HPP_
