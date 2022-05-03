// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/TwistWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__TWIST_WITH_COVARIANCE__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__TWIST_WITH_COVARIANCE__BUILDER_HPP_

#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_TwistWithCovariance_covariance
{
public:
  explicit Init_TwistWithCovariance_covariance(::geometry_msgs::msg::TwistWithCovariance & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::TwistWithCovariance covariance(::geometry_msgs::msg::TwistWithCovariance::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::TwistWithCovariance msg_;
};

class Init_TwistWithCovariance_twist
{
public:
  Init_TwistWithCovariance_twist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwistWithCovariance_covariance twist(::geometry_msgs::msg::TwistWithCovariance::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_TwistWithCovariance_covariance(msg_);
  }

private:
  ::geometry_msgs::msg::TwistWithCovariance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::TwistWithCovariance>()
{
  return geometry_msgs::msg::builder::Init_TwistWithCovariance_twist();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__TWIST_WITH_COVARIANCE__BUILDER_HPP_
