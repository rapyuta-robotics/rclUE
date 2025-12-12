// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/LoadWorld.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__LOAD_WORLD__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__LOAD_WORLD__TRAITS_HPP_

#include "simulation_interfaces/srv/detail/load_world__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'world_resource'
#include "simulation_interfaces/msg/detail/resource__traits.hpp"

namespace rosidl_generator_traits
{

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

namespace rosidl_generator_traits
{

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
