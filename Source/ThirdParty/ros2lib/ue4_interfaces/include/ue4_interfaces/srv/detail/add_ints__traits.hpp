// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue4_interfaces:srv/AddInts.idl
// generated code does not contain a copyright notice

#ifndef UE4_INTERFACES__SRV__DETAIL__ADD_INTS__TRAITS_HPP_
#define UE4_INTERFACES__SRV__DETAIL__ADD_INTS__TRAITS_HPP_

#include "ue4_interfaces/srv/detail/add_ints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue4_interfaces::srv::AddInts_Request>()
{
  return "ue4_interfaces::srv::AddInts_Request";
}

template<>
inline const char * name<ue4_interfaces::srv::AddInts_Request>()
{
  return "ue4_interfaces/srv/AddInts_Request";
}

template<>
struct has_fixed_size<ue4_interfaces::srv::AddInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ue4_interfaces::srv::AddInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ue4_interfaces::srv::AddInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue4_interfaces::srv::AddInts_Response>()
{
  return "ue4_interfaces::srv::AddInts_Response";
}

template<>
inline const char * name<ue4_interfaces::srv::AddInts_Response>()
{
  return "ue4_interfaces/srv/AddInts_Response";
}

template<>
struct has_fixed_size<ue4_interfaces::srv::AddInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ue4_interfaces::srv::AddInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ue4_interfaces::srv::AddInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue4_interfaces::srv::AddInts>()
{
  return "ue4_interfaces::srv::AddInts";
}

template<>
inline const char * name<ue4_interfaces::srv::AddInts>()
{
  return "ue4_interfaces/srv/AddInts";
}

template<>
struct has_fixed_size<ue4_interfaces::srv::AddInts>
  : std::integral_constant<
    bool,
    has_fixed_size<ue4_interfaces::srv::AddInts_Request>::value &&
    has_fixed_size<ue4_interfaces::srv::AddInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<ue4_interfaces::srv::AddInts>
  : std::integral_constant<
    bool,
    has_bounded_size<ue4_interfaces::srv::AddInts_Request>::value &&
    has_bounded_size<ue4_interfaces::srv::AddInts_Response>::value
  >
{
};

template<>
struct is_service<ue4_interfaces::srv::AddInts>
  : std::true_type
{
};

template<>
struct is_service_request<ue4_interfaces::srv::AddInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ue4_interfaces::srv::AddInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UE4_INTERFACES__SRV__DETAIL__ADD_INTS__TRAITS_HPP_
