// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:msg/OverlappingObjects.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__OVERLAPPING_OBJECTS__BUILDER_HPP_
#define UE_MSGS__MSG__DETAIL__OVERLAPPING_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ue_msgs/msg/detail/overlapping_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ue_msgs
{

namespace msg
{

namespace builder
{

class Init_OverlappingObjects_components
{
public:
  explicit Init_OverlappingObjects_components(::ue_msgs::msg::OverlappingObjects & msg)
  : msg_(msg)
  {}
  ::ue_msgs::msg::OverlappingObjects components(::ue_msgs::msg::OverlappingObjects::_components_type arg)
  {
    msg_.components = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::msg::OverlappingObjects msg_;
};

class Init_OverlappingObjects_actors
{
public:
  Init_OverlappingObjects_actors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OverlappingObjects_components actors(::ue_msgs::msg::OverlappingObjects::_actors_type arg)
  {
    msg_.actors = std::move(arg);
    return Init_OverlappingObjects_components(msg_);
  }

private:
  ::ue_msgs::msg::OverlappingObjects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::msg::OverlappingObjects>()
{
  return ue_msgs::msg::builder::Init_OverlappingObjects_actors();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__MSG__DETAIL__OVERLAPPING_OBJECTS__BUILDER_HPP_
