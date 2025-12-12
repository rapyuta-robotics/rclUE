// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:msg/Spawnable.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SPAWNABLE__TRAITS_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__SPAWNABLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulation_interfaces/msg/detail/spawnable__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'entity_resource'
#include "simulation_interfaces/msg/detail/resource__traits.hpp"
// Member 'spawn_bounds'
#include "simulation_interfaces/msg/detail/bounds__traits.hpp"

namespace simulation_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Spawnable & msg,
  std::ostream & out)
{
  out << "{";
  // member: entity_resource
  {
    out << "entity_resource: ";
    to_flow_style_yaml(msg.entity_resource, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << ", ";
  }

  // member: spawn_bounds
  {
    out << "spawn_bounds: ";
    to_flow_style_yaml(msg.spawn_bounds, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Spawnable & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: entity_resource
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "entity_resource:\n";
    to_block_style_yaml(msg.entity_resource, out, indentation + 2);
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }

  // member: spawn_bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spawn_bounds:\n";
    to_block_style_yaml(msg.spawn_bounds, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Spawnable & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace simulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulation_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulation_interfaces::msg::Spawnable & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::msg::Spawnable & msg)
{
  return simulation_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::msg::Spawnable>()
{
  return "simulation_interfaces::msg::Spawnable";
}

template<>
inline const char * name<simulation_interfaces::msg::Spawnable>()
{
  return "simulation_interfaces/msg/Spawnable";
}

template<>
struct has_fixed_size<simulation_interfaces::msg::Spawnable>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::msg::Spawnable>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::msg::Spawnable>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SPAWNABLE__TRAITS_HPP_
