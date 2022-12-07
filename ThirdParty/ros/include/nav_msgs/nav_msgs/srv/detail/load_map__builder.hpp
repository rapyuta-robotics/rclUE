// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_msgs:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_
#define NAV_MSGS__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav_msgs/srv/detail/load_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadMap_Request_map_url
{
public:
  Init_LoadMap_Request_map_url()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav_msgs::srv::LoadMap_Request map_url(::nav_msgs::srv::LoadMap_Request::_map_url_type arg)
  {
    msg_.map_url = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_msgs::srv::LoadMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_msgs::srv::LoadMap_Request>()
{
  return nav_msgs::srv::builder::Init_LoadMap_Request_map_url();
}

}  // namespace nav_msgs


namespace nav_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadMap_Response_result
{
public:
  explicit Init_LoadMap_Response_result(::nav_msgs::srv::LoadMap_Response & msg)
  : msg_(msg)
  {}
  ::nav_msgs::srv::LoadMap_Response result(::nav_msgs::srv::LoadMap_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_msgs::srv::LoadMap_Response msg_;
};

class Init_LoadMap_Response_map
{
public:
  Init_LoadMap_Response_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadMap_Response_result map(::nav_msgs::srv::LoadMap_Response::_map_type arg)
  {
    msg_.map = std::move(arg);
    return Init_LoadMap_Response_result(msg_);
  }

private:
  ::nav_msgs::srv::LoadMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_msgs::srv::LoadMap_Response>()
{
  return nav_msgs::srv::builder::Init_LoadMap_Response_map();
}

}  // namespace nav_msgs

#endif  // NAV_MSGS__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_
