// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:msg/IntPointDict.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ue_msgs/msg/int_point_dict.hpp"


#ifndef UE_MSGS__MSG__DETAIL__INT_POINT_DICT__BUILDER_HPP_
#define UE_MSGS__MSG__DETAIL__INT_POINT_DICT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ue_msgs/msg/detail/int_point_dict__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ue_msgs
{

namespace msg
{

namespace builder
{

class Init_IntPointDict_entries
{
public:
  explicit Init_IntPointDict_entries(::ue_msgs::msg::IntPointDict & msg)
  : msg_(msg)
  {}
  ::ue_msgs::msg::IntPointDict entries(::ue_msgs::msg::IntPointDict::_entries_type arg)
  {
    msg_.entries = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::msg::IntPointDict msg_;
};

class Init_IntPointDict_header
{
public:
  Init_IntPointDict_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntPointDict_entries header(::ue_msgs::msg::IntPointDict::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IntPointDict_entries(msg_);
  }

private:
  ::ue_msgs::msg::IntPointDict msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::msg::IntPointDict>()
{
  return ue_msgs::msg::builder::Init_IntPointDict_header();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__INT_POINT_DICT__BUILDER_HPP_
