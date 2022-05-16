// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from example_interfaces:msg/WString.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__W_STRING__BUILDER_HPP_
#define EXAMPLE_INTERFACES__MSG__DETAIL__W_STRING__BUILDER_HPP_

#include "example_interfaces/msg/detail/w_string__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace example_interfaces
{

namespace msg
{

namespace builder
{

class Init_WString_data
{
public:
  Init_WString_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_interfaces::msg::WString data(::example_interfaces::msg::WString::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::msg::WString msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::msg::WString>()
{
  return example_interfaces::msg::builder::Init_WString_data();
}

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__W_STRING__BUILDER_HPP_
