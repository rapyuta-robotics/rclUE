// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pcl_msgs:msg/Vertices.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__VERTICES__BUILDER_HPP_
#define PCL_MSGS__MSG__DETAIL__VERTICES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pcl_msgs/msg/detail/vertices__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pcl_msgs
{

namespace msg
{

namespace builder
{

class Init_Vertices_vertices
{
public:
  Init_Vertices_vertices()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pcl_msgs::msg::Vertices vertices(::pcl_msgs::msg::Vertices::_vertices_type arg)
  {
    msg_.vertices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pcl_msgs::msg::Vertices msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pcl_msgs::msg::Vertices>()
{
  return pcl_msgs::msg::builder::Init_Vertices_vertices();
}

}  // namespace pcl_msgs

#endif  // PCL_MSGS__MSG__DETAIL__VERTICES__BUILDER_HPP_
