// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_msgs:msg/Odometry.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__ODOMETRY__BUILDER_HPP_
#define NAV_MSGS__MSG__DETAIL__ODOMETRY__BUILDER_HPP_

#include "nav_msgs/msg/detail/odometry__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nav_msgs
{

namespace msg
{

namespace builder
{

class Init_Odometry_twist
{
public:
  explicit Init_Odometry_twist(::nav_msgs::msg::Odometry & msg)
  : msg_(msg)
  {}
  ::nav_msgs::msg::Odometry twist(::nav_msgs::msg::Odometry::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_msgs::msg::Odometry msg_;
};

class Init_Odometry_pose
{
public:
  explicit Init_Odometry_pose(::nav_msgs::msg::Odometry & msg)
  : msg_(msg)
  {}
  Init_Odometry_twist pose(::nav_msgs::msg::Odometry::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Odometry_twist(msg_);
  }

private:
  ::nav_msgs::msg::Odometry msg_;
};

class Init_Odometry_child_frame_id
{
public:
  explicit Init_Odometry_child_frame_id(::nav_msgs::msg::Odometry & msg)
  : msg_(msg)
  {}
  Init_Odometry_pose child_frame_id(::nav_msgs::msg::Odometry::_child_frame_id_type arg)
  {
    msg_.child_frame_id = std::move(arg);
    return Init_Odometry_pose(msg_);
  }

private:
  ::nav_msgs::msg::Odometry msg_;
};

class Init_Odometry_header
{
public:
  Init_Odometry_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Odometry_child_frame_id header(::nav_msgs::msg::Odometry::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Odometry_child_frame_id(msg_);
  }

private:
  ::nav_msgs::msg::Odometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_msgs::msg::Odometry>()
{
  return nav_msgs::msg::builder::Init_Odometry_header();
}

}  // namespace nav_msgs

#endif  // NAV_MSGS__MSG__DETAIL__ODOMETRY__BUILDER_HPP_
