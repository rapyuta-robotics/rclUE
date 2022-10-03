// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg/MultiEchoLaserScan.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__MULTI_ECHO_LASER_SCAN__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__MULTI_ECHO_LASER_SCAN__TRAITS_HPP_

#include "sensor_msgs/msg/detail/multi_echo_laser_scan__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_msgs::msg::MultiEchoLaserScan>()
{
  return "sensor_msgs::msg::MultiEchoLaserScan";
}

template<>
inline const char * name<sensor_msgs::msg::MultiEchoLaserScan>()
{
  return "sensor_msgs/msg/MultiEchoLaserScan";
}

template<>
struct has_fixed_size<sensor_msgs::msg::MultiEchoLaserScan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::msg::MultiEchoLaserScan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensor_msgs::msg::MultiEchoLaserScan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__MULTI_ECHO_LASER_SCAN__TRAITS_HPP_
