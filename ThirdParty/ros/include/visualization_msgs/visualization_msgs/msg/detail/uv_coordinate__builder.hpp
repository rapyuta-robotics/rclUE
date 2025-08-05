// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from visualization_msgs:msg/UVCoordinate.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__UV_COORDINATE__BUILDER_HPP_
#define VISUALIZATION_MSGS__MSG__DETAIL__UV_COORDINATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "visualization_msgs/msg/detail/uv_coordinate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace visualization_msgs
{

namespace msg
{

namespace builder
{

class Init_UVCoordinate_v
{
public:
  explicit Init_UVCoordinate_v(::visualization_msgs::msg::UVCoordinate & msg)
  : msg_(msg)
  {}
  ::visualization_msgs::msg::UVCoordinate v(::visualization_msgs::msg::UVCoordinate::_v_type arg)
  {
    msg_.v = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visualization_msgs::msg::UVCoordinate msg_;
};

class Init_UVCoordinate_u
{
public:
  Init_UVCoordinate_u()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UVCoordinate_v u(::visualization_msgs::msg::UVCoordinate::_u_type arg)
  {
    msg_.u = std::move(arg);
    return Init_UVCoordinate_v(msg_);
  }

private:
  ::visualization_msgs::msg::UVCoordinate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::visualization_msgs::msg::UVCoordinate>()
{
  return visualization_msgs::msg::builder::Init_UVCoordinate_u();
}

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__UV_COORDINATE__BUILDER_HPP_
