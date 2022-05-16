// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__IMAGE__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__IMAGE__BUILDER_HPP_

#include "sensor_msgs/msg/detail/image__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_Image_data
{
public:
  explicit Init_Image_data(::sensor_msgs::msg::Image & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::Image data(::sensor_msgs::msg::Image::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::Image msg_;
};

class Init_Image_step
{
public:
  explicit Init_Image_step(::sensor_msgs::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_data step(::sensor_msgs::msg::Image::_step_type arg)
  {
    msg_.step = std::move(arg);
    return Init_Image_data(msg_);
  }

private:
  ::sensor_msgs::msg::Image msg_;
};

class Init_Image_is_bigendian
{
public:
  explicit Init_Image_is_bigendian(::sensor_msgs::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_step is_bigendian(::sensor_msgs::msg::Image::_is_bigendian_type arg)
  {
    msg_.is_bigendian = std::move(arg);
    return Init_Image_step(msg_);
  }

private:
  ::sensor_msgs::msg::Image msg_;
};

class Init_Image_encoding
{
public:
  explicit Init_Image_encoding(::sensor_msgs::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_is_bigendian encoding(::sensor_msgs::msg::Image::_encoding_type arg)
  {
    msg_.encoding = std::move(arg);
    return Init_Image_is_bigendian(msg_);
  }

private:
  ::sensor_msgs::msg::Image msg_;
};

class Init_Image_width
{
public:
  explicit Init_Image_width(::sensor_msgs::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_encoding width(::sensor_msgs::msg::Image::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Image_encoding(msg_);
  }

private:
  ::sensor_msgs::msg::Image msg_;
};

class Init_Image_height
{
public:
  explicit Init_Image_height(::sensor_msgs::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_width height(::sensor_msgs::msg::Image::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Image_width(msg_);
  }

private:
  ::sensor_msgs::msg::Image msg_;
};

class Init_Image_header
{
public:
  Init_Image_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Image_height header(::sensor_msgs::msg::Image::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Image_height(msg_);
  }

private:
  ::sensor_msgs::msg::Image msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::Image>()
{
  return sensor_msgs::msg::builder::Init_Image_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__IMAGE__BUILDER_HPP_
