// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg/TwistWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__TWIST_WITH_COVARIANCE__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__TWIST_WITH_COVARIANCE__TRAITS_HPP_

#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geometry_msgs::msg::TwistWithCovariance>()
{
  return "geometry_msgs::msg::TwistWithCovariance";
}

template<>
inline const char * name<geometry_msgs::msg::TwistWithCovariance>()
{
  return "geometry_msgs/msg/TwistWithCovariance";
}

template<>
struct has_fixed_size<geometry_msgs::msg::TwistWithCovariance>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<geometry_msgs::msg::TwistWithCovariance>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<geometry_msgs::msg::TwistWithCovariance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__DETAIL__TWIST_WITH_COVARIANCE__TRAITS_HPP_
