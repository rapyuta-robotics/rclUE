// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from example_interfaces:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__MULTI_ARRAY_DIMENSION__BUILDER_HPP_
#define EXAMPLE_INTERFACES__MSG__DETAIL__MULTI_ARRAY_DIMENSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "example_interfaces/msg/detail/multi_array_dimension__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace example_interfaces
{

namespace msg
{

namespace builder
{

class Init_MultiArrayDimension_stride
{
public:
  explicit Init_MultiArrayDimension_stride(::example_interfaces::msg::MultiArrayDimension & msg)
  : msg_(msg)
  {}
  ::example_interfaces::msg::MultiArrayDimension stride(::example_interfaces::msg::MultiArrayDimension::_stride_type arg)
  {
    msg_.stride = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::msg::MultiArrayDimension msg_;
};

class Init_MultiArrayDimension_size
{
public:
  explicit Init_MultiArrayDimension_size(::example_interfaces::msg::MultiArrayDimension & msg)
  : msg_(msg)
  {}
  Init_MultiArrayDimension_stride size(::example_interfaces::msg::MultiArrayDimension::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_MultiArrayDimension_stride(msg_);
  }

private:
  ::example_interfaces::msg::MultiArrayDimension msg_;
};

class Init_MultiArrayDimension_label
{
public:
  Init_MultiArrayDimension_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiArrayDimension_size label(::example_interfaces::msg::MultiArrayDimension::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_MultiArrayDimension_size(msg_);
  }

private:
  ::example_interfaces::msg::MultiArrayDimension msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::msg::MultiArrayDimension>()
{
  return example_interfaces::msg::builder::Init_MultiArrayDimension_label();
}

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__MULTI_ARRAY_DIMENSION__BUILDER_HPP_
