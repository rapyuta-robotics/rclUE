// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from example_interfaces:msg/Float64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__BUILDER_HPP_
#define EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__BUILDER_HPP_

#include "example_interfaces/msg/detail/float64_multi_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace example_interfaces
{

namespace msg
{

namespace builder
{

class Init_Float64MultiArray_data
{
public:
  explicit Init_Float64MultiArray_data(::example_interfaces::msg::Float64MultiArray & msg)
  : msg_(msg)
  {}
  ::example_interfaces::msg::Float64MultiArray data(::example_interfaces::msg::Float64MultiArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::msg::Float64MultiArray msg_;
};

class Init_Float64MultiArray_layout
{
public:
  Init_Float64MultiArray_layout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Float64MultiArray_data layout(::example_interfaces::msg::Float64MultiArray::_layout_type arg)
  {
    msg_.layout = std::move(arg);
    return Init_Float64MultiArray_data(msg_);
  }

private:
  ::example_interfaces::msg::Float64MultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::msg::Float64MultiArray>()
{
  return example_interfaces::msg::builder::Init_Float64MultiArray_layout();
}

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT64_MULTI_ARRAY__BUILDER_HPP_
