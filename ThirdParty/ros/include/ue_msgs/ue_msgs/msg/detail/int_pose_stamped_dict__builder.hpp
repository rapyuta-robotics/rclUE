// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:msg/IntPoseStampedDict.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ue_msgs/msg/int_pose_stamped_dict.hpp"


#ifndef UE_MSGS__MSG__DETAIL__INT_POSE_STAMPED_DICT__BUILDER_HPP_
#define UE_MSGS__MSG__DETAIL__INT_POSE_STAMPED_DICT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ue_msgs/msg/detail/int_pose_stamped_dict__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ue_msgs
{

namespace msg
{

namespace builder
{

class Init_IntPoseStampedDict_entries
{
public:
  explicit Init_IntPoseStampedDict_entries(::ue_msgs::msg::IntPoseStampedDict & msg)
  : msg_(msg)
  {}
  ::ue_msgs::msg::IntPoseStampedDict entries(::ue_msgs::msg::IntPoseStampedDict::_entries_type arg)
  {
    msg_.entries = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::msg::IntPoseStampedDict msg_;
};

class Init_IntPoseStampedDict_header
{
public:
  Init_IntPoseStampedDict_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntPoseStampedDict_entries header(::ue_msgs::msg::IntPoseStampedDict::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IntPoseStampedDict_entries(msg_);
  }

private:
  ::ue_msgs::msg::IntPoseStampedDict msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::msg::IntPoseStampedDict>()
{
  return ue_msgs::msg::builder::Init_IntPoseStampedDict_header();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__INT_POSE_STAMPED_DICT__BUILDER_HPP_
