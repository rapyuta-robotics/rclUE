// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_msgs:srv/GetMap.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__DETAIL__GET_MAP__TRAITS_HPP_
#define NAV_MSGS__SRV__DETAIL__GET_MAP__TRAITS_HPP_

#include "nav_msgs/srv/detail/get_map__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav_msgs::srv::GetMap_Request>()
{
  return "nav_msgs::srv::GetMap_Request";
}

template<>
inline const char * name<nav_msgs::srv::GetMap_Request>()
{
  return "nav_msgs/srv/GetMap_Request";
}

template<>
struct has_fixed_size<nav_msgs::srv::GetMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav_msgs::srv::GetMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nav_msgs::srv::GetMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'map'
#include "nav_msgs/msg/detail/occupancy_grid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav_msgs::srv::GetMap_Response>()
{
  return "nav_msgs::srv::GetMap_Response";
}

template<>
inline const char * name<nav_msgs::srv::GetMap_Response>()
{
  return "nav_msgs/srv/GetMap_Response";
}

template<>
struct has_fixed_size<nav_msgs::srv::GetMap_Response>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct has_bounded_size<nav_msgs::srv::GetMap_Response>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct is_message<nav_msgs::srv::GetMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav_msgs::srv::GetMap>()
{
  return "nav_msgs::srv::GetMap";
}

template<>
inline const char * name<nav_msgs::srv::GetMap>()
{
  return "nav_msgs/srv/GetMap";
}

template<>
struct has_fixed_size<nav_msgs::srv::GetMap>
  : std::integral_constant<
    bool,
    has_fixed_size<nav_msgs::srv::GetMap_Request>::value &&
    has_fixed_size<nav_msgs::srv::GetMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav_msgs::srv::GetMap>
  : std::integral_constant<
    bool,
    has_bounded_size<nav_msgs::srv::GetMap_Request>::value &&
    has_bounded_size<nav_msgs::srv::GetMap_Response>::value
  >
{
};

template<>
struct is_service<nav_msgs::srv::GetMap>
  : std::true_type
{
};

template<>
struct is_service_request<nav_msgs::srv::GetMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav_msgs::srv::GetMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV_MSGS__SRV__DETAIL__GET_MAP__TRAITS_HPP_
