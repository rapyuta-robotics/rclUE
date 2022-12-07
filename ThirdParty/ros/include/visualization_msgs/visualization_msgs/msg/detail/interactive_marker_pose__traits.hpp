// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg/InteractiveMarkerPose.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_POSE__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "visualization_msgs/msg/detail/interactive_marker_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace visualization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InteractiveMarkerPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InteractiveMarkerPose & msg,
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InteractiveMarkerPose & msg, bool use_flow_style = false)
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

}  // namespace visualization_msgs

namespace rosidl_generator_traits
{

[[deprecated("use visualization_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const visualization_msgs::msg::InteractiveMarkerPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  visualization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use visualization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const visualization_msgs::msg::InteractiveMarkerPose & msg)
{
  return visualization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<visualization_msgs::msg::InteractiveMarkerPose>()
{
  return "visualization_msgs::msg::InteractiveMarkerPose";
}

template<>
inline const char * name<visualization_msgs::msg::InteractiveMarkerPose>()
{
  return "visualization_msgs/msg/InteractiveMarkerPose";
}

template<>
struct has_fixed_size<visualization_msgs::msg::InteractiveMarkerPose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::msg::InteractiveMarkerPose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::msg::InteractiveMarkerPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_POSE__TRAITS_HPP_
