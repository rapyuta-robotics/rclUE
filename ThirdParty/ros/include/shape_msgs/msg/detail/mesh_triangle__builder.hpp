// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shape_msgs:msg/MeshTriangle.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__BUILDER_HPP_
#define SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__BUILDER_HPP_

#include "shape_msgs/msg/detail/mesh_triangle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace shape_msgs
{

namespace msg
{

namespace builder
{

class Init_MeshTriangle_vertex_indices
{
public:
  Init_MeshTriangle_vertex_indices()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::shape_msgs::msg::MeshTriangle vertex_indices(::shape_msgs::msg::MeshTriangle::_vertex_indices_type arg)
  {
    msg_.vertex_indices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shape_msgs::msg::MeshTriangle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::shape_msgs::msg::MeshTriangle>()
{
  return shape_msgs::msg::builder::Init_MeshTriangle_vertex_indices();
}

}  // namespace shape_msgs

#endif  // SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__BUILDER_HPP_
