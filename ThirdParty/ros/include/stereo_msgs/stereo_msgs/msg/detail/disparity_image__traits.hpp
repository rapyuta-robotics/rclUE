// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stereo_msgs:msg/DisparityImage.idl
// generated code does not contain a copyright notice

#ifndef STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__TRAITS_HPP_
#define STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stereo_msgs/msg/detail/disparity_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'valid_window'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace stereo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DisparityImage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: f
  {
    out << "f: ";
    rosidl_generator_traits::value_to_yaml(msg.f, out);
    out << ", ";
  }

  // member: t
  {
    out << "t: ";
    rosidl_generator_traits::value_to_yaml(msg.t, out);
    out << ", ";
  }

  // member: valid_window
  {
    out << "valid_window: ";
    to_flow_style_yaml(msg.valid_window, out);
    out << ", ";
  }

  // member: min_disparity
  {
    out << "min_disparity: ";
    rosidl_generator_traits::value_to_yaml(msg.min_disparity, out);
    out << ", ";
  }

  // member: max_disparity
  {
    out << "max_disparity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_disparity, out);
    out << ", ";
  }

  // member: delta_d
  {
    out << "delta_d: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_d, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DisparityImage & msg,
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

  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: f
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f: ";
    rosidl_generator_traits::value_to_yaml(msg.f, out);
    out << "\n";
  }

  // member: t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t: ";
    rosidl_generator_traits::value_to_yaml(msg.t, out);
    out << "\n";
  }

  // member: valid_window
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_window:\n";
    to_block_style_yaml(msg.valid_window, out, indentation + 2);
  }

  // member: min_disparity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_disparity: ";
    rosidl_generator_traits::value_to_yaml(msg.min_disparity, out);
    out << "\n";
  }

  // member: max_disparity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_disparity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_disparity, out);
    out << "\n";
  }

  // member: delta_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_d: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_d, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DisparityImage & msg, bool use_flow_style = false)
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

}  // namespace stereo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use stereo_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const stereo_msgs::msg::DisparityImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  stereo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stereo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const stereo_msgs::msg::DisparityImage & msg)
{
  return stereo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<stereo_msgs::msg::DisparityImage>()
{
  return "stereo_msgs::msg::DisparityImage";
}

template<>
inline const char * name<stereo_msgs::msg::DisparityImage>()
{
  return "stereo_msgs/msg/DisparityImage";
}

template<>
struct has_fixed_size<stereo_msgs::msg::DisparityImage>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value && has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<stereo_msgs::msg::DisparityImage>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value && has_bounded_size<sensor_msgs::msg::RegionOfInterest>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<stereo_msgs::msg::DisparityImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__TRAITS_HPP_
