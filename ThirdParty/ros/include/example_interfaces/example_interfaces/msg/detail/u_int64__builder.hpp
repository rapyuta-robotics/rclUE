// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from example_interfaces:msg/UInt64.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__U_INT64__BUILDER_HPP_
#define EXAMPLE_INTERFACES__MSG__DETAIL__U_INT64__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "example_interfaces/msg/detail/u_int64__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace example_interfaces
{

namespace msg
{

namespace builder
{

class Init_UInt64_data
{
public:
  Init_UInt64_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_interfaces::msg::UInt64 data(::example_interfaces::msg::UInt64::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::msg::UInt64 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::msg::UInt64>()
{
  return example_interfaces::msg::builder::Init_UInt64_data();
}

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__U_INT64__BUILDER_HPP_
