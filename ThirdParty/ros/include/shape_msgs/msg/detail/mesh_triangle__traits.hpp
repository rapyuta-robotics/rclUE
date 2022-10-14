// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shape_msgs:msg/MeshTriangle.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__TRAITS_HPP_
#define SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__TRAITS_HPP_

#include "shape_msgs/msg/detail/mesh_triangle__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<shape_msgs::msg::MeshTriangle>()
{
  return "shape_msgs::msg::MeshTriangle";
}

template<>
inline const char * name<shape_msgs::msg::MeshTriangle>()
{
  return "shape_msgs/msg/MeshTriangle";
}

template<>
struct has_fixed_size<shape_msgs::msg::MeshTriangle>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<shape_msgs::msg::MeshTriangle>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<shape_msgs::msg::MeshTriangle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__TRAITS_HPP_
