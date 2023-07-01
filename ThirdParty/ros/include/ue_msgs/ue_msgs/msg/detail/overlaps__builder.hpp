// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:msg/Overlaps.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__OVERLAPS__BUILDER_HPP_
#define UE_MSGS__MSG__DETAIL__OVERLAPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ue_msgs/msg/detail/overlaps__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ue_msgs
{

namespace msg
{

namespace builder
{

class Init_Overlaps_overlaps
{
public:
  explicit Init_Overlaps_overlaps(::ue_msgs::msg::Overlaps & msg)
  : msg_(msg)
  {}
  ::ue_msgs::msg::Overlaps overlaps(::ue_msgs::msg::Overlaps::_overlaps_type arg)
  {
    msg_.overlaps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::msg::Overlaps msg_;
};

class Init_Overlaps_targets
{
public:
  Init_Overlaps_targets()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Overlaps_overlaps targets(::ue_msgs::msg::Overlaps::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return Init_Overlaps_overlaps(msg_);
  }

private:
  ::ue_msgs::msg::Overlaps msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::msg::Overlaps>()
{
  return ue_msgs::msg::builder::Init_Overlaps_targets();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__OVERLAPS__BUILDER_HPP_
