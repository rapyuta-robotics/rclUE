// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/NavSatFix.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__NAV_SAT_FIX__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__NAV_SAT_FIX__BUILDER_HPP_

#include "sensor_msgs/msg/detail/nav_sat_fix__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_NavSatFix_position_covariance_type
{
public:
  explicit Init_NavSatFix_position_covariance_type(::sensor_msgs::msg::NavSatFix & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::NavSatFix position_covariance_type(::sensor_msgs::msg::NavSatFix::_position_covariance_type_type arg)
  {
    msg_.position_covariance_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::NavSatFix msg_;
};

class Init_NavSatFix_position_covariance
{
public:
  explicit Init_NavSatFix_position_covariance(::sensor_msgs::msg::NavSatFix & msg)
  : msg_(msg)
  {}
  Init_NavSatFix_position_covariance_type position_covariance(::sensor_msgs::msg::NavSatFix::_position_covariance_type arg)
  {
    msg_.position_covariance = std::move(arg);
    return Init_NavSatFix_position_covariance_type(msg_);
  }

private:
  ::sensor_msgs::msg::NavSatFix msg_;
};

class Init_NavSatFix_altitude
{
public:
  explicit Init_NavSatFix_altitude(::sensor_msgs::msg::NavSatFix & msg)
  : msg_(msg)
  {}
  Init_NavSatFix_position_covariance altitude(::sensor_msgs::msg::NavSatFix::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_NavSatFix_position_covariance(msg_);
  }

private:
  ::sensor_msgs::msg::NavSatFix msg_;
};

class Init_NavSatFix_longitude
{
public:
  explicit Init_NavSatFix_longitude(::sensor_msgs::msg::NavSatFix & msg)
  : msg_(msg)
  {}
  Init_NavSatFix_altitude longitude(::sensor_msgs::msg::NavSatFix::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_NavSatFix_altitude(msg_);
  }

private:
  ::sensor_msgs::msg::NavSatFix msg_;
};

class Init_NavSatFix_latitude
{
public:
  explicit Init_NavSatFix_latitude(::sensor_msgs::msg::NavSatFix & msg)
  : msg_(msg)
  {}
  Init_NavSatFix_longitude latitude(::sensor_msgs::msg::NavSatFix::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_NavSatFix_longitude(msg_);
  }

private:
  ::sensor_msgs::msg::NavSatFix msg_;
};

class Init_NavSatFix_status
{
public:
  explicit Init_NavSatFix_status(::sensor_msgs::msg::NavSatFix & msg)
  : msg_(msg)
  {}
  Init_NavSatFix_latitude status(::sensor_msgs::msg::NavSatFix::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavSatFix_latitude(msg_);
  }

private:
  ::sensor_msgs::msg::NavSatFix msg_;
};

class Init_NavSatFix_header
{
public:
  Init_NavSatFix_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavSatFix_status header(::sensor_msgs::msg::NavSatFix::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NavSatFix_status(msg_);
  }

private:
  ::sensor_msgs::msg::NavSatFix msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::NavSatFix>()
{
  return sensor_msgs::msg::builder::Init_NavSatFix_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__NAV_SAT_FIX__BUILDER_HPP_
