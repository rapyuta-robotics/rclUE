// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:srv/SpawnEntity.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SPAWN_ENTITY__BUILDER_HPP_
#define UE_MSGS__SRV__DETAIL__SPAWN_ENTITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ue_msgs/srv/detail/spawn_entity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_SpawnEntity_Request_json_parameters
{
public:
  explicit Init_SpawnEntity_Request_json_parameters(::ue_msgs::srv::SpawnEntity_Request & msg)
  : msg_(msg)
  {}
  ::ue_msgs::srv::SpawnEntity_Request json_parameters(::ue_msgs::srv::SpawnEntity_Request::_json_parameters_type arg)
  {
    msg_.json_parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::srv::SpawnEntity_Request msg_;
};

class Init_SpawnEntity_Request_tags
{
public:
  explicit Init_SpawnEntity_Request_tags(::ue_msgs::srv::SpawnEntity_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnEntity_Request_json_parameters tags(::ue_msgs::srv::SpawnEntity_Request::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return Init_SpawnEntity_Request_json_parameters(msg_);
  }

private:
  ::ue_msgs::srv::SpawnEntity_Request msg_;
};

class Init_SpawnEntity_Request_state
{
public:
  explicit Init_SpawnEntity_Request_state(::ue_msgs::srv::SpawnEntity_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnEntity_Request_tags state(::ue_msgs::srv::SpawnEntity_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SpawnEntity_Request_tags(msg_);
  }

private:
  ::ue_msgs::srv::SpawnEntity_Request msg_;
};

class Init_SpawnEntity_Request_robot_namespace
{
public:
  explicit Init_SpawnEntity_Request_robot_namespace(::ue_msgs::srv::SpawnEntity_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnEntity_Request_state robot_namespace(::ue_msgs::srv::SpawnEntity_Request::_robot_namespace_type arg)
  {
    msg_.robot_namespace = std::move(arg);
    return Init_SpawnEntity_Request_state(msg_);
  }

private:
  ::ue_msgs::srv::SpawnEntity_Request msg_;
};

class Init_SpawnEntity_Request_xml
{
public:
  Init_SpawnEntity_Request_xml()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnEntity_Request_robot_namespace xml(::ue_msgs::srv::SpawnEntity_Request::_xml_type arg)
  {
    msg_.xml = std::move(arg);
    return Init_SpawnEntity_Request_robot_namespace(msg_);
  }

private:
  ::ue_msgs::srv::SpawnEntity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::srv::SpawnEntity_Request>()
{
  return ue_msgs::srv::builder::Init_SpawnEntity_Request_xml();
}

}  // namespace ue_msgs


namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_SpawnEntity_Response_status_message
{
public:
  explicit Init_SpawnEntity_Response_status_message(::ue_msgs::srv::SpawnEntity_Response & msg)
  : msg_(msg)
  {}
  ::ue_msgs::srv::SpawnEntity_Response status_message(::ue_msgs::srv::SpawnEntity_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::srv::SpawnEntity_Response msg_;
};

class Init_SpawnEntity_Response_success
{
public:
  Init_SpawnEntity_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnEntity_Response_status_message success(::ue_msgs::srv::SpawnEntity_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SpawnEntity_Response_status_message(msg_);
  }

private:
  ::ue_msgs::srv::SpawnEntity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::srv::SpawnEntity_Response>()
{
  return ue_msgs::srv::builder::Init_SpawnEntity_Response_success();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__SRV__DETAIL__SPAWN_ENTITY__BUILDER_HPP_
