// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/Illuminance.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__ILLUMINANCE__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__ILLUMINANCE__BUILDER_HPP_

#include "sensor_msgs/msg/detail/illuminance__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_Illuminance_variance
{
public:
  explicit Init_Illuminance_variance(::sensor_msgs::msg::Illuminance & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::Illuminance variance(::sensor_msgs::msg::Illuminance::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::Illuminance msg_;
};

class Init_Illuminance_illuminance
{
public:
  explicit Init_Illuminance_illuminance(::sensor_msgs::msg::Illuminance & msg)
  : msg_(msg)
  {}
  Init_Illuminance_variance illuminance(::sensor_msgs::msg::Illuminance::_illuminance_type arg)
  {
    msg_.illuminance = std::move(arg);
    return Init_Illuminance_variance(msg_);
  }

private:
  ::sensor_msgs::msg::Illuminance msg_;
};

class Init_Illuminance_header
{
public:
  Init_Illuminance_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Illuminance_illuminance header(::sensor_msgs::msg::Illuminance::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Illuminance_illuminance(msg_);
  }

private:
  ::sensor_msgs::msg::Illuminance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::Illuminance>()
{
  return sensor_msgs::msg::builder::Init_Illuminance_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__ILLUMINANCE__BUILDER_HPP_
