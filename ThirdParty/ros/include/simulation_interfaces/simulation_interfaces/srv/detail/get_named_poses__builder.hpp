// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/GetNamedPoses.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSES__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/get_named_poses__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetNamedPoses_Request_tags
{
public:
  Init_GetNamedPoses_Request_tags()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::GetNamedPoses_Request tags(::simulation_interfaces::srv::GetNamedPoses_Request::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetNamedPoses_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetNamedPoses_Request>()
{
  return simulation_interfaces::srv::builder::Init_GetNamedPoses_Request_tags();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetNamedPoses_Response_poses
{
public:
  explicit Init_GetNamedPoses_Response_poses(::simulation_interfaces::srv::GetNamedPoses_Response & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::GetNamedPoses_Response poses(::simulation_interfaces::srv::GetNamedPoses_Response::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetNamedPoses_Response msg_;
};

class Init_GetNamedPoses_Response_result
{
public:
  Init_GetNamedPoses_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetNamedPoses_Response_poses result(::simulation_interfaces::srv::GetNamedPoses_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_GetNamedPoses_Response_poses(msg_);
  }

private:
  ::simulation_interfaces::srv::GetNamedPoses_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetNamedPoses_Response>()
{
  return simulation_interfaces::srv::builder::Init_GetNamedPoses_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_NAMED_POSES__BUILDER_HPP_
