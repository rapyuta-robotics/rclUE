// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg/MenuEntry.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__MENU_ENTRY__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__MENU_ENTRY__TRAITS_HPP_

#include "visualization_msgs/msg/detail/menu_entry__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<visualization_msgs::msg::MenuEntry>()
{
  return "visualization_msgs::msg::MenuEntry";
}

template<>
inline const char * name<visualization_msgs::msg::MenuEntry>()
{
  return "visualization_msgs/msg/MenuEntry";
}

template<>
struct has_fixed_size<visualization_msgs::msg::MenuEntry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::MenuEntry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::msg::MenuEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__MENU_ENTRY__TRAITS_HPP_
