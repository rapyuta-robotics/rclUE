// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/AccelWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__ACCEL_WITH_COVARIANCE__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__ACCEL_WITH_COVARIANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "geometry_msgs/msg/detail/accel_with_covariance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_AccelWithCovariance_covariance
{
public:
  explicit Init_AccelWithCovariance_covariance(::geometry_msgs::msg::AccelWithCovariance & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::AccelWithCovariance covariance(::geometry_msgs::msg::AccelWithCovariance::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::AccelWithCovariance msg_;
};

class Init_AccelWithCovariance_accel
{
public:
  Init_AccelWithCovariance_accel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccelWithCovariance_covariance accel(::geometry_msgs::msg::AccelWithCovariance::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_AccelWithCovariance_covariance(msg_);
  }

private:
  ::geometry_msgs::msg::AccelWithCovariance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::AccelWithCovariance>()
{
  return geometry_msgs::msg::builder::Init_AccelWithCovariance_accel();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__ACCEL_WITH_COVARIANCE__BUILDER_HPP_
