// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shape_msgs:msg/SolidPrimitive.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__SOLID_PRIMITIVE__BUILDER_HPP_
#define SHAPE_MSGS__MSG__DETAIL__SOLID_PRIMITIVE__BUILDER_HPP_

#include "shape_msgs/msg/detail/solid_primitive__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace shape_msgs
{

namespace msg
{

namespace builder
{

class Init_SolidPrimitive_dimensions
{
public:
  explicit Init_SolidPrimitive_dimensions(::shape_msgs::msg::SolidPrimitive & msg)
  : msg_(msg)
  {}
  ::shape_msgs::msg::SolidPrimitive dimensions(::shape_msgs::msg::SolidPrimitive::_dimensions_type arg)
  {
    msg_.dimensions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shape_msgs::msg::SolidPrimitive msg_;
};

class Init_SolidPrimitive_type
{
public:
  Init_SolidPrimitive_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolidPrimitive_dimensions type(::shape_msgs::msg::SolidPrimitive::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SolidPrimitive_dimensions(msg_);
  }

private:
  ::shape_msgs::msg::SolidPrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::shape_msgs::msg::SolidPrimitive>()
{
  return shape_msgs::msg::builder::Init_SolidPrimitive_type();
}

}  // namespace shape_msgs

#endif  // SHAPE_MSGS__MSG__DETAIL__SOLID_PRIMITIVE__BUILDER_HPP_
