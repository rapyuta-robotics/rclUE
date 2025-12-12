// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:srv/GetNamedPoses.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSES__TRAITS_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSES__TRAITS_HPP_

#include "simulation_interfaces/srv/detail/get_named_poses__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'tags'
#include "simulation_interfaces/msg/detail/tags_filter__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetNamedPoses_Request>()
{
  return "simulation_interfaces::srv::GetNamedPoses_Request";
}

template<>
inline const char * name<simulation_interfaces::srv::GetNamedPoses_Request>()
{
  return "simulation_interfaces/srv/GetNamedPoses_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetNamedPoses_Request>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::msg::TagsFilter>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetNamedPoses_Request>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::msg::TagsFilter>::value> {};

template<>
struct is_message<simulation_interfaces::srv::GetNamedPoses_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetNamedPoses_Response>()
{
  return "simulation_interfaces::srv::GetNamedPoses_Response";
}

template<>
inline const char * name<simulation_interfaces::srv::GetNamedPoses_Response>()
{
  return "simulation_interfaces/srv/GetNamedPoses_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetNamedPoses_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetNamedPoses_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simulation_interfaces::srv::GetNamedPoses_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::srv::GetNamedPoses>()
{
  return "simulation_interfaces::srv::GetNamedPoses";
}

template<>
inline const char * name<simulation_interfaces::srv::GetNamedPoses>()
{
  return "simulation_interfaces/srv/GetNamedPoses";
}

template<>
struct has_fixed_size<simulation_interfaces::srv::GetNamedPoses>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::srv::GetNamedPoses_Request>::value &&
    has_fixed_size<simulation_interfaces::srv::GetNamedPoses_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::srv::GetNamedPoses>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::srv::GetNamedPoses_Request>::value &&
    has_bounded_size<simulation_interfaces::srv::GetNamedPoses_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::srv::GetNamedPoses>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::srv::GetNamedPoses_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::srv::GetNamedPoses_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSES__TRAITS_HPP_
