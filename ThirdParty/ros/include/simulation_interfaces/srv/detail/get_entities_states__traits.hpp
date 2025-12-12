// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/GetEntitiesStates.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES_STATES__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES_STATES__TRAITS_HPP_

#include "simulation_interfaces/srv/detail/get_entities_states__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'filters'
#include "simulation_interfaces/msg/detail/entity_filters__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntitiesStates_Request>()
{
  return "simulation_interfaces::srv::GetEntitiesStates_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntitiesStates_Request>()
{
  return "simulation_interfaces/srv/GetEntitiesStates_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntitiesStates_Request>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::msg::EntityFilters>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntitiesStates_Request>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::msg::EntityFilters>::value> {};

template<>
struct is_message<simulation_interfaces::srv::GetEntitiesStates_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntitiesStates_Response>()
{
  return "simulation_interfaces::srv::GetEntitiesStates_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntitiesStates_Response>()
{
  return "simulation_interfaces/srv/GetEntitiesStates_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntitiesStates_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntitiesStates_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::srv::GetEntitiesStates_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetEntitiesStates>()
{
  return "simulation_interfaces::srv::GetEntitiesStates";
}

template<>
inline const char * name<simulation_interfaces::srv::GetEntitiesStates>()
{
  return "simulation_interfaces/srv/GetEntitiesStates";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetEntitiesStates>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::GetEntitiesStates_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::GetEntitiesStates_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetEntitiesStates>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::GetEntitiesStates_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::GetEntitiesStates_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::GetEntitiesStates>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::GetEntitiesStates_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::GetEntitiesStates_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES_STATES__TRAITS_HPP_
