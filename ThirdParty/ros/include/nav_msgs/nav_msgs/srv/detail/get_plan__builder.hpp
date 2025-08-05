// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_msgs:srv/GetPlan.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__DETAIL__GET_PLAN__BUILDER_HPP_
#define NAV_MSGS__SRV__DETAIL__GET_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav_msgs/srv/detail/get_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPlan_Request_tolerance
{
public:
  explicit Init_GetPlan_Request_tolerance(::nav_msgs::srv::GetPlan_Request & msg)
  : msg_(msg)
  {}
  ::nav_msgs::srv::GetPlan_Request tolerance(::nav_msgs::srv::GetPlan_Request::_tolerance_type arg)
  {
    msg_.tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_msgs::srv::GetPlan_Request msg_;
};

class Init_GetPlan_Request_goal
{
public:
  explicit Init_GetPlan_Request_goal(::nav_msgs::srv::GetPlan_Request & msg)
  : msg_(msg)
  {}
  Init_GetPlan_Request_tolerance goal(::nav_msgs::srv::GetPlan_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_GetPlan_Request_tolerance(msg_);
  }

private:
  ::nav_msgs::srv::GetPlan_Request msg_;
};

class Init_GetPlan_Request_start
{
public:
  Init_GetPlan_Request_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPlan_Request_goal start(::nav_msgs::srv::GetPlan_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_GetPlan_Request_goal(msg_);
  }

private:
  ::nav_msgs::srv::GetPlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_msgs::srv::GetPlan_Request>()
{
  return nav_msgs::srv::builder::Init_GetPlan_Request_start();
}

}  // namespace nav_msgs


namespace nav_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPlan_Response_plan
{
public:
  Init_GetPlan_Response_plan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav_msgs::srv::GetPlan_Response plan(::nav_msgs::srv::GetPlan_Response::_plan_type arg)
  {
    msg_.plan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_msgs::srv::GetPlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_msgs::srv::GetPlan_Response>()
{
  return nav_msgs::srv::builder::Init_GetPlan_Response_plan();
}

}  // namespace nav_msgs

#endif  // NAV_MSGS__SRV__DETAIL__GET_PLAN__BUILDER_HPP_
