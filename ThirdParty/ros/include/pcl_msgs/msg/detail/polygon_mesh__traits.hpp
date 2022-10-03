// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pcl_msgs:msg/PolygonMesh.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__POLYGON_MESH__TRAITS_HPP_
#define PCL_MSGS__MSG__DETAIL__POLYGON_MESH__TRAITS_HPP_

#include "pcl_msgs/msg/detail/polygon_mesh__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'cloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pcl_msgs::msg::PolygonMesh>()
{
  return "pcl_msgs::msg::PolygonMesh";
}

template<>
inline const char * name<pcl_msgs::msg::PolygonMesh>()
{
  return "pcl_msgs/msg/PolygonMesh";
}

template<>
struct has_fixed_size<pcl_msgs::msg::PolygonMesh>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pcl_msgs::msg::PolygonMesh>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pcl_msgs::msg::PolygonMesh>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PCL_MSGS__MSG__DETAIL__POLYGON_MESH__TRAITS_HPP_
