// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/GetEntityInfo.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_INFO__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/get_entity_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetEntityInfo_Request_entity
{
public:
  Init_GetEntityInfo_Request_entity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::GetEntityInfo_Request entity(::simulation_interfaces::srv::GetEntityInfo_Request::_entity_type arg)
  {
    msg_.entity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetEntityInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetEntityInfo_Request>()
{
  return simulation_interfaces::srv::builder::Init_GetEntityInfo_Request_entity();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetEntityInfo_Response_info
{
public:
  explicit Init_GetEntityInfo_Response_info(::simulation_interfaces::srv::GetEntityInfo_Response & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::GetEntityInfo_Response info(::simulation_interfaces::srv::GetEntityInfo_Response::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetEntityInfo_Response msg_;
};

class Init_GetEntityInfo_Response_result
{
public:
  Init_GetEntityInfo_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEntityInfo_Response_info result(::simulation_interfaces::srv::GetEntityInfo_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_GetEntityInfo_Response_info(msg_);
  }

private:
  ::simulation_interfaces::srv::GetEntityInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetEntityInfo_Response>()
{
  return simulation_interfaces::srv::builder::Init_GetEntityInfo_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITY_INFO__BUILDER_HPP_
