// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/GetCurrentWorld.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_CURRENT_WORLD__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_CURRENT_WORLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/get_current_world__struct.hpp"
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
auto build<::simulation_interfaces::srv::GetCurrentWorld_Request>()
{
  return ::simulation_interfaces::srv::GetCurrentWorld_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetCurrentWorld_Response_world
{
public:
  explicit Init_GetCurrentWorld_Response_world(::simulation_interfaces::srv::GetCurrentWorld_Response & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::GetCurrentWorld_Response world(::simulation_interfaces::srv::GetCurrentWorld_Response::_world_type arg)
  {
    msg_.world = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetCurrentWorld_Response msg_;
};

class Init_GetCurrentWorld_Response_result
{
public:
  Init_GetCurrentWorld_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCurrentWorld_Response_world result(::simulation_interfaces::srv::GetCurrentWorld_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_GetCurrentWorld_Response_world(msg_);
  }

private:
  ::simulation_interfaces::srv::GetCurrentWorld_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetCurrentWorld_Response>()
{
  return simulation_interfaces::srv::builder::Init_GetCurrentWorld_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_CURRENT_WORLD__BUILDER_HPP_
