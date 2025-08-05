// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/MultiEchoLaserScan.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__MULTI_ECHO_LASER_SCAN__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__MULTI_ECHO_LASER_SCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_msgs/msg/detail/multi_echo_laser_scan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_MultiEchoLaserScan_intensities
{
public:
  explicit Init_MultiEchoLaserScan_intensities(::sensor_msgs::msg::MultiEchoLaserScan & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::MultiEchoLaserScan intensities(::sensor_msgs::msg::MultiEchoLaserScan::_intensities_type arg)
  {
    msg_.intensities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::MultiEchoLaserScan msg_;
};

class Init_MultiEchoLaserScan_ranges
{
public:
  explicit Init_MultiEchoLaserScan_ranges(::sensor_msgs::msg::MultiEchoLaserScan & msg)
  : msg_(msg)
  {}
  Init_MultiEchoLaserScan_intensities ranges(::sensor_msgs::msg::MultiEchoLaserScan::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return Init_MultiEchoLaserScan_intensities(msg_);
  }

private:
  ::sensor_msgs::msg::MultiEchoLaserScan msg_;
};

class Init_MultiEchoLaserScan_range_max
{
public:
  explicit Init_MultiEchoLaserScan_range_max(::sensor_msgs::msg::MultiEchoLaserScan & msg)
  : msg_(msg)
  {}
  Init_MultiEchoLaserScan_ranges range_max(::sensor_msgs::msg::MultiEchoLaserScan::_range_max_type arg)
  {
    msg_.range_max = std::move(arg);
    return Init_MultiEchoLaserScan_ranges(msg_);
  }

private:
  ::sensor_msgs::msg::MultiEchoLaserScan msg_;
};

class Init_MultiEchoLaserScan_range_min
{
public:
  explicit Init_MultiEchoLaserScan_range_min(::sensor_msgs::msg::MultiEchoLaserScan & msg)
  : msg_(msg)
  {}
  Init_MultiEchoLaserScan_range_max range_min(::sensor_msgs::msg::MultiEchoLaserScan::_range_min_type arg)
  {
    msg_.range_min = std::move(arg);
    return Init_MultiEchoLaserScan_range_max(msg_);
  }

private:
  ::sensor_msgs::msg::MultiEchoLaserScan msg_;
};

class Init_MultiEchoLaserScan_scan_time
{
public:
  explicit Init_MultiEchoLaserScan_scan_time(::sensor_msgs::msg::MultiEchoLaserScan & msg)
  : msg_(msg)
  {}
  Init_MultiEchoLaserScan_range_min scan_time(::sensor_msgs::msg::MultiEchoLaserScan::_scan_time_type arg)
  {
    msg_.scan_time = std::move(arg);
    return Init_MultiEchoLaserScan_range_min(msg_);
  }

private:
  ::sensor_msgs::msg::MultiEchoLaserScan msg_;
};

class Init_MultiEchoLaserScan_time_increment
{
public:
  explicit Init_MultiEchoLaserScan_time_increment(::sensor_msgs::msg::MultiEchoLaserScan & msg)
  : msg_(msg)
  {}
  Init_MultiEchoLaserScan_scan_time time_increment(::sensor_msgs::msg::MultiEchoLaserScan::_time_increment_type arg)
  {
    msg_.time_increment = std::move(arg);
    return Init_MultiEchoLaserScan_scan_time(msg_);
  }

private:
  ::sensor_msgs::msg::MultiEchoLaserScan msg_;
};

class Init_MultiEchoLaserScan_angle_increment
{
public:
  explicit Init_MultiEchoLaserScan_angle_increment(::sensor_msgs::msg::MultiEchoLaserScan & msg)
  : msg_(msg)
  {}
  Init_MultiEchoLaserScan_time_increment angle_increment(::sensor_msgs::msg::MultiEchoLaserScan::_angle_increment_type arg)
  {
    msg_.angle_increment = std::move(arg);
    return Init_MultiEchoLaserScan_time_increment(msg_);
  }

private:
  ::sensor_msgs::msg::MultiEchoLaserScan msg_;
};

class Init_MultiEchoLaserScan_angle_max
{
public:
  explicit Init_MultiEchoLaserScan_angle_max(::sensor_msgs::msg::MultiEchoLaserScan & msg)
  : msg_(msg)
  {}
  Init_MultiEchoLaserScan_angle_increment angle_max(::sensor_msgs::msg::MultiEchoLaserScan::_angle_max_type arg)
  {
    msg_.angle_max = std::move(arg);
    return Init_MultiEchoLaserScan_angle_increment(msg_);
  }

private:
  ::sensor_msgs::msg::MultiEchoLaserScan msg_;
};

class Init_MultiEchoLaserScan_angle_min
{
public:
  explicit Init_MultiEchoLaserScan_angle_min(::sensor_msgs::msg::MultiEchoLaserScan & msg)
  : msg_(msg)
  {}
  Init_MultiEchoLaserScan_angle_max angle_min(::sensor_msgs::msg::MultiEchoLaserScan::_angle_min_type arg)
  {
    msg_.angle_min = std::move(arg);
    return Init_MultiEchoLaserScan_angle_max(msg_);
  }

private:
  ::sensor_msgs::msg::MultiEchoLaserScan msg_;
};

class Init_MultiEchoLaserScan_header
{
public:
  Init_MultiEchoLaserScan_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiEchoLaserScan_angle_min header(::sensor_msgs::msg::MultiEchoLaserScan::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MultiEchoLaserScan_angle_min(msg_);
  }

private:
  ::sensor_msgs::msg::MultiEchoLaserScan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::MultiEchoLaserScan>()
{
  return sensor_msgs::msg::builder::Init_MultiEchoLaserScan_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__MULTI_ECHO_LASER_SCAN__BUILDER_HPP_
