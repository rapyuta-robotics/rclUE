// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:msg/IntPointEntry.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__INT_POINT_ENTRY__BUILDER_HPP_
#define UE_MSGS__MSG__DETAIL__INT_POINT_ENTRY__BUILDER_HPP_

#include "ue_msgs/msg/detail/int_point_entry__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ue_msgs
{

namespace msg
{

namespace builder
{

class Init_IntPointEntry_value
{
public:
  explicit Init_IntPointEntry_value(::ue_msgs::msg::IntPointEntry & msg)
  : msg_(msg)
  {}
  ::ue_msgs::msg::IntPointEntry value(::ue_msgs::msg::IntPointEntry::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::msg::IntPointEntry msg_;
};

class Init_IntPointEntry_key
{
public:
  Init_IntPointEntry_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntPointEntry_value key(::ue_msgs::msg::IntPointEntry::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_IntPointEntry_value(msg_);
  }

private:
  ::ue_msgs::msg::IntPointEntry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::msg::IntPointEntry>()
{
  return ue_msgs::msg::builder::Init_IntPointEntry_key();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__INT_POINT_ENTRY__BUILDER_HPP_
