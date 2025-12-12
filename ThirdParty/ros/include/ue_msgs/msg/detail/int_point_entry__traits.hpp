// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:msg/IntPointEntry.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__INT_POINT_ENTRY__TRAITS_HPP_
#define UE_MSGS__MSG__DETAIL__INT_POINT_ENTRY__TRAITS_HPP_

#include "ue_msgs/msg/detail/int_point_entry__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'value'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::msg::IntPointEntry>()
{
  return "ue_msgs::msg::IntPointEntry";
}

template<>
inline const char * name<ue_msgs::msg::IntPointEntry>()
{
  return "ue_msgs/msg/IntPointEntry";
}

template<>
struct has_fixed_size<ue_msgs::msg::IntPointEntry>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<ue_msgs::msg::IntPointEntry>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<ue_msgs::msg::IntPointEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UE_MSGS__MSG__DETAIL__INT_POINT_ENTRY__TRAITS_HPP_
