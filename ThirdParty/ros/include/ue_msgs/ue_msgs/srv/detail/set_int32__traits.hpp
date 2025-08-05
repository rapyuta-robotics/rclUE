// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:srv/SetInt32.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SET_INT32__TRAITS_HPP_
#define UE_MSGS__SRV__DETAIL__SET_INT32__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ue_msgs/srv/detail/set_int32__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ue_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetInt32_Request & msg,
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
  const SetInt32_Request & msg,
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

inline std::string to_yaml(const SetInt32_Request & msg, bool use_flow_style = false)
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

}  // namespace ue_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ue_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ue_msgs::srv::SetInt32_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ue_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ue_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ue_msgs::srv::SetInt32_Request & msg)
{
  return ue_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ue_msgs::srv::SetInt32_Request>()
{
  return "ue_msgs::srv::SetInt32_Request";
}

template<>
inline const char * name<ue_msgs::srv::SetInt32_Request>()
{
  return "ue_msgs/srv/SetInt32_Request";
}

template<>
struct has_fixed_size<ue_msgs::srv::SetInt32_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ue_msgs::srv::SetInt32_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ue_msgs::srv::SetInt32_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ue_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetInt32_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: remarks
  {
    out << "remarks: ";
    rosidl_generator_traits::value_to_yaml(msg.remarks, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetInt32_Response & msg,
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

  // member: remarks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remarks: ";
    rosidl_generator_traits::value_to_yaml(msg.remarks, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetInt32_Response & msg, bool use_flow_style = false)
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

}  // namespace ue_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ue_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ue_msgs::srv::SetInt32_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ue_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ue_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ue_msgs::srv::SetInt32_Response & msg)
{
  return ue_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ue_msgs::srv::SetInt32_Response>()
{
  return "ue_msgs::srv::SetInt32_Response";
}

template<>
inline const char * name<ue_msgs::srv::SetInt32_Response>()
{
  return "ue_msgs/srv/SetInt32_Response";
}

template<>
struct has_fixed_size<ue_msgs::srv::SetInt32_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ue_msgs::srv::SetInt32_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ue_msgs::srv::SetInt32_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::srv::SetInt32>()
{
  return "ue_msgs::srv::SetInt32";
}

template<>
inline const char * name<ue_msgs::srv::SetInt32>()
{
  return "ue_msgs/srv/SetInt32";
}

template<>
struct has_fixed_size<ue_msgs::srv::SetInt32>
  : std::integral_constant<
    bool,
    has_fixed_size<ue_msgs::srv::SetInt32_Request>::value &&
    has_fixed_size<ue_msgs::srv::SetInt32_Response>::value
  >
{
};

template<>
struct has_bounded_size<ue_msgs::srv::SetInt32>
  : std::integral_constant<
    bool,
    has_bounded_size<ue_msgs::srv::SetInt32_Request>::value &&
    has_bounded_size<ue_msgs::srv::SetInt32_Response>::value
  >
{
};

template<>
struct is_service<ue_msgs::srv::SetInt32>
  : std::true_type
{
};

template<>
struct is_service_request<ue_msgs::srv::SetInt32_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ue_msgs::srv::SetInt32_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UE_MSGS__SRV__DETAIL__SET_INT32__TRAITS_HPP_
