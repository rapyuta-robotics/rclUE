// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:srv/SpawnEntities.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SPAWN_ENTITIES__BUILDER_HPP_
#define UE_MSGS__SRV__DETAIL__SPAWN_ENTITIES__BUILDER_HPP_

#include "ue_msgs/srv/detail/spawn_entities__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_SpawnEntities_Request_spawn_state
{
public:
  explicit Init_SpawnEntities_Request_spawn_state(::ue_msgs::srv::SpawnEntities_Request & msg)
  : msg_(msg)
  {}
  ::ue_msgs::srv::SpawnEntities_Request spawn_state(::ue_msgs::srv::SpawnEntities_Request::_spawn_state_type arg)
  {
    msg_.spawn_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::srv::SpawnEntities_Request msg_;
};

class Init_SpawnEntities_Request_xml
{
public:
  Init_SpawnEntities_Request_xml()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnEntities_Request_spawn_state xml(::ue_msgs::srv::SpawnEntities_Request::_xml_type arg)
  {
    msg_.xml = std::move(arg);
    return Init_SpawnEntities_Request_spawn_state(msg_);
  }

private:
  ::ue_msgs::srv::SpawnEntities_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::srv::SpawnEntities_Request>()
{
  return ue_msgs::srv::builder::Init_SpawnEntities_Request_xml();
}

}  // namespace ue_msgs


namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_SpawnEntities_Response_status_message
{
public:
  explicit Init_SpawnEntities_Response_status_message(::ue_msgs::srv::SpawnEntities_Response & msg)
  : msg_(msg)
  {}
  ::ue_msgs::srv::SpawnEntities_Response status_message(::ue_msgs::srv::SpawnEntities_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::srv::SpawnEntities_Response msg_;
};

class Init_SpawnEntities_Response_success
{
public:
  Init_SpawnEntities_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnEntities_Response_status_message success(::ue_msgs::srv::SpawnEntities_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SpawnEntities_Response_status_message(msg_);
  }

private:
  ::ue_msgs::srv::SpawnEntities_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::srv::SpawnEntities_Response>()
{
  return ue_msgs::srv::builder::Init_SpawnEntities_Response_success();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__SRV__DETAIL__SPAWN_ENTITIES__BUILDER_HPP_
