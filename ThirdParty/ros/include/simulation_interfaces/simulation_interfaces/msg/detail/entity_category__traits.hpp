// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:msg/EntityCategory.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_CATEGORY__TRAITS_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_CATEGORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulation_interfaces/msg/detail/entity_category__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simulation_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EntityCategory & msg,
  std::ostream & out)
{
  out << "{";
  // member: category
  {
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EntityCategory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: category
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EntityCategory & msg, bool use_flow_style = false)
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
  const simulation_interfaces::msg::EntityCategory & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::msg::EntityCategory & msg)
{
  return simulation_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::msg::EntityCategory>()
{
  return "simulation_interfaces::msg::EntityCategory";
}

template<>
inline const char * name<simulation_interfaces::msg::EntityCategory>()
{
  return "simulation_interfaces/msg/EntityCategory";
}

template<>
struct has_fixed_size<simulation_interfaces::msg::EntityCategory>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simulation_interfaces::msg::EntityCategory>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simulation_interfaces::msg::EntityCategory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_CATEGORY__TRAITS_HPP_
