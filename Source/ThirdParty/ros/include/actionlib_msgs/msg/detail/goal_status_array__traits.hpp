// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from actionlib_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__TRAITS_HPP_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__TRAITS_HPP_

#include "actionlib_msgs/msg/detail/goal_status_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actionlib_msgs::msg::GoalStatusArray>()
{
  return "actionlib_msgs::msg::GoalStatusArray";
}

template<>
inline const char * name<actionlib_msgs::msg::GoalStatusArray>()
{
  return "actionlib_msgs/msg/GoalStatusArray";
}

template<>
struct has_fixed_size<actionlib_msgs::msg::GoalStatusArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<actionlib_msgs::msg::GoalStatusArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<actionlib_msgs::msg::GoalStatusArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__TRAITS_HPP_
