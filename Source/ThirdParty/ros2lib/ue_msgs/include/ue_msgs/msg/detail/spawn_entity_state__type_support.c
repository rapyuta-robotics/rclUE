// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ue_msgs:msg/SpawnEntityState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ue_msgs/msg/detail/spawn_entity_state__rosidl_typesupport_introspection_c.h"
#include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ue_msgs/msg/detail/spawn_entity_state__functions.h"
#include "ue_msgs/msg/detail/spawn_entity_state__struct.h"


// Include directives for member types
// Member `xml`
// Member `tags`
#include "rosidl_runtime_c/string_functions.h"
// Member `state`
#include "ue_msgs/msg/entity_state.h"
// Member `state`
#include "ue_msgs/msg/detail/entity_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SpawnEntityState__rosidl_typesupport_introspection_c__SpawnEntityState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__msg__SpawnEntityState__init(message_memory);
}

void SpawnEntityState__rosidl_typesupport_introspection_c__SpawnEntityState_fini_function(void * message_memory)
{
  ue_msgs__msg__SpawnEntityState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SpawnEntityState__rosidl_typesupport_introspection_c__SpawnEntityState_message_member_array[3] = {
  {
    "xml",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__SpawnEntityState, xml),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__SpawnEntityState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__SpawnEntityState, tags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SpawnEntityState__rosidl_typesupport_introspection_c__SpawnEntityState_message_members = {
  "ue_msgs__msg",  // message namespace
  "SpawnEntityState",  // message name
  3,  // number of fields
  sizeof(ue_msgs__msg__SpawnEntityState),
  SpawnEntityState__rosidl_typesupport_introspection_c__SpawnEntityState_message_member_array,  // message members
  SpawnEntityState__rosidl_typesupport_introspection_c__SpawnEntityState_init_function,  // function to initialize message memory (memory has to be allocated)
  SpawnEntityState__rosidl_typesupport_introspection_c__SpawnEntityState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SpawnEntityState__rosidl_typesupport_introspection_c__SpawnEntityState_message_type_support_handle = {
  0,
  &SpawnEntityState__rosidl_typesupport_introspection_c__SpawnEntityState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, SpawnEntityState)() {
  SpawnEntityState__rosidl_typesupport_introspection_c__SpawnEntityState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, EntityState)();
  if (!SpawnEntityState__rosidl_typesupport_introspection_c__SpawnEntityState_message_type_support_handle.typesupport_identifier) {
    SpawnEntityState__rosidl_typesupport_introspection_c__SpawnEntityState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SpawnEntityState__rosidl_typesupport_introspection_c__SpawnEntityState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
