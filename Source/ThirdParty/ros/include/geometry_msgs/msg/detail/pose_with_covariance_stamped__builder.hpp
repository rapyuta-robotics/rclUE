// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/PoseWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_STAMPED__BUILDER_HPP_

#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseWithCovarianceStamped_pose
{
public:
  explicit Init_PoseWithCovarianceStamped_pose(::geometry_msgs::msg::PoseWithCovarianceStamped & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::PoseWithCovarianceStamped pose(::geometry_msgs::msg::PoseWithCovarianceStamped::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::PoseWithCovarianceStamped msg_;
};

class Init_PoseWithCovarianceStamped_header
{
public:
  Init_PoseWithCovarianceStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseWithCovarianceStamped_pose header(::geometry_msgs::msg::PoseWithCovarianceStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PoseWithCovarianceStamped_pose(msg_);
  }

private:
  ::geometry_msgs::msg::PoseWithCovarianceStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::PoseWithCovarianceStamped>()
{
  return geometry_msgs::msg::builder::Init_PoseWithCovarianceStamped_header();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
