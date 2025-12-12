// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:msg/EntityInfo.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_INFO__BUILDER_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/msg/detail/entity_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace msg
{

namespace builder
{

class Init_EntityInfo_tags
{
public:
  explicit Init_EntityInfo_tags(::simulation_interfaces::msg::EntityInfo & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::msg::EntityInfo tags(::simulation_interfaces::msg::EntityInfo::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::msg::EntityInfo msg_;
};

class Init_EntityInfo_description
{
public:
  explicit Init_EntityInfo_description(::simulation_interfaces::msg::EntityInfo & msg)
  : msg_(msg)
  {}
  Init_EntityInfo_tags description(::simulation_interfaces::msg::EntityInfo::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_EntityInfo_tags(msg_);
  }

private:
  ::simulation_interfaces::msg::EntityInfo msg_;
};

class Init_EntityInfo_category
{
public:
  Init_EntityInfo_category()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EntityInfo_description category(::simulation_interfaces::msg::EntityInfo::_category_type arg)
  {
    msg_.category = std::move(arg);
    return Init_EntityInfo_description(msg_);
  }

private:
  ::simulation_interfaces::msg::EntityInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::msg::EntityInfo>()
{
  return simulation_interfaces::msg::builder::Init_EntityInfo_category();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_INFO__BUILDER_HPP_
