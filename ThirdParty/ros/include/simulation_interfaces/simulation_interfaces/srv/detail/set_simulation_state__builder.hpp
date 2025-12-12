// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/SetSimulationState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__SET_SIMULATION_STATE__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__SET_SIMULATION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/set_simulation_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetSimulationState_Request_state
{
public:
  Init_SetSimulationState_Request_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::SetSimulationState_Request state(::simulation_interfaces::srv::SetSimulationState_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::SetSimulationState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::SetSimulationState_Request>()
{
  return simulation_interfaces::srv::builder::Init_SetSimulationState_Request_state();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetSimulationState_Response_result
{
public:
  Init_SetSimulationState_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::SetSimulationState_Response result(::simulation_interfaces::srv::SetSimulationState_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::SetSimulationState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::SetSimulationState_Response>()
{
  return simulation_interfaces::srv::builder::Init_SetSimulationState_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__SET_SIMULATION_STATE__BUILDER_HPP_
