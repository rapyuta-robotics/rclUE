// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/GetEntityInfo.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_INFO__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulation_interfaces/srv/detail/get_entity_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetEntityInfo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: entity
  {
    out << "entity: ";
    rosidl_generator_traits::value_to_yaml(msg.entity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetEntityInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: entity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "entity: ";
    rosidl_generator_traits::value_to_yaml(msg.entity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEntityInfo_Request & msg, bool use_flow_style = false)
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

}  // namespace simulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulation_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulation_interfaces::srv::GetEntityInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::srv::GetEntityInfo_Request & msg)
{
  return simulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntityInfo_Request>()
{
  return "simulation_interfaces::srv::GetEntityInfo_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntityInfo_Request>()
{
  return "simulation_interfaces/srv/GetEntityInfo_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntityInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntityInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::srv::GetEntityInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"
// Member 'info'
#include "simulation_interfaces/msg/detail/entity_info__traits.hpp"

namespace simulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetEntityInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
    out << ", ";
  }

  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetEntityInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEntityInfo_Response & msg, bool use_flow_style = false)
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

}  // namespace simulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulation_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulation_interfaces::srv::GetEntityInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::srv::GetEntityInfo_Response & msg)
{
  return simulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntityInfo_Response>()
{
  return "simulation_interfaces::srv::GetEntityInfo_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntityInfo_Response>()
{
  return "simulation_interfaces/srv/GetEntityInfo_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntityInfo_Response>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::msg::EntityInfo>::value && has_fixed_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntityInfo_Response>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::msg::EntityInfo>::value && has_bounded_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct is_message<simulation_interfaces::srv::GetEntityInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntityInfo>()
{
  return "simulation_interfaces::srv::GetEntityInfo";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntityInfo>()
{
  return "simulation_interfaces/srv/GetEntityInfo";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntityInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::GetEntityInfo_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::GetEntityInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntityInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::GetEntityInfo_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::GetEntityInfo_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::GetEntityInfo>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::GetEntityInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::GetEntityInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_INFO__TRAITS_HPP_
