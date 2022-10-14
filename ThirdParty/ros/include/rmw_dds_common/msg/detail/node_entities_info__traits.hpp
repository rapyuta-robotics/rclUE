// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmw_dds_common:msg/NodeEntitiesInfo.idl
// generated code does not contain a copyright notice

#ifndef RMW_DDS_COMMON__MSG__DETAIL__NODE_ENTITIES_INFO__TRAITS_HPP_
#define RMW_DDS_COMMON__MSG__DETAIL__NODE_ENTITIES_INFO__TRAITS_HPP_

#include "rmw_dds_common/msg/detail/node_entities_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmw_dds_common::msg::NodeEntitiesInfo>()
{
  return "rmw_dds_common::msg::NodeEntitiesInfo";
}

template<>
inline const char * name<rmw_dds_common::msg::NodeEntitiesInfo>()
{
  return "rmw_dds_common/msg/NodeEntitiesInfo";
}

template<>
struct has_fixed_size<rmw_dds_common::msg::NodeEntitiesInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmw_dds_common::msg::NodeEntitiesInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmw_dds_common::msg::NodeEntitiesInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMW_DDS_COMMON__MSG__DETAIL__NODE_ENTITIES_INFO__TRAITS_HPP_
