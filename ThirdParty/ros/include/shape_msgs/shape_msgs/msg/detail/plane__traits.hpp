// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shape_msgs:msg/Plane.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__PLANE__TRAITS_HPP_
#define SHAPE_MSGS__MSG__DETAIL__PLANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "shape_msgs/msg/detail/plane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace shape_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Plane & msg,
  std::ostream & out)
{
  out << "{";
  // member: coef
  {
    if (msg.coef.size() == 0) {
      out << "coef: []";
    } else {
      out << "coef: [";
      size_t pending_items = msg.coef.size();
      for (auto item : msg.coef) {
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
  const Plane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: coef
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coef.size() == 0) {
      out << "coef: []\n";
    } else {
      out << "coef:\n";
      for (auto item : msg.coef) {
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

inline std::string to_yaml(const Plane & msg, bool use_flow_style = false)
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

}  // namespace shape_msgs

namespace rosidl_generator_traits
{

[[deprecated("use shape_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const shape_msgs::msg::Plane & msg,
  std::ostream & out, size_t indentation = 0)
{
  shape_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shape_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const shape_msgs::msg::Plane & msg)
{
  return shape_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<shape_msgs::msg::Plane>()
{
  return "shape_msgs::msg::Plane";
}

template<>
inline const char * name<shape_msgs::msg::Plane>()
{
  return "shape_msgs/msg/Plane";
}

template<>
struct has_fixed_size<shape_msgs::msg::Plane>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<shape_msgs::msg::Plane>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<shape_msgs::msg::Plane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SHAPE_MSGS__MSG__DETAIL__PLANE__TRAITS_HPP_
