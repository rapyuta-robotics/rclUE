// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:srv/SpawnWorld.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SPAWN_WORLD__TRAITS_HPP_
#define UE_MSGS__SRV__DETAIL__SPAWN_WORLD__TRAITS_HPP_

#include "ue_msgs/srv/detail/spawn_world__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::srv::SpawnWorld_Request>()
{
  return "ue_msgs::srv::SpawnWorld_Request";
}

template<>
inline const char * name<ue_msgs::srv::SpawnWorld_Request>()
{
  return "ue_msgs/srv/SpawnWorld_Request";
}

template<>
struct has_fixed_size<ue_msgs::srv::SpawnWorld_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ue_msgs::srv::SpawnWorld_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ue_msgs::srv::SpawnWorld_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::srv::SpawnWorld_Response>()
{
  return "ue_msgs::srv::SpawnWorld_Response";
}

template<>
inline const char * name<ue_msgs::srv::SpawnWorld_Response>()
{
  return "ue_msgs/srv/SpawnWorld_Response";
}

template<>
struct has_fixed_size<ue_msgs::srv::SpawnWorld_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ue_msgs::srv::SpawnWorld_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ue_msgs::srv::SpawnWorld_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::srv::SpawnWorld>()
{
  return "ue_msgs::srv::SpawnWorld";
}

template<>
inline const char * name<ue_msgs::srv::SpawnWorld>()
{
  return "ue_msgs/srv/SpawnWorld";
}

template<>
struct has_fixed_size<ue_msgs::srv::SpawnWorld>
  : std::integral_constant<
    bool,
    has_fixed_size<ue_msgs::srv::SpawnWorld_Request>::value &&
    has_fixed_size<ue_msgs::srv::SpawnWorld_Response>::value
  >
{
};

template<>
struct has_bounded_size<ue_msgs::srv::SpawnWorld>
  : std::integral_constant<
    bool,
    has_bounded_size<ue_msgs::srv::SpawnWorld_Request>::value &&
    has_bounded_size<ue_msgs::srv::SpawnWorld_Response>::value
  >
{
};

template<>
struct is_service<ue_msgs::srv::SpawnWorld>
  : std::true_type
{
};

template<>
struct is_service_request<ue_msgs::srv::SpawnWorld_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ue_msgs::srv::SpawnWorld_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UE_MSGS__SRV__DETAIL__SPAWN_WORLD__TRAITS_HPP_
