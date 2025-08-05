// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:srv/SpawnWorld.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__SRV__DETAIL__SPAWN_WORLD__BUILDER_HPP_
#define UE_MSGS__SRV__DETAIL__SPAWN_WORLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ue_msgs/srv/detail/spawn_world__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_SpawnWorld_Request_json_parameters
{
public:
  explicit Init_SpawnWorld_Request_json_parameters(::ue_msgs::srv::SpawnWorld_Request & msg)
  : msg_(msg)
  {}
  ::ue_msgs::srv::SpawnWorld_Request json_parameters(::ue_msgs::srv::SpawnWorld_Request::_json_parameters_type arg)
  {
    msg_.json_parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::srv::SpawnWorld_Request msg_;
};

class Init_SpawnWorld_Request_pose
{
public:
  explicit Init_SpawnWorld_Request_pose(::ue_msgs::srv::SpawnWorld_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnWorld_Request_json_parameters pose(::ue_msgs::srv::SpawnWorld_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_SpawnWorld_Request_json_parameters(msg_);
  }

private:
  ::ue_msgs::srv::SpawnWorld_Request msg_;
};

class Init_SpawnWorld_Request_world_instance_name
{
public:
  explicit Init_SpawnWorld_Request_world_instance_name(::ue_msgs::srv::SpawnWorld_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnWorld_Request_pose world_instance_name(::ue_msgs::srv::SpawnWorld_Request::_world_instance_name_type arg)
  {
    msg_.world_instance_name = std::move(arg);
    return Init_SpawnWorld_Request_pose(msg_);
  }

private:
  ::ue_msgs::srv::SpawnWorld_Request msg_;
};

class Init_SpawnWorld_Request_world_model
{
public:
  Init_SpawnWorld_Request_world_model()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnWorld_Request_world_instance_name world_model(::ue_msgs::srv::SpawnWorld_Request::_world_model_type arg)
  {
    msg_.world_model = std::move(arg);
    return Init_SpawnWorld_Request_world_instance_name(msg_);
  }

private:
  ::ue_msgs::srv::SpawnWorld_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::srv::SpawnWorld_Request>()
{
  return ue_msgs::srv::builder::Init_SpawnWorld_Request_world_model();
}

}  // namespace ue_msgs


namespace ue_msgs
{

namespace srv
{

namespace builder
{

class Init_SpawnWorld_Response_status_message
{
public:
  explicit Init_SpawnWorld_Response_status_message(::ue_msgs::srv::SpawnWorld_Response & msg)
  : msg_(msg)
  {}
  ::ue_msgs::srv::SpawnWorld_Response status_message(::ue_msgs::srv::SpawnWorld_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::srv::SpawnWorld_Response msg_;
};

class Init_SpawnWorld_Response_success
{
public:
  Init_SpawnWorld_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnWorld_Response_status_message success(::ue_msgs::srv::SpawnWorld_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SpawnWorld_Response_status_message(msg_);
  }

private:
  ::ue_msgs::srv::SpawnWorld_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::srv::SpawnWorld_Response>()
{
  return ue_msgs::srv::builder::Init_SpawnWorld_Response_success();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__SRV__DETAIL__SPAWN_WORLD__BUILDER_HPP_
