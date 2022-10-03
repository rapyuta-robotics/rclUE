// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shape_msgs:msg/Plane.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__PLANE__BUILDER_HPP_
#define SHAPE_MSGS__MSG__DETAIL__PLANE__BUILDER_HPP_

#include "shape_msgs/msg/detail/plane__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace shape_msgs
{

namespace msg
{

namespace builder
{

class Init_Plane_coef
{
public:
  Init_Plane_coef()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::shape_msgs::msg::Plane coef(::shape_msgs::msg::Plane::_coef_type arg)
  {
    msg_.coef = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shape_msgs::msg::Plane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::shape_msgs::msg::Plane>()
{
  return shape_msgs::msg::builder::Init_Plane_coef();
}

}  // namespace shape_msgs

#endif  // SHAPE_MSGS__MSG__DETAIL__PLANE__BUILDER_HPP_
