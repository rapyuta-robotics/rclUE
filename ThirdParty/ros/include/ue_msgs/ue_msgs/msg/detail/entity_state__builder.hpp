// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:msg/EntityState.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__ENTITY_STATE__BUILDER_HPP_
#define UE_MSGS__MSG__DETAIL__ENTITY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ue_msgs/msg/detail/entity_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ue_msgs
{

namespace msg
{

namespace builder
{

class Init_EntityState_reference_frame
{
public:
  explicit Init_EntityState_reference_frame(::ue_msgs::msg::EntityState & msg)
  : msg_(msg)
  {}
  ::ue_msgs::msg::EntityState reference_frame(::ue_msgs::msg::EntityState::_reference_frame_type arg)
  {
    msg_.reference_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::msg::EntityState msg_;
};

class Init_EntityState_twist
{
public:
  explicit Init_EntityState_twist(::ue_msgs::msg::EntityState & msg)
  : msg_(msg)
  {}
  Init_EntityState_reference_frame twist(::ue_msgs::msg::EntityState::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_EntityState_reference_frame(msg_);
  }

private:
  ::ue_msgs::msg::EntityState msg_;
};

class Init_EntityState_pose
{
public:
  explicit Init_EntityState_pose(::ue_msgs::msg::EntityState & msg)
  : msg_(msg)
  {}
  Init_EntityState_twist pose(::ue_msgs::msg::EntityState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_EntityState_twist(msg_);
  }

private:
  ::ue_msgs::msg::EntityState msg_;
};

class Init_EntityState_name
{
public:
  Init_EntityState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EntityState_pose name(::ue_msgs::msg::EntityState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_EntityState_pose(msg_);
  }

private:
  ::ue_msgs::msg::EntityState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::msg::EntityState>()
{
  return ue_msgs::msg::builder::Init_EntityState_name();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__ENTITY_STATE__BUILDER_HPP_
