// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue4_interfaces:srv/UE4SrvExample.idl
// generated code does not contain a copyright notice

#ifndef UE4_INTERFACES__SRV__UE4_SRV_EXAMPLE__TRAITS_HPP_
#define UE4_INTERFACES__SRV__UE4_SRV_EXAMPLE__TRAITS_HPP_

#include "ue4_interfaces/srv/ue4_srv_example__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue4_interfaces::srv::UE4SrvExample_Request>()
{
  return "ue4_interfaces::srv::UE4SrvExample_Request";
}

template<>
struct has_fixed_size<ue4_interfaces::srv::UE4SrvExample_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ue4_interfaces::srv::UE4SrvExample_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ue4_interfaces::srv::UE4SrvExample_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue4_interfaces::srv::UE4SrvExample_Response>()
{
  return "ue4_interfaces::srv::UE4SrvExample_Response";
}

template<>
struct has_fixed_size<ue4_interfaces::srv::UE4SrvExample_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ue4_interfaces::srv::UE4SrvExample_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ue4_interfaces::srv::UE4SrvExample_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue4_interfaces::srv::UE4SrvExample>()
{
  return "ue4_interfaces::srv::UE4SrvExample";
}

template<>
struct has_fixed_size<ue4_interfaces::srv::UE4SrvExample>
  : std::integral_constant<
    bool,
    has_fixed_size<ue4_interfaces::srv::UE4SrvExample_Request>::value &&
    has_fixed_size<ue4_interfaces::srv::UE4SrvExample_Response>::value
  >
{
};

template<>
struct has_bounded_size<ue4_interfaces::srv::UE4SrvExample>
  : std::integral_constant<
    bool,
    has_bounded_size<ue4_interfaces::srv::UE4SrvExample_Request>::value &&
    has_bounded_size<ue4_interfaces::srv::UE4SrvExample_Response>::value
  >
{
};

template<>
struct is_service<ue4_interfaces::srv::UE4SrvExample>
  : std::true_type
{
};

template<>
struct is_service_request<ue4_interfaces::srv::UE4SrvExample_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ue4_interfaces::srv::UE4SrvExample_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UE4_INTERFACES__SRV__UE4_SRV_EXAMPLE__TRAITS_HPP_
