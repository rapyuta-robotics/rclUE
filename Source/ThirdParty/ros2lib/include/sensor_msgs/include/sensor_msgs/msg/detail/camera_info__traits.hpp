// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg/CameraInfo.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__CAMERA_INFO__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__CAMERA_INFO__TRAITS_HPP_

#include "sensor_msgs/msg/detail/camera_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_msgs::msg::CameraInfo>()
{
  return "sensor_msgs::msg::CameraInfo";
}

template<>
inline const char * name<sensor_msgs::msg::CameraInfo>()
{
  return "sensor_msgs/msg/CameraInfo";
}

template<>
struct has_fixed_size<sensor_msgs::msg::CameraInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::msg::CameraInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensor_msgs::msg::CameraInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__CAMERA_INFO__TRAITS_HPP_
