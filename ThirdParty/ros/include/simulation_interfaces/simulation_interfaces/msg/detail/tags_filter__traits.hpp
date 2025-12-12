// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:msg/TagsFilter.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__TAGS_FILTER__TRAITS_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__TAGS_FILTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulation_interfaces/msg/detail/tags_filter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simulation_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TagsFilter & msg,
  std::ostream & out)
{
  out << "{";
  // member: tags
  {
    if (msg.tags.size() == 0) {
      out << "tags: []";
    } else {
      out << "tags: [";
      size_t pending_items = msg.tags.size();
      for (auto item : msg.tags) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: filter_mode
  {
    out << "filter_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TagsFilter & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tags.size() == 0) {
      out << "tags: []\n";
    } else {
      out << "tags:\n";
      for (auto item : msg.tags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: filter_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TagsFilter & msg, bool use_flow_style = false)
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
  const simulation_interfaces::msg::TagsFilter & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::msg::TagsFilter & msg)
{
  return simulation_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::msg::TagsFilter>()
{
  return "simulation_interfaces::msg::TagsFilter";
}

template<>
inline const char * name<simulation_interfaces::msg::TagsFilter>()
{
  return "simulation_interfaces/msg/TagsFilter";
}

template<>
struct has_fixed_size<simulation_interfaces::msg::TagsFilter>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::msg::TagsFilter>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::msg::TagsFilter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__TAGS_FILTER__TRAITS_HPP_
