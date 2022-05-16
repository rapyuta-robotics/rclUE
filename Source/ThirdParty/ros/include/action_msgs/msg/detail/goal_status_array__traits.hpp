// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__TRAITS_HPP_
#define ACTION_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__TRAITS_HPP_

#include "action_msgs/msg/detail/goal_status_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_msgs::msg::GoalStatusArray>()
{
  return "action_msgs::msg::GoalStatusArray";
}

template<>
inline const char * name<action_msgs::msg::GoalStatusArray>()
{
  return "action_msgs/msg/GoalStatusArray";
}

template<>
struct has_fixed_size<action_msgs::msg::GoalStatusArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_msgs::msg::GoalStatusArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<action_msgs::msg::GoalStatusArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACTION_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__TRAITS_HPP_
