// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/ResetSimulation.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__RESET_SIMULATION__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__RESET_SIMULATION__TRAITS_HPP_

#include "simulation_interfaces/srv/detail/reset_simulation__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::ResetSimulation_Request>()
{
  return "simulation_interfaces::srv::ResetSimulation_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::ResetSimulation_Request>()
{
  return "simulation_interfaces/srv/ResetSimulation_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::ResetSimulation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::ResetSimulation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simulation_interfaces::srv::ResetSimulation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::ResetSimulation_Response>()
{
  return "simulation_interfaces::srv::ResetSimulation_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::ResetSimulation_Response>()
{
  return "simulation_interfaces/srv/ResetSimulation_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::ResetSimulation_Response>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::ResetSimulation_Response>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct is_message<simulation_interfaces::srv::ResetSimulation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::ResetSimulation>()
{
  return "simulation_interfaces::srv::ResetSimulation";
}

template<>
inline const char * name<simulation_interfaces::srv::ResetSimulation>()
{
  return "simulation_interfaces/srv/ResetSimulation";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::ResetSimulation>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::ResetSimulation_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::ResetSimulation_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::ResetSimulation>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::ResetSimulation_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::ResetSimulation_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::ResetSimulation>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::ResetSimulation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::ResetSimulation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__RESET_SIMULATION__TRAITS_HPP_
