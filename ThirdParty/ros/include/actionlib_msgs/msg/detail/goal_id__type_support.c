// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from actionlib_msgs:msg/GoalID.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "actionlib_msgs/msg/detail/goal_id__rosidl_typesupport_introspection_c.h"
#include "actionlib_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "actionlib_msgs/msg/detail/goal_id__functions.h"
#include "actionlib_msgs/msg/detail/goal_id__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoalID__rosidl_typesupport_introspection_c__GoalID_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  actionlib_msgs__msg__GoalID__init(message_memory);
}

void GoalID__rosidl_typesupport_introspection_c__GoalID_fini_function(void * message_memory)
{
  actionlib_msgs__msg__GoalID__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoalID__rosidl_typesupport_introspection_c__GoalID_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(actionlib_msgs__msg__GoalID, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(actionlib_msgs__msg__GoalID, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalID__rosidl_typesupport_introspection_c__GoalID_message_members = {
  "actionlib_msgs__msg",  // message namespace
  "GoalID",  // message name
  2,  // number of fields
  sizeof(actionlib_msgs__msg__GoalID),
  GoalID__rosidl_typesupport_introspection_c__GoalID_message_member_array,  // message members
  GoalID__rosidl_typesupport_introspection_c__GoalID_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalID__rosidl_typesupport_introspection_c__GoalID_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalID__rosidl_typesupport_introspection_c__GoalID_message_type_support_handle = {
  0,
  &GoalID__rosidl_typesupport_introspection_c__GoalID_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_actionlib_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actionlib_msgs, msg, GoalID)() {
  GoalID__rosidl_typesupport_introspection_c__GoalID_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!GoalID__rosidl_typesupport_introspection_c__GoalID_message_type_support_handle.typesupport_identifier) {
    GoalID__rosidl_typesupport_introspection_c__GoalID_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalID__rosidl_typesupport_introspection_c__GoalID_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
