// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/Temperature.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_

#include "sensor_msgs/msg/detail/temperature__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_Temperature_variance
{
public:
  explicit Init_Temperature_variance(::sensor_msgs::msg::Temperature & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::Temperature variance(::sensor_msgs::msg::Temperature::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::Temperature msg_;
};

class Init_Temperature_temperature
{
public:
  explicit Init_Temperature_temperature(::sensor_msgs::msg::Temperature & msg)
  : msg_(msg)
  {}
  Init_Temperature_variance temperature(::sensor_msgs::msg::Temperature::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Temperature_variance(msg_);
  }

private:
  ::sensor_msgs::msg::Temperature msg_;
};

class Init_Temperature_header
{
public:
  Init_Temperature_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Temperature_temperature header(::sensor_msgs::msg::Temperature::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Temperature_temperature(msg_);
  }

private:
  ::sensor_msgs::msg::Temperature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::Temperature>()
{
  return sensor_msgs::msg::builder::Init_Temperature_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_
