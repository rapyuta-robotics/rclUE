// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from diagnostic_msgs:msg/DiagnosticStatus.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__TRAITS_HPP_
#define DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__TRAITS_HPP_

#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<diagnostic_msgs::msg::DiagnosticStatus>()
{
  return "diagnostic_msgs::msg::DiagnosticStatus";
}

template<>
inline const char * name<diagnostic_msgs::msg::DiagnosticStatus>()
{
  return "diagnostic_msgs/msg/DiagnosticStatus";
}

template<>
struct has_fixed_size<diagnostic_msgs::msg::DiagnosticStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<diagnostic_msgs::msg::DiagnosticStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<diagnostic_msgs::msg::DiagnosticStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__TRAITS_HPP_
