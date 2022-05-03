// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rcl_interfaces:msg/ParameterValue.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__PARAMETER_VALUE__TRAITS_HPP_
#define RCL_INTERFACES__MSG__DETAIL__PARAMETER_VALUE__TRAITS_HPP_

#include "rcl_interfaces/msg/detail/parameter_value__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rcl_interfaces::msg::ParameterValue>()
{
  return "rcl_interfaces::msg::ParameterValue";
}

template<>
inline const char * name<rcl_interfaces::msg::ParameterValue>()
{
  return "rcl_interfaces/msg/ParameterValue";
}

template<>
struct has_fixed_size<rcl_interfaces::msg::ParameterValue>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rcl_interfaces::msg::ParameterValue>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rcl_interfaces::msg::ParameterValue>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RCL_INTERFACES__MSG__DETAIL__PARAMETER_VALUE__TRAITS_HPP_
