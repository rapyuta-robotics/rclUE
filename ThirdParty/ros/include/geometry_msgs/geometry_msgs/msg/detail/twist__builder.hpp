// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/Twist.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__TWIST__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__TWIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "geometry_msgs/msg/detail/twist__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_Twist_angular
{
public:
  explicit Init_Twist_angular(::geometry_msgs::msg::Twist & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::Twist angular(::geometry_msgs::msg::Twist::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::Twist msg_;
};

class Init_Twist_linear
{
public:
  Init_Twist_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Twist_angular linear(::geometry_msgs::msg::Twist::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_Twist_angular(msg_);
  }

private:
  ::geometry_msgs::msg::Twist msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::Twist>()
{
  return geometry_msgs::msg::builder::Init_Twist_linear();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__TWIST__BUILDER_HPP_
