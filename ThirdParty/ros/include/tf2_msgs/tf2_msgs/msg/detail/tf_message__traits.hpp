// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tf2_msgs:msg/TFMessage.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__DETAIL__TF_MESSAGE__TRAITS_HPP_
#define TF2_MSGS__MSG__DETAIL__TF_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tf2_msgs/msg/detail/tf_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"

namespace tf2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TFMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: transforms
  {
    if (msg.transforms.size() == 0) {
      out << "transforms: []";
    } else {
      out << "transforms: [";
      size_t pending_items = msg.transforms.size();
      for (auto item : msg.transforms) {
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
  const TFMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: transforms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.transforms.size() == 0) {
      out << "transforms: []\n";
    } else {
      out << "transforms:\n";
      for (auto item : msg.transforms) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TFMessage & msg, bool use_flow_style = false)
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

}  // namespace tf2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tf2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tf2_msgs::msg::TFMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  tf2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tf2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tf2_msgs::msg::TFMessage & msg)
{
  return tf2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tf2_msgs::msg::TFMessage>()
{
  return "tf2_msgs::msg::TFMessage";
}

template<>
inline const char * name<tf2_msgs::msg::TFMessage>()
{
  return "tf2_msgs/msg/TFMessage";
}

template<>
struct has_fixed_size<tf2_msgs::msg::TFMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tf2_msgs::msg::TFMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tf2_msgs::msg::TFMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TF2_MSGS__MSG__DETAIL__TF_MESSAGE__TRAITS_HPP_
