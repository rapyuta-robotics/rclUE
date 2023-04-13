// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/PoseStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POSE_STAMPED__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__POSE_STAMPED__BUILDER_HPP_

#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseStamped_pose
{
public:
  explicit Init_PoseStamped_pose(::geometry_msgs::msg::PoseStamped & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::PoseStamped pose(::geometry_msgs::msg::PoseStamped::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::PoseStamped msg_;
};

class Init_PoseStamped_header
{
public:
  Init_PoseStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseStamped_pose header(::geometry_msgs::msg::PoseStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PoseStamped_pose(msg_);
  }

private:
  ::geometry_msgs::msg::PoseStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::PoseStamped>()
{
  return geometry_msgs::msg::builder::Init_PoseStamped_header();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POSE_STAMPED__BUILDER_HPP_
