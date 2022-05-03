// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/PointStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POINT_STAMPED__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__POINT_STAMPED__BUILDER_HPP_

#include "geometry_msgs/msg/detail/point_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_PointStamped_point
{
public:
  explicit Init_PointStamped_point(::geometry_msgs::msg::PointStamped & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::PointStamped point(::geometry_msgs::msg::PointStamped::_point_type arg)
  {
    msg_.point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::PointStamped msg_;
};

class Init_PointStamped_header
{
public:
  Init_PointStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointStamped_point header(::geometry_msgs::msg::PointStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PointStamped_point(msg_);
  }

private:
  ::geometry_msgs::msg::PointStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::PointStamped>()
{
  return geometry_msgs::msg::builder::Init_PointStamped_header();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POINT_STAMPED__BUILDER_HPP_
