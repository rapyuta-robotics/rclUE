// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from visualization_msgs:msg/InteractiveMarkerUpdate.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_UPDATE__BUILDER_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_UPDATE__BUILDER_HPP_

#include "visualization_msgs/msg/detail/interactive_marker_update__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace visualization_msgs
{

namespace msg
{

namespace builder
{

class Init_InteractiveMarkerUpdate_erases
{
public:
  explicit Init_InteractiveMarkerUpdate_erases(::visualization_msgs::msg::InteractiveMarkerUpdate & msg)
  : msg_(msg)
  {}
  ::visualization_msgs::msg::InteractiveMarkerUpdate erases(::visualization_msgs::msg::InteractiveMarkerUpdate::_erases_type arg)
  {
    msg_.erases = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerUpdate msg_;
};

class Init_InteractiveMarkerUpdate_poses
{
public:
  explicit Init_InteractiveMarkerUpdate_poses(::visualization_msgs::msg::InteractiveMarkerUpdate & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerUpdate_erases poses(::visualization_msgs::msg::InteractiveMarkerUpdate::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_InteractiveMarkerUpdate_erases(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerUpdate msg_;
};

class Init_InteractiveMarkerUpdate_markers
{
public:
  explicit Init_InteractiveMarkerUpdate_markers(::visualization_msgs::msg::InteractiveMarkerUpdate & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerUpdate_poses markers(::visualization_msgs::msg::InteractiveMarkerUpdate::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return Init_InteractiveMarkerUpdate_poses(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerUpdate msg_;
};

class Init_InteractiveMarkerUpdate_type
{
public:
  explicit Init_InteractiveMarkerUpdate_type(::visualization_msgs::msg::InteractiveMarkerUpdate & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerUpdate_markers type(::visualization_msgs::msg::InteractiveMarkerUpdate::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_InteractiveMarkerUpdate_markers(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerUpdate msg_;
};

class Init_InteractiveMarkerUpdate_seq_num
{
public:
  explicit Init_InteractiveMarkerUpdate_seq_num(::visualization_msgs::msg::InteractiveMarkerUpdate & msg)
  : msg_(msg)
  {}
  Init_InteractiveMarkerUpdate_type seq_num(::visualization_msgs::msg::InteractiveMarkerUpdate::_seq_num_type arg)
  {
    msg_.seq_num = std::move(arg);
    return Init_InteractiveMarkerUpdate_type(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerUpdate msg_;
};

class Init_InteractiveMarkerUpdate_server_id
{
public:
  Init_InteractiveMarkerUpdate_server_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InteractiveMarkerUpdate_seq_num server_id(::visualization_msgs::msg::InteractiveMarkerUpdate::_server_id_type arg)
  {
    msg_.server_id = std::move(arg);
    return Init_InteractiveMarkerUpdate_seq_num(msg_);
  }

private:
  ::visualization_msgs::msg::InteractiveMarkerUpdate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::visualization_msgs::msg::InteractiveMarkerUpdate>()
{
  return visualization_msgs::msg::builder::Init_InteractiveMarkerUpdate_server_id();
}

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_UPDATE__BUILDER_HPP_
