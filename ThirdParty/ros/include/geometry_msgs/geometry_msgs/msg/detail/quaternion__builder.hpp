// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/Quaternion.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__QUATERNION__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__QUATERNION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_Quaternion_w
{
public:
  explicit Init_Quaternion_w(::geometry_msgs::msg::Quaternion & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::Quaternion w(::geometry_msgs::msg::Quaternion::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::Quaternion msg_;
};

class Init_Quaternion_z
{
public:
  explicit Init_Quaternion_z(::geometry_msgs::msg::Quaternion & msg)
  : msg_(msg)
  {}
  Init_Quaternion_w z(::geometry_msgs::msg::Quaternion::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Quaternion_w(msg_);
  }

private:
  ::geometry_msgs::msg::Quaternion msg_;
};

class Init_Quaternion_y
{
public:
  explicit Init_Quaternion_y(::geometry_msgs::msg::Quaternion & msg)
  : msg_(msg)
  {}
  Init_Quaternion_z y(::geometry_msgs::msg::Quaternion::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Quaternion_z(msg_);
  }

private:
  ::geometry_msgs::msg::Quaternion msg_;
};

class Init_Quaternion_x
{
public:
  Init_Quaternion_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Quaternion_y x(::geometry_msgs::msg::Quaternion::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Quaternion_y(msg_);
  }

private:
  ::geometry_msgs::msg::Quaternion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::Quaternion>()
{
  return geometry_msgs::msg::builder::Init_Quaternion_x();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__QUATERNION__BUILDER_HPP_
