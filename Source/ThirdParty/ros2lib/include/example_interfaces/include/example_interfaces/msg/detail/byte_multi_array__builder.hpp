// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from example_interfaces:msg/ByteMultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__BYTE_MULTI_ARRAY__BUILDER_HPP_
#define EXAMPLE_INTERFACES__MSG__DETAIL__BYTE_MULTI_ARRAY__BUILDER_HPP_

#include "example_interfaces/msg/detail/byte_multi_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace example_interfaces
{

namespace msg
{

namespace builder
{

class Init_ByteMultiArray_data
{
public:
  explicit Init_ByteMultiArray_data(::example_interfaces::msg::ByteMultiArray & msg)
  : msg_(msg)
  {}
  ::example_interfaces::msg::ByteMultiArray data(::example_interfaces::msg::ByteMultiArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::msg::ByteMultiArray msg_;
};

class Init_ByteMultiArray_layout
{
public:
  Init_ByteMultiArray_layout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ByteMultiArray_data layout(::example_interfaces::msg::ByteMultiArray::_layout_type arg)
  {
    msg_.layout = std::move(arg);
    return Init_ByteMultiArray_data(msg_);
  }

private:
  ::example_interfaces::msg::ByteMultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::msg::ByteMultiArray>()
{
  return example_interfaces::msg::builder::Init_ByteMultiArray_layout();
}

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__BYTE_MULTI_ARRAY__BUILDER_HPP_
