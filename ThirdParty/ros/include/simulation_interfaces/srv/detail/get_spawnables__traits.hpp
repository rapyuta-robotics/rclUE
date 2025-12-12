// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/GetSpawnables.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_SPAWNABLES__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_SPAWNABLES__TRAITS_HPP_

#include "simulation_interfaces/srv/detail/get_spawnables__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetSpawnables_Request>()
{
  return "simulation_interfaces::srv::GetSpawnables_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::GetSpawnables_Request>()
{
  return "simulation_interfaces/srv/GetSpawnables_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetSpawnables_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetSpawnables_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::srv::GetSpawnables_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetSpawnables_Response>()
{
  return "simulation_interfaces::srv::GetSpawnables_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::GetSpawnables_Response>()
{
  return "simulation_interfaces/srv/GetSpawnables_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetSpawnables_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetSpawnables_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::srv::GetSpawnables_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetSpawnables>()
{
  return "simulation_interfaces::srv::GetSpawnables";
}

template<>
inline const char * name<simulation_interfaces::srv::GetSpawnables>()
{
  return "simulation_interfaces/srv/GetSpawnables";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetSpawnables>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::GetSpawnables_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::GetSpawnables_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetSpawnables>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::GetSpawnables_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::GetSpawnables_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::GetSpawnables>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::GetSpawnables_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::GetSpawnables_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_SPAWNABLES__TRAITS_HPP_
