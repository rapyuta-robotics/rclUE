// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:srv/SetEntityState.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SET_ENTITY_STATE__TRAITS_HPP_
#define UE_MSGS__SRV__DETAIL__SET_ENTITY_STATE__TRAITS_HPP_

#include "ue_msgs/srv/detail/set_entity_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'state'
#include "ue_msgs/msg/detail/entity_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::srv::SetEntityState_Request>()
{
  return "ue_msgs::srv::SetEntityState_Request";
}

template<>
inline const char * name<ue_msgs::srv::SetEntityState_Request>()
{
  return "ue_msgs/srv/SetEntityState_Request";
}

template<>
struct has_fixed_size<ue_msgs::srv::SetEntityState_Request>
  : std::integral_constant<bool, has_fixed_size<ue_msgs::msg::EntityState>::value> {};

template<>
struct has_bounded_size<ue_msgs::srv::SetEntityState_Request>
  : std::integral_constant<bool, has_bounded_size<ue_msgs::msg::EntityState>::value> {};

template<>
struct is_message<ue_msgs::srv::SetEntityState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::srv::SetEntityState_Response>()
{
  return "ue_msgs::srv::SetEntityState_Response";
}

template<>
inline const char * name<ue_msgs::srv::SetEntityState_Response>()
{
  return "ue_msgs/srv/SetEntityState_Response";
}

template<>
struct has_fixed_size<ue_msgs::srv::SetEntityState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ue_msgs::srv::SetEntityState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ue_msgs::srv::SetEntityState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::srv::SetEntityState>()
{
  return "ue_msgs::srv::SetEntityState";
}

template<>
inline const char * name<ue_msgs::srv::SetEntityState>()
{
  return "ue_msgs/srv/SetEntityState";
}

template<>
struct has_fixed_size<ue_msgs::srv::SetEntityState>
  : std::integral_constant<
    bool,
    has_fixed_size<ue_msgs::srv::SetEntityState_Request>::value &&
    has_fixed_size<ue_msgs::srv::SetEntityState_Response>::value
  >
{
};

template<>
struct has_bounded_size<ue_msgs::srv::SetEntityState>
  : std::integral_constant<
    bool,
    has_bounded_size<ue_msgs::srv::SetEntityState_Request>::value &&
    has_bounded_size<ue_msgs::srv::SetEntityState_Response>::value
  >
{
};

template<>
struct is_service<ue_msgs::srv::SetEntityState>
  : std::true_type
{
};

template<>
struct is_service_request<ue_msgs::srv::SetEntityState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ue_msgs::srv::SetEntityState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UE_MSGS__SRV__DETAIL__SET_ENTITY_STATE__TRAITS_HPP_
