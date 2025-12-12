// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/ResetSimulation.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__RESET_SIMULATION__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__RESET_SIMULATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/reset_simulation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetSimulation_Request_scope
{
public:
  Init_ResetSimulation_Request_scope()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::ResetSimulation_Request scope(::simulation_interfaces::srv::ResetSimulation_Request::_scope_type arg)
  {
    msg_.scope = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::ResetSimulation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::ResetSimulation_Request>()
{
  return simulation_interfaces::srv::builder::Init_ResetSimulation_Request_scope();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetSimulation_Response_result
{
public:
  Init_ResetSimulation_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::ResetSimulation_Response result(::simulation_interfaces::srv::ResetSimulation_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::ResetSimulation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::ResetSimulation_Response>()
{
  return simulation_interfaces::srv::builder::Init_ResetSimulation_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__RESET_SIMULATION__BUILDER_HPP_
