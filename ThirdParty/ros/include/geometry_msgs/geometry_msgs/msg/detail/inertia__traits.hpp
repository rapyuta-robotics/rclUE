// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg/Inertia.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__INERTIA__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__INERTIA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "geometry_msgs/msg/detail/inertia__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'com'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace geometry_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Inertia & msg,
  std::ostream & out)
{
  out << "{";
  // member: m
  {
    out << "m: ";
    rosidl_generator_traits::value_to_yaml(msg.m, out);
    out << ", ";
  }

  // member: com
  {
    out << "com: ";
    to_flow_style_yaml(msg.com, out);
    out << ", ";
  }

  // member: ixx
  {
    out << "ixx: ";
    rosidl_generator_traits::value_to_yaml(msg.ixx, out);
    out << ", ";
  }

  // member: ixy
  {
    out << "ixy: ";
    rosidl_generator_traits::value_to_yaml(msg.ixy, out);
    out << ", ";
  }

  // member: ixz
  {
    out << "ixz: ";
    rosidl_generator_traits::value_to_yaml(msg.ixz, out);
    out << ", ";
  }

  // member: iyy
  {
    out << "iyy: ";
    rosidl_generator_traits::value_to_yaml(msg.iyy, out);
    out << ", ";
  }

  // member: iyz
  {
    out << "iyz: ";
    rosidl_generator_traits::value_to_yaml(msg.iyz, out);
    out << ", ";
  }

  // member: izz
  {
    out << "izz: ";
    rosidl_generator_traits::value_to_yaml(msg.izz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Inertia & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m: ";
    rosidl_generator_traits::value_to_yaml(msg.m, out);
    out << "\n";
  }

  // member: com
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "com:\n";
    to_block_style_yaml(msg.com, out, indentation + 2);
  }

  // member: ixx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ixx: ";
    rosidl_generator_traits::value_to_yaml(msg.ixx, out);
    out << "\n";
  }

  // member: ixy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ixy: ";
    rosidl_generator_traits::value_to_yaml(msg.ixy, out);
    out << "\n";
  }

  // member: ixz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ixz: ";
    rosidl_generator_traits::value_to_yaml(msg.ixz, out);
    out << "\n";
  }

  // member: iyy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iyy: ";
    rosidl_generator_traits::value_to_yaml(msg.iyy, out);
    out << "\n";
  }

  // member: iyz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iyz: ";
    rosidl_generator_traits::value_to_yaml(msg.iyz, out);
    out << "\n";
  }

  // member: izz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "izz: ";
    rosidl_generator_traits::value_to_yaml(msg.izz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Inertia & msg, bool use_flow_style = false)
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
  const geometry_msgs::msg::Inertia & msg,
  std::ostream & out, size_t indentation = 0)
{
  geometry_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use geometry_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const geometry_msgs::msg::Inertia & msg)
{
  return geometry_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<geometry_msgs::msg::Inertia>()
{
  return "geometry_msgs::msg::Inertia";
}

template<>
inline const char * name<geometry_msgs::msg::Inertia>()
{
  return "geometry_msgs/msg/Inertia";
}

template<>
struct has_fixed_size<geometry_msgs::msg::Inertia>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<geometry_msgs::msg::Inertia>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<geometry_msgs::msg::Inertia>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__DETAIL__INERTIA__TRAITS_HPP_
