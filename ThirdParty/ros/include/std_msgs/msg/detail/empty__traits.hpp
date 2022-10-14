// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_msgs:msg/Empty.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__EMPTY__TRAITS_HPP_
#define STD_MSGS__MSG__DETAIL__EMPTY__TRAITS_HPP_

#include "std_msgs/msg/detail/empty__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_msgs::msg::Empty>()
{
  return "std_msgs::msg::Empty";
}

template<>
inline const char * name<std_msgs::msg::Empty>()
{
  return "std_msgs/msg/Empty";
}

template<>
struct has_fixed_size<std_msgs::msg::Empty>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<std_msgs::msg::Empty>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<std_msgs::msg::Empty>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STD_MSGS__MSG__DETAIL__EMPTY__TRAITS_HPP_
