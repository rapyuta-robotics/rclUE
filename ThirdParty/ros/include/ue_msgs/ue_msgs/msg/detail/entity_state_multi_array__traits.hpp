// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:msg/EntityStateMultiArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ue_msgs/msg/entity_state_multi_array.hpp"


#ifndef UE_MSGS__MSG__DETAIL__ENTITY_STATE_MULTI_ARRAY__TRAITS_HPP_
#define UE_MSGS__MSG__DETAIL__ENTITY_STATE_MULTI_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ue_msgs/msg/detail/entity_state_multi_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'entity_states'
#include "ue_msgs/msg/detail/entity_state__traits.hpp"

namespace ue_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EntityStateMultiArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: entity_states
  {
    if (msg.entity_states.size() == 0) {
      out << "entity_states: []";
    } else {
      out << "entity_states: [";
      size_t pending_items = msg.entity_states.size();
      for (auto item : msg.entity_states) {
        to_flow_style_yaml(item, out);
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
  const EntityStateMultiArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: entity_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.entity_states.size() == 0) {
      out << "entity_states: []\n";
    } else {
      out << "entity_states:\n";
      for (auto item : msg.entity_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EntityStateMultiArray & msg, bool use_flow_style = false)
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
  const ue_msgs::msg::EntityStateMultiArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  ue_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ue_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ue_msgs::msg::EntityStateMultiArray & msg)
{
  return ue_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ue_msgs::msg::EntityStateMultiArray>()
{
  return "ue_msgs::msg::EntityStateMultiArray";
}

template<>
inline const char * name<ue_msgs::msg::EntityStateMultiArray>()
{
  return "ue_msgs/msg/EntityStateMultiArray";
}

template<>
struct has_fixed_size<ue_msgs::msg::EntityStateMultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ue_msgs::msg::EntityStateMultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ue_msgs::msg::EntityStateMultiArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UE_MSGS__MSG__DETAIL__ENTITY_STATE_MULTI_ARRAY__TRAITS_HPP_
