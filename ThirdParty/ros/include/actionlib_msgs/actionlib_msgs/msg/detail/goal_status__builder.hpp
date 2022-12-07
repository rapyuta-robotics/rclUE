// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from actionlib_msgs:msg/GoalStatus.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__BUILDER_HPP_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "actionlib_msgs/msg/detail/goal_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace actionlib_msgs
{

namespace msg
{

namespace builder
{

class Init_GoalStatus_text
{
public:
  explicit Init_GoalStatus_text(::actionlib_msgs::msg::GoalStatus & msg)
  : msg_(msg)
  {}
  ::actionlib_msgs::msg::GoalStatus text(::actionlib_msgs::msg::GoalStatus::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib_msgs::msg::GoalStatus msg_;
};

class Init_GoalStatus_status
{
public:
  explicit Init_GoalStatus_status(::actionlib_msgs::msg::GoalStatus & msg)
  : msg_(msg)
  {}
  Init_GoalStatus_text status(::actionlib_msgs::msg::GoalStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GoalStatus_text(msg_);
  }

private:
  ::actionlib_msgs::msg::GoalStatus msg_;
};

class Init_GoalStatus_goal_id
{
public:
  Init_GoalStatus_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalStatus_status goal_id(::actionlib_msgs::msg::GoalStatus::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoalStatus_status(msg_);
  }

private:
  ::actionlib_msgs::msg::GoalStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib_msgs::msg::GoalStatus>()
{
  return actionlib_msgs::msg::builder::Init_GoalStatus_goal_id();
}

}  // namespace actionlib_msgs

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__BUILDER_HPP_
