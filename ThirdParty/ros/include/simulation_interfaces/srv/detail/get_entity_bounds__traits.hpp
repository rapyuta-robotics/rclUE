// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/GetEntityBounds.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_BOUNDS__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_BOUNDS__TRAITS_HPP_

#include "simulation_interfaces/srv/detail/get_entity_bounds__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntityBounds_Request>()
{
  return "simulation_interfaces::srv::GetEntityBounds_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntityBounds_Request>()
{
  return "simulation_interfaces/srv/GetEntityBounds_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntityBounds_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntityBounds_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::srv::GetEntityBounds_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"
// Member 'bounds'
#include "simulation_interfaces/msg/detail/bounds__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntityBounds_Response>()
{
  return "simulation_interfaces::srv::GetEntityBounds_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntityBounds_Response>()
{
  return "simulation_interfaces/srv/GetEntityBounds_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntityBounds_Response>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::msg::Bounds>::value && has_fixed_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntityBounds_Response>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::msg::Bounds>::value && has_bounded_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct is_message<simulation_interfaces::srv::GetEntityBounds_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntityBounds>()
{
  return "simulation_interfaces::srv::GetEntityBounds";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntityBounds>()
{
  return "simulation_interfaces/srv/GetEntityBounds";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntityBounds>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::GetEntityBounds_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::GetEntityBounds_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntityBounds>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::GetEntityBounds_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::GetEntityBounds_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::GetEntityBounds>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::GetEntityBounds_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::GetEntityBounds_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_BOUNDS__TRAITS_HPP_
