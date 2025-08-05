// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shape_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__MESH__BUILDER_HPP_
#define SHAPE_MSGS__MSG__DETAIL__MESH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "shape_msgs/msg/detail/mesh__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace shape_msgs
{

namespace msg
{

namespace builder
{

class Init_Mesh_vertices
{
public:
  explicit Init_Mesh_vertices(::shape_msgs::msg::Mesh & msg)
  : msg_(msg)
  {}
  ::shape_msgs::msg::Mesh vertices(::shape_msgs::msg::Mesh::_vertices_type arg)
  {
    msg_.vertices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shape_msgs::msg::Mesh msg_;
};

class Init_Mesh_triangles
{
public:
  Init_Mesh_triangles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mesh_vertices triangles(::shape_msgs::msg::Mesh::_triangles_type arg)
  {
    msg_.triangles = std::move(arg);
    return Init_Mesh_vertices(msg_);
  }

private:
  ::shape_msgs::msg::Mesh msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::shape_msgs::msg::Mesh>()
{
  return shape_msgs::msg::builder::Init_Mesh_triangles();
}

}  // namespace shape_msgs

#endif  // SHAPE_MSGS__MSG__DETAIL__MESH__BUILDER_HPP_
