// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from example_interfaces:msg/WString.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__W_STRING__TRAITS_HPP_
#define EXAMPLE_INTERFACES__MSG__DETAIL__W_STRING__TRAITS_HPP_

#include "example_interfaces/msg/detail/w_string__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::msg::WString>()
{
  return "example_interfaces::msg::WString";
}

template<>
inline const char * name<example_interfaces::msg::WString>()
{
  return "example_interfaces/msg/WString";
}

template<>
struct has_fixed_size<example_interfaces::msg::WString>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<example_interfaces::msg::WString>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<example_interfaces::msg::WString>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__W_STRING__TRAITS_HPP_
