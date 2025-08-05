// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/JoyFeedback.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_msgs/msg/detail/joy_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_JoyFeedback_intensity
{
public:
  explicit Init_JoyFeedback_intensity(::sensor_msgs::msg::JoyFeedback & msg)
  : msg_(msg)
  {}
  ::sensor_msgs::msg::JoyFeedback intensity(::sensor_msgs::msg::JoyFeedback::_intensity_type arg)
  {
    msg_.intensity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::JoyFeedback msg_;
};

class Init_JoyFeedback_id
{
public:
  explicit Init_JoyFeedback_id(::sensor_msgs::msg::JoyFeedback & msg)
  : msg_(msg)
  {}
  Init_JoyFeedback_intensity id(::sensor_msgs::msg::JoyFeedback::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_JoyFeedback_intensity(msg_);
  }

private:
  ::sensor_msgs::msg::JoyFeedback msg_;
};

class Init_JoyFeedback_type
{
public:
  Init_JoyFeedback_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JoyFeedback_id type(::sensor_msgs::msg::JoyFeedback::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_JoyFeedback_id(msg_);
  }

private:
  ::sensor_msgs::msg::JoyFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::JoyFeedback>()
{
  return sensor_msgs::msg::builder::Init_JoyFeedback_type();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK__BUILDER_HPP_
