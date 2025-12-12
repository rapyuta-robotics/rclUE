// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:msg/EntityStateMultiArray.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__ENTITY_STATE_MULTI_ARRAY__BUILDER_HPP_
#define UE_MSGS__MSG__DETAIL__ENTITY_STATE_MULTI_ARRAY__BUILDER_HPP_

#include "ue_msgs/msg/detail/entity_state_multi_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ue_msgs
{

namespace msg
{

namespace builder
{

class Init_EntityStateMultiArray_entity_states
{
public:
  explicit Init_EntityStateMultiArray_entity_states(::ue_msgs::msg::EntityStateMultiArray & msg)
  : msg_(msg)
  {}
  ::ue_msgs::msg::EntityStateMultiArray entity_states(::ue_msgs::msg::EntityStateMultiArray::_entity_states_type arg)
  {
    msg_.entity_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::msg::EntityStateMultiArray msg_;
};

class Init_EntityStateMultiArray_header
{
public:
  Init_EntityStateMultiArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EntityStateMultiArray_entity_states header(::ue_msgs::msg::EntityStateMultiArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EntityStateMultiArray_entity_states(msg_);
  }

private:
  ::ue_msgs::msg::EntityStateMultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::msg::EntityStateMultiArray>()
{
  return ue_msgs::msg::builder::Init_EntityStateMultiArray_header();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__ENTITY_STATE_MULTI_ARRAY__BUILDER_HPP_
