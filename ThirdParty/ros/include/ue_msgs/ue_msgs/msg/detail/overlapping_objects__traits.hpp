// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:msg/OverlappingObjects.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__OVERLAPPING_OBJECTS__TRAITS_HPP_
#define UE_MSGS__MSG__DETAIL__OVERLAPPING_OBJECTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ue_msgs/msg/detail/overlapping_objects__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ue_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OverlappingObjects & msg,
  std::ostream & out)
{
  out << "{";
  // member: actors
  {
    if (msg.actors.size() == 0) {
      out << "actors: []";
    } else {
      out << "actors: [";
      size_t pending_items = msg.actors.size();
      for (auto item : msg.actors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: components
  {
    if (msg.components.size() == 0) {
      out << "components: []";
    } else {
      out << "components: [";
      size_t pending_items = msg.components.size();
      for (auto item : msg.components) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OverlappingObjects & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: actors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actors.size() == 0) {
      out << "actors: []\n";
    } else {
      out << "actors:\n";
      for (auto item : msg.actors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: components
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.components.size() == 0) {
      out << "components: []\n";
    } else {
      out << "components:\n";
      for (auto item : msg.components) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OverlappingObjects & msg, bool use_flow_style = false)
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

}  // namespace ue_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ue_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ue_msgs::msg::OverlappingObjects & msg,
  std::ostream & out, size_t indentation = 0)
{
  ue_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ue_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ue_msgs::msg::OverlappingObjects & msg)
{
  return ue_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ue_msgs::msg::OverlappingObjects>()
{
  return "ue_msgs::msg::OverlappingObjects";
}

template<>
inline const char * name<ue_msgs::msg::OverlappingObjects>()
{
  return "ue_msgs/msg/OverlappingObjects";
}

template<>
struct has_fixed_size<ue_msgs::msg::OverlappingObjects>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ue_msgs::msg::OverlappingObjects>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ue_msgs::msg::OverlappingObjects>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UE_MSGS__MSG__DETAIL__OVERLAPPING_OBJECTS__TRAITS_HPP_
