// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:msg/SpawnEntityState.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__SPAWN_ENTITY_STATE__BUILDER_HPP_
#define UE_MSGS__MSG__DETAIL__SPAWN_ENTITY_STATE__BUILDER_HPP_

#include "ue_msgs/msg/detail/spawn_entity_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ue_msgs
{

namespace msg
{

namespace builder
{

class Init_SpawnEntityState_tags
{
public:
  explicit Init_SpawnEntityState_tags(::ue_msgs::msg::SpawnEntityState & msg)
  : msg_(msg)
  {}
  ::ue_msgs::msg::SpawnEntityState tags(::ue_msgs::msg::SpawnEntityState::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::msg::SpawnEntityState msg_;
};

class Init_SpawnEntityState_state
{
public:
  explicit Init_SpawnEntityState_state(::ue_msgs::msg::SpawnEntityState & msg)
  : msg_(msg)
  {}
  Init_SpawnEntityState_tags state(::ue_msgs::msg::SpawnEntityState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SpawnEntityState_tags(msg_);
  }

private:
  ::ue_msgs::msg::SpawnEntityState msg_;
};

class Init_SpawnEntityState_xml
{
public:
  Init_SpawnEntityState_xml()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnEntityState_state xml(::ue_msgs::msg::SpawnEntityState::_xml_type arg)
  {
    msg_.xml = std::move(arg);
    return Init_SpawnEntityState_state(msg_);
  }

private:
  ::ue_msgs::msg::SpawnEntityState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::msg::SpawnEntityState>()
{
  return ue_msgs::msg::builder::Init_SpawnEntityState_xml();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__SPAWN_ENTITY_STATE__BUILDER_HPP_
