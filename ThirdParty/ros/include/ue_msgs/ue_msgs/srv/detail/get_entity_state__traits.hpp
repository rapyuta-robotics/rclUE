// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:srv/GetEntityState.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__GET_ENTITY_STATE__TRAITS_HPP_
#define UE_MSGS__SRV__DETAIL__GET_ENTITY_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ue_msgs/srv/detail/get_entity_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ue_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetEntityState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: reference_frame
  {
    out << "reference_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_frame, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetEntityState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: reference_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_frame, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEntityState_Request & msg, bool use_flow_style = false)
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
  const ue_msgs::srv::GetEntityState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ue_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ue_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ue_msgs::srv::GetEntityState_Request & msg)
{
  return ue_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ue_msgs::srv::GetEntityState_Request>()
{
  return "ue_msgs::srv::GetEntityState_Request";
}

template<>
inline const char * name<ue_msgs::srv::GetEntityState_Request>()
{
  return "ue_msgs/srv/GetEntityState_Request";
}

template<>
struct has_fixed_size<ue_msgs::srv::GetEntityState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ue_msgs::srv::GetEntityState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ue_msgs::srv::GetEntityState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'state'
#include "ue_msgs/msg/detail/entity_state__traits.hpp"

namespace ue_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetEntityState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetEntityState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEntityState_Response & msg, bool use_flow_style = false)
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
  const ue_msgs::srv::GetEntityState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ue_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ue_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ue_msgs::srv::GetEntityState_Response & msg)
{
  return ue_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ue_msgs::srv::GetEntityState_Response>()
{
  return "ue_msgs::srv::GetEntityState_Response";
}

template<>
inline const char * name<ue_msgs::srv::GetEntityState_Response>()
{
  return "ue_msgs/srv/GetEntityState_Response";
}

template<>
struct has_fixed_size<ue_msgs::srv::GetEntityState_Response>
  : std::integral_constant<bool, has_fixed_size<ue_msgs::msg::EntityState>::value> {};

template<>
struct has_bounded_size<ue_msgs::srv::GetEntityState_Response>
  : std::integral_constant<bool, has_bounded_size<ue_msgs::msg::EntityState>::value> {};

template<>
struct is_message<ue_msgs::srv::GetEntityState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::srv::GetEntityState>()
{
  return "ue_msgs::srv::GetEntityState";
}

template<>
inline const char * name<ue_msgs::srv::GetEntityState>()
{
  return "ue_msgs/srv/GetEntityState";
}

template<>
struct has_fixed_size<ue_msgs::srv::GetEntityState>
  : std::integral_constant<
    bool,
    has_fixed_size<ue_msgs::srv::GetEntityState_Request>::value &&
    has_fixed_size<ue_msgs::srv::GetEntityState_Response>::value
  >
{
};

template<>
struct has_bounded_size<ue_msgs::srv::GetEntityState>
  : std::integral_constant<
    bool,
    has_bounded_size<ue_msgs::srv::GetEntityState_Request>::value &&
    has_bounded_size<ue_msgs::srv::GetEntityState_Response>::value
  >
{
};

template<>
struct is_service<ue_msgs::srv::GetEntityState>
  : std::true_type
{
};

template<>
struct is_service_request<ue_msgs::srv::GetEntityState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ue_msgs::srv::GetEntityState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UE_MSGS__SRV__DETAIL__GET_ENTITY_STATE__TRAITS_HPP_
