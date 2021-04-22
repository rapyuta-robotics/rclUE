// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_msgs:msg/GoalInfo.idl
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__MSG__DETAIL__GOAL_INFO__TRAITS_HPP_
#define ACTION_MSGS__MSG__DETAIL__GOAL_INFO__TRAITS_HPP_

#include "action_msgs/msg/detail/goal_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_msgs::msg::GoalInfo>()
{
  return "action_msgs::msg::GoalInfo";
}

template<>
inline const char * name<action_msgs::msg::GoalInfo>()
{
  return "action_msgs/msg/GoalInfo";
}

template<>
struct has_fixed_size<action_msgs::msg::GoalInfo>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_msgs::msg::GoalInfo>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_msgs::msg::GoalInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACTION_MSGS__MSG__DETAIL__GOAL_INFO__TRAITS_HPP_
