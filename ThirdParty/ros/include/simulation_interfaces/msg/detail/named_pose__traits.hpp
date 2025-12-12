// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:msg/NamedPose.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__NAMED_POSE__TRAITS_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__NAMED_POSE__TRAITS_HPP_

#include "simulation_interfaces/msg/detail/named_pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::msg::NamedPose>()
{
  return "simulation_interfaces::msg::NamedPose";
}

template<>
inline const char * name<simulation_interfaces::msg::NamedPose>()
{
  return "simulation_interfaces/msg/NamedPose";
}

template<>
struct has_fixed_size<simulation_interfaces::msg::NamedPose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::msg::NamedPose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::msg::NamedPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__NAMED_POSE__TRAITS_HPP_
