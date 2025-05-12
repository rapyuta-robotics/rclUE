// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/VelocityStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__VELOCITY_STAMPED__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__VELOCITY_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "geometry_msgs/msg/detail/velocity_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityStamped_velocity
{
public:
  explicit Init_VelocityStamped_velocity(::geometry_msgs::msg::VelocityStamped & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::VelocityStamped velocity(::geometry_msgs::msg::VelocityStamped::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::VelocityStamped msg_;
};

class Init_VelocityStamped_reference_frame_id
{
public:
  explicit Init_VelocityStamped_reference_frame_id(::geometry_msgs::msg::VelocityStamped & msg)
  : msg_(msg)
  {}
  Init_VelocityStamped_velocity reference_frame_id(::geometry_msgs::msg::VelocityStamped::_reference_frame_id_type arg)
  {
    msg_.reference_frame_id = std::move(arg);
    return Init_VelocityStamped_velocity(msg_);
  }

private:
  ::geometry_msgs::msg::VelocityStamped msg_;
};

class Init_VelocityStamped_body_frame_id
{
public:
  explicit Init_VelocityStamped_body_frame_id(::geometry_msgs::msg::VelocityStamped & msg)
  : msg_(msg)
  {}
  Init_VelocityStamped_reference_frame_id body_frame_id(::geometry_msgs::msg::VelocityStamped::_body_frame_id_type arg)
  {
    msg_.body_frame_id = std::move(arg);
    return Init_VelocityStamped_reference_frame_id(msg_);
  }

private:
  ::geometry_msgs::msg::VelocityStamped msg_;
};

class Init_VelocityStamped_header
{
public:
  Init_VelocityStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityStamped_body_frame_id header(::geometry_msgs::msg::VelocityStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VelocityStamped_body_frame_id(msg_);
  }

private:
  ::geometry_msgs::msg::VelocityStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::VelocityStamped>()
{
  return geometry_msgs::msg::builder::Init_VelocityStamped_header();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__VELOCITY_STAMPED__BUILDER_HPP_
