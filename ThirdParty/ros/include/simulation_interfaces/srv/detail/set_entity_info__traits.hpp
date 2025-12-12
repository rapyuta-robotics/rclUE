// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/SetEntityInfo.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_INFO__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_INFO__TRAITS_HPP_

#include "simulation_interfaces/srv/detail/set_entity_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'info'
#include "simulation_interfaces/msg/detail/entity_info__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::SetEntityInfo_Request>()
{
  return "simulation_interfaces::srv::SetEntityInfo_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::SetEntityInfo_Request>()
{
  return "simulation_interfaces/srv/SetEntityInfo_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::SetEntityInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::SetEntityInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::srv::SetEntityInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::SetEntityInfo_Response>()
{
  return "simulation_interfaces::srv::SetEntityInfo_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::SetEntityInfo_Response>()
{
  return "simulation_interfaces/srv/SetEntityInfo_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::SetEntityInfo_Response>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::SetEntityInfo_Response>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct is_message<simulation_interfaces::srv::SetEntityInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::SetEntityInfo>()
{
  return "simulation_interfaces::srv::SetEntityInfo";
}

template<>
inline const char * name<simulation_interfaces::srv::SetEntityInfo>()
{
  return "simulation_interfaces/srv/SetEntityInfo";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::SetEntityInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::SetEntityInfo_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::SetEntityInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::SetEntityInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::SetEntityInfo_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::SetEntityInfo_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::SetEntityInfo>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::SetEntityInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::SetEntityInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_INFO__TRAITS_HPP_
