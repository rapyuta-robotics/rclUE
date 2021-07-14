// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/TwistWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__TWIST_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__TWIST_WITH_COVARIANCE_STAMPED__BUILDER_HPP_

#include "geometry_msgs/msg/detail/twist_with_covariance_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_TwistWithCovarianceStamped_twist
{
public:
  explicit Init_TwistWithCovarianceStamped_twist(::geometry_msgs::msg::TwistWithCovarianceStamped & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::TwistWithCovarianceStamped twist(::geometry_msgs::msg::TwistWithCovarianceStamped::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::TwistWithCovarianceStamped msg_;
};

class Init_TwistWithCovarianceStamped_header
{
public:
  Init_TwistWithCovarianceStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwistWithCovarianceStamped_twist header(::geometry_msgs::msg::TwistWithCovarianceStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TwistWithCovarianceStamped_twist(msg_);
  }

private:
  ::geometry_msgs::msg::TwistWithCovarianceStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::TwistWithCovarianceStamped>()
{
  return geometry_msgs::msg::builder::Init_TwistWithCovarianceStamped_header();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__TWIST_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
