// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/GetSimulationState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATION_STATE__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATION_STATE__TRAITS_HPP_

#include "simulation_interfaces/srv/detail/get_simulation_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetSimulationState_Request>()
{
  return "simulation_interfaces::srv::GetSimulationState_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::GetSimulationState_Request>()
{
  return "simulation_interfaces/srv/GetSimulationState_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetSimulationState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetSimulationState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simulation_interfaces::srv::GetSimulationState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'state'
#include "simulation_interfaces/msg/detail/simulation_state__traits.hpp"
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetSimulationState_Response>()
{
  return "simulation_interfaces::srv::GetSimulationState_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::GetSimulationState_Response>()
{
  return "simulation_interfaces/srv/GetSimulationState_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetSimulationState_Response>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::msg::Result>::value && has_fixed_size<simulation_interfaces::msg::SimulationState>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetSimulationState_Response>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::msg::Result>::value && has_bounded_size<simulation_interfaces::msg::SimulationState>::value> {};

template<>
struct is_message<simulation_interfaces::srv::GetSimulationState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetSimulationState>()
{
  return "simulation_interfaces::srv::GetSimulationState";
}

template<>
inline const char * name<simulation_interfaces::srv::GetSimulationState>()
{
  return "simulation_interfaces/srv/GetSimulationState";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetSimulationState>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::GetSimulationState_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::GetSimulationState_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetSimulationState>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::GetSimulationState_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::GetSimulationState_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::GetSimulationState>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::GetSimulationState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::GetSimulationState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATION_STATE__TRAITS_HPP_
