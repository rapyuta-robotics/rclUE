// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from visualization_msgs:msg/Marker.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__MARKER__BUILDER_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "visualization_msgs/msg/detail/marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace visualization_msgs
{

namespace msg
{

namespace builder
{

class Init_Marker_mesh_use_embedded_materials
{
public:
  explicit Init_Marker_mesh_use_embedded_materials(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  ::visualization_msgs::msg::Marker mesh_use_embedded_materials(::visualization_msgs::msg::Marker::_mesh_use_embedded_materials_type arg)
  {
    msg_.mesh_use_embedded_materials = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_mesh_file
{
public:
  explicit Init_Marker_mesh_file(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_mesh_use_embedded_materials mesh_file(::visualization_msgs::msg::Marker::_mesh_file_type arg)
  {
    msg_.mesh_file = std::move(arg);
    return Init_Marker_mesh_use_embedded_materials(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_mesh_resource
{
public:
  explicit Init_Marker_mesh_resource(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_mesh_file mesh_resource(::visualization_msgs::msg::Marker::_mesh_resource_type arg)
  {
    msg_.mesh_resource = std::move(arg);
    return Init_Marker_mesh_file(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_text
{
public:
  explicit Init_Marker_text(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_mesh_resource text(::visualization_msgs::msg::Marker::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_Marker_mesh_resource(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_uv_coordinates
{
public:
  explicit Init_Marker_uv_coordinates(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_text uv_coordinates(::visualization_msgs::msg::Marker::_uv_coordinates_type arg)
  {
    msg_.uv_coordinates = std::move(arg);
    return Init_Marker_text(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_texture
{
public:
  explicit Init_Marker_texture(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_uv_coordinates texture(::visualization_msgs::msg::Marker::_texture_type arg)
  {
    msg_.texture = std::move(arg);
    return Init_Marker_uv_coordinates(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_texture_resource
{
public:
  explicit Init_Marker_texture_resource(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_texture texture_resource(::visualization_msgs::msg::Marker::_texture_resource_type arg)
  {
    msg_.texture_resource = std::move(arg);
    return Init_Marker_texture(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_colors
{
public:
  explicit Init_Marker_colors(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_texture_resource colors(::visualization_msgs::msg::Marker::_colors_type arg)
  {
    msg_.colors = std::move(arg);
    return Init_Marker_texture_resource(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_points
{
public:
  explicit Init_Marker_points(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_colors points(::visualization_msgs::msg::Marker::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_Marker_colors(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_frame_locked
{
public:
  explicit Init_Marker_frame_locked(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_points frame_locked(::visualization_msgs::msg::Marker::_frame_locked_type arg)
  {
    msg_.frame_locked = std::move(arg);
    return Init_Marker_points(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_lifetime
{
public:
  explicit Init_Marker_lifetime(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_frame_locked lifetime(::visualization_msgs::msg::Marker::_lifetime_type arg)
  {
    msg_.lifetime = std::move(arg);
    return Init_Marker_frame_locked(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_color
{
public:
  explicit Init_Marker_color(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_lifetime color(::visualization_msgs::msg::Marker::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_Marker_lifetime(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_scale
{
public:
  explicit Init_Marker_scale(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_color scale(::visualization_msgs::msg::Marker::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_Marker_color(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_pose
{
public:
  explicit Init_Marker_pose(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_scale pose(::visualization_msgs::msg::Marker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Marker_scale(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_action
{
public:
  explicit Init_Marker_action(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_pose action(::visualization_msgs::msg::Marker::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_Marker_pose(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_type
{
public:
  explicit Init_Marker_type(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_action type(::visualization_msgs::msg::Marker::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Marker_action(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_id
{
public:
  explicit Init_Marker_id(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_type id(::visualization_msgs::msg::Marker::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Marker_type(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_ns
{
public:
  explicit Init_Marker_ns(::visualization_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_id ns(::visualization_msgs::msg::Marker::_ns_type arg)
  {
    msg_.ns = std::move(arg);
    return Init_Marker_id(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

class Init_Marker_header
{
public:
  Init_Marker_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Marker_ns header(::visualization_msgs::msg::Marker::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Marker_ns(msg_);
  }

private:
  ::visualization_msgs::msg::Marker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::visualization_msgs::msg::Marker>()
{
  return visualization_msgs::msg::builder::Init_Marker_header();
}

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__MARKER__BUILDER_HPP_
