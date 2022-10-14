// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from visualization_msgs:msg/InteractiveMarkerInit.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_INIT__BUILDER_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_INIT__BUILDER_HPP_

#include "visualization_msgs/msg/detail/interactive_marker_init__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace visualization_msgs
{

namespace msg
{

namespace builder
{

class Init_InteractiveMarkerInit_markers
{
public:
  explicit Init_InteractiveMarkerInit_markers(::visualization_msgs::msg::InteractiveMarkerInit & msg)
  : msg_(msg)
  {}
  ::visualization_msgs::msg::InteractiveMarkerInit markers(::visualization_msgs::msg::InteractiveMarkerInit::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerInit msg_;
};

class Init_InteractiveMarkerInit_seq_num
{
public:
  explicit Init_InteractiveMarkerInit_seq_num(::visualization_msgs::msg::InteractiveMarkerInit & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerInit_markers seq_num(::visualization_msgs::msg::InteractiveMarkerInit::_seq_num_type arg)
  {
    msg_.seq_num = std::move(arg);
    return Init_InteractiveMarkerInit_markers(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerInit msg_;
};

class Init_InteractiveMarkerInit_server_id
{
public:
  Init_InteractiveMarkerInit_server_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InteractiveMarkerInit_seq_num server_id(::visualization_msgs::msg::InteractiveMarkerInit::_server_id_type arg)
  {
    msg_.server_id = std::move(arg);
    return Init_InteractiveMarkerInit_seq_num(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerInit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::visualization_msgs::msg::InteractiveMarkerInit>()
{
  return visualization_msgs::msg::builder::Init_InteractiveMarkerInit_server_id();
}

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_INIT__BUILDER_HPP_
