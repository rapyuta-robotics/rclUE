// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from diagnostic_msgs:msg/DiagnosticArray.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__TRAITS_HPP_
#define DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__TRAITS_HPP_

#include "diagnostic_msgs/msg/detail/diagnostic_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<diagnostic_msgs::msg::DiagnosticArray>()
{
  return "diagnostic_msgs::msg::DiagnosticArray";
}

template<>
inline const char * name<diagnostic_msgs::msg::DiagnosticArray>()
{
  return "diagnostic_msgs/msg/DiagnosticArray";
}

template<>
struct has_fixed_size<diagnostic_msgs::msg::DiagnosticArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<diagnostic_msgs::msg::DiagnosticArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<diagnostic_msgs::msg::DiagnosticArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__TRAITS_HPP_
