// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/StepSimulation.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__STEP_SIMULATION__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__STEP_SIMULATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/step_simulation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_StepSimulation_Request_steps
{
public:
  Init_StepSimulation_Request_steps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::StepSimulation_Request steps(::simulation_interfaces::srv::StepSimulation_Request::_steps_type arg)
  {
    msg_.steps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::StepSimulation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::StepSimulation_Request>()
{
  return simulation_interfaces::srv::builder::Init_StepSimulation_Request_steps();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_StepSimulation_Response_result
{
public:
  Init_StepSimulation_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::StepSimulation_Response result(::simulation_interfaces::srv::StepSimulation_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::StepSimulation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::StepSimulation_Response>()
{
  return simulation_interfaces::srv::builder::Init_StepSimulation_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__STEP_SIMULATION__BUILDER_HPP_
