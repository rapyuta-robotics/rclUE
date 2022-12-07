// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/PointCloud2.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD2__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_PointCloud2_is_dense
{
public:
  explicit Init_PointCloud2_is_dense(::sensor_msgs::msg::PointCloud2 & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::PointCloud2 is_dense(::sensor_msgs::msg::PointCloud2::_is_dense_type arg)
  {
    msg_.is_dense = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::PointCloud2 msg_;
};

class Init_PointCloud2_data
{
public:
  explicit Init_PointCloud2_data(::sensor_msgs::msg::PointCloud2 & msg)
  : msg_(msg)
  {}
  Init_PointCloud2_is_dense data(::sensor_msgs::msg::PointCloud2::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_PointCloud2_is_dense(msg_);
  }

private:
  ::sensor_msgs::msg::PointCloud2 msg_;
};

class Init_PointCloud2_row_step
{
public:
  explicit Init_PointCloud2_row_step(::sensor_msgs::msg::PointCloud2 & msg)
  : msg_(msg)
  {}
  Init_PointCloud2_data row_step(::sensor_msgs::msg::PointCloud2::_row_step_type arg)
  {
    msg_.row_step = std::move(arg);
    return Init_PointCloud2_data(msg_);
  }

private:
  ::sensor_msgs::msg::PointCloud2 msg_;
};

class Init_PointCloud2_point_step
{
public:
  explicit Init_PointCloud2_point_step(::sensor_msgs::msg::PointCloud2 & msg)
  : msg_(msg)
  {}
  Init_PointCloud2_row_step point_step(::sensor_msgs::msg::PointCloud2::_point_step_type arg)
  {
    msg_.point_step = std::move(arg);
    return Init_PointCloud2_row_step(msg_);
  }

private:
  ::sensor_msgs::msg::PointCloud2 msg_;
};

class Init_PointCloud2_is_bigendian
{
public:
  explicit Init_PointCloud2_is_bigendian(::sensor_msgs::msg::PointCloud2 & msg)
  : msg_(msg)
  {}
  Init_PointCloud2_point_step is_bigendian(::sensor_msgs::msg::PointCloud2::_is_bigendian_type arg)
  {
    msg_.is_bigendian = std::move(arg);
    return Init_PointCloud2_point_step(msg_);
  }

private:
  ::sensor_msgs::msg::PointCloud2 msg_;
};

class Init_PointCloud2_fields
{
public:
  explicit Init_PointCloud2_fields(::sensor_msgs::msg::PointCloud2 & msg)
  : msg_(msg)
  {}
  Init_PointCloud2_is_bigendian fields(::sensor_msgs::msg::PointCloud2::_fields_type arg)
  {
    msg_.fields = std::move(arg);
    return Init_PointCloud2_is_bigendian(msg_);
  }

private:
  ::sensor_msgs::msg::PointCloud2 msg_;
};

class Init_PointCloud2_width
{
public:
  explicit Init_PointCloud2_width(::sensor_msgs::msg::PointCloud2 & msg)
  : msg_(msg)
  {}
  Init_PointCloud2_fields width(::sensor_msgs::msg::PointCloud2::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_PointCloud2_fields(msg_);
  }

private:
  ::sensor_msgs::msg::PointCloud2 msg_;
};

class Init_PointCloud2_height
{
public:
  explicit Init_PointCloud2_height(::sensor_msgs::msg::PointCloud2 & msg)
  : msg_(msg)
  {}
  Init_PointCloud2_width height(::sensor_msgs::msg::PointCloud2::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_PointCloud2_width(msg_);
  }

private:
  ::sensor_msgs::msg::PointCloud2 msg_;
};

class Init_PointCloud2_header
{
public:
  Init_PointCloud2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointCloud2_height header(::sensor_msgs::msg::PointCloud2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PointCloud2_height(msg_);
  }

private:
  ::sensor_msgs::msg::PointCloud2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::PointCloud2>()
{
  return sensor_msgs::msg::builder::Init_PointCloud2_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__POINT_CLOUD2__BUILDER_HPP_
