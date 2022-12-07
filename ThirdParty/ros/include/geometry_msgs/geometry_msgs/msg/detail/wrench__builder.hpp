// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/Wrench.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__WRENCH__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__WRENCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "geometry_msgs/msg/detail/wrench__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_Wrench_torque
{
public:
  explicit Init_Wrench_torque(::geometry_msgs::msg::Wrench & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::Wrench torque(::geometry_msgs::msg::Wrench::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::Wrench msg_;
};

class Init_Wrench_force
{
public:
  Init_Wrench_force()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Wrench_torque force(::geometry_msgs::msg::Wrench::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_Wrench_torque(msg_);
  }

private:
  ::geometry_msgs::msg::Wrench msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::Wrench>()
{
  return geometry_msgs::msg::builder::Init_Wrench_force();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__WRENCH__BUILDER_HPP_
