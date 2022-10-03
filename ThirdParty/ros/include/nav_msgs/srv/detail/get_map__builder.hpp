// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_msgs:srv/GetMap.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__DETAIL__GET_MAP__BUILDER_HPP_
#define NAV_MSGS__SRV__DETAIL__GET_MAP__BUILDER_HPP_

#include "nav_msgs/srv/detail/get_map__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nav_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_msgs::srv::GetMap_Request>()
{
  return ::nav_msgs::srv::GetMap_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace nav_msgs


namespace nav_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMap_Response_map
{
public:
  Init_GetMap_Response_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav_msgs::srv::GetMap_Response map(::nav_msgs::srv::GetMap_Response::_map_type arg)
  {
    msg_.map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_msgs::srv::GetMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_msgs::srv::GetMap_Response>()
{
  return nav_msgs::srv::builder::Init_GetMap_Response_map();
}

}  // namespace nav_msgs

#endif  // NAV_MSGS__SRV__DETAIL__GET_MAP__BUILDER_HPP_
