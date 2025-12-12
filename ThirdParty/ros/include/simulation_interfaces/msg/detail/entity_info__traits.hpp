// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:msg/EntityInfo.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_INFO__TRAITS_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_INFO__TRAITS_HPP_

#include "simulation_interfaces/msg/detail/entity_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'category'
#include "simulation_interfaces/msg/detail/entity_category__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::msg::EntityInfo>()
{
  return "simulation_interfaces::msg::EntityInfo";
}

template<>
inline const char * name<simulation_interfaces::msg::EntityInfo>()
{
  return "simulation_interfaces/msg/EntityInfo";
}

template<>
struct has_fixed_size<simulation_interfaces::msg::EntityInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::msg::EntityInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::msg::EntityInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_INFO__TRAITS_HPP_
