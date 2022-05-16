// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/Point32.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POINT32__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__POINT32__BUILDER_HPP_

#include "geometry_msgs/msg/detail/point32__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_Point32_z
{
public:
  explicit Init_Point32_z(::geometry_msgs::msg::Point32 & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::Point32 z(::geometry_msgs::msg::Point32::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::Point32 msg_;
};

class Init_Point32_y
{
public:
  explicit Init_Point32_y(::geometry_msgs::msg::Point32 & msg)
  : msg_(msg)
  {}
  Init_Point32_z y(::geometry_msgs::msg::Point32::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Point32_z(msg_);
  }

private:
  ::geometry_msgs::msg::Point32 msg_;
};

class Init_Point32_x
{
public:
  Init_Point32_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point32_y x(::geometry_msgs::msg::Point32::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point32_y(msg_);
  }

private:
  ::geometry_msgs::msg::Point32 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::Point32>()
{
  return geometry_msgs::msg::builder::Init_Point32_x();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POINT32__BUILDER_HPP_
