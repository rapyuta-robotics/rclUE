// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:msg/OverlapEvent.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__BUILDER_HPP_
#define UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ue_msgs/msg/detail/overlap_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ue_msgs
{

namespace msg
{

namespace builder
{

class Init_OverlapEvent_sweep_result
{
public:
  explicit Init_OverlapEvent_sweep_result(::ue_msgs::msg::OverlapEvent & msg)
  : msg_(msg)
  {}
  ::ue_msgs::msg::OverlapEvent sweep_result(::ue_msgs::msg::OverlapEvent::_sweep_result_type arg)
  {
    msg_.sweep_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::msg::OverlapEvent msg_;
};

class Init_OverlapEvent_from_sweep
{
public:
  explicit Init_OverlapEvent_from_sweep(::ue_msgs::msg::OverlapEvent & msg)
  : msg_(msg)
  {}
  Init_OverlapEvent_sweep_result from_sweep(::ue_msgs::msg::OverlapEvent::_from_sweep_type arg)
  {
    msg_.from_sweep = std::move(arg);
    return Init_OverlapEvent_sweep_result(msg_);
  }

private:
  ::ue_msgs::msg::OverlapEvent msg_;
};

class Init_OverlapEvent_other_body_index
{
public:
  explicit Init_OverlapEvent_other_body_index(::ue_msgs::msg::OverlapEvent & msg)
  : msg_(msg)
  {}
  Init_OverlapEvent_from_sweep other_body_index(::ue_msgs::msg::OverlapEvent::_other_body_index_type arg)
  {
    msg_.other_body_index = std::move(arg);
    return Init_OverlapEvent_from_sweep(msg_);
  }

private:
  ::ue_msgs::msg::OverlapEvent msg_;
};

class Init_OverlapEvent_other_component_name
{
public:
  explicit Init_OverlapEvent_other_component_name(::ue_msgs::msg::OverlapEvent & msg)
  : msg_(msg)
  {}
  Init_OverlapEvent_other_body_index other_component_name(::ue_msgs::msg::OverlapEvent::_other_component_name_type arg)
  {
    msg_.other_component_name = std::move(arg);
    return Init_OverlapEvent_other_body_index(msg_);
  }

private:
  ::ue_msgs::msg::OverlapEvent msg_;
};

class Init_OverlapEvent_other_actor_name
{
public:
  explicit Init_OverlapEvent_other_actor_name(::ue_msgs::msg::OverlapEvent & msg)
  : msg_(msg)
  {}
  Init_OverlapEvent_other_component_name other_actor_name(::ue_msgs::msg::OverlapEvent::_other_actor_name_type arg)
  {
    msg_.other_actor_name = std::move(arg);
    return Init_OverlapEvent_other_component_name(msg_);
  }

private:
  ::ue_msgs::msg::OverlapEvent msg_;
};

class Init_OverlapEvent_self_name
{
public:
  explicit Init_OverlapEvent_self_name(::ue_msgs::msg::OverlapEvent & msg)
  : msg_(msg)
  {}
  Init_OverlapEvent_other_actor_name self_name(::ue_msgs::msg::OverlapEvent::_self_name_type arg)
  {
    msg_.self_name = std::move(arg);
    return Init_OverlapEvent_other_actor_name(msg_);
  }

private:
  ::ue_msgs::msg::OverlapEvent msg_;
};

class Init_OverlapEvent_begin
{
public:
  Init_OverlapEvent_begin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OverlapEvent_self_name begin(::ue_msgs::msg::OverlapEvent::_begin_type arg)
  {
    msg_.begin = std::move(arg);
    return Init_OverlapEvent_self_name(msg_);
  }

private:
  ::ue_msgs::msg::OverlapEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::msg::OverlapEvent>()
{
  return ue_msgs::msg::builder::Init_OverlapEvent_begin();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__BUILDER_HPP_
