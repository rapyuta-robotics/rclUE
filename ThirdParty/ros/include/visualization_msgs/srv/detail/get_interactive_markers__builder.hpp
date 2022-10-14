// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from visualization_msgs:srv/GetInteractiveMarkers.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__BUILDER_HPP_
#define VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__BUILDER_HPP_

#include "visualization_msgs/srv/detail/get_interactive_markers__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace visualization_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::visualization_msgs::srv::GetInteractiveMarkers_Request>()
{
  return ::visualization_msgs::srv::GetInteractiveMarkers_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace visualization_msgs


namespace visualization_msgs
{

namespace srv
{

namespace builder
{

class Init_GetInteractiveMarkers_Response_markers
{
public:
  explicit Init_GetInteractiveMarkers_Response_markers(::visualization_msgs::srv::GetInteractiveMarkers_Response & msg)
  : msg_(msg)
  {}
  ::visualization_msgs::srv::GetInteractiveMarkers_Response markers(::visualization_msgs::srv::GetInteractiveMarkers_Response::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visualization_msgs::srv::GetInteractiveMarkers_Response msg_;
};

class Init_GetInteractiveMarkers_Response_sequence_number
{
public:
  Init_GetInteractiveMarkers_Response_sequence_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetInteractiveMarkers_Response_markers sequence_number(::visualization_msgs::srv::GetInteractiveMarkers_Response::_sequence_number_type arg)
  {
    msg_.sequence_number = std::move(arg);
    return Init_GetInteractiveMarkers_Response_markers(msg_);
  }

private:
  ::visualization_msgs::srv::GetInteractiveMarkers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::visualization_msgs::srv::GetInteractiveMarkers_Response>()
{
  return visualization_msgs::srv::builder::Init_GetInteractiveMarkers_Response_sequence_number();
}

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__BUILDER_HPP_
