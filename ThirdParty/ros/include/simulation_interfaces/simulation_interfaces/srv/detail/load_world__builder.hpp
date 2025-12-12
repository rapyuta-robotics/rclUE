// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/LoadWorld.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__LOAD_WORLD__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__LOAD_WORLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/load_world__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_LoadWorld_Request_ignore_missing_or_unsupported_assets
{
public:
  explicit Init_LoadWorld_Request_ignore_missing_or_unsupported_assets(::simulation_interfaces::srv::LoadWorld_Request & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::LoadWorld_Request ignore_missing_or_unsupported_assets(::simulation_interfaces::srv::LoadWorld_Request::_ignore_missing_or_unsupported_assets_type arg)
  {
    msg_.ignore_missing_or_unsupported_assets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::LoadWorld_Request msg_;
};

class Init_LoadWorld_Request_fail_on_unsupported_element
{
public:
  explicit Init_LoadWorld_Request_fail_on_unsupported_element(::simulation_interfaces::srv::LoadWorld_Request & msg)
  : msg_(msg)
  {}
  Init_LoadWorld_Request_ignore_missing_or_unsupported_assets fail_on_unsupported_element(::simulation_interfaces::srv::LoadWorld_Request::_fail_on_unsupported_element_type arg)
  {
    msg_.fail_on_unsupported_element = std::move(arg);
    return Init_LoadWorld_Request_ignore_missing_or_unsupported_assets(msg_);
  }

private:
  ::simulation_interfaces::srv::LoadWorld_Request msg_;
};

class Init_LoadWorld_Request_world_resource
{
public:
  Init_LoadWorld_Request_world_resource()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadWorld_Request_fail_on_unsupported_element world_resource(::simulation_interfaces::srv::LoadWorld_Request::_world_resource_type arg)
  {
    msg_.world_resource = std::move(arg);
    return Init_LoadWorld_Request_fail_on_unsupported_element(msg_);
  }

private:
  ::simulation_interfaces::srv::LoadWorld_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::LoadWorld_Request>()
{
  return simulation_interfaces::srv::builder::Init_LoadWorld_Request_world_resource();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_LoadWorld_Response_world
{
public:
  explicit Init_LoadWorld_Response_world(::simulation_interfaces::srv::LoadWorld_Response & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::LoadWorld_Response world(::simulation_interfaces::srv::LoadWorld_Response::_world_type arg)
  {
    msg_.world = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::LoadWorld_Response msg_;
};

class Init_LoadWorld_Response_result
{
public:
  Init_LoadWorld_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadWorld_Response_world result(::simulation_interfaces::srv::LoadWorld_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_LoadWorld_Response_world(msg_);
  }

private:
  ::simulation_interfaces::srv::LoadWorld_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::LoadWorld_Response>()
{
  return simulation_interfaces::srv::builder::Init_LoadWorld_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__LOAD_WORLD__BUILDER_HPP_
