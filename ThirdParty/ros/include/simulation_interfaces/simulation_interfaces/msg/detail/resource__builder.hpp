// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:msg/Resource.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__RESOURCE__BUILDER_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__RESOURCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/msg/detail/resource__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace msg
{

namespace builder
{

class Init_Resource_resource_string
{
public:
  explicit Init_Resource_resource_string(::simulation_interfaces::msg::Resource & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::msg::Resource resource_string(::simulation_interfaces::msg::Resource::_resource_string_type arg)
  {
    msg_.resource_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::msg::Resource msg_;
};

class Init_Resource_uri
{
public:
  Init_Resource_uri()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Resource_resource_string uri(::simulation_interfaces::msg::Resource::_uri_type arg)
  {
    msg_.uri = std::move(arg);
    return Init_Resource_resource_string(msg_);
  }

private:
  ::simulation_interfaces::msg::Resource msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::msg::Resource>()
{
  return simulation_interfaces::msg::builder::Init_Resource_uri();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__RESOURCE__BUILDER_HPP_
