// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from action_msgs:msg/GoalStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "action_msgs/msg/detail/goal_status__rosidl_typesupport_introspection_c.h"
#include "action_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "action_msgs/msg/detail/goal_status__functions.h"
#include "action_msgs/msg/detail/goal_status__struct.h"


// Include directives for member types
// Member `goal_info`
#include "action_msgs/msg/goal_info.h"
// Member `goal_info`
#include "action_msgs/msg/detail/goal_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoalStatus__rosidl_typesupport_introspection_c__GoalStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_msgs__msg__GoalStatus__init(message_memory);
}

void GoalStatus__rosidl_typesupport_introspection_c__GoalStatus_fini_function(void * message_memory)
{
  action_msgs__msg__GoalStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoalStatus__rosidl_typesupport_introspection_c__GoalStatus_message_member_array[2] = {
  {
    "goal_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_msgs__msg__GoalStatus, goal_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_msgs__msg__GoalStatus, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalStatus__rosidl_typesupport_introspection_c__GoalStatus_message_members = {
  "action_msgs__msg",  // message namespace
  "GoalStatus",  // message name
  2,  // number of fields
  sizeof(action_msgs__msg__GoalStatus),
  GoalStatus__rosidl_typesupport_introspection_c__GoalStatus_message_member_array,  // message members
  GoalStatus__rosidl_typesupport_introspection_c__GoalStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalStatus__rosidl_typesupport_introspection_c__GoalStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalStatus__rosidl_typesupport_introspection_c__GoalStatus_message_type_support_handle = {
  0,
  &GoalStatus__rosidl_typesupport_introspection_c__GoalStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_msgs, msg, GoalStatus)() {
  GoalStatus__rosidl_typesupport_introspection_c__GoalStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_msgs, msg, GoalInfo)();
  if (!GoalStatus__rosidl_typesupport_introspection_c__GoalStatus_message_type_support_handle.typesupport_identifier) {
    GoalStatus__rosidl_typesupport_introspection_c__GoalStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalStatus__rosidl_typesupport_introspection_c__GoalStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
