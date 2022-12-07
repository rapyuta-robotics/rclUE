// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pcl_msgs:msg/Vertices.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__VERTICES__TRAITS_HPP_
#define PCL_MSGS__MSG__DETAIL__VERTICES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pcl_msgs/msg/detail/vertices__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pcl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Vertices & msg,
  std::ostream & out)
{
  out << "{";
  // member: vertices
  {
    if (msg.vertices.size() == 0) {
      out << "vertices: []";
    } else {
      out << "vertices: [";
      size_t pending_items = msg.vertices.size();
      for (auto item : msg.vertices) {
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
  const Vertices & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vertices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertices.size() == 0) {
      out << "vertices: []\n";
    } else {
      out << "vertices:\n";
      for (auto item : msg.vertices) {
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

inline std::string to_yaml(const Vertices & msg, bool use_flow_style = false)
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

}  // namespace pcl_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pcl_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pcl_msgs::msg::Vertices & msg,
  std::ostream & out, size_t indentation = 0)
{
  pcl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pcl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pcl_msgs::msg::Vertices & msg)
{
  return pcl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pcl_msgs::msg::Vertices>()
{
  return "pcl_msgs::msg::Vertices";
}

template<>
inline const char * name<pcl_msgs::msg::Vertices>()
{
  return "pcl_msgs/msg/Vertices";
}

template<>
struct has_fixed_size<pcl_msgs::msg::Vertices>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pcl_msgs::msg::Vertices>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pcl_msgs::msg::Vertices>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PCL_MSGS__MSG__DETAIL__VERTICES__TRAITS_HPP_
