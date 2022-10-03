// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_msgs:msg/MapMetaData.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__MAP_META_DATA__TRAITS_HPP_
#define NAV_MSGS__MSG__DETAIL__MAP_META_DATA__TRAITS_HPP_

#include "nav_msgs/msg/detail/map_meta_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'map_load_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav_msgs::msg::MapMetaData>()
{
  return "nav_msgs::msg::MapMetaData";
}

template<>
inline const char * name<nav_msgs::msg::MapMetaData>()
{
  return "nav_msgs/msg/MapMetaData";
}

template<>
struct has_fixed_size<nav_msgs::msg::MapMetaData>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<nav_msgs::msg::MapMetaData>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<nav_msgs::msg::MapMetaData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_MSGS__MSG__DETAIL__MAP_META_DATA__TRAITS_HPP_
