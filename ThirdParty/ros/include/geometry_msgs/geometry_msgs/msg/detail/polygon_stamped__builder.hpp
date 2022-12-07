// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/PolygonStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POLYGON_STAMPED__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__POLYGON_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "geometry_msgs/msg/detail/polygon_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_PolygonStamped_polygon
{
public:
  explicit Init_PolygonStamped_polygon(::geometry_msgs::msg::PolygonStamped & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::PolygonStamped polygon(::geometry_msgs::msg::PolygonStamped::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::PolygonStamped msg_;
};

class Init_PolygonStamped_header
{
public:
  Init_PolygonStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PolygonStamped_polygon header(::geometry_msgs::msg::PolygonStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PolygonStamped_polygon(msg_);
  }

private:
  ::geometry_msgs::msg::PolygonStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::PolygonStamped>()
{
  return geometry_msgs::msg::builder::Init_PolygonStamped_header();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POLYGON_STAMPED__BUILDER_HPP_
