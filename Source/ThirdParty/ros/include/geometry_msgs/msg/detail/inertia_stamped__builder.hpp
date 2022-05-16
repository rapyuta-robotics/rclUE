// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/InertiaStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__INERTIA_STAMPED__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__INERTIA_STAMPED__BUILDER_HPP_

#include "geometry_msgs/msg/detail/inertia_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_InertiaStamped_inertia
{
public:
  explicit Init_InertiaStamped_inertia(::geometry_msgs::msg::InertiaStamped & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::InertiaStamped inertia(::geometry_msgs::msg::InertiaStamped::_inertia_type arg)
  {
    msg_.inertia = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::InertiaStamped msg_;
};

class Init_InertiaStamped_header
{
public:
  Init_InertiaStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InertiaStamped_inertia header(::geometry_msgs::msg::InertiaStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InertiaStamped_inertia(msg_);
  }

private:
  ::geometry_msgs::msg::InertiaStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::InertiaStamped>()
{
  return geometry_msgs::msg::builder::Init_InertiaStamped_header();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__INERTIA_STAMPED__BUILDER_HPP_
