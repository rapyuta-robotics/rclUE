// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:msg/EntityState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_STATE__BUILDER_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/msg/detail/entity_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace msg
{

namespace builder
{

class Init_EntityState_acceleration
{
public:
  explicit Init_EntityState_acceleration(::simulation_interfaces::msg::EntityState & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::msg::EntityState acceleration(::simulation_interfaces::msg::EntityState::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::msg::EntityState msg_;
};

class Init_EntityState_twist
{
public:
  explicit Init_EntityState_twist(::simulation_interfaces::msg::EntityState & msg)
  : msg_(msg)
  {}
  Init_EntityState_acceleration twist(::simulation_interfaces::msg::EntityState::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_EntityState_acceleration(msg_);
  }

private:
  ::simulation_interfaces::msg::EntityState msg_;
};

class Init_EntityState_pose
{
public:
  explicit Init_EntityState_pose(::simulation_interfaces::msg::EntityState & msg)
  : msg_(msg)
  {}
  Init_EntityState_twist pose(::simulation_interfaces::msg::EntityState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_EntityState_twist(msg_);
  }

private:
  ::simulation_interfaces::msg::EntityState msg_;
};

class Init_EntityState_header
{
public:
  Init_EntityState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EntityState_pose header(::simulation_interfaces::msg::EntityState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EntityState_pose(msg_);
  }

private:
  ::simulation_interfaces::msg::EntityState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::msg::EntityState>()
{
  return simulation_interfaces::msg::builder::Init_EntityState_header();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_STATE__BUILDER_HPP_
