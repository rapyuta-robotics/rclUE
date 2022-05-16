// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/AccelWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__ACCEL_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__ACCEL_WITH_COVARIANCE_STAMPED__BUILDER_HPP_

#include "geometry_msgs/msg/detail/accel_with_covariance_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_AccelWithCovarianceStamped_accel
{
public:
  explicit Init_AccelWithCovarianceStamped_accel(::geometry_msgs::msg::AccelWithCovarianceStamped & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::AccelWithCovarianceStamped accel(::geometry_msgs::msg::AccelWithCovarianceStamped::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::AccelWithCovarianceStamped msg_;
};

class Init_AccelWithCovarianceStamped_header
{
public:
  Init_AccelWithCovarianceStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccelWithCovarianceStamped_accel header(::geometry_msgs::msg::AccelWithCovarianceStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AccelWithCovarianceStamped_accel(msg_);
  }

private:
  ::geometry_msgs::msg::AccelWithCovarianceStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::AccelWithCovarianceStamped>()
{
  return geometry_msgs::msg::builder::Init_AccelWithCovarianceStamped_header();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__ACCEL_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
