// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:msg/NamedPose.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__NAMED_POSE__BUILDER_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__NAMED_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/msg/detail/named_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace msg
{

namespace builder
{

class Init_NamedPose_pose
{
public:
  explicit Init_NamedPose_pose(::simulation_interfaces::msg::NamedPose & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::msg::NamedPose pose(::simulation_interfaces::msg::NamedPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::msg::NamedPose msg_;
};

class Init_NamedPose_tags
{
public:
  explicit Init_NamedPose_tags(::simulation_interfaces::msg::NamedPose & msg)
  : msg_(msg)
  {}
  Init_NamedPose_pose tags(::simulation_interfaces::msg::NamedPose::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return Init_NamedPose_pose(msg_);
  }

private:
  ::simulation_interfaces::msg::NamedPose msg_;
};

class Init_NamedPose_description
{
public:
  explicit Init_NamedPose_description(::simulation_interfaces::msg::NamedPose & msg)
  : msg_(msg)
  {}
  Init_NamedPose_tags description(::simulation_interfaces::msg::NamedPose::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_NamedPose_tags(msg_);
  }

private:
  ::simulation_interfaces::msg::NamedPose msg_;
};

class Init_NamedPose_name
{
public:
  Init_NamedPose_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NamedPose_description name(::simulation_interfaces::msg::NamedPose::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_NamedPose_description(msg_);
  }

private:
  ::simulation_interfaces::msg::NamedPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::msg::NamedPose>()
{
  return simulation_interfaces::msg::builder::Init_NamedPose_name();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__NAMED_POSE__BUILDER_HPP_
