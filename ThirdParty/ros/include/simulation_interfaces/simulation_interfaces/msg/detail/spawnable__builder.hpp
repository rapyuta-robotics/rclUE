// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:msg/Spawnable.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SPAWNABLE__BUILDER_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__SPAWNABLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/msg/detail/spawnable__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace msg
{

namespace builder
{

class Init_Spawnable_spawn_bounds
{
public:
  explicit Init_Spawnable_spawn_bounds(::simulation_interfaces::msg::Spawnable & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::msg::Spawnable spawn_bounds(::simulation_interfaces::msg::Spawnable::_spawn_bounds_type arg)
  {
    msg_.spawn_bounds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::msg::Spawnable msg_;
};

class Init_Spawnable_description
{
public:
  explicit Init_Spawnable_description(::simulation_interfaces::msg::Spawnable & msg)
  : msg_(msg)
  {}
  Init_Spawnable_spawn_bounds description(::simulation_interfaces::msg::Spawnable::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_Spawnable_spawn_bounds(msg_);
  }

private:
  ::simulation_interfaces::msg::Spawnable msg_;
};

class Init_Spawnable_entity_resource
{
public:
  Init_Spawnable_entity_resource()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Spawnable_description entity_resource(::simulation_interfaces::msg::Spawnable::_entity_resource_type arg)
  {
    msg_.entity_resource = std::move(arg);
    return Init_Spawnable_description(msg_);
  }

private:
  ::simulation_interfaces::msg::Spawnable msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::msg::Spawnable>()
{
  return simulation_interfaces::msg::builder::Init_Spawnable_entity_resource();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SPAWNABLE__BUILDER_HPP_
