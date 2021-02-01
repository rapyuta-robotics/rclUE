// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_msgs:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__MULTI_ARRAY_LAYOUT__TRAITS_HPP_
#define STD_MSGS__MSG__MULTI_ARRAY_LAYOUT__TRAITS_HPP_

#include "std_msgs/msg/multi_array_layout__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<std_msgs::msg::MultiArrayLayout>()
{
  return "std_msgs::msg::MultiArrayLayout";
}

template<>
struct has_fixed_size<std_msgs::msg::MultiArrayLayout>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_msgs::msg::MultiArrayLayout>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_msgs::msg::MultiArrayLayout>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STD_MSGS__MSG__MULTI_ARRAY_LAYOUT__TRAITS_HPP_
