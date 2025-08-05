// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
#define NAV_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav_msgs/msg/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav_msgs
{

namespace msg
{

namespace builder
{

class Init_Path_poses
{
public:
  explicit Init_Path_poses(::nav_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  ::nav_msgs::msg::Path poses(::nav_msgs::msg::Path::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_msgs::msg::Path msg_;
};

class Init_Path_header
{
public:
  Init_Path_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_poses header(::nav_msgs::msg::Path::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Path_poses(msg_);
  }

private:
  ::nav_msgs::msg::Path msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_msgs::msg::Path>()
{
  return nav_msgs::msg::builder::Init_Path_header();
}

}  // namespace nav_msgs

#endif  // NAV_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
