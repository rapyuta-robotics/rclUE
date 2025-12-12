// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:msg/IntPoseEntry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ue_msgs/msg/int_pose_entry.hpp"


#ifndef UE_MSGS__MSG__DETAIL__INT_POSE_ENTRY__BUILDER_HPP_
#define UE_MSGS__MSG__DETAIL__INT_POSE_ENTRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ue_msgs/msg/detail/int_pose_entry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ue_msgs
{

namespace msg
{

namespace builder
{

class Init_IntPoseEntry_value
{
public:
  explicit Init_IntPoseEntry_value(::ue_msgs::msg::IntPoseEntry & msg)
  : msg_(msg)
  {}
  ::ue_msgs::msg::IntPoseEntry value(::ue_msgs::msg::IntPoseEntry::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::msg::IntPoseEntry msg_;
};

class Init_IntPoseEntry_key
{
public:
  Init_IntPoseEntry_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntPoseEntry_value key(::ue_msgs::msg::IntPoseEntry::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_IntPoseEntry_value(msg_);
  }

private:
  ::ue_msgs::msg::IntPoseEntry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::msg::IntPoseEntry>()
{
  return ue_msgs::msg::builder::Init_IntPoseEntry_key();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__INT_POSE_ENTRY__BUILDER_HPP_
