// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosgraph_msgs:msg/Clock.idl
// generated code does not contain a copyright notice

#ifndef ROSGRAPH_MSGS__MSG__DETAIL__CLOCK__TRAITS_HPP_
#define ROSGRAPH_MSGS__MSG__DETAIL__CLOCK__TRAITS_HPP_

#include "rosgraph_msgs/msg/detail/clock__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'clock'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosgraph_msgs::msg::Clock>()
{
  return "rosgraph_msgs::msg::Clock";
}

template<>
inline const char * name<rosgraph_msgs::msg::Clock>()
{
  return "rosgraph_msgs/msg/Clock";
}

template<>
struct has_fixed_size<rosgraph_msgs::msg::Clock>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<rosgraph_msgs::msg::Clock>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<rosgraph_msgs::msg::Clock>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSGRAPH_MSGS__MSG__DETAIL__CLOCK__TRAITS_HPP_
