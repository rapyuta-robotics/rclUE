// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from example_interfaces:srv/SetBool.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__TRAITS_HPP_
#define EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__TRAITS_HPP_

#include "example_interfaces/srv/detail/set_bool__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::srv::SetBool_Request>()
{
  return "example_interfaces::srv::SetBool_Request";
}

template<>
inline const char * name<example_interfaces::srv::SetBool_Request>()
{
  return "example_interfaces/srv/SetBool_Request";
}

template<>
struct has_fixed_size<example_interfaces::srv::SetBool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<example_interfaces::srv::SetBool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<example_interfaces::srv::SetBool_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::srv::SetBool_Response>()
{
  return "example_interfaces::srv::SetBool_Response";
}

template<>
inline const char * name<example_interfaces::srv::SetBool_Response>()
{
  return "example_interfaces/srv/SetBool_Response";
}

template<>
struct has_fixed_size<example_interfaces::srv::SetBool_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<example_interfaces::srv::SetBool_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<example_interfaces::srv::SetBool_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::srv::SetBool>()
{
  return "example_interfaces::srv::SetBool";
}

template<>
inline const char * name<example_interfaces::srv::SetBool>()
{
  return "example_interfaces/srv/SetBool";
}

template<>
struct has_fixed_size<example_interfaces::srv::SetBool>
  : std::integral_constant<
    bool,
    has_fixed_size<example_interfaces::srv::SetBool_Request>::value &&
    has_fixed_size<example_interfaces::srv::SetBool_Response>::value
  >
{
};

template<>
struct has_bounded_size<example_interfaces::srv::SetBool>
  : std::integral_constant<
    bool,
    has_bounded_size<example_interfaces::srv::SetBool_Request>::value &&
    has_bounded_size<example_interfaces::srv::SetBool_Response>::value
  >
{
};

template<>
struct is_service<example_interfaces::srv::SetBool>
  : std::true_type
{
};

template<>
struct is_service_request<example_interfaces::srv::SetBool_Request>
  : std::true_type
{
};

template<>
struct is_service_response<example_interfaces::srv::SetBool_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__TRAITS_HPP_
