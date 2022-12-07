// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg/PointCloud2.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD2__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'fields'
#include "sensor_msgs/msg/detail/point_field__traits.hpp"

namespace sensor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointCloud2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: fields
  {
    if (msg.fields.size() == 0) {
      out << "fields: []";
    } else {
      out << "fields: [";
      size_t pending_items = msg.fields.size();
      for (auto item : msg.fields) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_bigendian
  {
    out << "is_bigendian: ";
    rosidl_generator_traits::value_to_yaml(msg.is_bigendian, out);
    out << ", ";
  }

  // member: point_step
  {
    out << "point_step: ";
    rosidl_generator_traits::value_to_yaml(msg.point_step, out);
    out << ", ";
  }

  // member: row_step
  {
    out << "row_step: ";
    rosidl_generator_traits::value_to_yaml(msg.row_step, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_dense
  {
    out << "is_dense: ";
    rosidl_generator_traits::value_to_yaml(msg.is_dense, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PointCloud2 & msg,
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

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: fields
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fields.size() == 0) {
      out << "fields: []\n";
    } else {
      out << "fields:\n";
      for (auto item : msg.fields) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_bigendian
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_bigendian: ";
    rosidl_generator_traits::value_to_yaml(msg.is_bigendian, out);
    out << "\n";
  }

  // member: point_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_step: ";
    rosidl_generator_traits::value_to_yaml(msg.point_step, out);
    out << "\n";
  }

  // member: row_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "row_step: ";
    rosidl_generator_traits::value_to_yaml(msg.row_step, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: is_dense
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_dense: ";
    rosidl_generator_traits::value_to_yaml(msg.is_dense, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointCloud2 & msg, bool use_flow_style = false)
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

}  // namespace sensor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sensor_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_msgs::msg::PointCloud2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sensor_msgs::msg::PointCloud2 & msg)
{
  return sensor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_msgs::msg::PointCloud2>()
{
  return "sensor_msgs::msg::PointCloud2";
}

template<>
inline const char * name<sensor_msgs::msg::PointCloud2>()
{
  return "sensor_msgs/msg/PointCloud2";
}

template<>
struct has_fixed_size<sensor_msgs::msg::PointCloud2>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::msg::PointCloud2>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensor_msgs::msg::PointCloud2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD2__TRAITS_HPP_
