// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/CompressedImage.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__COMPRESSED_IMAGE__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__COMPRESSED_IMAGE__BUILDER_HPP_

#include "sensor_msgs/msg/detail/compressed_image__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_CompressedImage_data
{
public:
  explicit Init_CompressedImage_data(::sensor_msgs::msg::CompressedImage & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::CompressedImage data(::sensor_msgs::msg::CompressedImage::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::CompressedImage msg_;
};

class Init_CompressedImage_format
{
public:
  explicit Init_CompressedImage_format(::sensor_msgs::msg::CompressedImage & msg)
  : msg_(msg)
  {}
  Init_CompressedImage_data format(::sensor_msgs::msg::CompressedImage::_format_type arg)
  {
    msg_.format = std::move(arg);
    return Init_CompressedImage_data(msg_);
  }

private:
  ::sensor_msgs::msg::CompressedImage msg_;
};

class Init_CompressedImage_header
{
public:
  Init_CompressedImage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompressedImage_format header(::sensor_msgs::msg::CompressedImage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CompressedImage_format(msg_);
  }

private:
  ::sensor_msgs::msg::CompressedImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::CompressedImage>()
{
  return sensor_msgs::msg::builder::Init_CompressedImage_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__COMPRESSED_IMAGE__BUILDER_HPP_
