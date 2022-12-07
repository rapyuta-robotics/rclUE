// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg/WrenchStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__WRENCH_STAMPED__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__WRENCH_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "geometry_msgs/msg/detail/wrench_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__traits.hpp"

namespace geometry_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WrenchStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: wrench
  {
    out << "wrench: ";
    to_flow_style_yaml(msg.wrench, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WrenchStamped & msg,
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

  // member: wrench
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrench:\n";
    to_block_style_yaml(msg.wrench, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WrenchStamped & msg, bool use_flow_style = false)
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
  const geometry_msgs::msg::WrenchStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  geometry_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use geometry_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const geometry_msgs::msg::WrenchStamped & msg)
{
  return geometry_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<geometry_msgs::msg::WrenchStamped>()
{
  return "geometry_msgs::msg::WrenchStamped";
}

template<>
inline const char * name<geometry_msgs::msg::WrenchStamped>()
{
  return "geometry_msgs/msg/WrenchStamped";
}

template<>
struct has_fixed_size<geometry_msgs::msg::WrenchStamped>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Wrench>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<geometry_msgs::msg::WrenchStamped>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Wrench>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<geometry_msgs::msg::WrenchStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__DETAIL__WRENCH_STAMPED__TRAITS_HPP_
