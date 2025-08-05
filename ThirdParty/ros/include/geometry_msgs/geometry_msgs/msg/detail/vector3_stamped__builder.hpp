// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/Vector3Stamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__VECTOR3_STAMPED__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__VECTOR3_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "geometry_msgs/msg/detail/vector3_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_Vector3Stamped_vector
{
public:
  explicit Init_Vector3Stamped_vector(::geometry_msgs::msg::Vector3Stamped & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::Vector3Stamped vector(::geometry_msgs::msg::Vector3Stamped::_vector_type arg)
  {
    msg_.vector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::Vector3Stamped msg_;
};

class Init_Vector3Stamped_header
{
public:
  Init_Vector3Stamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vector3Stamped_vector header(::geometry_msgs::msg::Vector3Stamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Vector3Stamped_vector(msg_);
  }

private:
  ::geometry_msgs::msg::Vector3Stamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::Vector3Stamped>()
{
  return geometry_msgs::msg::builder::Init_Vector3Stamped_header();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__VECTOR3_STAMPED__BUILDER_HPP_
