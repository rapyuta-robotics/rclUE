// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/Joy.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__JOY__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__JOY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_msgs/msg/detail/joy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_Joy_buttons
{
public:
  explicit Init_Joy_buttons(::sensor_msgs::msg::Joy & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::Joy buttons(::sensor_msgs::msg::Joy::_buttons_type arg)
  {
    msg_.buttons = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::Joy msg_;
};

class Init_Joy_axes
{
public:
  explicit Init_Joy_axes(::sensor_msgs::msg::Joy & msg)
  : msg_(msg)
  {}
  Init_Joy_buttons axes(::sensor_msgs::msg::Joy::_axes_type arg)
  {
    msg_.axes = std::move(arg);
    return Init_Joy_buttons(msg_);
  }

private:
  ::sensor_msgs::msg::Joy msg_;
};

class Init_Joy_header
{
public:
  Init_Joy_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Joy_axes header(::sensor_msgs::msg::Joy::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Joy_axes(msg_);
  }

private:
  ::sensor_msgs::msg::Joy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::Joy>()
{
  return sensor_msgs::msg::builder::Init_Joy_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__JOY__BUILDER_HPP_
