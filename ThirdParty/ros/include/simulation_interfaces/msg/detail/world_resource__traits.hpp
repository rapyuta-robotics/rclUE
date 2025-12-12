// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:msg/WorldResource.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__WORLD_RESOURCE__TRAITS_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__WORLD_RESOURCE__TRAITS_HPP_

#include "simulation_interfaces/msg/detail/world_resource__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'world_resource'
#include "simulation_interfaces/msg/detail/resource__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::msg::WorldResource>()
{
  return "simulation_interfaces::msg::WorldResource";
}

template<>
inline const char * name<simulation_interfaces::msg::WorldResource>()
{
  return "simulation_interfaces/msg/WorldResource";
}

template<>
struct has_fixed_size<simulation_interfaces::msg::WorldResource>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::msg::WorldResource>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::msg::WorldResource>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__WORLD_RESOURCE__TRAITS_HPP_
