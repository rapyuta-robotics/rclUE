// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from visualization_msgs:msg/ImageMarker.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__IMAGE_MARKER__BUILDER_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__IMAGE_MARKER__BUILDER_HPP_

#include "visualization_msgs/msg/detail/image_marker__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace visualization_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageMarker_outline_colors
{
public:
  explicit Init_ImageMarker_outline_colors(::visualization_msgs::msg::ImageMarker & msg)
  : msg_(msg)
  {}
  ::visualization_msgs::msg::ImageMarker outline_colors(::visualization_msgs::msg::ImageMarker::_outline_colors_type arg)
  {
    msg_.outline_colors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visualization_msgs::msg::ImageMarker msg_;
};

class Init_ImageMarker_points
{
public:
  explicit Init_ImageMarker_points(::visualization_msgs::msg::ImageMarker & msg)
  : msg_(msg)
  {}
  Init_ImageMarker_outline_colors points(::visualization_msgs::msg::ImageMarker::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_ImageMarker_outline_colors(msg_);
  }

private:
  ::visualization_msgs::msg::ImageMarker msg_;
};

class Init_ImageMarker_lifetime
{
public:
  explicit Init_ImageMarker_lifetime(::visualization_msgs::msg::ImageMarker & msg)
  : msg_(msg)
  {}
  Init_ImageMarker_points lifetime(::visualization_msgs::msg::ImageMarker::_lifetime_type arg)
  {
    msg_.lifetime = std::move(arg);
    return Init_ImageMarker_points(msg_);
  }

private:
  ::visualization_msgs::msg::ImageMarker msg_;
};

class Init_ImageMarker_fill_color
{
public:
  explicit Init_ImageMarker_fill_color(::visualization_msgs::msg::ImageMarker & msg)
  : msg_(msg)
  {}
  Init_ImageMarker_lifetime fill_color(::visualization_msgs::msg::ImageMarker::_fill_color_type arg)
  {
    msg_.fill_color = std::move(arg);
    return Init_ImageMarker_lifetime(msg_);
  }

private:
  ::visualization_msgs::msg::ImageMarker msg_;
};

class Init_ImageMarker_filled
{
public:
  explicit Init_ImageMarker_filled(::visualization_msgs::msg::ImageMarker & msg)
  : msg_(msg)
  {}
  Init_ImageMarker_fill_color filled(::visualization_msgs::msg::ImageMarker::_filled_type arg)
  {
    msg_.filled = std::move(arg);
    return Init_ImageMarker_fill_color(msg_);
  }

private:
  ::visualization_msgs::msg::ImageMarker msg_;
};

class Init_ImageMarker_outline_color
{
public:
  explicit Init_ImageMarker_outline_color(::visualization_msgs::msg::ImageMarker & msg)
  : msg_(msg)
  {}
  Init_ImageMarker_filled outline_color(::visualization_msgs::msg::ImageMarker::_outline_color_type arg)
  {
    msg_.outline_color = std::move(arg);
    return Init_ImageMarker_filled(msg_);
  }

private:
  ::visualization_msgs::msg::ImageMarker msg_;
};

class Init_ImageMarker_scale
{
public:
  explicit Init_ImageMarker_scale(::visualization_msgs::msg::ImageMarker & msg)
  : msg_(msg)
  {}
  Init_ImageMarker_outline_color scale(::visualization_msgs::msg::ImageMarker::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_ImageMarker_outline_color(msg_);
  }

private:
  ::visualization_msgs::msg::ImageMarker msg_;
};

class Init_ImageMarker_position
{
public:
  explicit Init_ImageMarker_position(::visualization_msgs::msg::ImageMarker & msg)
  : msg_(msg)
  {}
  Init_ImageMarker_scale position(::visualization_msgs::msg::ImageMarker::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ImageMarker_scale(msg_);
  }

private:
  ::visualization_msgs::msg::ImageMarker msg_;
};

class Init_ImageMarker_action
{
public:
  explicit Init_ImageMarker_action(::visualization_msgs::msg::ImageMarker & msg)
  : msg_(msg)
  {}
  Init_ImageMarker_position action(::visualization_msgs::msg::ImageMarker::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_ImageMarker_position(msg_);
  }

private:
  ::visualization_msgs::msg::ImageMarker msg_;
};

class Init_ImageMarker_type
{
public:
  explicit Init_ImageMarker_type(::visualization_msgs::msg::ImageMarker & msg)
  : msg_(msg)
  {}
  Init_ImageMarker_action type(::visualization_msgs::msg::ImageMarker::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ImageMarker_action(msg_);
  }

private:
  ::visualization_msgs::msg::ImageMarker msg_;
};

class Init_ImageMarker_id
{
public:
  explicit Init_ImageMarker_id(::visualization_msgs::msg::ImageMarker & msg)
  : msg_(msg)
  {}
  Init_ImageMarker_type id(::visualization_msgs::msg::ImageMarker::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ImageMarker_type(msg_);
  }

private:
  ::visualization_msgs::msg::ImageMarker msg_;
};

class Init_ImageMarker_ns
{
public:
  explicit Init_ImageMarker_ns(::visualization_msgs::msg::ImageMarker & msg)
  : msg_(msg)
  {}
  Init_ImageMarker_id ns(::visualization_msgs::msg::ImageMarker::_ns_type arg)
  {
    msg_.ns = std::move(arg);
    return Init_ImageMarker_id(msg_);
  }

private:
  ::visualization_msgs::msg::ImageMarker msg_;
};

class Init_ImageMarker_header
{
public:
  Init_ImageMarker_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageMarker_ns header(::visualization_msgs::msg::ImageMarker::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ImageMarker_ns(msg_);
  }

private:
  ::visualization_msgs::msg::ImageMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::visualization_msgs::msg::ImageMarker>()
{
  return visualization_msgs::msg::builder::Init_ImageMarker_header();
}

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__IMAGE_MARKER__BUILDER_HPP_
