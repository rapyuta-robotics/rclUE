// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from diagnostic_msgs:msg/DiagnosticArray.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__BUILDER_HPP_
#define DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__BUILDER_HPP_

#include "diagnostic_msgs/msg/detail/diagnostic_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace diagnostic_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticArray_status
{
public:
  explicit Init_DiagnosticArray_status(::diagnostic_msgs::msg::DiagnosticArray & msg)
  : msg_(msg)
  {}
  ::diagnostic_msgs::msg::DiagnosticArray status(::diagnostic_msgs::msg::DiagnosticArray::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diagnostic_msgs::msg::DiagnosticArray msg_;
};

class Init_DiagnosticArray_header
{
public:
  Init_DiagnosticArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticArray_status header(::diagnostic_msgs::msg::DiagnosticArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DiagnosticArray_status(msg_);
  }

private:
  ::diagnostic_msgs::msg::DiagnosticArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::diagnostic_msgs::msg::DiagnosticArray>()
{
  return diagnostic_msgs::msg::builder::Init_DiagnosticArray_header();
}

}  // namespace diagnostic_msgs

#endif  // DIAGNOSTIC_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__BUILDER_HPP_
