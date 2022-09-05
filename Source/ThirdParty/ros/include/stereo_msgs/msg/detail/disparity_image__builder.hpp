// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stereo_msgs:msg/DisparityImage.idl
// generated code does not contain a copyright notice

#ifndef STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__BUILDER_HPP_
#define STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__BUILDER_HPP_

#include "stereo_msgs/msg/detail/disparity_image__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace stereo_msgs
{

namespace msg
{

namespace builder
{

class Init_DisparityImage_delta_d
{
public:
  explicit Init_DisparityImage_delta_d(::stereo_msgs::msg::DisparityImage & msg)
  : msg_(msg)
  {}
  ::stereo_msgs::msg::DisparityImage delta_d(::stereo_msgs::msg::DisparityImage::_delta_d_type arg)
  {
    msg_.delta_d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stereo_msgs::msg::DisparityImage msg_;
};

class Init_DisparityImage_max_disparity
{
public:
  explicit Init_DisparityImage_max_disparity(::stereo_msgs::msg::DisparityImage & msg)
  : msg_(msg)
  {}
  Init_DisparityImage_delta_d max_disparity(::stereo_msgs::msg::DisparityImage::_max_disparity_type arg)
  {
    msg_.max_disparity = std::move(arg);
    return Init_DisparityImage_delta_d(msg_);
  }

private:
  ::stereo_msgs::msg::DisparityImage msg_;
};

class Init_DisparityImage_min_disparity
{
public:
  explicit Init_DisparityImage_min_disparity(::stereo_msgs::msg::DisparityImage & msg)
  : msg_(msg)
  {}
  Init_DisparityImage_max_disparity min_disparity(::stereo_msgs::msg::DisparityImage::_min_disparity_type arg)
  {
    msg_.min_disparity = std::move(arg);
    return Init_DisparityImage_max_disparity(msg_);
  }

private:
  ::stereo_msgs::msg::DisparityImage msg_;
};

class Init_DisparityImage_valid_window
{
public:
  explicit Init_DisparityImage_valid_window(::stereo_msgs::msg::DisparityImage & msg)
  : msg_(msg)
  {}
  Init_DisparityImage_min_disparity valid_window(::stereo_msgs::msg::DisparityImage::_valid_window_type arg)
  {
    msg_.valid_window = std::move(arg);
    return Init_DisparityImage_min_disparity(msg_);
  }

private:
  ::stereo_msgs::msg::DisparityImage msg_;
};

class Init_DisparityImage_t
{
public:
  explicit Init_DisparityImage_t(::stereo_msgs::msg::DisparityImage & msg)
  : msg_(msg)
  {}
  Init_DisparityImage_valid_window t(::stereo_msgs::msg::DisparityImage::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_DisparityImage_valid_window(msg_);
  }

private:
  ::stereo_msgs::msg::DisparityImage msg_;
};

class Init_DisparityImage_f
{
public:
  explicit Init_DisparityImage_f(::stereo_msgs::msg::DisparityImage & msg)
  : msg_(msg)
  {}
  Init_DisparityImage_t f(::stereo_msgs::msg::DisparityImage::_f_type arg)
  {
    msg_.f = std::move(arg);
    return Init_DisparityImage_t(msg_);
  }

private:
  ::stereo_msgs::msg::DisparityImage msg_;
};

class Init_DisparityImage_image
{
public:
  explicit Init_DisparityImage_image(::stereo_msgs::msg::DisparityImage & msg)
  : msg_(msg)
  {}
  Init_DisparityImage_f image(::stereo_msgs::msg::DisparityImage::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_DisparityImage_f(msg_);
  }

private:
  ::stereo_msgs::msg::DisparityImage msg_;
};

class Init_DisparityImage_header
{
public:
  Init_DisparityImage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DisparityImage_image header(::stereo_msgs::msg::DisparityImage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DisparityImage_image(msg_);
  }

private:
  ::stereo_msgs::msg::DisparityImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stereo_msgs::msg::DisparityImage>()
{
  return stereo_msgs::msg::builder::Init_DisparityImage_header();
}

}  // namespace stereo_msgs

#endif  // STEREO_MSGS__MSG__DETAIL__DISPARITY_IMAGE__BUILDER_HPP_
