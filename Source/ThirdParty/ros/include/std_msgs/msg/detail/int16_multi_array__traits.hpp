// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_msgs:msg/Int16MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT16_MULTI_ARRAY__TRAITS_HPP_
#define STD_MSGS__MSG__DETAIL__INT16_MULTI_ARRAY__TRAITS_HPP_

#include "std_msgs/msg/detail/int16_multi_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_msgs::msg::Int16MultiArray>()
{
  return "std_msgs::msg::Int16MultiArray";
}

template<>
inline const char * name<std_msgs::msg::Int16MultiArray>()
{
  return "std_msgs/msg/Int16MultiArray";
}

template<>
struct has_fixed_size<std_msgs::msg::Int16MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_msgs::msg::Int16MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_msgs::msg::Int16MultiArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STD_MSGS__MSG__DETAIL__INT16_MULTI_ARRAY__TRAITS_HPP_
