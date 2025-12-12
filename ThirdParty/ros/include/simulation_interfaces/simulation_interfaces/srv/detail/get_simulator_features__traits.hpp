// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/GetSimulatorFeatures.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATOR_FEATURES__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATOR_FEATURES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulation_interfaces/srv/detail/get_simulator_features__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSimulatorFeatures_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetSimulatorFeatures_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetSimulatorFeatures_Request & msg, bool use_flow_style = false)
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
  const simulation_interfaces::srv::GetSimulatorFeatures_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::srv::GetSimulatorFeatures_Request & msg)
{
  return simulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::srv::GetSimulatorFeatures_Request>()
{
  return "simulation_interfaces::srv::GetSimulatorFeatures_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::GetSimulatorFeatures_Request>()
{
  return "simulation_interfaces/srv/GetSimulatorFeatures_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetSimulatorFeatures_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetSimulatorFeatures_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simulation_interfaces::srv::GetSimulatorFeatures_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'features'
#include "simulation_interfaces/msg/detail/simulator_features__traits.hpp"

namespace simulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSimulatorFeatures_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: features
  {
    out << "features: ";
    to_flow_style_yaml(msg.features, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetSimulatorFeatures_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: features
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "features:\n";
    to_block_style_yaml(msg.features, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetSimulatorFeatures_Response & msg, bool use_flow_style = false)
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
  const simulation_interfaces::srv::GetSimulatorFeatures_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::srv::GetSimulatorFeatures_Response & msg)
{
  return simulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::srv::GetSimulatorFeatures_Response>()
{
  return "simulation_interfaces::srv::GetSimulatorFeatures_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::GetSimulatorFeatures_Response>()
{
  return "simulation_interfaces/srv/GetSimulatorFeatures_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetSimulatorFeatures_Response>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::msg::SimulatorFeatures>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetSimulatorFeatures_Response>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::msg::SimulatorFeatures>::value> {};

template<>
struct is_message<simulation_interfaces::srv::GetSimulatorFeatures_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetSimulatorFeatures>()
{
  return "simulation_interfaces::srv::GetSimulatorFeatures";
}

template<>
inline const char * name<simulation_interfaces::srv::GetSimulatorFeatures>()
{
  return "simulation_interfaces/srv/GetSimulatorFeatures";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetSimulatorFeatures>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::GetSimulatorFeatures_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::GetSimulatorFeatures_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetSimulatorFeatures>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::GetSimulatorFeatures_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::GetSimulatorFeatures_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::GetSimulatorFeatures>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::GetSimulatorFeatures_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::GetSimulatorFeatures_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATOR_FEATURES__TRAITS_HPP_
