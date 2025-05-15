// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg/VelocityStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__VELOCITY_STAMPED__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__VELOCITY_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "geometry_msgs/msg/detail/velocity_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace geometry_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VelocityStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: body_frame_id
  {
    out << "body_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.body_frame_id, out);
    out << ", ";
  }

  // member: reference_frame_id
  {
    out << "reference_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_frame_id, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VelocityStamped & msg,
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

  // member: body_frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.body_frame_id, out);
    out << "\n";
  }

  // member: reference_frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_frame_id, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VelocityStamped & msg, bool use_flow_style = false)
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

}  // namespace geometry_msgs

namespace rosidl_generator_traits
{

[[deprecated("use geometry_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const geometry_msgs::msg::VelocityStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  geometry_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use geometry_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const geometry_msgs::msg::VelocityStamped & msg)
{
  return geometry_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<geometry_msgs::msg::VelocityStamped>()
{
  return "geometry_msgs::msg::VelocityStamped";
}

template<>
inline const char * name<geometry_msgs::msg::VelocityStamped>()
{
  return "geometry_msgs/msg/VelocityStamped";
}

template<>
struct has_fixed_size<geometry_msgs::msg::VelocityStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<geometry_msgs::msg::VelocityStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<geometry_msgs::msg::VelocityStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__DETAIL__VELOCITY_STAMPED__TRAITS_HPP_
