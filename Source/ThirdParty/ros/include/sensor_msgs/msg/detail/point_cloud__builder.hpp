// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/PointCloud.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD__BUILDER_HPP_

#include "sensor_msgs/msg/detail/point_cloud__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_PointCloud_channels
{
public:
  explicit Init_PointCloud_channels(::sensor_msgs::msg::PointCloud & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::PointCloud channels(::sensor_msgs::msg::PointCloud::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::PointCloud msg_;
};

class Init_PointCloud_points
{
public:
  explicit Init_PointCloud_points(::sensor_msgs::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_channels points(::sensor_msgs::msg::PointCloud::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_PointCloud_channels(msg_);
  }

private:
  ::sensor_msgs::msg::PointCloud msg_;
};

class Init_PointCloud_header
{
public:
  Init_PointCloud_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointCloud_points header(::sensor_msgs::msg::PointCloud::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PointCloud_points(msg_);
  }

private:
  ::sensor_msgs::msg::PointCloud msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::PointCloud>()
{
  return sensor_msgs::msg::builder::Init_PointCloud_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD__BUILDER_HPP_
