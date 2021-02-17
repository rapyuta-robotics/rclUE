// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/PoseWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE__BUILDER_HPP_

#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseWithCovariance_covariance
{
public:
  explicit Init_PoseWithCovariance_covariance(::geometry_msgs::msg::PoseWithCovariance & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::PoseWithCovariance covariance(::geometry_msgs::msg::PoseWithCovariance::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::PoseWithCovariance msg_;
};

class Init_PoseWithCovariance_pose
{
public:
  Init_PoseWithCovariance_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseWithCovariance_covariance pose(::geometry_msgs::msg::PoseWithCovariance::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_PoseWithCovariance_covariance(msg_);
  }

private:
  ::geometry_msgs::msg::PoseWithCovariance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::PoseWithCovariance>()
{
  return geometry_msgs::msg::builder::Init_PoseWithCovariance_pose();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE__BUILDER_HPP_
