// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/AccelStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__ACCEL_STAMPED__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__ACCEL_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "geometry_msgs/msg/detail/accel_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_AccelStamped_accel
{
public:
  explicit Init_AccelStamped_accel(::geometry_msgs::msg::AccelStamped & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::AccelStamped accel(::geometry_msgs::msg::AccelStamped::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::AccelStamped msg_;
};

class Init_AccelStamped_header
{
public:
  Init_AccelStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccelStamped_accel header(::geometry_msgs::msg::AccelStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AccelStamped_accel(msg_);
  }

private:
  ::geometry_msgs::msg::AccelStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::AccelStamped>()
{
  return geometry_msgs::msg::builder::Init_AccelStamped_header();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__ACCEL_STAMPED__BUILDER_HPP_
