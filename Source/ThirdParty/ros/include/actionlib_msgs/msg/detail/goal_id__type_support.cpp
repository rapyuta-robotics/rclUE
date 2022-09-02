// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from actionlib_msgs:msg/GoalID.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "actionlib_msgs/msg/detail/goal_id__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace actionlib_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GoalID_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) actionlib_msgs::msg::GoalID(_init);
}

void GoalID_fini_function(void * message_memory)
{
  auto typed_message = static_cast<actionlib_msgs::msg::GoalID *>(message_memory);
  typed_message->~GoalID();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GoalID_message_member_array[2] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(actionlib_msgs::msg::GoalID, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(actionlib_msgs::msg::GoalID, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GoalID_message_members = {
  "actionlib_msgs::msg",  // message namespace
  "GoalID",  // message name
  2,  // number of fields
  sizeof(actionlib_msgs::msg::GoalID),
  GoalID_message_member_array,  // message members
  GoalID_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalID_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GoalID_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoalID_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace actionlib_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actionlib_msgs::msg::GoalID>()
{
  return &::actionlib_msgs::msg::rosidl_typesupport_introspection_cpp::GoalID_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actionlib_msgs, msg, GoalID)() {
  return &::actionlib_msgs::msg::rosidl_typesupport_introspection_cpp::GoalID_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
