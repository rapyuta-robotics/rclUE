// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:msg/HitResult.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__HIT_RESULT__TRAITS_HPP_
#define UE_MSGS__MSG__DETAIL__HIT_RESULT__TRAITS_HPP_

#include "ue_msgs/msg/detail/hit_result__struct.hpp"

#include <stdint.h>

#include <rosidl_runtime_cpp/traits.hpp>
#include <type_traits>

// Include directives for member types
// Member 'impact_normal'
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'impact_point'
// Member 'location'
// Member 'trace_start'
// Member 'trace_end'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char* data_type<ue_msgs::msg::HitResult>()
{
    return "ue_msgs::msg::HitResult";
}

template<>
inline const char* name<ue_msgs::msg::HitResult>()
{
    return "ue_msgs/msg/HitResult";
}

template<>
struct has_fixed_size<ue_msgs::msg::HitResult> : std::integral_constant<bool, false>
{
};

template<>
struct has_bounded_size<ue_msgs::msg::HitResult> : std::integral_constant<bool, false>
{
};

template<>
struct is_message<ue_msgs::msg::HitResult> : std::true_type
{
};

}    // namespace rosidl_generator_traits

#endif    // UE_MSGS__MSG__DETAIL__HIT_RESULT__TRAITS_HPP_
