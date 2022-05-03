// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_msgs:msg/Header.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__HEADER__TRAITS_HPP_
#define STD_MSGS__MSG__DETAIL__HEADER__TRAITS_HPP_

#include "std_msgs/msg/detail/header__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_msgs::msg::Header>()
{
  return "std_msgs::msg::Header";
}

template<>
inline const char * name<std_msgs::msg::Header>()
{
  return "std_msgs/msg/Header";
}

template<>
struct has_fixed_size<std_msgs::msg::Header>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_msgs::msg::Header>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_msgs::msg::Header>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STD_MSGS__MSG__DETAIL__HEADER__TRAITS_HPP_
