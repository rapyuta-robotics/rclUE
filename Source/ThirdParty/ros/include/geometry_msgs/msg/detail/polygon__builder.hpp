// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/Polygon.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POLYGON__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__POLYGON__BUILDER_HPP_

#include "geometry_msgs/msg/detail/polygon__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_Polygon_points
{
public:
  Init_Polygon_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::geometry_msgs::msg::Polygon points(::geometry_msgs::msg::Polygon::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::Polygon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::Polygon>()
{
  return geometry_msgs::msg::builder::Init_Polygon_points();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POLYGON__BUILDER_HPP_
