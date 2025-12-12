// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/GetEntitiesStates.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES_STATES__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/get_entities_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetEntitiesStates_Request_filters
{
public:
  Init_GetEntitiesStates_Request_filters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::GetEntitiesStates_Request filters(::simulation_interfaces::srv::GetEntitiesStates_Request::_filters_type arg)
  {
    msg_.filters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetEntitiesStates_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetEntitiesStates_Request>()
{
  return simulation_interfaces::srv::builder::Init_GetEntitiesStates_Request_filters();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetEntitiesStates_Response_states
{
public:
  explicit Init_GetEntitiesStates_Response_states(::simulation_interfaces::srv::GetEntitiesStates_Response & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::GetEntitiesStates_Response states(::simulation_interfaces::srv::GetEntitiesStates_Response::_states_type arg)
  {
    msg_.states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetEntitiesStates_Response msg_;
};

class Init_GetEntitiesStates_Response_entities
{
public:
  explicit Init_GetEntitiesStates_Response_entities(::simulation_interfaces::srv::GetEntitiesStates_Response & msg)
  : msg_(msg)
  {}
  Init_GetEntitiesStates_Response_states entities(::simulation_interfaces::srv::GetEntitiesStates_Response::_entities_type arg)
  {
    msg_.entities = std::move(arg);
    return Init_GetEntitiesStates_Response_states(msg_);
  }

private:
  ::simulation_interfaces::srv::GetEntitiesStates_Response msg_;
};

class Init_GetEntitiesStates_Response_result
{
public:
  Init_GetEntitiesStates_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEntitiesStates_Response_entities result(::simulation_interfaces::srv::GetEntitiesStates_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_GetEntitiesStates_Response_entities(msg_);
  }

private:
  ::simulation_interfaces::srv::GetEntitiesStates_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetEntitiesStates_Response>()
{
  return simulation_interfaces::srv::builder::Init_GetEntitiesStates_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES_STATES__BUILDER_HPP_
