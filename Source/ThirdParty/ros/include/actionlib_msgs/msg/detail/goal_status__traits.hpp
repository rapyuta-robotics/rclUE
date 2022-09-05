// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from actionlib_msgs:msg/GoalStatus.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__TRAITS_HPP_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__TRAITS_HPP_

#include "actionlib_msgs/msg/detail/goal_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'goal_id'
#include "actionlib_msgs/msg/detail/goal_id__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actionlib_msgs::msg::GoalStatus>()
{
  return "actionlib_msgs::msg::GoalStatus";
}

template<>
inline const char * name<actionlib_msgs::msg::GoalStatus>()
{
  return "actionlib_msgs/msg/GoalStatus";
}

template<>
struct has_fixed_size<actionlib_msgs::msg::GoalStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<actionlib_msgs::msg::GoalStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<actionlib_msgs::msg::GoalStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__TRAITS_HPP_
