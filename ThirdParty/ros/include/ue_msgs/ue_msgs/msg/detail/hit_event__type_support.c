// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ue_msgs:msg/HitEvent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ue_msgs/msg/detail/hit_event__rosidl_typesupport_introspection_c.h"
#include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ue_msgs/msg/detail/hit_event__functions.h"
#include "ue_msgs/msg/detail/hit_event__struct.h"


// Include directives for member types
// Member `self_name`
// Member `other_actor_name`
// Member `other_component_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `normal_impluse`
#include "geometry_msgs/msg/vector3.h"
// Member `normal_impluse`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `hit_result`
#include "ue_msgs/msg/hit_result.h"
// Member `hit_result`
#include "ue_msgs/msg/detail/hit_result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ue_msgs__msg__HitEvent__rosidl_typesupport_introspection_c__HitEvent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__msg__HitEvent__init(message_memory);
}

void ue_msgs__msg__HitEvent__rosidl_typesupport_introspection_c__HitEvent_fini_function(void * message_memory)
{
  ue_msgs__msg__HitEvent__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ue_msgs__msg__HitEvent__rosidl_typesupport_introspection_c__HitEvent_message_member_array[5] = {
  {
    "self_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__HitEvent, self_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "other_actor_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__HitEvent, other_actor_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "normal_impluse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__HitEvent, normal_impluse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hit_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__HitEvent, hit_result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "other_component_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__HitEvent, other_component_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ue_msgs__msg__HitEvent__rosidl_typesupport_introspection_c__HitEvent_message_members = {
  "ue_msgs__msg",  // message namespace
  "HitEvent",  // message name
  5,  // number of fields
  sizeof(ue_msgs__msg__HitEvent),
  ue_msgs__msg__HitEvent__rosidl_typesupport_introspection_c__HitEvent_message_member_array,  // message members
  ue_msgs__msg__HitEvent__rosidl_typesupport_introspection_c__HitEvent_init_function,  // function to initialize message memory (memory has to be allocated)
  ue_msgs__msg__HitEvent__rosidl_typesupport_introspection_c__HitEvent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ue_msgs__msg__HitEvent__rosidl_typesupport_introspection_c__HitEvent_message_type_support_handle = {
  0,
  &ue_msgs__msg__HitEvent__rosidl_typesupport_introspection_c__HitEvent_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, HitEvent)() {
  ue_msgs__msg__HitEvent__rosidl_typesupport_introspection_c__HitEvent_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ue_msgs__msg__HitEvent__rosidl_typesupport_introspection_c__HitEvent_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, HitResult)();
  if (!ue_msgs__msg__HitEvent__rosidl_typesupport_introspection_c__HitEvent_message_type_support_handle.typesupport_identifier) {
    ue_msgs__msg__HitEvent__rosidl_typesupport_introspection_c__HitEvent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ue_msgs__msg__HitEvent__rosidl_typesupport_introspection_c__HitEvent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
