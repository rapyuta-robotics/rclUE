// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:msg/Bounds.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__BOUNDS__BUILDER_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__BOUNDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/msg/detail/bounds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace msg
{

namespace builder
{

class Init_Bounds_points
{
public:
  explicit Init_Bounds_points(::simulation_interfaces::msg::Bounds & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::msg::Bounds points(::simulation_interfaces::msg::Bounds::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::msg::Bounds msg_;
};

class Init_Bounds_type
{
public:
  Init_Bounds_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bounds_points type(::simulation_interfaces::msg::Bounds::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Bounds_points(msg_);
  }

private:
  ::simulation_interfaces::msg::Bounds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::msg::Bounds>()
{
  return simulation_interfaces::msg::builder::Init_Bounds_type();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__BOUNDS__BUILDER_HPP_
