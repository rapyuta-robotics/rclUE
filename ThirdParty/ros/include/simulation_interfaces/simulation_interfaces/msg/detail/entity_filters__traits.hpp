// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:msg/EntityFilters.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__TRAITS_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulation_interfaces/msg/detail/entity_filters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'categories'
#include "simulation_interfaces/msg/detail/entity_category__traits.hpp"
// Member 'tags'
#include "simulation_interfaces/msg/detail/tags_filter__traits.hpp"
// Member 'bounds'
#include "simulation_interfaces/msg/detail/bounds__traits.hpp"

namespace simulation_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EntityFilters & msg,
  std::ostream & out)
{
  out << "{";
  // member: filter
  {
    out << "filter: ";
    rosidl_generator_traits::value_to_yaml(msg.filter, out);
    out << ", ";
  }

  // member: categories
  {
    if (msg.categories.size() == 0) {
      out << "categories: []";
    } else {
      out << "categories: [";
      size_t pending_items = msg.categories.size();
      for (auto item : msg.categories) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tags
  {
    out << "tags: ";
    to_flow_style_yaml(msg.tags, out);
    out << ", ";
  }

  // member: bounds
  {
    out << "bounds: ";
    to_flow_style_yaml(msg.bounds, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EntityFilters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter: ";
    rosidl_generator_traits::value_to_yaml(msg.filter, out);
    out << "\n";
  }

  // member: categories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.categories.size() == 0) {
      out << "categories: []\n";
    } else {
      out << "categories:\n";
      for (auto item : msg.categories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: tags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tags:\n";
    to_block_style_yaml(msg.tags, out, indentation + 2);
  }

  // member: bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounds:\n";
    to_block_style_yaml(msg.bounds, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EntityFilters & msg, bool use_flow_style = false)
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
  const simulation_interfaces::msg::EntityFilters & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::msg::EntityFilters & msg)
{
  return simulation_interfaces::msg::to_yaml(msg);
}

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
