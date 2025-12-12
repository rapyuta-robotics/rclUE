// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:msg/EntityFilters.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__TRAITS_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__TRAITS_HPP_

#include "simulation_interfaces/msg/detail/entity_filters__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'tags'
#include "simulation_interfaces/msg/detail/tags_filter__traits.hpp"
// Member 'bounds'
#include "simulation_interfaces/msg/detail/bounds__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::msg::EntityFilters>()
{
  return "simulation_interfaces::msg::EntityFilters";
}

template<>
inline const char * name<simulation_interfaces::msg::EntityFilters>()
{
  return "simulation_interfaces/msg/EntityFilters";
}

template<>
struct has_fixed_size<simulation_interfaces::msg::EntityFilters>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::msg::EntityFilters>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::msg::EntityFilters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__TRAITS_HPP_
