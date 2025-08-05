// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:srv/GetEntityState.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__GET_ENTITY_STATE__BUILDER_HPP_
#define UE_MSGS__SRV__DETAIL__GET_ENTITY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ue_msgs/srv/detail/get_entity_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_GetEntityState_Request_reference_frame
{
public:
  explicit Init_GetEntityState_Request_reference_frame(::ue_msgs::srv::GetEntityState_Request & msg)
  : msg_(msg)
  {}
  ::ue_msgs::srv::GetEntityState_Request reference_frame(::ue_msgs::srv::GetEntityState_Request::_reference_frame_type arg)
  {
    msg_.reference_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::srv::GetEntityState_Request msg_;
};

class Init_GetEntityState_Request_name
{
public:
  Init_GetEntityState_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEntityState_Request_reference_frame name(::ue_msgs::srv::GetEntityState_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_GetEntityState_Request_reference_frame(msg_);
  }

private:
  ::ue_msgs::srv::GetEntityState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::srv::GetEntityState_Request>()
{
  return ue_msgs::srv::builder::Init_GetEntityState_Request_name();
}

}  // namespace ue_msgs


namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_GetEntityState_Response_success
{
public:
  explicit Init_GetEntityState_Response_success(::ue_msgs::srv::GetEntityState_Response & msg)
  : msg_(msg)
  {}
  ::ue_msgs::srv::GetEntityState_Response success(::ue_msgs::srv::GetEntityState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::srv::GetEntityState_Response msg_;
};

class Init_GetEntityState_Response_state
{
public:
  Init_GetEntityState_Response_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEntityState_Response_success state(::ue_msgs::srv::GetEntityState_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_GetEntityState_Response_success(msg_);
  }

private:
  ::ue_msgs::srv::GetEntityState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::srv::GetEntityState_Response>()
{
  return ue_msgs::srv::builder::Init_GetEntityState_Response_state();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__SRV__DETAIL__GET_ENTITY_STATE__BUILDER_HPP_
