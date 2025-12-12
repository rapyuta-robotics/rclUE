// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/GetSpawnables.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_SPAWNABLES__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_SPAWNABLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/get_spawnables__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSpawnables_Request_sources
{
public:
  Init_GetSpawnables_Request_sources()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::GetSpawnables_Request sources(::simulation_interfaces::srv::GetSpawnables_Request::_sources_type arg)
  {
    msg_.sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetSpawnables_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetSpawnables_Request>()
{
  return simulation_interfaces::srv::builder::Init_GetSpawnables_Request_sources();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSpawnables_Response_spawnables
{
public:
  explicit Init_GetSpawnables_Response_spawnables(::simulation_interfaces::srv::GetSpawnables_Response & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::GetSpawnables_Response spawnables(::simulation_interfaces::srv::GetSpawnables_Response::_spawnables_type arg)
  {
    msg_.spawnables = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetSpawnables_Response msg_;
};

class Init_GetSpawnables_Response_result
{
public:
  Init_GetSpawnables_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetSpawnables_Response_spawnables result(::simulation_interfaces::srv::GetSpawnables_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_GetSpawnables_Response_spawnables(msg_);
  }

private:
  ::simulation_interfaces::srv::GetSpawnables_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetSpawnables_Response>()
{
  return simulation_interfaces::srv::builder::Init_GetSpawnables_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_SPAWNABLES__BUILDER_HPP_
