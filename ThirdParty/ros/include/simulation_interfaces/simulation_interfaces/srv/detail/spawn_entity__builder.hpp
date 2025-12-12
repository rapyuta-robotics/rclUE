// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/SpawnEntity.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITY__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/spawn_entity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnEntity_Request_initial_pose
{
public:
  explicit Init_SpawnEntity_Request_initial_pose(::simulation_interfaces::srv::SpawnEntity_Request & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::SpawnEntity_Request initial_pose(::simulation_interfaces::srv::SpawnEntity_Request::_initial_pose_type arg)
  {
    msg_.initial_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::SpawnEntity_Request msg_;
};

class Init_SpawnEntity_Request_entity_namespace
{
public:
  explicit Init_SpawnEntity_Request_entity_namespace(::simulation_interfaces::srv::SpawnEntity_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnEntity_Request_initial_pose entity_namespace(::simulation_interfaces::srv::SpawnEntity_Request::_entity_namespace_type arg)
  {
    msg_.entity_namespace = std::move(arg);
    return Init_SpawnEntity_Request_initial_pose(msg_);
  }

private:
  ::simulation_interfaces::srv::SpawnEntity_Request msg_;
};

class Init_SpawnEntity_Request_entity_resource
{
public:
  explicit Init_SpawnEntity_Request_entity_resource(::simulation_interfaces::srv::SpawnEntity_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnEntity_Request_entity_namespace entity_resource(::simulation_interfaces::srv::SpawnEntity_Request::_entity_resource_type arg)
  {
    msg_.entity_resource = std::move(arg);
    return Init_SpawnEntity_Request_entity_namespace(msg_);
  }

private:
  ::simulation_interfaces::srv::SpawnEntity_Request msg_;
};

class Init_SpawnEntity_Request_allow_renaming
{
public:
  explicit Init_SpawnEntity_Request_allow_renaming(::simulation_interfaces::srv::SpawnEntity_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnEntity_Request_entity_resource allow_renaming(::simulation_interfaces::srv::SpawnEntity_Request::_allow_renaming_type arg)
  {
    msg_.allow_renaming = std::move(arg);
    return Init_SpawnEntity_Request_entity_resource(msg_);
  }

private:
  ::simulation_interfaces::srv::SpawnEntity_Request msg_;
};

class Init_SpawnEntity_Request_name
{
public:
  Init_SpawnEntity_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnEntity_Request_allow_renaming name(::simulation_interfaces::srv::SpawnEntity_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SpawnEntity_Request_allow_renaming(msg_);
  }

private:
  ::simulation_interfaces::srv::SpawnEntity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::SpawnEntity_Request>()
{
  return simulation_interfaces::srv::builder::Init_SpawnEntity_Request_name();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnEntity_Response_entity_name
{
public:
  explicit Init_SpawnEntity_Response_entity_name(::simulation_interfaces::srv::SpawnEntity_Response & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::SpawnEntity_Response entity_name(::simulation_interfaces::srv::SpawnEntity_Response::_entity_name_type arg)
  {
    msg_.entity_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::SpawnEntity_Response msg_;
};

class Init_SpawnEntity_Response_result
{
public:
  Init_SpawnEntity_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnEntity_Response_entity_name result(::simulation_interfaces::srv::SpawnEntity_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_SpawnEntity_Response_entity_name(msg_);
  }

private:
  ::simulation_interfaces::srv::SpawnEntity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::SpawnEntity_Response>()
{
  return simulation_interfaces::srv::builder::Init_SpawnEntity_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITY__BUILDER_HPP_
