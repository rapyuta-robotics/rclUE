// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/Transform.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__TRANSFORM__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__TRANSFORM__BUILDER_HPP_

#include "geometry_msgs/msg/detail/transform__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_Transform_rotation
{
public:
  explicit Init_Transform_rotation(::geometry_msgs::msg::Transform & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::Transform rotation(::geometry_msgs::msg::Transform::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::Transform msg_;
};

class Init_Transform_translation
{
public:
  Init_Transform_translation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Transform_rotation translation(::geometry_msgs::msg::Transform::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return Init_Transform_rotation(msg_);
  }

private:
  ::geometry_msgs::msg::Transform msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::Transform>()
{
  return geometry_msgs::msg::builder::Init_Transform_translation();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__TRANSFORM__BUILDER_HPP_
