// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from example_interfaces:msg/Empty.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__EMPTY__BUILDER_HPP_
#define EXAMPLE_INTERFACES__MSG__DETAIL__EMPTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "example_interfaces/msg/detail/empty__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace example_interfaces
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::msg::Empty>()
{
  return ::example_interfaces::msg::Empty(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__EMPTY__BUILDER_HPP_
