// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg/RegionOfInterest.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__REGION_OF_INTEREST__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__REGION_OF_INTEREST__TRAITS_HPP_

#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_msgs::msg::RegionOfInterest>()
{
  return "sensor_msgs::msg::RegionOfInterest";
}

template<>
inline const char * name<sensor_msgs::msg::RegionOfInterest>()
{
  return "sensor_msgs/msg/RegionOfInterest";
}

template<>
struct has_fixed_size<sensor_msgs::msg::RegionOfInterest>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sensor_msgs::msg::RegionOfInterest>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sensor_msgs::msg::RegionOfInterest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__REGION_OF_INTEREST__TRAITS_HPP_
