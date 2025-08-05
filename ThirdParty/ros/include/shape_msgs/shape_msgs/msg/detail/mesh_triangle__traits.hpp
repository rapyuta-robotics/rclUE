// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shape_msgs:msg/MeshTriangle.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__TRAITS_HPP_
#define SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "shape_msgs/msg/detail/mesh_triangle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace shape_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MeshTriangle & msg,
  std::ostream & out)
{
  out << "{";
  // member: vertex_indices
  {
    if (msg.vertex_indices.size() == 0) {
      out << "vertex_indices: []";
    } else {
      out << "vertex_indices: [";
      size_t pending_items = msg.vertex_indices.size();
      for (auto item : msg.vertex_indices) {
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
  const MeshTriangle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vertex_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertex_indices.size() == 0) {
      out << "vertex_indices: []\n";
    } else {
      out << "vertex_indices:\n";
      for (auto item : msg.vertex_indices) {
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

inline std::string to_yaml(const MeshTriangle & msg, bool use_flow_style = false)
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
  const shape_msgs::msg::MeshTriangle & msg,
  std::ostream & out, size_t indentation = 0)
{
  shape_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shape_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const shape_msgs::msg::MeshTriangle & msg)
{
  return shape_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<shape_msgs::msg::MeshTriangle>()
{
  return "shape_msgs::msg::MeshTriangle";
}

template<>
inline const char * name<shape_msgs::msg::MeshTriangle>()
{
  return "shape_msgs/msg/MeshTriangle";
}

template<>
struct has_fixed_size<shape_msgs::msg::MeshTriangle>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<shape_msgs::msg::MeshTriangle>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<shape_msgs::msg::MeshTriangle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__TRAITS_HPP_
