// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from guided_vr_interfaces:msg/Notification2D.idl
// generated code does not contain a copyright notice

#ifndef GUIDED_VR_INTERFACES__MSG__DETAIL__NOTIFICATION2_D__BUILDER_HPP_
#define GUIDED_VR_INTERFACES__MSG__DETAIL__NOTIFICATION2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "guided_vr_interfaces/msg/detail/notification2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace guided_vr_interfaces
{

namespace msg
{

namespace builder
{

class Init_Notification2D_polygon
{
public:
  explicit Init_Notification2D_polygon(::guided_vr_interfaces::msg::Notification2D & msg)
  : msg_(msg)
  {}
  ::guided_vr_interfaces::msg::Notification2D polygon(::guided_vr_interfaces::msg::Notification2D::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::guided_vr_interfaces::msg::Notification2D msg_;
};

class Init_Notification2D_id
{
public:
  explicit Init_Notification2D_id(::guided_vr_interfaces::msg::Notification2D & msg)
  : msg_(msg)
  {}
  Init_Notification2D_polygon id(::guided_vr_interfaces::msg::Notification2D::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Notification2D_polygon(msg_);
  }

private:
  ::guided_vr_interfaces::msg::Notification2D msg_;
};

class Init_Notification2D_stamp
{
public:
  explicit Init_Notification2D_stamp(::guided_vr_interfaces::msg::Notification2D & msg)
  : msg_(msg)
  {}
  Init_Notification2D_id stamp(::guided_vr_interfaces::msg::Notification2D::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Notification2D_id(msg_);
  }

private:
  ::guided_vr_interfaces::msg::Notification2D msg_;
};

class Init_Notification2D_level
{
public:
  explicit Init_Notification2D_level(::guided_vr_interfaces::msg::Notification2D & msg)
  : msg_(msg)
  {}
  Init_Notification2D_stamp level(::guided_vr_interfaces::msg::Notification2D::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_Notification2D_stamp(msg_);
  }

private:
  ::guided_vr_interfaces::msg::Notification2D msg_;
};

class Init_Notification2D_desc
{
public:
  explicit Init_Notification2D_desc(::guided_vr_interfaces::msg::Notification2D & msg)
  : msg_(msg)
  {}
  Init_Notification2D_level desc(::guided_vr_interfaces::msg::Notification2D::_desc_type arg)
  {
    msg_.desc = std::move(arg);
    return Init_Notification2D_level(msg_);
  }

private:
  ::guided_vr_interfaces::msg::Notification2D msg_;
};

class Init_Notification2D_source
{
public:
  Init_Notification2D_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Notification2D_desc source(::guided_vr_interfaces::msg::Notification2D::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_Notification2D_desc(msg_);
  }

private:
  ::guided_vr_interfaces::msg::Notification2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::guided_vr_interfaces::msg::Notification2D>()
{
  return guided_vr_interfaces::msg::builder::Init_Notification2D_source();
}

}  // namespace guided_vr_interfaces

#endif  // GUIDED_VR_INTERFACES__MSG__DETAIL__NOTIFICATION2_D__BUILDER_HPP_
