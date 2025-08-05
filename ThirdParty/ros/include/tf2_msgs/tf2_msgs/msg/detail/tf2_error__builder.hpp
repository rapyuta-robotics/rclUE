// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tf2_msgs:msg/TF2Error.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__DETAIL__TF2_ERROR__BUILDER_HPP_
#define TF2_MSGS__MSG__DETAIL__TF2_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tf2_msgs/msg/detail/tf2_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tf2_msgs
{

namespace msg
{

namespace builder
{

class Init_TF2Error_error_string
{
public:
  explicit Init_TF2Error_error_string(::tf2_msgs::msg::TF2Error & msg)
  : msg_(msg)
  {}
  ::tf2_msgs::msg::TF2Error error_string(::tf2_msgs::msg::TF2Error::_error_string_type arg)
  {
    msg_.error_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_msgs::msg::TF2Error msg_;
};

class Init_TF2Error_error
{
public:
  Init_TF2Error_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TF2Error_error_string error(::tf2_msgs::msg::TF2Error::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_TF2Error_error_string(msg_);
  }

private:
  ::tf2_msgs::msg::TF2Error msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_msgs::msg::TF2Error>()
{
  return tf2_msgs::msg::builder::Init_TF2Error_error();
}

}  // namespace tf2_msgs

#endif  // TF2_MSGS__MSG__DETAIL__TF2_ERROR__BUILDER_HPP_
