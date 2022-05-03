// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from example_interfaces:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__TRAITS_HPP_
#define EXAMPLE_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__TRAITS_HPP_

#include "example_interfaces/srv/detail/add_two_ints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::srv::AddTwoInts_Request>()
{
  return "example_interfaces::srv::AddTwoInts_Request";
}

template<>
inline const char * name<example_interfaces::srv::AddTwoInts_Request>()
{
  return "example_interfaces/srv/AddTwoInts_Request";
}

template<>
struct has_fixed_size<example_interfaces::srv::AddTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<example_interfaces::srv::AddTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<example_interfaces::srv::AddTwoInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::srv::AddTwoInts_Response>()
{
  return "example_interfaces::srv::AddTwoInts_Response";
}

template<>
inline const char * name<example_interfaces::srv::AddTwoInts_Response>()
{
  return "example_interfaces/srv/AddTwoInts_Response";
}

template<>
struct has_fixed_size<example_interfaces::srv::AddTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<example_interfaces::srv::AddTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<example_interfaces::srv::AddTwoInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::srv::AddTwoInts>()
{
  return "example_interfaces::srv::AddTwoInts";
}

template<>
inline const char * name<example_interfaces::srv::AddTwoInts>()
{
  return "example_interfaces/srv/AddTwoInts";
}

template<>
struct has_fixed_size<example_interfaces::srv::AddTwoInts>
  : std::integral_constant<
    bool,
    has_fixed_size<example_interfaces::srv::AddTwoInts_Request>::value &&
    has_fixed_size<example_interfaces::srv::AddTwoInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<example_interfaces::srv::AddTwoInts>
  : std::integral_constant<
    bool,
    has_bounded_size<example_interfaces::srv::AddTwoInts_Request>::value &&
    has_bounded_size<example_interfaces::srv::AddTwoInts_Response>::value
  >
{
};

template<>
struct is_service<example_interfaces::srv::AddTwoInts>
  : std::true_type
{
};

template<>
struct is_service_request<example_interfaces::srv::AddTwoInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<example_interfaces::srv::AddTwoInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__TRAITS_HPP_
