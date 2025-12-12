// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:msg/WorldResource.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__WORLD_RESOURCE__BUILDER_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__WORLD_RESOURCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/msg/detail/world_resource__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace msg
{

namespace builder
{

class Init_WorldResource_tags
{
public:
  explicit Init_WorldResource_tags(::simulation_interfaces::msg::WorldResource & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::msg::WorldResource tags(::simulation_interfaces::msg::WorldResource::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::msg::WorldResource msg_;
};

class Init_WorldResource_description
{
public:
  explicit Init_WorldResource_description(::simulation_interfaces::msg::WorldResource & msg)
  : msg_(msg)
  {}
  Init_WorldResource_tags description(::simulation_interfaces::msg::WorldResource::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_WorldResource_tags(msg_);
  }

private:
  ::simulation_interfaces::msg::WorldResource msg_;
};

class Init_WorldResource_world_resource
{
public:
  explicit Init_WorldResource_world_resource(::simulation_interfaces::msg::WorldResource & msg)
  : msg_(msg)
  {}
  Init_WorldResource_description world_resource(::simulation_interfaces::msg::WorldResource::_world_resource_type arg)
  {
    msg_.world_resource = std::move(arg);
    return Init_WorldResource_description(msg_);
  }

private:
  ::simulation_interfaces::msg::WorldResource msg_;
};

class Init_WorldResource_name
{
public:
  Init_WorldResource_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorldResource_world_resource name(::simulation_interfaces::msg::WorldResource::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_WorldResource_world_resource(msg_);
  }

private:
  ::simulation_interfaces::msg::WorldResource msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::msg::WorldResource>()
{
  return simulation_interfaces::msg::builder::Init_WorldResource_name();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__WORLD_RESOURCE__BUILDER_HPP_
