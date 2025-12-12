// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/GetNamedPoseBounds.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSE_BOUNDS__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSE_BOUNDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/get_named_pose_bounds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetNamedPoseBounds_Request_name
{
public:
  Init_GetNamedPoseBounds_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::GetNamedPoseBounds_Request name(::simulation_interfaces::srv::GetNamedPoseBounds_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetNamedPoseBounds_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetNamedPoseBounds_Request>()
{
  return simulation_interfaces::srv::builder::Init_GetNamedPoseBounds_Request_name();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetNamedPoseBounds_Response_bounds
{
public:
  explicit Init_GetNamedPoseBounds_Response_bounds(::simulation_interfaces::srv::GetNamedPoseBounds_Response & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::GetNamedPoseBounds_Response bounds(::simulation_interfaces::srv::GetNamedPoseBounds_Response::_bounds_type arg)
  {
    msg_.bounds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetNamedPoseBounds_Response msg_;
};

class Init_GetNamedPoseBounds_Response_result
{
public:
  Init_GetNamedPoseBounds_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetNamedPoseBounds_Response_bounds result(::simulation_interfaces::srv::GetNamedPoseBounds_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_GetNamedPoseBounds_Response_bounds(msg_);
  }

private:
  ::simulation_interfaces::srv::GetNamedPoseBounds_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetNamedPoseBounds_Response>()
{
  return simulation_interfaces::srv::builder::Init_GetNamedPoseBounds_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSE_BOUNDS__BUILDER_HPP_
