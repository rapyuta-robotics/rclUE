// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/SetEntityInfo.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_INFO__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/set_entity_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetEntityInfo_Request_info
{
public:
  explicit Init_SetEntityInfo_Request_info(::simulation_interfaces::srv::SetEntityInfo_Request & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::SetEntityInfo_Request info(::simulation_interfaces::srv::SetEntityInfo_Request::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::SetEntityInfo_Request msg_;
};

class Init_SetEntityInfo_Request_entity
{
public:
  Init_SetEntityInfo_Request_entity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetEntityInfo_Request_info entity(::simulation_interfaces::srv::SetEntityInfo_Request::_entity_type arg)
  {
    msg_.entity = std::move(arg);
    return Init_SetEntityInfo_Request_info(msg_);
  }

private:
  ::simulation_interfaces::srv::SetEntityInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::SetEntityInfo_Request>()
{
  return simulation_interfaces::srv::builder::Init_SetEntityInfo_Request_entity();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetEntityInfo_Response_result
{
public:
  Init_SetEntityInfo_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::SetEntityInfo_Response result(::simulation_interfaces::srv::SetEntityInfo_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::SetEntityInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::SetEntityInfo_Response>()
{
  return simulation_interfaces::srv::builder::Init_SetEntityInfo_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__SET_ENTITY_INFO__BUILDER_HPP_
