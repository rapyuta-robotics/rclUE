// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:msg/EntityState.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__ENTITY_STATE__TRAITS_HPP_
#define UE_MSGS__MSG__DETAIL__ENTITY_STATE__TRAITS_HPP_

#include "ue_msgs/msg/detail/entity_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::msg::EntityState>()
{
  return "ue_msgs::msg::EntityState";
}

template<>
inline const char * name<ue_msgs::msg::EntityState>()
{
  return "ue_msgs/msg/EntityState";
}

template<>
struct has_fixed_size<ue_msgs::msg::EntityState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ue_msgs::msg::EntityState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ue_msgs::msg::EntityState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UE_MSGS__MSG__DETAIL__ENTITY_STATE__TRAITS_HPP_
