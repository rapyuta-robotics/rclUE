// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:msg/OverlapEvent.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__TRAITS_HPP_
#define UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ue_msgs/msg/detail/overlap_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sweep_result'
#include "ue_msgs/msg/detail/hit_result__traits.hpp"

namespace ue_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OverlapEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: begin
  {
    out << "begin: ";
    rosidl_generator_traits::value_to_yaml(msg.begin, out);
    out << ", ";
  }

  // member: self_name
  {
    out << "self_name: ";
    rosidl_generator_traits::value_to_yaml(msg.self_name, out);
    out << ", ";
  }

  // member: other_actor_name
  {
    out << "other_actor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.other_actor_name, out);
    out << ", ";
  }

  // member: other_component_name
  {
    out << "other_component_name: ";
    rosidl_generator_traits::value_to_yaml(msg.other_component_name, out);
    out << ", ";
  }

  // member: other_body_index
  {
    out << "other_body_index: ";
    rosidl_generator_traits::value_to_yaml(msg.other_body_index, out);
    out << ", ";
  }

  // member: from_sweep
  {
    out << "from_sweep: ";
    rosidl_generator_traits::value_to_yaml(msg.from_sweep, out);
    out << ", ";
  }

  // member: sweep_result
  {
    out << "sweep_result: ";
    to_flow_style_yaml(msg.sweep_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OverlapEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: begin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "begin: ";
    rosidl_generator_traits::value_to_yaml(msg.begin, out);
    out << "\n";
  }

  // member: self_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "self_name: ";
    rosidl_generator_traits::value_to_yaml(msg.self_name, out);
    out << "\n";
  }

  // member: other_actor_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "other_actor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.other_actor_name, out);
    out << "\n";
  }

  // member: other_component_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "other_component_name: ";
    rosidl_generator_traits::value_to_yaml(msg.other_component_name, out);
    out << "\n";
  }

  // member: other_body_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "other_body_index: ";
    rosidl_generator_traits::value_to_yaml(msg.other_body_index, out);
    out << "\n";
  }

  // member: from_sweep
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_sweep: ";
    rosidl_generator_traits::value_to_yaml(msg.from_sweep, out);
    out << "\n";
  }

  // member: sweep_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sweep_result:\n";
    to_block_style_yaml(msg.sweep_result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OverlapEvent & msg, bool use_flow_style = false)
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
  const ue_msgs::msg::OverlapEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  ue_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ue_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ue_msgs::msg::OverlapEvent & msg)
{
  return ue_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ue_msgs::msg::OverlapEvent>()
{
  return "ue_msgs::msg::OverlapEvent";
}

template<>
inline const char * name<ue_msgs::msg::OverlapEvent>()
{
  return "ue_msgs/msg/OverlapEvent";
}

template<>
struct has_fixed_size<ue_msgs::msg::OverlapEvent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ue_msgs::msg::OverlapEvent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ue_msgs::msg::OverlapEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__TRAITS_HPP_
