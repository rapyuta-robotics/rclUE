// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/WrenchStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__WRENCH_STAMPED__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__WRENCH_STAMPED__BUILDER_HPP_

#include "geometry_msgs/msg/detail/wrench_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_WrenchStamped_wrench
{
public:
  explicit Init_WrenchStamped_wrench(::geometry_msgs::msg::WrenchStamped & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::WrenchStamped wrench(::geometry_msgs::msg::WrenchStamped::_wrench_type arg)
  {
    msg_.wrench = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::WrenchStamped msg_;
};

class Init_WrenchStamped_header
{
public:
  Init_WrenchStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WrenchStamped_wrench header(::geometry_msgs::msg::WrenchStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WrenchStamped_wrench(msg_);
  }

private:
  ::geometry_msgs::msg::WrenchStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::WrenchStamped>()
{
  return geometry_msgs::msg::builder::Init_WrenchStamped_header();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__WRENCH_STAMPED__BUILDER_HPP_
