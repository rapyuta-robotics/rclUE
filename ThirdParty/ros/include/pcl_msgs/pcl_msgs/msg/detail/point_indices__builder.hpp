// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pcl_msgs:msg/PointIndices.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__POINT_INDICES__BUILDER_HPP_
#define PCL_MSGS__MSG__DETAIL__POINT_INDICES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pcl_msgs/msg/detail/point_indices__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pcl_msgs
{

namespace msg
{

namespace builder
{

class Init_PointIndices_indices
{
public:
  explicit Init_PointIndices_indices(::pcl_msgs::msg::PointIndices & msg)
  : msg_(msg)
  {}
  ::pcl_msgs::msg::PointIndices indices(::pcl_msgs::msg::PointIndices::_indices_type arg)
  {
    msg_.indices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pcl_msgs::msg::PointIndices msg_;
};

class Init_PointIndices_header
{
public:
  Init_PointIndices_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointIndices_indices header(::pcl_msgs::msg::PointIndices::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PointIndices_indices(msg_);
  }

private:
  ::pcl_msgs::msg::PointIndices msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pcl_msgs::msg::PointIndices>()
{
  return pcl_msgs::msg::builder::Init_PointIndices_header();
}

}  // namespace pcl_msgs

#endif  // PCL_MSGS__MSG__DETAIL__POINT_INDICES__BUILDER_HPP_
