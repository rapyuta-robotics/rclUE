// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/LaserEcho.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__LASER_ECHO__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__LASER_ECHO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_msgs/msg/detail/laser_echo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_LaserEcho_echoes
{
public:
  Init_LaserEcho_echoes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sensor_msgs::msg::LaserEcho echoes(::sensor_msgs::msg::LaserEcho::_echoes_type arg)
  {
    msg_.echoes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::LaserEcho msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::LaserEcho>()
{
  return sensor_msgs::msg::builder::Init_LaserEcho_echoes();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__LASER_ECHO__BUILDER_HPP_
