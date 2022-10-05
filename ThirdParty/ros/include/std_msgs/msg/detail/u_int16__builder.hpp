// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_msgs:msg/UInt16.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__U_INT16__BUILDER_HPP_
#define STD_MSGS__MSG__DETAIL__U_INT16__BUILDER_HPP_

#include "std_msgs/msg/detail/u_int16__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace std_msgs
{

namespace msg
{

namespace builder
{

class Init_UInt16_data
{
public:
  Init_UInt16_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::std_msgs::msg::UInt16 data(::std_msgs::msg::UInt16::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_msgs::msg::UInt16 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_msgs::msg::UInt16>()
{
  return std_msgs::msg::builder::Init_UInt16_data();
}

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__DETAIL__U_INT16__BUILDER_HPP_
