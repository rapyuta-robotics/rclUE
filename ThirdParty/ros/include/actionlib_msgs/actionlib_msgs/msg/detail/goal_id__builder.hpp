// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from actionlib_msgs:msg/GoalID.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_ID__BUILDER_HPP_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "actionlib_msgs/msg/detail/goal_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace actionlib_msgs
{

namespace msg
{

namespace builder
{

class Init_GoalID_id
{
public:
  explicit Init_GoalID_id(::actionlib_msgs::msg::GoalID & msg)
  : msg_(msg)
  {}
  ::actionlib_msgs::msg::GoalID id(::actionlib_msgs::msg::GoalID::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actionlib_msgs::msg::GoalID msg_;
};

class Init_GoalID_stamp
{
public:
  Init_GoalID_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalID_id stamp(::actionlib_msgs::msg::GoalID::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_GoalID_id(msg_);
  }

private:
  ::actionlib_msgs::msg::GoalID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::actionlib_msgs::msg::GoalID>()
{
  return actionlib_msgs::msg::builder::Init_GoalID_stamp();
}

}  // namespace actionlib_msgs

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_ID__BUILDER_HPP_
