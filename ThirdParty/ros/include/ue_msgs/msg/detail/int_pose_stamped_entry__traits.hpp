// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:msg/IntPoseStampedEntry.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__INT_POSE_STAMPED_ENTRY__TRAITS_HPP_
#define UE_MSGS__MSG__DETAIL__INT_POSE_STAMPED_ENTRY__TRAITS_HPP_

#include "ue_msgs/msg/detail/int_pose_stamped_entry__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'value'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::msg::IntPoseStampedEntry>()
{
  return "ue_msgs::msg::IntPoseStampedEntry";
}

template<>
inline const char * name<ue_msgs::msg::IntPoseStampedEntry>()
{
  return "ue_msgs/msg/IntPoseStampedEntry";
}

template<>
struct has_fixed_size<ue_msgs::msg::IntPoseStampedEntry>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<ue_msgs::msg::IntPoseStampedEntry>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<ue_msgs::msg::IntPoseStampedEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UE_MSGS__MSG__DETAIL__INT_POSE_STAMPED_ENTRY__TRAITS_HPP_
