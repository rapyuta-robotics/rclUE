// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geometry_msgs:msg/Inertia.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__INERTIA__BUILDER_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__INERTIA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "geometry_msgs/msg/detail/inertia__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_Inertia_izz
{
public:
  explicit Init_Inertia_izz(::geometry_msgs::msg::Inertia & msg)
  : msg_(msg)
  {}
  ::geometry_msgs::msg::Inertia izz(::geometry_msgs::msg::Inertia::_izz_type arg)
  {
    msg_.izz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geometry_msgs::msg::Inertia msg_;
};

class Init_Inertia_iyz
{
public:
  explicit Init_Inertia_iyz(::geometry_msgs::msg::Inertia & msg)
  : msg_(msg)
  {}
  Init_Inertia_izz iyz(::geometry_msgs::msg::Inertia::_iyz_type arg)
  {
    msg_.iyz = std::move(arg);
    return Init_Inertia_izz(msg_);
  }

private:
  ::geometry_msgs::msg::Inertia msg_;
};

class Init_Inertia_iyy
{
public:
  explicit Init_Inertia_iyy(::geometry_msgs::msg::Inertia & msg)
  : msg_(msg)
  {}
  Init_Inertia_iyz iyy(::geometry_msgs::msg::Inertia::_iyy_type arg)
  {
    msg_.iyy = std::move(arg);
    return Init_Inertia_iyz(msg_);
  }

private:
  ::geometry_msgs::msg::Inertia msg_;
};

class Init_Inertia_ixz
{
public:
  explicit Init_Inertia_ixz(::geometry_msgs::msg::Inertia & msg)
  : msg_(msg)
  {}
  Init_Inertia_iyy ixz(::geometry_msgs::msg::Inertia::_ixz_type arg)
  {
    msg_.ixz = std::move(arg);
    return Init_Inertia_iyy(msg_);
  }

private:
  ::geometry_msgs::msg::Inertia msg_;
};

class Init_Inertia_ixy
{
public:
  explicit Init_Inertia_ixy(::geometry_msgs::msg::Inertia & msg)
  : msg_(msg)
  {}
  Init_Inertia_ixz ixy(::geometry_msgs::msg::Inertia::_ixy_type arg)
  {
    msg_.ixy = std::move(arg);
    return Init_Inertia_ixz(msg_);
  }

private:
  ::geometry_msgs::msg::Inertia msg_;
};

class Init_Inertia_ixx
{
public:
  explicit Init_Inertia_ixx(::geometry_msgs::msg::Inertia & msg)
  : msg_(msg)
  {}
  Init_Inertia_ixy ixx(::geometry_msgs::msg::Inertia::_ixx_type arg)
  {
    msg_.ixx = std::move(arg);
    return Init_Inertia_ixy(msg_);
  }

private:
  ::geometry_msgs::msg::Inertia msg_;
};

class Init_Inertia_com
{
public:
  explicit Init_Inertia_com(::geometry_msgs::msg::Inertia & msg)
  : msg_(msg)
  {}
  Init_Inertia_ixx com(::geometry_msgs::msg::Inertia::_com_type arg)
  {
    msg_.com = std::move(arg);
    return Init_Inertia_ixx(msg_);
  }

private:
  ::geometry_msgs::msg::Inertia msg_;
};

class Init_Inertia_m
{
public:
  Init_Inertia_m()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Inertia_com m(::geometry_msgs::msg::Inertia::_m_type arg)
  {
    msg_.m = std::move(arg);
    return Init_Inertia_com(msg_);
  }

private:
  ::geometry_msgs::msg::Inertia msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geometry_msgs::msg::Inertia>()
{
  return geometry_msgs::msg::builder::Init_Inertia_m();
}

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__DETAIL__INERTIA__BUILDER_HPP_
