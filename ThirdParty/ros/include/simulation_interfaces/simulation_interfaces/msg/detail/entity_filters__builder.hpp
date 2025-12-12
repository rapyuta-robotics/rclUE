// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:msg/EntityFilters.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__BUILDER_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/msg/detail/entity_filters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace msg
{

namespace builder
{

class Init_EntityFilters_bounds
{
public:
  explicit Init_EntityFilters_bounds(::simulation_interfaces::msg::EntityFilters & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::msg::EntityFilters bounds(::simulation_interfaces::msg::EntityFilters::_bounds_type arg)
  {
    msg_.bounds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::msg::EntityFilters msg_;
};

class Init_EntityFilters_tags
{
public:
  explicit Init_EntityFilters_tags(::simulation_interfaces::msg::EntityFilters & msg)
  : msg_(msg)
  {}
  Init_EntityFilters_bounds tags(::simulation_interfaces::msg::EntityFilters::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return Init_EntityFilters_bounds(msg_);
  }

private:
  ::simulation_interfaces::msg::EntityFilters msg_;
};

class Init_EntityFilters_categories
{
public:
  explicit Init_EntityFilters_categories(::simulation_interfaces::msg::EntityFilters & msg)
  : msg_(msg)
  {}
  Init_EntityFilters_tags categories(::simulation_interfaces::msg::EntityFilters::_categories_type arg)
  {
    msg_.categories = std::move(arg);
    return Init_EntityFilters_tags(msg_);
  }

private:
  ::simulation_interfaces::msg::EntityFilters msg_;
};

class Init_EntityFilters_filter
{
public:
  Init_EntityFilters_filter()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EntityFilters_categories filter(::simulation_interfaces::msg::EntityFilters::_filter_type arg)
  {
    msg_.filter = std::move(arg);
    return Init_EntityFilters_categories(msg_);
  }

private:
  ::simulation_interfaces::msg::EntityFilters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::msg::EntityFilters>()
{
  return simulation_interfaces::msg::builder::Init_EntityFilters_filter();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_FILTERS__BUILDER_HPP_
