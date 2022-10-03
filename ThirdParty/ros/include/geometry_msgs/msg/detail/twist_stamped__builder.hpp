// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/TwistStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__TWIST_STAMPED__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__TWIST_STAMPED__BUILDER_HPP_

#include "geometry_msgs/msg/detail/twist_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_TwistStamped_twist
{
public:
  explicit Init_TwistStamped_twist(::geometry_msgs::msg::TwistStamped & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::TwistStamped twist(::geometry_msgs::msg::TwistStamped::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::TwistStamped msg_;
};

class Init_TwistStamped_header
{
public:
  Init_TwistStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwistStamped_twist header(::geometry_msgs::msg::TwistStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TwistStamped_twist(msg_);
  }

private:
  ::geometry_msgs::msg::TwistStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::TwistStamped>()
{
  return geometry_msgs::msg::builder::Init_TwistStamped_header();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__TWIST_STAMPED__BUILDER_HPP_
