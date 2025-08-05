// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pcl_msgs:msg/PolygonMesh.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__POLYGON_MESH__BUILDER_HPP_
#define PCL_MSGS__MSG__DETAIL__POLYGON_MESH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pcl_msgs/msg/detail/polygon_mesh__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pcl_msgs
{

namespace msg
{

namespace builder
{

class Init_PolygonMesh_polygons
{
public:
  explicit Init_PolygonMesh_polygons(::pcl_msgs::msg::PolygonMesh & msg)
  : msg_(msg)
  {}
  ::pcl_msgs::msg::PolygonMesh polygons(::pcl_msgs::msg::PolygonMesh::_polygons_type arg)
  {
    msg_.polygons = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pcl_msgs::msg::PolygonMesh msg_;
};

class Init_PolygonMesh_cloud
{
public:
  explicit Init_PolygonMesh_cloud(::pcl_msgs::msg::PolygonMesh & msg)
  : msg_(msg)
  {}
  Init_PolygonMesh_polygons cloud(::pcl_msgs::msg::PolygonMesh::_cloud_type arg)
  {
    msg_.cloud = std::move(arg);
    return Init_PolygonMesh_polygons(msg_);
  }

private:
  ::pcl_msgs::msg::PolygonMesh msg_;
};

class Init_PolygonMesh_header
{
public:
  Init_PolygonMesh_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PolygonMesh_cloud header(::pcl_msgs::msg::PolygonMesh::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PolygonMesh_cloud(msg_);
  }

private:
  ::pcl_msgs::msg::PolygonMesh msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pcl_msgs::msg::PolygonMesh>()
{
  return pcl_msgs::msg::builder::Init_PolygonMesh_header();
}

}  // namespace pcl_msgs

#endif  // PCL_MSGS__MSG__DETAIL__POLYGON_MESH__BUILDER_HPP_
