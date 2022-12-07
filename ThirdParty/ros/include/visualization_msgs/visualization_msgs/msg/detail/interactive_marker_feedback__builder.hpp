// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from visualization_msgs:msg/InteractiveMarkerFeedback.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_FEEDBACK__BUILDER_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "visualization_msgs/msg/detail/interactive_marker_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace visualization_msgs
{

namespace msg
{

namespace builder
{

class Init_InteractiveMarkerFeedback_mouse_point_valid
{
public:
  explicit Init_InteractiveMarkerFeedback_mouse_point_valid(::visualization_msgs::msg::InteractiveMarkerFeedback & msg)
  : msg_(msg)
  {}
  ::visualization_msgs::msg::InteractiveMarkerFeedback mouse_point_valid(::visualization_msgs::msg::InteractiveMarkerFeedback::_mouse_point_valid_type arg)
  {
    msg_.mouse_point_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerFeedback msg_;
};

class Init_InteractiveMarkerFeedback_mouse_point
{
public:
  explicit Init_InteractiveMarkerFeedback_mouse_point(::visualization_msgs::msg::InteractiveMarkerFeedback & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerFeedback_mouse_point_valid mouse_point(::visualization_msgs::msg::InteractiveMarkerFeedback::_mouse_point_type arg)
  {
    msg_.mouse_point = std::move(arg);
    return Init_InteractiveMarkerFeedback_mouse_point_valid(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerFeedback msg_;
};

class Init_InteractiveMarkerFeedback_menu_entry_id
{
public:
  explicit Init_InteractiveMarkerFeedback_menu_entry_id(::visualization_msgs::msg::InteractiveMarkerFeedback & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerFeedback_mouse_point menu_entry_id(::visualization_msgs::msg::InteractiveMarkerFeedback::_menu_entry_id_type arg)
  {
    msg_.menu_entry_id = std::move(arg);
    return Init_InteractiveMarkerFeedback_mouse_point(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerFeedback msg_;
};

class Init_InteractiveMarkerFeedback_pose
{
public:
  explicit Init_InteractiveMarkerFeedback_pose(::visualization_msgs::msg::InteractiveMarkerFeedback & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerFeedback_menu_entry_id pose(::visualization_msgs::msg::InteractiveMarkerFeedback::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_InteractiveMarkerFeedback_menu_entry_id(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerFeedback msg_;
};

class Init_InteractiveMarkerFeedback_event_type
{
public:
  explicit Init_InteractiveMarkerFeedback_event_type(::visualization_msgs::msg::InteractiveMarkerFeedback & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerFeedback_pose event_type(::visualization_msgs::msg::InteractiveMarkerFeedback::_event_type_type arg)
  {
    msg_.event_type = std::move(arg);
    return Init_InteractiveMarkerFeedback_pose(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerFeedback msg_;
};

class Init_InteractiveMarkerFeedback_control_name
{
public:
  explicit Init_InteractiveMarkerFeedback_control_name(::visualization_msgs::msg::InteractiveMarkerFeedback & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerFeedback_event_type control_name(::visualization_msgs::msg::InteractiveMarkerFeedback::_control_name_type arg)
  {
    msg_.control_name = std::move(arg);
    return Init_InteractiveMarkerFeedback_event_type(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerFeedback msg_;
};

class Init_InteractiveMarkerFeedback_marker_name
{
public:
  explicit Init_InteractiveMarkerFeedback_marker_name(::visualization_msgs::msg::InteractiveMarkerFeedback & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerFeedback_control_name marker_name(::visualization_msgs::msg::InteractiveMarkerFeedback::_marker_name_type arg)
  {
    msg_.marker_name = std::move(arg);
    return Init_InteractiveMarkerFeedback_control_name(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerFeedback msg_;
};

class Init_InteractiveMarkerFeedback_client_id
{
public:
  explicit Init_InteractiveMarkerFeedback_client_id(::visualization_msgs::msg::InteractiveMarkerFeedback & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerFeedback_marker_name client_id(::visualization_msgs::msg::InteractiveMarkerFeedback::_client_id_type arg)
  {
    msg_.client_id = std::move(arg);
    return Init_InteractiveMarkerFeedback_marker_name(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerFeedback msg_;
};

class Init_InteractiveMarkerFeedback_header
{
public:
  Init_InteractiveMarkerFeedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InteractiveMarkerFeedback_client_id header(::visualization_msgs::msg::InteractiveMarkerFeedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InteractiveMarkerFeedback_client_id(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::visualization_msgs::msg::InteractiveMarkerFeedback>()
{
  return visualization_msgs::msg::builder::Init_InteractiveMarkerFeedback_header();
}

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_FEEDBACK__BUILDER_HPP_
