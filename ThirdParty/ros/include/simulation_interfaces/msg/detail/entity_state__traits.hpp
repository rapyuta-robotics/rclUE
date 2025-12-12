// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:msg/EntityState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_STATE__TRAITS_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_STATE__TRAITS_HPP_

#include "simulation_interfaces/msg/detail/entity_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::msg::EntityState>()
{
  return "simulation_interfaces::msg::EntityState";
}

template<>
inline const char * name<simulation_interfaces::msg::EntityState>()
{
  return "simulation_interfaces/msg/EntityState";
}

template<>
struct has_fixed_size<simulation_interfaces::msg::EntityState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Accel>::value && has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::msg::EntityState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Accel>::value && has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<simulation_interfaces::msg::EntityState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_STATE__TRAITS_HPP_
