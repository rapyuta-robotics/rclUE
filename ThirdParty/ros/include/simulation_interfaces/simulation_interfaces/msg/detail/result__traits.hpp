// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:msg/Result.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__RESULT__TRAITS_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulation_interfaces/msg/detail/result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simulation_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Result & msg, bool use_flow_style = false)
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

}  // namespace simulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulation_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulation_interfaces::msg::Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::msg::Result & msg)
{
  return simulation_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::msg::Result>()
{
  return "simulation_interfaces::msg::Result";
}

template<>
inline const char * name<simulation_interfaces::msg::Result>()
{
  return "simulation_interfaces/msg/Result";
}

template<>
struct has_fixed_size<simulation_interfaces::msg::Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::msg::Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::msg::Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__RESULT__TRAITS_HPP_
