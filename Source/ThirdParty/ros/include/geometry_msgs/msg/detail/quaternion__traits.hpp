// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg/Quaternion.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__QUATERNION__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__QUATERNION__TRAITS_HPP_

#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geometry_msgs::msg::Quaternion>()
{
  return "geometry_msgs::msg::Quaternion";
}

template<>
inline const char * name<geometry_msgs::msg::Quaternion>()
{
  return "geometry_msgs/msg/Quaternion";
}

template<>
struct has_fixed_size<geometry_msgs::msg::Quaternion>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<geometry_msgs::msg::Quaternion>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<geometry_msgs::msg::Quaternion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__DETAIL__QUATERNION__TRAITS_HPP_
