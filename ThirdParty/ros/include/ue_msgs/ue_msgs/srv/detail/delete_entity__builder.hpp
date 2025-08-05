// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:srv/DeleteEntity.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__DELETE_ENTITY__BUILDER_HPP_
#define UE_MSGS__SRV__DETAIL__DELETE_ENTITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ue_msgs/srv/detail/delete_entity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_DeleteEntity_Request_name
{
public:
  Init_DeleteEntity_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ue_msgs::srv::DeleteEntity_Request name(::ue_msgs::srv::DeleteEntity_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::srv::DeleteEntity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::srv::DeleteEntity_Request>()
{
  return ue_msgs::srv::builder::Init_DeleteEntity_Request_name();
}

}  // namespace ue_msgs


namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_DeleteEntity_Response_status_message
{
public:
  explicit Init_DeleteEntity_Response_status_message(::ue_msgs::srv::DeleteEntity_Response & msg)
  : msg_(msg)
  {}
  ::ue_msgs::srv::DeleteEntity_Response status_message(::ue_msgs::srv::DeleteEntity_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::srv::DeleteEntity_Response msg_;
};

class Init_DeleteEntity_Response_success
{
public:
  Init_DeleteEntity_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeleteEntity_Response_status_message success(::ue_msgs::srv::DeleteEntity_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DeleteEntity_Response_status_message(msg_);
  }

private:
  ::ue_msgs::srv::DeleteEntity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::srv::DeleteEntity_Response>()
{
  return ue_msgs::srv::builder::Init_DeleteEntity_Response_success();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__SRV__DETAIL__DELETE_ENTITY__BUILDER_HPP_
