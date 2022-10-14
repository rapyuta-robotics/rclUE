// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rcl_interfaces:msg/ParameterDescriptor.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__PARAMETER_DESCRIPTOR__TRAITS_HPP_
#define RCL_INTERFACES__MSG__DETAIL__PARAMETER_DESCRIPTOR__TRAITS_HPP_

#include "rcl_interfaces/msg/detail/parameter_descriptor__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'floating_point_range'
#include "rcl_interfaces/msg/detail/floating_point_range__traits.hpp"
// Member 'integer_range'
#include "rcl_interfaces/msg/detail/integer_range__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rcl_interfaces::msg::ParameterDescriptor>()
{
  return "rcl_interfaces::msg::ParameterDescriptor";
}

template<>
inline const char * name<rcl_interfaces::msg::ParameterDescriptor>()
{
  return "rcl_interfaces/msg/ParameterDescriptor";
}

template<>
struct has_fixed_size<rcl_interfaces::msg::ParameterDescriptor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rcl_interfaces::msg::ParameterDescriptor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rcl_interfaces::msg::ParameterDescriptor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RCL_INTERFACES__MSG__DETAIL__PARAMETER_DESCRIPTOR__TRAITS_HPP_
