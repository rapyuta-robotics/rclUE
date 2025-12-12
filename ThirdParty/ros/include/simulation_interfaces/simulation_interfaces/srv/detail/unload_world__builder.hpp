// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/UnloadWorld.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__UNLOAD_WORLD__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__UNLOAD_WORLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/unload_world__struct.hpp"
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
auto build<::simulation_interfaces::srv::UnloadWorld_Request>()
{
  return ::simulation_interfaces::srv::UnloadWorld_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_UnloadWorld_Response_result
{
public:
  Init_UnloadWorld_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::UnloadWorld_Response result(::simulation_interfaces::srv::UnloadWorld_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::UnloadWorld_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::UnloadWorld_Response>()
{
  return simulation_interfaces::srv::builder::Init_UnloadWorld_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__UNLOAD_WORLD__BUILDER_HPP_
