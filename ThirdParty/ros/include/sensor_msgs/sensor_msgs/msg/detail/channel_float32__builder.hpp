// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/ChannelFloat32.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__CHANNEL_FLOAT32__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__CHANNEL_FLOAT32__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_msgs/msg/detail/channel_float32__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_ChannelFloat32_values
{
public:
  explicit Init_ChannelFloat32_values(::sensor_msgs::msg::ChannelFloat32 & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::ChannelFloat32 values(::sensor_msgs::msg::ChannelFloat32::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::ChannelFloat32 msg_;
};

class Init_ChannelFloat32_name
{
public:
  Init_ChannelFloat32_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChannelFloat32_values name(::sensor_msgs::msg::ChannelFloat32::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ChannelFloat32_values(msg_);
  }

private:
  ::sensor_msgs::msg::ChannelFloat32 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::ChannelFloat32>()
{
  return sensor_msgs::msg::builder::Init_ChannelFloat32_name();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__CHANNEL_FLOAT32__BUILDER_HPP_
