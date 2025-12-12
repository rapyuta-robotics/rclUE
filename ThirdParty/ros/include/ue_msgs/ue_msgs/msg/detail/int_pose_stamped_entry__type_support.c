// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ue_msgs:msg/IntPoseStampedEntry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ue_msgs/msg/detail/int_pose_stamped_entry__rosidl_typesupport_introspection_c.h"
#include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ue_msgs/msg/detail/int_pose_stamped_entry__functions.h"
#include "ue_msgs/msg/detail/int_pose_stamped_entry__struct.h"


// Include directives for member types
// Member `value`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `value`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ue_msgs__msg__IntPoseStampedEntry__rosidl_typesupport_introspection_c__IntPoseStampedEntry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__msg__IntPoseStampedEntry__init(message_memory);
}

void ue_msgs__msg__IntPoseStampedEntry__rosidl_typesupport_introspection_c__IntPoseStampedEntry_fini_function(void * message_memory)
{
  ue_msgs__msg__IntPoseStampedEntry__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ue_msgs__msg__IntPoseStampedEntry__rosidl_typesupport_introspection_c__IntPoseStampedEntry_message_member_array[2] = {
  {
    "key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__IntPoseStampedEntry, key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__IntPoseStampedEntry, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ue_msgs__msg__IntPoseStampedEntry__rosidl_typesupport_introspection_c__IntPoseStampedEntry_message_members = {
  "ue_msgs__msg",  // message namespace
  "IntPoseStampedEntry",  // message name
  2,  // number of fields
  sizeof(ue_msgs__msg__IntPoseStampedEntry),
  false,  // has_any_key_member_
  ue_msgs__msg__IntPoseStampedEntry__rosidl_typesupport_introspection_c__IntPoseStampedEntry_message_member_array,  // message members
  ue_msgs__msg__IntPoseStampedEntry__rosidl_typesupport_introspection_c__IntPoseStampedEntry_init_function,  // function to initialize message memory (memory has to be allocated)
  ue_msgs__msg__IntPoseStampedEntry__rosidl_typesupport_introspection_c__IntPoseStampedEntry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ue_msgs__msg__IntPoseStampedEntry__rosidl_typesupport_introspection_c__IntPoseStampedEntry_message_type_support_handle = {
  0,
  &ue_msgs__msg__IntPoseStampedEntry__rosidl_typesupport_introspection_c__IntPoseStampedEntry_message_members,
  get_message_typesupport_handle_function,
  &ue_msgs__msg__IntPoseStampedEntry__get_type_hash,
  &ue_msgs__msg__IntPoseStampedEntry__get_type_description,
  &ue_msgs__msg__IntPoseStampedEntry__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, IntPoseStampedEntry)() {
  ue_msgs__msg__IntPoseStampedEntry__rosidl_typesupport_introspection_c__IntPoseStampedEntry_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!ue_msgs__msg__IntPoseStampedEntry__rosidl_typesupport_introspection_c__IntPoseStampedEntry_message_type_support_handle.typesupport_identifier) {
    ue_msgs__msg__IntPoseStampedEntry__rosidl_typesupport_introspection_c__IntPoseStampedEntry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ue_msgs__msg__IntPoseStampedEntry__rosidl_typesupport_introspection_c__IntPoseStampedEntry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
