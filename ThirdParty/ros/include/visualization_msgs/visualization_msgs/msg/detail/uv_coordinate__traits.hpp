// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:msg/UVCoordinate.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__UV_COORDINATE__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__UV_COORDINATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "visualization_msgs/msg/detail/uv_coordinate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace visualization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UVCoordinate & msg,
  std::ostream & out)
{
  out << "{";
  // member: u
  {
    out << "u: ";
    rosidl_generator_traits::value_to_yaml(msg.u, out);
    out << ", ";
  }

  // member: v
  {
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UVCoordinate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: u
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u: ";
    rosidl_generator_traits::value_to_yaml(msg.u, out);
    out << "\n";
  }

  // member: v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UVCoordinate & msg, bool use_flow_style = false)
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
  const visualization_msgs::msg::UVCoordinate & msg,
  std::ostream & out, size_t indentation = 0)
{
  visualization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use visualization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const visualization_msgs::msg::UVCoordinate & msg)
{
  return visualization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<visualization_msgs::msg::UVCoordinate>()
{
  return "visualization_msgs::msg::UVCoordinate";
}

template<>
inline const char * name<visualization_msgs::msg::UVCoordinate>()
{
  return "visualization_msgs/msg/UVCoordinate";
}

template<>
struct has_fixed_size<visualization_msgs::msg::UVCoordinate>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<visualization_msgs::msg::UVCoordinate>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<visualization_msgs::msg::UVCoordinate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__UV_COORDINATE__TRAITS_HPP_
