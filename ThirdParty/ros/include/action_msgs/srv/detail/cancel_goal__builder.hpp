// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_msgs:srv/CancelGoal.idl
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__SRV__DETAIL__CANCEL_GOAL__BUILDER_HPP_
#define ACTION_MSGS__SRV__DETAIL__CANCEL_GOAL__BUILDER_HPP_

#include "action_msgs/srv/detail/cancel_goal__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace action_msgs
{

namespace srv
{

namespace builder
{

class Init_CancelGoal_Request_goal_info
{
public:
  Init_CancelGoal_Request_goal_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_msgs::srv::CancelGoal_Request goal_info(::action_msgs::srv::CancelGoal_Request::_goal_info_type arg)
  {
    msg_.goal_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_msgs::srv::CancelGoal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_msgs::srv::CancelGoal_Request>()
{
  return action_msgs::srv::builder::Init_CancelGoal_Request_goal_info();
}

}  // namespace action_msgs


namespace action_msgs
{

namespace srv
{

namespace builder
{

class Init_CancelGoal_Response_goals_canceling
{
public:
  explicit Init_CancelGoal_Response_goals_canceling(::action_msgs::srv::CancelGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_msgs::srv::CancelGoal_Response goals_canceling(::action_msgs::srv::CancelGoal_Response::_goals_canceling_type arg)
  {
    msg_.goals_canceling = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_msgs::srv::CancelGoal_Response msg_;
};

class Init_CancelGoal_Response_return_code
{
public:
  Init_CancelGoal_Response_return_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CancelGoal_Response_goals_canceling return_code(::action_msgs::srv::CancelGoal_Response::_return_code_type arg)
  {
    msg_.return_code = std::move(arg);
    return Init_CancelGoal_Response_goals_canceling(msg_);
  }

private:
  ::action_msgs::srv::CancelGoal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_msgs::srv::CancelGoal_Response>()
{
  return action_msgs::srv::builder::Init_CancelGoal_Response_return_code();
}

}  // namespace action_msgs

#endif  // ACTION_MSGS__SRV__DETAIL__CANCEL_GOAL__BUILDER_HPP_
