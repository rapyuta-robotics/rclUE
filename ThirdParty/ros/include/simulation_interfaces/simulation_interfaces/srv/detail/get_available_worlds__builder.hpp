// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/GetAvailableWorlds.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_AVAILABLE_WORLDS__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_AVAILABLE_WORLDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/get_available_worlds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetAvailableWorlds_Request_continue_on_error
{
public:
  explicit Init_GetAvailableWorlds_Request_continue_on_error(::simulation_interfaces::srv::GetAvailableWorlds_Request & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::GetAvailableWorlds_Request continue_on_error(::simulation_interfaces::srv::GetAvailableWorlds_Request::_continue_on_error_type arg)
  {
    msg_.continue_on_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetAvailableWorlds_Request msg_;
};

class Init_GetAvailableWorlds_Request_offline_only
{
public:
  explicit Init_GetAvailableWorlds_Request_offline_only(::simulation_interfaces::srv::GetAvailableWorlds_Request & msg)
  : msg_(msg)
  {}
  Init_GetAvailableWorlds_Request_continue_on_error offline_only(::simulation_interfaces::srv::GetAvailableWorlds_Request::_offline_only_type arg)
  {
    msg_.offline_only = std::move(arg);
    return Init_GetAvailableWorlds_Request_continue_on_error(msg_);
  }

private:
  ::simulation_interfaces::srv::GetAvailableWorlds_Request msg_;
};

class Init_GetAvailableWorlds_Request_filter
{
public:
  explicit Init_GetAvailableWorlds_Request_filter(::simulation_interfaces::srv::GetAvailableWorlds_Request & msg)
  : msg_(msg)
  {}
  Init_GetAvailableWorlds_Request_offline_only filter(::simulation_interfaces::srv::GetAvailableWorlds_Request::_filter_type arg)
  {
    msg_.filter = std::move(arg);
    return Init_GetAvailableWorlds_Request_offline_only(msg_);
  }

private:
  ::simulation_interfaces::srv::GetAvailableWorlds_Request msg_;
};

class Init_GetAvailableWorlds_Request_additional_sources
{
public:
  Init_GetAvailableWorlds_Request_additional_sources()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAvailableWorlds_Request_filter additional_sources(::simulation_interfaces::srv::GetAvailableWorlds_Request::_additional_sources_type arg)
  {
    msg_.additional_sources = std::move(arg);
    return Init_GetAvailableWorlds_Request_filter(msg_);
  }

private:
  ::simulation_interfaces::srv::GetAvailableWorlds_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetAvailableWorlds_Request>()
{
  return simulation_interfaces::srv::builder::Init_GetAvailableWorlds_Request_additional_sources();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetAvailableWorlds_Response_worlds
{
public:
  explicit Init_GetAvailableWorlds_Response_worlds(::simulation_interfaces::srv::GetAvailableWorlds_Response & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::GetAvailableWorlds_Response worlds(::simulation_interfaces::srv::GetAvailableWorlds_Response::_worlds_type arg)
  {
    msg_.worlds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetAvailableWorlds_Response msg_;
};

class Init_GetAvailableWorlds_Response_result
{
public:
  Init_GetAvailableWorlds_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAvailableWorlds_Response_worlds result(::simulation_interfaces::srv::GetAvailableWorlds_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_GetAvailableWorlds_Response_worlds(msg_);
  }

private:
  ::simulation_interfaces::srv::GetAvailableWorlds_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetAvailableWorlds_Response>()
{
  return simulation_interfaces::srv::builder::Init_GetAvailableWorlds_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_AVAILABLE_WORLDS__BUILDER_HPP_
