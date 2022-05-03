// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_msgs:msg/UInt32.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__U_INT32__TRAITS_HPP_
#define STD_MSGS__MSG__DETAIL__U_INT32__TRAITS_HPP_

#include "std_msgs/msg/detail/u_int32__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_msgs::msg::UInt32>()
{
  return "std_msgs::msg::UInt32";
}

template<>
inline const char * name<std_msgs::msg::UInt32>()
{
  return "std_msgs/msg/UInt32";
}

template<>
struct has_fixed_size<std_msgs::msg::UInt32>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<std_msgs::msg::UInt32>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<std_msgs::msg::UInt32>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STD_MSGS__MSG__DETAIL__U_INT32__TRAITS_HPP_
