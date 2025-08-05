// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pcl_msgs:msg/PolygonMesh.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__POLYGON_MESH__TRAITS_HPP_
#define PCL_MSGS__MSG__DETAIL__POLYGON_MESH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pcl_msgs/msg/detail/polygon_mesh__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'cloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'polygons'
#include "pcl_msgs/msg/detail/vertices__traits.hpp"

namespace pcl_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PolygonMesh & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cloud
  {
    out << "cloud: ";
    to_flow_style_yaml(msg.cloud, out);
    out << ", ";
  }

  // member: polygons
  {
    if (msg.polygons.size() == 0) {
      out << "polygons: []";
    } else {
      out << "polygons: [";
      size_t pending_items = msg.polygons.size();
      for (auto item : msg.polygons) {
        to_flow_style_yaml(item, out);
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
  const PolygonMesh & msg,
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

  // member: cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cloud:\n";
    to_block_style_yaml(msg.cloud, out, indentation + 2);
  }

  // member: polygons
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.polygons.size() == 0) {
      out << "polygons: []\n";
    } else {
      out << "polygons:\n";
      for (auto item : msg.polygons) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PolygonMesh & msg, bool use_flow_style = false)
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
  const pcl_msgs::msg::PolygonMesh & msg,
  std::ostream & out, size_t indentation = 0)
{
  pcl_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pcl_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pcl_msgs::msg::PolygonMesh & msg)
{
  return pcl_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pcl_msgs::msg::PolygonMesh>()
{
  return "pcl_msgs::msg::PolygonMesh";
}

template<>
inline const char * name<pcl_msgs::msg::PolygonMesh>()
{
  return "pcl_msgs/msg/PolygonMesh";
}

template<>
struct has_fixed_size<pcl_msgs::msg::PolygonMesh>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pcl_msgs::msg::PolygonMesh>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pcl_msgs::msg::PolygonMesh>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PCL_MSGS__MSG__DETAIL__POLYGON_MESH__TRAITS_HPP_
