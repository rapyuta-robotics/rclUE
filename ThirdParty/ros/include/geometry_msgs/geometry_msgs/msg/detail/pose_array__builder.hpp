// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/PoseArray.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POSE_ARRAY__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__POSE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "geometry_msgs/msg/detail/pose_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseArray_poses
{
public:
  explicit Init_PoseArray_poses(::geometry_msgs::msg::PoseArray & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::PoseArray poses(::geometry_msgs::msg::PoseArray::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::PoseArray msg_;
};

class Init_PoseArray_header
{
public:
  Init_PoseArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseArray_poses header(::geometry_msgs::msg::PoseArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PoseArray_poses(msg_);
  }

private:
  ::geometry_msgs::msg::PoseArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::PoseArray>()
{
  return geometry_msgs::msg::builder::Init_PoseArray_header();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POSE_ARRAY__BUILDER_HPP_
