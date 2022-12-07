// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from example_interfaces:srv/SetBool.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__TRAITS_HPP_
#define EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "example_interfaces/srv/detail/set_bool__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace example_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetBool_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetBool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetBool_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace example_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use example_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const example_interfaces::srv::SetBool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  example_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use example_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const example_interfaces::srv::SetBool_Request & msg)
{
  return example_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<example_interfaces::srv::SetBool_Request>()
{
  return "example_interfaces::srv::SetBool_Request";
}

template<>
inline const char * name<example_interfaces::srv::SetBool_Request>()
{
  return "example_interfaces/srv/SetBool_Request";
}

template<>
struct has_fixed_size<example_interfaces::srv::SetBool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<example_interfaces::srv::SetBool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<example_interfaces::srv::SetBool_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace example_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetBool_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetBool_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetBool_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace example_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use example_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const example_interfaces::srv::SetBool_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  example_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use example_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const example_interfaces::srv::SetBool_Response & msg)
{
  return example_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<example_interfaces::srv::SetBool_Response>()
{
  return "example_interfaces::srv::SetBool_Response";
}

template<>
inline const char * name<example_interfaces::srv::SetBool_Response>()
{
  return "example_interfaces/srv/SetBool_Response";
}

template<>
struct has_fixed_size<example_interfaces::srv::SetBool_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<example_interfaces::srv::SetBool_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<example_interfaces::srv::SetBool_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::srv::SetBool>()
{
  return "example_interfaces::srv::SetBool";
}

template<>
inline const char * name<example_interfaces::srv::SetBool>()
{
  return "example_interfaces/srv/SetBool";
}

template<>
struct has_fixed_size<example_interfaces::srv::SetBool>
  : std::integral_constant<
    bool,
    has_fixed_size<example_interfaces::srv::SetBool_Request>::value &&
    has_fixed_size<example_interfaces::srv::SetBool_Response>::value
  >
{
};

template<>
struct has_bounded_size<example_interfaces::srv::SetBool>
  : std::integral_constant<
    bool,
    has_bounded_size<example_interfaces::srv::SetBool_Request>::value &&
    has_bounded_size<example_interfaces::srv::SetBool_Response>::value
  >
{
};

template<>
struct is_service<example_interfaces::srv::SetBool>
  : std::true_type
{
};

template<>
struct is_service_request<example_interfaces::srv::SetBool_Request>
  : std::true_type
{
};

template<>
struct is_service_response<example_interfaces::srv::SetBool_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__TRAITS_HPP_
