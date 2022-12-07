// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/TransformStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__TRANSFORM_STAMPED__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__TRANSFORM_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "geometry_msgs/msg/detail/transform_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_TransformStamped_transform
{
public:
  explicit Init_TransformStamped_transform(::geometry_msgs::msg::TransformStamped & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::TransformStamped transform(::geometry_msgs::msg::TransformStamped::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::TransformStamped msg_;
};

class Init_TransformStamped_child_frame_id
{
public:
  explicit Init_TransformStamped_child_frame_id(::geometry_msgs::msg::TransformStamped & msg)
  : msg_(msg)
  {}
  Init_TransformStamped_transform child_frame_id(::geometry_msgs::msg::TransformStamped::_child_frame_id_type arg)
  {
    msg_.child_frame_id = std::move(arg);
    return Init_TransformStamped_transform(msg_);
  }

private:
  ::geometry_msgs::msg::TransformStamped msg_;
};

class Init_TransformStamped_header
{
public:
  Init_TransformStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransformStamped_child_frame_id header(::geometry_msgs::msg::TransformStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TransformStamped_child_frame_id(msg_);
  }

private:
  ::geometry_msgs::msg::TransformStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::TransformStamped>()
{
  return geometry_msgs::msg::builder::Init_TransformStamped_header();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__TRANSFORM_STAMPED__BUILDER_HPP_
