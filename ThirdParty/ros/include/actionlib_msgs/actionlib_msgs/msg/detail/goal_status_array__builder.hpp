// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from actionlib_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__BUILDER_HPP_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "actionlib_msgs/msg/detail/goal_status_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace actionlib_msgs
{

namespace msg
{

namespace builder
{

class Init_GoalStatusArray_status_list
{
public:
  explicit Init_GoalStatusArray_status_list(::actionlib_msgs::msg::GoalStatusArray & msg)
  : msg_(msg)
  {}
  ::actionlib_msgs::msg::GoalStatusArray status_list(::actionlib_msgs::msg::GoalStatusArray::_status_list_type arg)
  {
    msg_.status_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib_msgs::msg::GoalStatusArray msg_;
};

class Init_GoalStatusArray_header
{
public:
  Init_GoalStatusArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalStatusArray_status_list header(::actionlib_msgs::msg::GoalStatusArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GoalStatusArray_status_list(msg_);
  }

private:
  ::actionlib_msgs::msg::GoalStatusArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib_msgs::msg::GoalStatusArray>()
{
  return actionlib_msgs::msg::builder::Init_GoalStatusArray_header();
}

}  // namespace actionlib_msgs

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__BUILDER_HPP_
