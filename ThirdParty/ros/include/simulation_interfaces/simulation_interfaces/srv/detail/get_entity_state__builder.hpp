// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/GetEntityState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_STATE__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/get_entity_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetEntityState_Request_entity
{
public:
  Init_GetEntityState_Request_entity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::GetEntityState_Request entity(::simulation_interfaces::srv::GetEntityState_Request::_entity_type arg)
  {
    msg_.entity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetEntityState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetEntityState_Request>()
{
  return simulation_interfaces::srv::builder::Init_GetEntityState_Request_entity();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetEntityState_Response_state
{
public:
  explicit Init_GetEntityState_Response_state(::simulation_interfaces::srv::GetEntityState_Response & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::GetEntityState_Response state(::simulation_interfaces::srv::GetEntityState_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetEntityState_Response msg_;
};

class Init_GetEntityState_Response_result
{
public:
  Init_GetEntityState_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEntityState_Response_state result(::simulation_interfaces::srv::GetEntityState_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_GetEntityState_Response_state(msg_);
  }

private:
  ::simulation_interfaces::srv::GetEntityState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetEntityState_Response>()
{
  return simulation_interfaces::srv::builder::Init_GetEntityState_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_STATE__BUILDER_HPP_
