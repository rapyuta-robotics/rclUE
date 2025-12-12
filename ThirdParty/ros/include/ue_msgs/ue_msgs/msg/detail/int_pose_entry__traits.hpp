// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:msg/IntPoseEntry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ue_msgs/msg/int_pose_entry.hpp"


#ifndef UE_MSGS__MSG__DETAIL__INT_POSE_ENTRY__TRAITS_HPP_
#define UE_MSGS__MSG__DETAIL__INT_POSE_ENTRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ue_msgs/msg/detail/int_pose_entry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'value'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace ue_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IntPoseEntry & msg,
  std::ostream & out)
{
  out << "{";
  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    to_flow_style_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IntPoseEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value:\n";
    to_block_style_yaml(msg.value, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IntPoseEntry & msg, bool use_flow_style = false)
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
  const ue_msgs::msg::IntPoseEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  ue_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ue_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ue_msgs::msg::IntPoseEntry & msg)
{
  return ue_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ue_msgs::msg::IntPoseEntry>()
{
  return "ue_msgs::msg::IntPoseEntry";
}

template<>
inline const char * name<ue_msgs::msg::IntPoseEntry>()
{
  return "ue_msgs/msg/IntPoseEntry";
}

template<>
struct has_fixed_size<ue_msgs::msg::IntPoseEntry>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<ue_msgs::msg::IntPoseEntry>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<ue_msgs::msg::IntPoseEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UE_MSGS__MSG__DETAIL__INT_POSE_ENTRY__TRAITS_HPP_
