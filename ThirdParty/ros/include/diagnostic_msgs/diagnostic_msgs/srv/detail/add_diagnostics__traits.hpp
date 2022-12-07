// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from diagnostic_msgs:srv/AddDiagnostics.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__TRAITS_HPP_
#define DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "diagnostic_msgs/srv/detail/add_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace diagnostic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddDiagnostics_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: load_namespace
  {
    out << "load_namespace: ";
    rosidl_generator_traits::value_to_yaml(msg.load_namespace, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddDiagnostics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: load_namespace
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_namespace: ";
    rosidl_generator_traits::value_to_yaml(msg.load_namespace, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddDiagnostics_Request & msg, bool use_flow_style = false)
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

}  // namespace diagnostic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use diagnostic_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const diagnostic_msgs::srv::AddDiagnostics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  diagnostic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use diagnostic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const diagnostic_msgs::srv::AddDiagnostics_Request & msg)
{
  return diagnostic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<diagnostic_msgs::srv::AddDiagnostics_Request>()
{
  return "diagnostic_msgs::srv::AddDiagnostics_Request";
}

template<>
inline const char * name<diagnostic_msgs::srv::AddDiagnostics_Request>()
{
  return "diagnostic_msgs/srv/AddDiagnostics_Request";
}

template<>
struct has_fixed_size<diagnostic_msgs::srv::AddDiagnostics_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<diagnostic_msgs::srv::AddDiagnostics_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<diagnostic_msgs::srv::AddDiagnostics_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace diagnostic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddDiagnostics_Response & msg,
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
  const AddDiagnostics_Response & msg,
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

inline std::string to_yaml(const AddDiagnostics_Response & msg, bool use_flow_style = false)
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

}  // namespace diagnostic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use diagnostic_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const diagnostic_msgs::srv::AddDiagnostics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  diagnostic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use diagnostic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const diagnostic_msgs::srv::AddDiagnostics_Response & msg)
{
  return diagnostic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<diagnostic_msgs::srv::AddDiagnostics_Response>()
{
  return "diagnostic_msgs::srv::AddDiagnostics_Response";
}

template<>
inline const char * name<diagnostic_msgs::srv::AddDiagnostics_Response>()
{
  return "diagnostic_msgs/srv/AddDiagnostics_Response";
}

template<>
struct has_fixed_size<diagnostic_msgs::srv::AddDiagnostics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<diagnostic_msgs::srv::AddDiagnostics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<diagnostic_msgs::srv::AddDiagnostics_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<diagnostic_msgs::srv::AddDiagnostics>()
{
  return "diagnostic_msgs::srv::AddDiagnostics";
}

template<>
inline const char * name<diagnostic_msgs::srv::AddDiagnostics>()
{
  return "diagnostic_msgs/srv/AddDiagnostics";
}

template<>
struct has_fixed_size<diagnostic_msgs::srv::AddDiagnostics>
  : std::integral_constant<
    bool,
    has_fixed_size<diagnostic_msgs::srv::AddDiagnostics_Request>::value &&
    has_fixed_size<diagnostic_msgs::srv::AddDiagnostics_Response>::value
  >
{
};

template<>
struct has_bounded_size<diagnostic_msgs::srv::AddDiagnostics>
  : std::integral_constant<
    bool,
    has_bounded_size<diagnostic_msgs::srv::AddDiagnostics_Request>::value &&
    has_bounded_size<diagnostic_msgs::srv::AddDiagnostics_Response>::value
  >
{
};

template<>
struct is_service<diagnostic_msgs::srv::AddDiagnostics>
  : std::true_type
{
};

template<>
struct is_service_request<diagnostic_msgs::srv::AddDiagnostics_Request>
  : std::true_type
{
};

template<>
struct is_service_response<diagnostic_msgs::srv::AddDiagnostics_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__TRAITS_HPP_
