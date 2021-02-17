// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg/PoseWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE__TRAITS_HPP_

#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geometry_msgs::msg::PoseWithCovariance>()
{
  return "geometry_msgs::msg::PoseWithCovariance";
}

template<>
inline const char * name<geometry_msgs::msg::PoseWithCovariance>()
{
  return "geometry_msgs/msg/PoseWithCovariance";
}

template<>
struct has_fixed_size<geometry_msgs::msg::PoseWithCovariance>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<geometry_msgs::msg::PoseWithCovariance>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<geometry_msgs::msg::PoseWithCovariance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE__TRAITS_HPP_
