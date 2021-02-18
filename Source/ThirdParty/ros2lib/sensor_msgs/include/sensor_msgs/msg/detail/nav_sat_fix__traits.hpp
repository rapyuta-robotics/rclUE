// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg/NavSatFix.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__NAV_SAT_FIX__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__NAV_SAT_FIX__TRAITS_HPP_

#include "sensor_msgs/msg/detail/nav_sat_fix__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'status'
#include "sensor_msgs/msg/detail/nav_sat_status__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_msgs::msg::NavSatFix>()
{
  return "sensor_msgs::msg::NavSatFix";
}

template<>
inline const char * name<sensor_msgs::msg::NavSatFix>()
{
  return "sensor_msgs/msg/NavSatFix";
}

template<>
struct has_fixed_size<sensor_msgs::msg::NavSatFix>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::NavSatStatus>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sensor_msgs::msg::NavSatFix>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::NavSatStatus>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sensor_msgs::msg::NavSatFix>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__NAV_SAT_FIX__TRAITS_HPP_
