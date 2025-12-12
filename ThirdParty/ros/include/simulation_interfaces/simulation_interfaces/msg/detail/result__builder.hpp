// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:msg/Result.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__RESULT__BUILDER_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/msg/detail/result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace msg
{

namespace builder
{

class Init_Result_error_message
{
public:
  explicit Init_Result_error_message(::simulation_interfaces::msg::Result & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::msg::Result error_message(::simulation_interfaces::msg::Result::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::msg::Result msg_;
};

class Init_Result_result
{
public:
  Init_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Result_error_message result(::simulation_interfaces::msg::Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_Result_error_message(msg_);
  }

private:
  ::simulation_interfaces::msg::Result msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::msg::Result>()
{
  return simulation_interfaces::msg::builder::Init_Result_result();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__RESULT__BUILDER_HPP_
