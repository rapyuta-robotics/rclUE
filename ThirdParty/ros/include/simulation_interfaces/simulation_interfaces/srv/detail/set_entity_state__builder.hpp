// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/SetEntityState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_STATE__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/set_entity_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetEntityState_Request_set_acceleration
{
public:
  explicit Init_SetEntityState_Request_set_acceleration(::simulation_interfaces::srv::SetEntityState_Request & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::SetEntityState_Request set_acceleration(::simulation_interfaces::srv::SetEntityState_Request::_set_acceleration_type arg)
  {
    msg_.set_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::SetEntityState_Request msg_;
};

class Init_SetEntityState_Request_set_twist
{
public:
  explicit Init_SetEntityState_Request_set_twist(::simulation_interfaces::srv::SetEntityState_Request & msg)
  : msg_(msg)
  {}
  Init_SetEntityState_Request_set_acceleration set_twist(::simulation_interfaces::srv::SetEntityState_Request::_set_twist_type arg)
  {
    msg_.set_twist = std::move(arg);
    return Init_SetEntityState_Request_set_acceleration(msg_);
  }

private:
  ::simulation_interfaces::srv::SetEntityState_Request msg_;
};

class Init_SetEntityState_Request_set_pose
{
public:
  explicit Init_SetEntityState_Request_set_pose(::simulation_interfaces::srv::SetEntityState_Request & msg)
  : msg_(msg)
  {}
  Init_SetEntityState_Request_set_twist set_pose(::simulation_interfaces::srv::SetEntityState_Request::_set_pose_type arg)
  {
    msg_.set_pose = std::move(arg);
    return Init_SetEntityState_Request_set_twist(msg_);
  }

private:
  ::simulation_interfaces::srv::SetEntityState_Request msg_;
};

class Init_SetEntityState_Request_state
{
public:
  explicit Init_SetEntityState_Request_state(::simulation_interfaces::srv::SetEntityState_Request & msg)
  : msg_(msg)
  {}
  Init_SetEntityState_Request_set_pose state(::simulation_interfaces::srv::SetEntityState_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SetEntityState_Request_set_pose(msg_);
  }

private:
  ::simulation_interfaces::srv::SetEntityState_Request msg_;
};

class Init_SetEntityState_Request_entity
{
public:
  Init_SetEntityState_Request_entity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetEntityState_Request_state entity(::simulation_interfaces::srv::SetEntityState_Request::_entity_type arg)
  {
    msg_.entity = std::move(arg);
    return Init_SetEntityState_Request_state(msg_);
  }

private:
  ::simulation_interfaces::srv::SetEntityState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::SetEntityState_Request>()
{
  return simulation_interfaces::srv::builder::Init_SetEntityState_Request_entity();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetEntityState_Response_result
{
public:
  Init_SetEntityState_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::SetEntityState_Response result(::simulation_interfaces::srv::SetEntityState_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::SetEntityState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::SetEntityState_Response>()
{
  return simulation_interfaces::srv::builder::Init_SetEntityState_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_STATE__BUILDER_HPP_
