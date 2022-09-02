// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from visualization_msgs:srv/GetInteractiveMarkers.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__TRAITS_HPP_
#define VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__TRAITS_HPP_

#include "visualization_msgs/srv/detail/get_interactive_markers__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<visualization_msgs::srv::GetInteractiveMarkers_Request>()
{
  return "visualization_msgs::srv::GetInteractiveMarkers_Request";
}

template<>
inline const char * name<visualization_msgs::srv::GetInteractiveMarkers_Request>()
{
  return "visualization_msgs/srv/GetInteractiveMarkers_Request";
}

template<>
struct has_fixed_size<visualization_msgs::srv::GetInteractiveMarkers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<visualization_msgs::srv::GetInteractiveMarkers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<visualization_msgs::srv::GetInteractiveMarkers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<visualization_msgs::srv::GetInteractiveMarkers_Response>()
{
  return "visualization_msgs::srv::GetInteractiveMarkers_Response";
}

template<>
inline const char * name<visualization_msgs::srv::GetInteractiveMarkers_Response>()
{
  return "visualization_msgs/srv/GetInteractiveMarkers_Response";
}

template<>
struct has_fixed_size<visualization_msgs::srv::GetInteractiveMarkers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<visualization_msgs::srv::GetInteractiveMarkers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<visualization_msgs::srv::GetInteractiveMarkers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<visualization_msgs::srv::GetInteractiveMarkers>()
{
  return "visualization_msgs::srv::GetInteractiveMarkers";
}

template<>
inline const char * name<visualization_msgs::srv::GetInteractiveMarkers>()
{
  return "visualization_msgs/srv/GetInteractiveMarkers";
}

template<>
struct has_fixed_size<visualization_msgs::srv::GetInteractiveMarkers>
  : std::integral_constant<
    bool,
    has_fixed_size<visualization_msgs::srv::GetInteractiveMarkers_Request>::value &&
    has_fixed_size<visualization_msgs::srv::GetInteractiveMarkers_Response>::value
  >
{
};

template<>
struct has_bounded_size<visualization_msgs::srv::GetInteractiveMarkers>
  : std::integral_constant<
    bool,
    has_bounded_size<visualization_msgs::srv::GetInteractiveMarkers_Request>::value &&
    has_bounded_size<visualization_msgs::srv::GetInteractiveMarkers_Response>::value
  >
{
};

template<>
struct is_service<visualization_msgs::srv::GetInteractiveMarkers>
  : std::true_type
{
};

template<>
struct is_service_request<visualization_msgs::srv::GetInteractiveMarkers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<visualization_msgs::srv::GetInteractiveMarkers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__TRAITS_HPP_
