// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from action_msgs:srv/CancelGoal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "action_msgs/srv/detail/cancel_goal__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace action_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CancelGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) action_msgs::srv::CancelGoal_Request(_init);
}

void CancelGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<action_msgs::srv::CancelGoal_Request *>(message_memory);
  typed_message->~CancelGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CancelGoal_Request_message_member_array[1] = {
  {
    "goal_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<action_msgs::msg::GoalInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_msgs::srv::CancelGoal_Request, goal_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CancelGoal_Request_message_members = {
  "action_msgs::srv",  // message namespace
  "CancelGoal_Request",  // message name
  1,  // number of fields
  sizeof(action_msgs::srv::CancelGoal_Request),
  CancelGoal_Request_message_member_array,  // message members
  CancelGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CancelGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CancelGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CancelGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace action_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<action_msgs::srv::CancelGoal_Request>()
{
  return &::action_msgs::srv::rosidl_typesupport_introspection_cpp::CancelGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_msgs, srv, CancelGoal_Request)() {
  return &::action_msgs::srv::rosidl_typesupport_introspection_cpp::CancelGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "action_msgs/srv/detail/cancel_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace action_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CancelGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) action_msgs::srv::CancelGoal_Response(_init);
}

void CancelGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<action_msgs::srv::CancelGoal_Response *>(message_memory);
  typed_message->~CancelGoal_Response();
}

size_t size_function__CancelGoal_Response__goals_canceling(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<action_msgs::msg::GoalInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CancelGoal_Response__goals_canceling(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<action_msgs::msg::GoalInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__CancelGoal_Response__goals_canceling(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<action_msgs::msg::GoalInfo> *>(untyped_member);
  return &member[index];
}

void resize_function__CancelGoal_Response__goals_canceling(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<action_msgs::msg::GoalInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CancelGoal_Response_message_member_array[2] = {
  {
    "return_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_msgs::srv::CancelGoal_Response, return_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goals_canceling",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<action_msgs::msg::GoalInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_msgs::srv::CancelGoal_Response, goals_canceling),  // bytes offset in struct
    nullptr,  // default value
    size_function__CancelGoal_Response__goals_canceling,  // size() function pointer
    get_const_function__CancelGoal_Response__goals_canceling,  // get_const(index) function pointer
    get_function__CancelGoal_Response__goals_canceling,  // get(index) function pointer
    resize_function__CancelGoal_Response__goals_canceling  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CancelGoal_Response_message_members = {
  "action_msgs::srv",  // message namespace
  "CancelGoal_Response",  // message name
  2,  // number of fields
  sizeof(action_msgs::srv::CancelGoal_Response),
  CancelGoal_Response_message_member_array,  // message members
  CancelGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CancelGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CancelGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CancelGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace action_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<action_msgs::srv::CancelGoal_Response>()
{
  return &::action_msgs::srv::rosidl_typesupport_introspection_cpp::CancelGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_msgs, srv, CancelGoal_Response)() {
  return &::action_msgs::srv::rosidl_typesupport_introspection_cpp::CancelGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "action_msgs/srv/detail/cancel_goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace action_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CancelGoal_service_members = {
  "action_msgs::srv",  // service namespace
  "CancelGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<action_msgs::srv::CancelGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t CancelGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CancelGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace action_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<action_msgs::srv::CancelGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::action_msgs::srv::rosidl_typesupport_introspection_cpp::CancelGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::action_msgs::srv::CancelGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::action_msgs::srv::CancelGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, action_msgs, srv, CancelGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<action_msgs::srv::CancelGoal>();
}

#ifdef __cplusplus
}
#endif
