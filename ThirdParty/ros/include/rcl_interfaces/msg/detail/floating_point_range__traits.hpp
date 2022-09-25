// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rcl_interfaces:msg/FloatingPointRange.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__FLOATING_POINT_RANGE__TRAITS_HPP_
#define RCL_INTERFACES__MSG__DETAIL__FLOATING_POINT_RANGE__TRAITS_HPP_

#include "rcl_interfaces/msg/detail/floating_point_range__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rcl_interfaces::msg::FloatingPointRange>()
{
  return "rcl_interfaces::msg::FloatingPointRange";
}

template<>
inline const char * name<rcl_interfaces::msg::FloatingPointRange>()
{
  return "rcl_interfaces/msg/FloatingPointRange";
}

template<>
struct has_fixed_size<rcl_interfaces::msg::FloatingPointRange>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rcl_interfaces::msg::FloatingPointRange>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rcl_interfaces::msg::FloatingPointRange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RCL_INTERFACES__MSG__DETAIL__FLOATING_POINT_RANGE__TRAITS_HPP_
