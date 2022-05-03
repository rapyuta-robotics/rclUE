// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/FluidPressure.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__FLUID_PRESSURE__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__FLUID_PRESSURE__BUILDER_HPP_

#include "sensor_msgs/msg/detail/fluid_pressure__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_FluidPressure_variance
{
public:
  explicit Init_FluidPressure_variance(::sensor_msgs::msg::FluidPressure & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::FluidPressure variance(::sensor_msgs::msg::FluidPressure::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::FluidPressure msg_;
};

class Init_FluidPressure_fluid_pressure
{
public:
  explicit Init_FluidPressure_fluid_pressure(::sensor_msgs::msg::FluidPressure & msg)
  : msg_(msg)
  {}
  Init_FluidPressure_variance fluid_pressure(::sensor_msgs::msg::FluidPressure::_fluid_pressure_type arg)
  {
    msg_.fluid_pressure = std::move(arg);
    return Init_FluidPressure_variance(msg_);
  }

private:
  ::sensor_msgs::msg::FluidPressure msg_;
};

class Init_FluidPressure_header
{
public:
  Init_FluidPressure_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FluidPressure_fluid_pressure header(::sensor_msgs::msg::FluidPressure::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FluidPressure_fluid_pressure(msg_);
  }

private:
  ::sensor_msgs::msg::FluidPressure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::FluidPressure>()
{
  return sensor_msgs::msg::builder::Init_FluidPressure_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__FLUID_PRESSURE__BUILDER_HPP_
