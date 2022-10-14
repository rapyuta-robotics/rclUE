// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmw_dds_common:msg/Gid.idl
// generated code does not contain a copyright notice

#ifndef RMW_DDS_COMMON__MSG__DETAIL__GID__TRAITS_HPP_
#define RMW_DDS_COMMON__MSG__DETAIL__GID__TRAITS_HPP_

#include "rmw_dds_common/msg/detail/gid__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmw_dds_common::msg::Gid>()
{
  return "rmw_dds_common::msg::Gid";
}

template<>
inline const char * name<rmw_dds_common::msg::Gid>()
{
  return "rmw_dds_common/msg/Gid";
}

template<>
struct has_fixed_size<rmw_dds_common::msg::Gid>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmw_dds_common::msg::Gid>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmw_dds_common::msg::Gid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMW_DDS_COMMON__MSG__DETAIL__GID__TRAITS_HPP_
