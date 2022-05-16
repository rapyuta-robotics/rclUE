// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg/Inertia.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__INERTIA__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__INERTIA__TRAITS_HPP_

#include "geometry_msgs/msg/detail/inertia__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'com'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geometry_msgs::msg::Inertia>()
{
  return "geometry_msgs::msg::Inertia";
}

template<>
inline const char * name<geometry_msgs::msg::Inertia>()
{
  return "geometry_msgs/msg/Inertia";
}

template<>
struct has_fixed_size<geometry_msgs::msg::Inertia>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<geometry_msgs::msg::Inertia>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<geometry_msgs::msg::Inertia>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__DETAIL__INERTIA__TRAITS_HPP_
