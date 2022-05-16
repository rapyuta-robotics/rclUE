// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg/Polygon.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POLYGON__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__POLYGON__TRAITS_HPP_

#include "geometry_msgs/msg/detail/polygon__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geometry_msgs::msg::Polygon>()
{
  return "geometry_msgs::msg::Polygon";
}

template<>
inline const char * name<geometry_msgs::msg::Polygon>()
{
  return "geometry_msgs/msg/Polygon";
}

template<>
struct has_fixed_size<geometry_msgs::msg::Polygon>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<geometry_msgs::msg::Polygon>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<geometry_msgs::msg::Polygon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POLYGON__TRAITS_HPP_
