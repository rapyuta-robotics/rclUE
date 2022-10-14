// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg/Marker.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__MARKER__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__MARKER__TRAITS_HPP_

#include "visualization_msgs/msg/detail/marker__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'scale'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<visualization_msgs::msg::Marker>()
{
  return "visualization_msgs::msg::Marker";
}

template<>
inline const char * name<visualization_msgs::msg::Marker>()
{
  return "visualization_msgs/msg/Marker";
}

template<>
struct has_fixed_size<visualization_msgs::msg::Marker>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::Marker>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::msg::Marker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__MARKER__TRAITS_HPP_
