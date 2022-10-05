// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_msgs:msg/Int32MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT32_MULTI_ARRAY__BUILDER_HPP_
#define STD_MSGS__MSG__DETAIL__INT32_MULTI_ARRAY__BUILDER_HPP_

#include "std_msgs/msg/detail/int32_multi_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace std_msgs
{

namespace msg
{

namespace builder
{

class Init_Int32MultiArray_data
{
public:
  explicit Init_Int32MultiArray_data(::std_msgs::msg::Int32MultiArray & msg)
  : msg_(msg)
  {}
  ::std_msgs::msg::Int32MultiArray data(::std_msgs::msg::Int32MultiArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_msgs::msg::Int32MultiArray msg_;
};

class Init_Int32MultiArray_layout
{
public:
  Init_Int32MultiArray_layout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Int32MultiArray_data layout(::std_msgs::msg::Int32MultiArray::_layout_type arg)
  {
    msg_.layout = std::move(arg);
    return Init_Int32MultiArray_data(msg_);
  }

private:
  ::std_msgs::msg::Int32MultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_msgs::msg::Int32MultiArray>()
{
  return std_msgs::msg::builder::Init_Int32MultiArray_layout();
}

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__DETAIL__INT32_MULTI_ARRAY__BUILDER_HPP_
