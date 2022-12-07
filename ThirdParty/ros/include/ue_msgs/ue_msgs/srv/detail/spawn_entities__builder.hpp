// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:srv/SpawnEntities.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SPAWN_ENTITIES__BUILDER_HPP_
#define UE_MSGS__SRV__DETAIL__SPAWN_ENTITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ue_msgs/srv/detail/spawn_entities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_SpawnEntities_Request_json_parameters
{
public:
  explicit Init_SpawnEntities_Request_json_parameters(::ue_msgs::srv::SpawnEntities_Request & msg)
  : msg_(msg)
  {}
  ::ue_msgs::srv::SpawnEntities_Request json_parameters(::ue_msgs::srv::SpawnEntities_Request::_json_parameters_type arg)
  {
    msg_.json_parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::srv::SpawnEntities_Request msg_;
};

class Init_SpawnEntities_Request_tags
{
public:
  explicit Init_SpawnEntities_Request_tags(::ue_msgs::srv::SpawnEntities_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnEntities_Request_json_parameters tags(::ue_msgs::srv::SpawnEntities_Request::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return Init_SpawnEntities_Request_json_parameters(msg_);
  }

private:
  ::ue_msgs::srv::SpawnEntities_Request msg_;
};

class Init_SpawnEntities_Request_state
{
public:
  explicit Init_SpawnEntities_Request_state(::ue_msgs::srv::SpawnEntities_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnEntities_Request_tags state(::ue_msgs::srv::SpawnEntities_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SpawnEntities_Request_tags(msg_);
  }

private:
  ::ue_msgs::srv::SpawnEntities_Request msg_;
};

class Init_SpawnEntities_Request_type
{
public:
  Init_SpawnEntities_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnEntities_Request_state type(::ue_msgs::srv::SpawnEntities_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SpawnEntities_Request_state(msg_);
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
  return ue_msgs::srv::builder::Init_SpawnEntities_Request_type();
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
