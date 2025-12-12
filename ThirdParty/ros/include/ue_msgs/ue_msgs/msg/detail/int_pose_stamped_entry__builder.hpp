// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:msg/IntPoseStampedEntry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ue_msgs/msg/int_pose_stamped_entry.hpp"


#ifndef UE_MSGS__MSG__DETAIL__INT_POSE_STAMPED_ENTRY__BUILDER_HPP_
#define UE_MSGS__MSG__DETAIL__INT_POSE_STAMPED_ENTRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ue_msgs/msg/detail/int_pose_stamped_entry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ue_msgs
{

namespace msg
{

namespace builder
{

class Init_IntPoseStampedEntry_value
{
public:
  explicit Init_IntPoseStampedEntry_value(::ue_msgs::msg::IntPoseStampedEntry & msg)
  : msg_(msg)
  {}
  ::ue_msgs::msg::IntPoseStampedEntry value(::ue_msgs::msg::IntPoseStampedEntry::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::msg::IntPoseStampedEntry msg_;
};

class Init_IntPoseStampedEntry_key
{
public:
  Init_IntPoseStampedEntry_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntPoseStampedEntry_value key(::ue_msgs::msg::IntPoseStampedEntry::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_IntPoseStampedEntry_value(msg_);
  }

private:
  ::ue_msgs::msg::IntPoseStampedEntry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::msg::IntPoseStampedEntry>()
{
  return ue_msgs::msg::builder::Init_IntPoseStampedEntry_key();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__INT_POSE_STAMPED_ENTRY__BUILDER_HPP_
