// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tf2_msgs:msg/TF2Error.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__DETAIL__TF2_ERROR__TRAITS_HPP_
#define TF2_MSGS__MSG__DETAIL__TF2_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tf2_msgs/msg/detail/tf2_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tf2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TF2Error & msg,
  std::ostream & out)
{
  out << "{";
  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << ", ";
  }

  // member: error_string
  {
    out << "error_string: ";
    rosidl_generator_traits::value_to_yaml(msg.error_string, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TF2Error & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }

  // member: error_string
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_string: ";
    rosidl_generator_traits::value_to_yaml(msg.error_string, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TF2Error & msg, bool use_flow_style = false)
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
  const tf2_msgs::msg::TF2Error & msg,
  std::ostream & out, size_t indentation = 0)
{
  tf2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tf2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tf2_msgs::msg::TF2Error & msg)
{
  return tf2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tf2_msgs::msg::TF2Error>()
{
  return "tf2_msgs::msg::TF2Error";
}

template<>
inline const char * name<tf2_msgs::msg::TF2Error>()
{
  return "tf2_msgs/msg/TF2Error";
}

template<>
struct has_fixed_size<tf2_msgs::msg::TF2Error>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tf2_msgs::msg::TF2Error>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tf2_msgs::msg::TF2Error>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TF2_MSGS__MSG__DETAIL__TF2_ERROR__TRAITS_HPP_
