// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from visualization_msgs:msg/InteractiveMarker.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER__BUILDER_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER__BUILDER_HPP_

#include "visualization_msgs/msg/detail/interactive_marker__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace visualization_msgs
{

namespace msg
{

namespace builder
{

class Init_InteractiveMarker_controls
{
public:
  explicit Init_InteractiveMarker_controls(::visualization_msgs::msg::InteractiveMarker & msg)
  : msg_(msg)
  {}
  ::visualization_msgs::msg::InteractiveMarker controls(::visualization_msgs::msg::InteractiveMarker::_controls_type arg)
  {
    msg_.controls = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarker msg_;
};

class Init_InteractiveMarker_menu_entries
{
public:
  explicit Init_InteractiveMarker_menu_entries(::visualization_msgs::msg::InteractiveMarker & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarker_controls menu_entries(::visualization_msgs::msg::InteractiveMarker::_menu_entries_type arg)
  {
    msg_.menu_entries = std::move(arg);
    return Init_InteractiveMarker_controls(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarker msg_;
};

class Init_InteractiveMarker_scale
{
public:
  explicit Init_InteractiveMarker_scale(::visualization_msgs::msg::InteractiveMarker & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarker_menu_entries scale(::visualization_msgs::msg::InteractiveMarker::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_InteractiveMarker_menu_entries(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarker msg_;
};

class Init_InteractiveMarker_description
{
public:
  explicit Init_InteractiveMarker_description(::visualization_msgs::msg::InteractiveMarker & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarker_scale description(::visualization_msgs::msg::InteractiveMarker::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_InteractiveMarker_scale(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarker msg_;
};

class Init_InteractiveMarker_name
{
public:
  explicit Init_InteractiveMarker_name(::visualization_msgs::msg::InteractiveMarker & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarker_description name(::visualization_msgs::msg::InteractiveMarker::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_InteractiveMarker_description(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarker msg_;
};

class Init_InteractiveMarker_pose
{
public:
  explicit Init_InteractiveMarker_pose(::visualization_msgs::msg::InteractiveMarker & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarker_name pose(::visualization_msgs::msg::InteractiveMarker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_InteractiveMarker_name(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarker msg_;
};

class Init_InteractiveMarker_header
{
public:
  Init_InteractiveMarker_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InteractiveMarker_pose header(::visualization_msgs::msg::InteractiveMarker::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InteractiveMarker_pose(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::visualization_msgs::msg::InteractiveMarker>()
{
  return visualization_msgs::msg::builder::Init_InteractiveMarker_header();
}

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER__BUILDER_HPP_
