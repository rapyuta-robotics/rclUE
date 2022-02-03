// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_

#include "control_msgs/msg/detail/gripper_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::msg::GripperCommand>()
{
  return "control_msgs::msg::GripperCommand";
}

template<>
inline const char * name<control_msgs::msg::GripperCommand>()
{
  return "control_msgs/msg/GripperCommand";
}

template<>
struct has_fixed_size<control_msgs::msg::GripperCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_msgs::msg::GripperCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_msgs::msg::GripperCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
