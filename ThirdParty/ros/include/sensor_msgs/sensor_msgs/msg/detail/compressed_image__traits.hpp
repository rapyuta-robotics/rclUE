// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg/CompressedImage.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__COMPRESSED_IMAGE__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__COMPRESSED_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensor_msgs/msg/detail/compressed_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sensor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CompressedImage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: format
  {
    out << "format: ";
    rosidl_generator_traits::value_to_yaml(msg.format, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CompressedImage & msg,
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

  // member: format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "format: ";
    rosidl_generator_traits::value_to_yaml(msg.format, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CompressedImage & msg, bool use_flow_style = false)
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
  const sensor_msgs::msg::CompressedImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sensor_msgs::msg::CompressedImage & msg)
{
  return sensor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_msgs::msg::CompressedImage>()
{
  return "sensor_msgs::msg::CompressedImage";
}

template<>
inline const char * name<sensor_msgs::msg::CompressedImage>()
{
  return "sensor_msgs/msg/CompressedImage";
}

template<>
struct has_fixed_size<sensor_msgs::msg::CompressedImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::msg::CompressedImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensor_msgs::msg::CompressedImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__COMPRESSED_IMAGE__TRAITS_HPP_
