// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shape_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__MESH__TRAITS_HPP_
#define SHAPE_MSGS__MSG__DETAIL__MESH__TRAITS_HPP_

#include "shape_msgs/msg/detail/mesh__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<shape_msgs::msg::Mesh>()
{
  return "shape_msgs::msg::Mesh";
}

template<>
inline const char * name<shape_msgs::msg::Mesh>()
{
  return "shape_msgs/msg/Mesh";
}

template<>
struct has_fixed_size<shape_msgs::msg::Mesh>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<shape_msgs::msg::Mesh>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<shape_msgs::msg::Mesh>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SHAPE_MSGS__MSG__DETAIL__MESH__TRAITS_HPP_
