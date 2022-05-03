// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tf2_msgs:msg/TFMessage.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__DETAIL__TF_MESSAGE__TRAITS_HPP_
#define TF2_MSGS__MSG__DETAIL__TF_MESSAGE__TRAITS_HPP_

#include "tf2_msgs/msg/detail/tf_message__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_msgs::msg::TFMessage>()
{
  return "tf2_msgs::msg::TFMessage";
}

template<>
inline const char * name<tf2_msgs::msg::TFMessage>()
{
  return "tf2_msgs/msg/TFMessage";
}

template<>
struct has_fixed_size<tf2_msgs::msg::TFMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tf2_msgs::msg::TFMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tf2_msgs::msg::TFMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TF2_MSGS__MSG__DETAIL__TF_MESSAGE__TRAITS_HPP_
