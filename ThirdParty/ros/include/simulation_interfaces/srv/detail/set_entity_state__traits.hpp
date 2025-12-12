// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/SetEntityState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_STATE__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_STATE__TRAITS_HPP_

#include "simulation_interfaces/srv/detail/set_entity_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'state'
#include "simulation_interfaces/msg/detail/entity_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::SetEntityState_Request>()
{
  return "simulation_interfaces::srv::SetEntityState_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::SetEntityState_Request>()
{
  return "simulation_interfaces/srv/SetEntityState_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::SetEntityState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::SetEntityState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::srv::SetEntityState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::SetEntityState_Response>()
{
  return "simulation_interfaces::srv::SetEntityState_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::SetEntityState_Response>()
{
  return "simulation_interfaces/srv/SetEntityState_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::SetEntityState_Response>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::SetEntityState_Response>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct is_message<simulation_interfaces::srv::SetEntityState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::SetEntityState>()
{
  return "simulation_interfaces::srv::SetEntityState";
}

template<>
inline const char * name<simulation_interfaces::srv::SetEntityState>()
{
  return "simulation_interfaces/srv/SetEntityState";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::SetEntityState>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::SetEntityState_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::SetEntityState_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::SetEntityState>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::SetEntityState_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::SetEntityState_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::SetEntityState>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::SetEntityState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::SetEntityState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_STATE__TRAITS_HPP_
