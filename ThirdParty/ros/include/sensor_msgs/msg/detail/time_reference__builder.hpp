// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/TimeReference.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__TIME_REFERENCE__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__TIME_REFERENCE__BUILDER_HPP_

#include "sensor_msgs/msg/detail/time_reference__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeReference_source
{
public:
  explicit Init_TimeReference_source(::sensor_msgs::msg::TimeReference & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::TimeReference source(::sensor_msgs::msg::TimeReference::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::TimeReference msg_;
};

class Init_TimeReference_time_ref
{
public:
  explicit Init_TimeReference_time_ref(::sensor_msgs::msg::TimeReference & msg)
  : msg_(msg)
  {}
  Init_TimeReference_source time_ref(::sensor_msgs::msg::TimeReference::_time_ref_type arg)
  {
    msg_.time_ref = std::move(arg);
    return Init_TimeReference_source(msg_);
  }

private:
  ::sensor_msgs::msg::TimeReference msg_;
};

class Init_TimeReference_header
{
public:
  Init_TimeReference_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeReference_time_ref header(::sensor_msgs::msg::TimeReference::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TimeReference_time_ref(msg_);
  }

private:
  ::sensor_msgs::msg::TimeReference msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::TimeReference>()
{
  return sensor_msgs::msg::builder::Init_TimeReference_header();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__TIME_REFERENCE__BUILDER_HPP_
