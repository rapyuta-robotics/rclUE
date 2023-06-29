// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:msg/OverlapEvent.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__TRAITS_HPP_
#define UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__TRAITS_HPP_

#include "ue_msgs/msg/detail/overlap_event__struct.hpp"

#include <stdint.h>

#include <rosidl_runtime_cpp/traits.hpp>
#include <type_traits>

// Include directives for member types
// Member 'sweep_result'
#include "ue_msgs/msg/detail/hit_result__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char* data_type<ue_msgs::msg::OverlapEvent>()
{
    return "ue_msgs::msg::OverlapEvent";
}

template<>
inline const char* name<ue_msgs::msg::OverlapEvent>()
{
    return "ue_msgs/msg/OverlapEvent";
}

template<>
struct has_fixed_size<ue_msgs::msg::OverlapEvent> : std::integral_constant<bool, false>
{
};

template<>
struct has_bounded_size<ue_msgs::msg::OverlapEvent> : std::integral_constant<bool, false>
{
};

template<>
struct is_message<ue_msgs::msg::OverlapEvent> : std::true_type
{
};

}    // namespace rosidl_generator_traits

#endif    // UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__TRAITS_HPP_
