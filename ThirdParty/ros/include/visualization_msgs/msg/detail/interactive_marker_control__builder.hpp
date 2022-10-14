// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from visualization_msgs:msg/InteractiveMarkerControl.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_CONTROL__BUILDER_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_CONTROL__BUILDER_HPP_

#include "visualization_msgs/msg/detail/interactive_marker_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace visualization_msgs
{

namespace msg
{

namespace builder
{

class Init_InteractiveMarkerControl_description
{
public:
  explicit Init_InteractiveMarkerControl_description(::visualization_msgs::msg::InteractiveMarkerControl & msg)
  : msg_(msg)
  {}
  ::visualization_msgs::msg::InteractiveMarkerControl description(::visualization_msgs::msg::InteractiveMarkerControl::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerControl msg_;
};

class Init_InteractiveMarkerControl_independent_marker_orientation
{
public:
  explicit Init_InteractiveMarkerControl_independent_marker_orientation(::visualization_msgs::msg::InteractiveMarkerControl & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerControl_description independent_marker_orientation(::visualization_msgs::msg::InteractiveMarkerControl::_independent_marker_orientation_type arg)
  {
    msg_.independent_marker_orientation = std::move(arg);
    return Init_InteractiveMarkerControl_description(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerControl msg_;
};

class Init_InteractiveMarkerControl_markers
{
public:
  explicit Init_InteractiveMarkerControl_markers(::visualization_msgs::msg::InteractiveMarkerControl & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerControl_independent_marker_orientation markers(::visualization_msgs::msg::InteractiveMarkerControl::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return Init_InteractiveMarkerControl_independent_marker_orientation(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerControl msg_;
};

class Init_InteractiveMarkerControl_always_visible
{
public:
  explicit Init_InteractiveMarkerControl_always_visible(::visualization_msgs::msg::InteractiveMarkerControl & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerControl_markers always_visible(::visualization_msgs::msg::InteractiveMarkerControl::_always_visible_type arg)
  {
    msg_.always_visible = std::move(arg);
    return Init_InteractiveMarkerControl_markers(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerControl msg_;
};

class Init_InteractiveMarkerControl_interaction_mode
{
public:
  explicit Init_InteractiveMarkerControl_interaction_mode(::visualization_msgs::msg::InteractiveMarkerControl & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerControl_always_visible interaction_mode(::visualization_msgs::msg::InteractiveMarkerControl::_interaction_mode_type arg)
  {
    msg_.interaction_mode = std::move(arg);
    return Init_InteractiveMarkerControl_always_visible(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerControl msg_;
};

class Init_InteractiveMarkerControl_orientation_mode
{
public:
  explicit Init_InteractiveMarkerControl_orientation_mode(::visualization_msgs::msg::InteractiveMarkerControl & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerControl_interaction_mode orientation_mode(::visualization_msgs::msg::InteractiveMarkerControl::_orientation_mode_type arg)
  {
    msg_.orientation_mode = std::move(arg);
    return Init_InteractiveMarkerControl_interaction_mode(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerControl msg_;
};

class Init_InteractiveMarkerControl_orientation
{
public:
  explicit Init_InteractiveMarkerControl_orientation(::visualization_msgs::msg::InteractiveMarkerControl & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerControl_orientation_mode orientation(::visualization_msgs::msg::InteractiveMarkerControl::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_InteractiveMarkerControl_orientation_mode(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerControl msg_;
};

class Init_InteractiveMarkerControl_name
{
public:
  Init_InteractiveMarkerControl_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InteractiveMarkerControl_orientation name(::visualization_msgs::msg::InteractiveMarkerControl::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_InteractiveMarkerControl_orientation(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::visualization_msgs::msg::InteractiveMarkerControl>()
{
  return visualization_msgs::msg::builder::Init_InteractiveMarkerControl_name();
}

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_CONTROL__BUILDER_HPP_
