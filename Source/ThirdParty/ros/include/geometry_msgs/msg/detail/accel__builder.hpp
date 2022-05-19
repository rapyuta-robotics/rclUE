// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/Accel.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__ACCEL__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__ACCEL__BUILDER_HPP_

#include "geometry_msgs/msg/detail/accel__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_Accel_angular
{
public:
  explicit Init_Accel_angular(::geometry_msgs::msg::Accel & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::Accel angular(::geometry_msgs::msg::Accel::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::Accel msg_;
};

class Init_Accel_linear
{
public:
  Init_Accel_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Accel_angular linear(::geometry_msgs::msg::Accel::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_Accel_angular(msg_);
  }

private:
  ::geometry_msgs::msg::Accel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::Accel>()
{
  return geometry_msgs::msg::builder::Init_Accel_linear();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__ACCEL__BUILDER_HPP_
