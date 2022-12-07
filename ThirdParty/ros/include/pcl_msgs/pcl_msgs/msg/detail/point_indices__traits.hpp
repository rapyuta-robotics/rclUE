// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pcl_msgs:msg/PointIndices.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__POINT_INDICES__TRAITS_HPP_
#define PCL_MSGS__MSG__DETAIL__POINT_INDICES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pcl_msgs/msg/detail/point_indices__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pcl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointIndices & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: indices
  {
    if (msg.indices.size() == 0) {
      out << "indices: []";
    } else {
      out << "indices: [";
      size_t pending_items = msg.indices.size();
      for (auto item : msg.indices) {
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
  const PointIndices & msg,
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

  // member: indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.indices.size() == 0) {
      out << "indices: []\n";
    } else {
      out << "indices:\n";
      for (auto item : msg.indices) {
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

inline std::string to_yaml(const PointIndices & msg, bool use_flow_style = false)
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
  const pcl_msgs::msg::PointIndices & msg,
  std::ostream & out, size_t indentation = 0)
{
  pcl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pcl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pcl_msgs::msg::PointIndices & msg)
{
  return pcl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pcl_msgs::msg::PointIndices>()
{
  return "pcl_msgs::msg::PointIndices";
}

template<>
inline const char * name<pcl_msgs::msg::PointIndices>()
{
  return "pcl_msgs/msg/PointIndices";
}

template<>
struct has_fixed_size<pcl_msgs::msg::PointIndices>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pcl_msgs::msg::PointIndices>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pcl_msgs::msg::PointIndices>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PCL_MSGS__MSG__DETAIL__POINT_INDICES__TRAITS_HPP_
