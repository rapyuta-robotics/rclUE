// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/RelativeHumidity.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__RELATIVE_HUMIDITY__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__RELATIVE_HUMIDITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_msgs/msg/detail/relative_humidity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_RelativeHumidity_variance
{
public:
  explicit Init_RelativeHumidity_variance(::sensor_msgs::msg::RelativeHumidity & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::RelativeHumidity variance(::sensor_msgs::msg::RelativeHumidity::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::RelativeHumidity msg_;
};

class Init_RelativeHumidity_relative_humidity
{
public:
  explicit Init_RelativeHumidity_relative_humidity(::sensor_msgs::msg::RelativeHumidity & msg)
  : msg_(msg)
  {}
  Init_RelativeHumidity_variance relative_humidity(::sensor_msgs::msg::RelativeHumidity::_relative_humidity_type arg)
  {
    msg_.relative_humidity = std::move(arg);
    return Init_RelativeHumidity_variance(msg_);
  }

private:
  ::sensor_msgs::msg::RelativeHumidity msg_;
};

class Init_RelativeHumidity_header
{
public:
  Init_RelativeHumidity_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelativeHumidity_relative_humidity header(::sensor_msgs::msg::RelativeHumidity::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RelativeHumidity_relative_humidity(msg_);
  }

private:
  ::sensor_msgs::msg::RelativeHumidity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::RelativeHumidity>()
{
  return sensor_msgs::msg::builder::Init_RelativeHumidity_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__RELATIVE_HUMIDITY__BUILDER_HPP_
