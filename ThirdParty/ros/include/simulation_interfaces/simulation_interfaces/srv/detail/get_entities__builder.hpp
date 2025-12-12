// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/GetEntities.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/get_entities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetEntities_Request_filters
{
public:
  Init_GetEntities_Request_filters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::GetEntities_Request filters(::simulation_interfaces::srv::GetEntities_Request::_filters_type arg)
  {
    msg_.filters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetEntities_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetEntities_Request>()
{
  return simulation_interfaces::srv::builder::Init_GetEntities_Request_filters();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetEntities_Response_entities
{
public:
  explicit Init_GetEntities_Response_entities(::simulation_interfaces::srv::GetEntities_Response & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::srv::GetEntities_Response entities(::simulation_interfaces::srv::GetEntities_Response::_entities_type arg)
  {
    msg_.entities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetEntities_Response msg_;
};

class Init_GetEntities_Response_result
{
public:
  Init_GetEntities_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEntities_Response_entities result(::simulation_interfaces::srv::GetEntities_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_GetEntities_Response_entities(msg_);
  }

private:
  ::simulation_interfaces::srv::GetEntities_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetEntities_Response>()
{
  return simulation_interfaces::srv::builder::Init_GetEntities_Response_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_ENTITIES__BUILDER_HPP_
