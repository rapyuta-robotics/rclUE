// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from visualization_msgs:msg/InteractiveMarkerPose.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_POSE__BUILDER_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "visualization_msgs/msg/detail/interactive_marker_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace visualization_msgs
{

namespace msg
{

namespace builder
{

class Init_InteractiveMarkerPose_name
{
public:
  explicit Init_InteractiveMarkerPose_name(::visualization_msgs::msg::InteractiveMarkerPose & msg)
  : msg_(msg)
  {}
  ::visualization_msgs::msg::InteractiveMarkerPose name(::visualization_msgs::msg::InteractiveMarkerPose::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerPose msg_;
};

class Init_InteractiveMarkerPose_pose
{
public:
  explicit Init_InteractiveMarkerPose_pose(::visualization_msgs::msg::InteractiveMarkerPose & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerPose_name pose(::visualization_msgs::msg::InteractiveMarkerPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_InteractiveMarkerPose_name(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerPose msg_;
};

class Init_InteractiveMarkerPose_header
{
public:
  Init_InteractiveMarkerPose_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InteractiveMarkerPose_pose header(::visualization_msgs::msg::InteractiveMarkerPose::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InteractiveMarkerPose_pose(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::visualization_msgs::msg::InteractiveMarkerPose>()
{
  return visualization_msgs::msg::builder::Init_InteractiveMarkerPose_header();
}

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_POSE__BUILDER_HPP_
