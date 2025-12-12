// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/GetSimulatorFeatures.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATOR_FEATURES__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATOR_FEATURES__TRAITS_HPP_

#include "simulation_interfaces/srv/detail/get_simulator_features__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

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

namespace rosidl_generator_traits
{

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
