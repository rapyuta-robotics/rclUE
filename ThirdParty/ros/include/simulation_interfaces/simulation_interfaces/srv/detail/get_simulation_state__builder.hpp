// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/GetSimulationState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATION_STATE__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/get_simulation_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetSimulationState_Request>()
{
  return ::simulation_interfaces::srv::GetSimulationState_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSimulationState_Response_result
{
public:
  explicit Init_GetSimulationState_Response_result(::simulation_interfaces::srv::GetSimulationState_Response & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::GetSimulationState_Response result(::simulation_interfaces::srv::GetSimulationState_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetSimulationState_Response msg_;
};

class Init_GetSimulationState_Response_state
{
public:
  Init_GetSimulationState_Response_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetSimulationState_Response_result state(::simulation_interfaces::srv::GetSimulationState_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_GetSimulationState_Response_result(msg_);
  }

private:
  ::simulation_interfaces::srv::GetSimulationState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetSimulationState_Response>()
{
  return simulation_interfaces::srv::builder::Init_GetSimulationState_Response_state();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATION_STATE__BUILDER_HPP_
