// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_msgs:msg/JoyFeedbackArray.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK_ARRAY__BUILDER_HPP_
#define SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK_ARRAY__BUILDER_HPP_

#include "sensor_msgs/msg/detail/joy_feedback_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sensor_msgs
{

namespace msg
{

namespace builder
{

class Init_JoyFeedbackArray_array
{
public:
  Init_JoyFeedbackArray_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sensor_msgs::msg::JoyFeedbackArray array(::sensor_msgs::msg::JoyFeedbackArray::_array_type arg)
  {
    msg_.array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_msgs::msg::JoyFeedbackArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_msgs::msg::JoyFeedbackArray>()
{
  return sensor_msgs::msg::builder::Init_JoyFeedbackArray_array();
}

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__JOY_FEEDBACK_ARRAY__BUILDER_HPP_
