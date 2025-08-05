// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:msg/HitEvent.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__HIT_EVENT__BUILDER_HPP_
#define UE_MSGS__MSG__DETAIL__HIT_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ue_msgs/msg/detail/hit_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ue_msgs
{

namespace msg
{

namespace builder
{

class Init_HitEvent_other_component_name
{
public:
  explicit Init_HitEvent_other_component_name(::ue_msgs::msg::HitEvent & msg)
  : msg_(msg)
  {}
  ::ue_msgs::msg::HitEvent other_component_name(::ue_msgs::msg::HitEvent::_other_component_name_type arg)
  {
    msg_.other_component_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::msg::HitEvent msg_;
};

class Init_HitEvent_hit_result
{
public:
  explicit Init_HitEvent_hit_result(::ue_msgs::msg::HitEvent & msg)
  : msg_(msg)
  {}
  Init_HitEvent_other_component_name hit_result(::ue_msgs::msg::HitEvent::_hit_result_type arg)
  {
    msg_.hit_result = std::move(arg);
    return Init_HitEvent_other_component_name(msg_);
  }

private:
  ::ue_msgs::msg::HitEvent msg_;
};

class Init_HitEvent_normal_impluse
{
public:
  explicit Init_HitEvent_normal_impluse(::ue_msgs::msg::HitEvent & msg)
  : msg_(msg)
  {}
  Init_HitEvent_hit_result normal_impluse(::ue_msgs::msg::HitEvent::_normal_impluse_type arg)
  {
    msg_.normal_impluse = std::move(arg);
    return Init_HitEvent_hit_result(msg_);
  }

private:
  ::ue_msgs::msg::HitEvent msg_;
};

class Init_HitEvent_other_actor_name
{
public:
  explicit Init_HitEvent_other_actor_name(::ue_msgs::msg::HitEvent & msg)
  : msg_(msg)
  {}
  Init_HitEvent_normal_impluse other_actor_name(::ue_msgs::msg::HitEvent::_other_actor_name_type arg)
  {
    msg_.other_actor_name = std::move(arg);
    return Init_HitEvent_normal_impluse(msg_);
  }

private:
  ::ue_msgs::msg::HitEvent msg_;
};

class Init_HitEvent_self_name
{
public:
  Init_HitEvent_self_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HitEvent_other_actor_name self_name(::ue_msgs::msg::HitEvent::_self_name_type arg)
  {
    msg_.self_name = std::move(arg);
    return Init_HitEvent_other_actor_name(msg_);
  }

private:
  ::ue_msgs::msg::HitEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::msg::HitEvent>()
{
  return ue_msgs::msg::builder::Init_HitEvent_self_name();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__HIT_EVENT__BUILDER_HPP_
