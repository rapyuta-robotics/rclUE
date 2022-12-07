// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/CameraInfo.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__CAMERA_INFO__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__CAMERA_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_msgs/msg/detail/camera_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraInfo_roi
{
public:
  explicit Init_CameraInfo_roi(::sensor_msgs::msg::CameraInfo & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::CameraInfo roi(::sensor_msgs::msg::CameraInfo::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::CameraInfo msg_;
};

class Init_CameraInfo_binning_y
{
public:
  explicit Init_CameraInfo_binning_y(::sensor_msgs::msg::CameraInfo & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_roi binning_y(::sensor_msgs::msg::CameraInfo::_binning_y_type arg)
  {
    msg_.binning_y = std::move(arg);
    return Init_CameraInfo_roi(msg_);
  }

private:
  ::sensor_msgs::msg::CameraInfo msg_;
};

class Init_CameraInfo_binning_x
{
public:
  explicit Init_CameraInfo_binning_x(::sensor_msgs::msg::CameraInfo & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_binning_y binning_x(::sensor_msgs::msg::CameraInfo::_binning_x_type arg)
  {
    msg_.binning_x = std::move(arg);
    return Init_CameraInfo_binning_y(msg_);
  }

private:
  ::sensor_msgs::msg::CameraInfo msg_;
};

class Init_CameraInfo_p
{
public:
  explicit Init_CameraInfo_p(::sensor_msgs::msg::CameraInfo & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_binning_x p(::sensor_msgs::msg::CameraInfo::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_CameraInfo_binning_x(msg_);
  }

private:
  ::sensor_msgs::msg::CameraInfo msg_;
};

class Init_CameraInfo_r
{
public:
  explicit Init_CameraInfo_r(::sensor_msgs::msg::CameraInfo & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_p r(::sensor_msgs::msg::CameraInfo::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_CameraInfo_p(msg_);
  }

private:
  ::sensor_msgs::msg::CameraInfo msg_;
};

class Init_CameraInfo_k
{
public:
  explicit Init_CameraInfo_k(::sensor_msgs::msg::CameraInfo & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_r k(::sensor_msgs::msg::CameraInfo::_k_type arg)
  {
    msg_.k = std::move(arg);
    return Init_CameraInfo_r(msg_);
  }

private:
  ::sensor_msgs::msg::CameraInfo msg_;
};

class Init_CameraInfo_d
{
public:
  explicit Init_CameraInfo_d(::sensor_msgs::msg::CameraInfo & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_k d(::sensor_msgs::msg::CameraInfo::_d_type arg)
  {
    msg_.d = std::move(arg);
    return Init_CameraInfo_k(msg_);
  }

private:
  ::sensor_msgs::msg::CameraInfo msg_;
};

class Init_CameraInfo_distortion_model
{
public:
  explicit Init_CameraInfo_distortion_model(::sensor_msgs::msg::CameraInfo & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_d distortion_model(::sensor_msgs::msg::CameraInfo::_distortion_model_type arg)
  {
    msg_.distortion_model = std::move(arg);
    return Init_CameraInfo_d(msg_);
  }

private:
  ::sensor_msgs::msg::CameraInfo msg_;
};

class Init_CameraInfo_width
{
public:
  explicit Init_CameraInfo_width(::sensor_msgs::msg::CameraInfo & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_distortion_model width(::sensor_msgs::msg::CameraInfo::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_CameraInfo_distortion_model(msg_);
  }

private:
  ::sensor_msgs::msg::CameraInfo msg_;
};

class Init_CameraInfo_height
{
public:
  explicit Init_CameraInfo_height(::sensor_msgs::msg::CameraInfo & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_width height(::sensor_msgs::msg::CameraInfo::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_CameraInfo_width(msg_);
  }

private:
  ::sensor_msgs::msg::CameraInfo msg_;
};

class Init_CameraInfo_header
{
public:
  Init_CameraInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraInfo_height header(::sensor_msgs::msg::CameraInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CameraInfo_height(msg_);
  }

private:
  ::sensor_msgs::msg::CameraInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::CameraInfo>()
{
  return sensor_msgs::msg::builder::Init_CameraInfo_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__CAMERA_INFO__BUILDER_HPP_
