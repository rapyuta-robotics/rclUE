// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:msg/EntityCategory.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_CATEGORY__BUILDER_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_CATEGORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/msg/detail/entity_category__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace msg
{

namespace builder
{

class Init_EntityCategory_category
{
public:
  Init_EntityCategory_category()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::msg::EntityCategory category(::simulation_interfaces::msg::EntityCategory::_category_type arg)
  {
    msg_.category = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::msg::EntityCategory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::msg::EntityCategory>()
{
  return simulation_interfaces::msg::builder::Init_EntityCategory_category();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_CATEGORY__BUILDER_HPP_
