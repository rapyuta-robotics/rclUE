// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/QuaternionStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__QUATERNION_STAMPED__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__QUATERNION_STAMPED__BUILDER_HPP_

#include "geometry_msgs/msg/detail/quaternion_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_QuaternionStamped_quaternion
{
public:
  explicit Init_QuaternionStamped_quaternion(::geometry_msgs::msg::QuaternionStamped & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::QuaternionStamped quaternion(::geometry_msgs::msg::QuaternionStamped::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::QuaternionStamped msg_;
};

class Init_QuaternionStamped_header
{
public:
  Init_QuaternionStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuaternionStamped_quaternion header(::geometry_msgs::msg::QuaternionStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_QuaternionStamped_quaternion(msg_);
  }

private:
  ::geometry_msgs::msg::QuaternionStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::QuaternionStamped>()
{
  return geometry_msgs::msg::builder::Init_QuaternionStamped_header();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__QUATERNION_STAMPED__BUILDER_HPP_
