// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/LoadWorld.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__LOAD_WORLD__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__LOAD_WORLD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulation_interfaces/srv/detail/load_world__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'world_resource'
#include "simulation_interfaces/msg/detail/resource__traits.hpp"

namespace simulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadWorld_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: world_resource
  {
    out << "world_resource: ";
    to_flow_style_yaml(msg.world_resource, out);
    out << ", ";
  }

  // member: fail_on_unsupported_element
  {
    out << "fail_on_unsupported_element: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_on_unsupported_element, out);
    out << ", ";
  }

  // member: ignore_missing_or_unsupported_assets
  {
    out << "ignore_missing_or_unsupported_assets: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_missing_or_unsupported_assets, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadWorld_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: world_resource
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_resource:\n";
    to_block_style_yaml(msg.world_resource, out, indentation + 2);
  }

  // member: fail_on_unsupported_element
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fail_on_unsupported_element: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_on_unsupported_element, out);
    out << "\n";
  }

  // member: ignore_missing_or_unsupported_assets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignore_missing_or_unsupported_assets: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_missing_or_unsupported_assets, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadWorld_Request & msg, bool use_flow_style = false)
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
  const simulation_interfaces::srv::LoadWorld_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::srv::LoadWorld_Request & msg)
{
  return simulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::srv::LoadWorld_Request>()
{
  return "simulation_interfaces::srv::LoadWorld_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::LoadWorld_Request>()
{
  return "simulation_interfaces/srv/LoadWorld_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::LoadWorld_Request>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::msg::Resource>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::LoadWorld_Request>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::msg::Resource>::value> {};

template<>
struct is_message<simulation_interfaces::srv::LoadWorld_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"
// Member 'world'
#include "simulation_interfaces/msg/detail/world_resource__traits.hpp"

namespace simulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadWorld_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
    out << ", ";
  }

  // member: world
  {
    out << "world: ";
    to_flow_style_yaml(msg.world, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadWorld_Response & msg,
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

  // member: world
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world:\n";
    to_block_style_yaml(msg.world, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadWorld_Response & msg, bool use_flow_style = false)
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
  const simulation_interfaces::srv::LoadWorld_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::srv::LoadWorld_Response & msg)
{
  return simulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::srv::LoadWorld_Response>()
{
  return "simulation_interfaces::srv::LoadWorld_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::LoadWorld_Response>()
{
  return "simulation_interfaces/srv/LoadWorld_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::LoadWorld_Response>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::msg::Result>::value && has_fixed_size<simulation_interfaces::msg::WorldResource>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::LoadWorld_Response>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::msg::Result>::value && has_bounded_size<simulation_interfaces::msg::WorldResource>::value> {};

template<>
struct is_message<simulation_interfaces::srv::LoadWorld_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::LoadWorld>()
{
  return "simulation_interfaces::srv::LoadWorld";
}

template<>
inline const char * name<simulation_interfaces::srv::LoadWorld>()
{
  return "simulation_interfaces/srv/LoadWorld";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::LoadWorld>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::LoadWorld_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::LoadWorld_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::LoadWorld>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::LoadWorld_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::LoadWorld_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::LoadWorld>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::LoadWorld_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::LoadWorld_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__LOAD_WORLD__TRAITS_HPP_
