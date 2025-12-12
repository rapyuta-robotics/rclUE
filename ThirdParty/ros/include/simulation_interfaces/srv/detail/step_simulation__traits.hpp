// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/StepSimulation.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__STEP_SIMULATION__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__STEP_SIMULATION__TRAITS_HPP_

#include "simulation_interfaces/srv/detail/step_simulation__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::StepSimulation_Request>()
{
  return "simulation_interfaces::srv::StepSimulation_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::StepSimulation_Request>()
{
  return "simulation_interfaces/srv/StepSimulation_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::StepSimulation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::StepSimulation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simulation_interfaces::srv::StepSimulation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::StepSimulation_Response>()
{
  return "simulation_interfaces::srv::StepSimulation_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::StepSimulation_Response>()
{
  return "simulation_interfaces/srv/StepSimulation_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::StepSimulation_Response>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::StepSimulation_Response>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct is_message<simulation_interfaces::srv::StepSimulation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::StepSimulation>()
{
  return "simulation_interfaces::srv::StepSimulation";
}

template<>
inline const char * name<simulation_interfaces::srv::StepSimulation>()
{
  return "simulation_interfaces/srv/StepSimulation";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::StepSimulation>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::StepSimulation_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::StepSimulation_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::StepSimulation>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::StepSimulation_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::StepSimulation_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::StepSimulation>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::StepSimulation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::StepSimulation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__STEP_SIMULATION__TRAITS_HPP_
