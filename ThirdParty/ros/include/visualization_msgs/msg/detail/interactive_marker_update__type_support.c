// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from visualization_msgs:msg/InteractiveMarkerUpdate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "visualization_msgs/msg/detail/interactive_marker_update__rosidl_typesupport_introspection_c.h"
#include "visualization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "visualization_msgs/msg/detail/interactive_marker_update__functions.h"
#include "visualization_msgs/msg/detail/interactive_marker_update__struct.h"


// Include directives for member types
// Member `server_id`
// Member `erases`
#include "rosidl_runtime_c/string_functions.h"
// Member `markers`
#include "visualization_msgs/msg/interactive_marker.h"
// Member `markers`
#include "visualization_msgs/msg/detail/interactive_marker__rosidl_typesupport_introspection_c.h"
// Member `poses`
#include "visualization_msgs/msg/interactive_marker_pose.h"
// Member `poses`
#include "visualization_msgs/msg/detail/interactive_marker_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__InteractiveMarkerUpdate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  visualization_msgs__msg__InteractiveMarkerUpdate__init(message_memory);
}

void InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__InteractiveMarkerUpdate_fini_function(void * message_memory)
{
  visualization_msgs__msg__InteractiveMarkerUpdate__fini(message_memory);
}

size_t InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__size_function__InteractiveMarker__markers(
  const void * untyped_member)
{
  const visualization_msgs__msg__InteractiveMarker__Sequence * member =
    (const visualization_msgs__msg__InteractiveMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__get_const_function__InteractiveMarker__markers(
  const void * untyped_member, size_t index)
{
  const visualization_msgs__msg__InteractiveMarker__Sequence * member =
    (const visualization_msgs__msg__InteractiveMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__get_function__InteractiveMarker__markers(
  void * untyped_member, size_t index)
{
  visualization_msgs__msg__InteractiveMarker__Sequence * member =
    (visualization_msgs__msg__InteractiveMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

bool InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__resize_function__InteractiveMarker__markers(
  void * untyped_member, size_t size)
{
  visualization_msgs__msg__InteractiveMarker__Sequence * member =
    (visualization_msgs__msg__InteractiveMarker__Sequence *)(untyped_member);
  visualization_msgs__msg__InteractiveMarker__Sequence__fini(member);
  return visualization_msgs__msg__InteractiveMarker__Sequence__init(member, size);
}

size_t InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__size_function__InteractiveMarkerPose__poses(
  const void * untyped_member)
{
  const visualization_msgs__msg__InteractiveMarkerPose__Sequence * member =
    (const visualization_msgs__msg__InteractiveMarkerPose__Sequence *)(untyped_member);
  return member->size;
}

const void * InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__get_const_function__InteractiveMarkerPose__poses(
  const void * untyped_member, size_t index)
{
  const visualization_msgs__msg__InteractiveMarkerPose__Sequence * member =
    (const visualization_msgs__msg__InteractiveMarkerPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__get_function__InteractiveMarkerPose__poses(
  void * untyped_member, size_t index)
{
  visualization_msgs__msg__InteractiveMarkerPose__Sequence * member =
    (visualization_msgs__msg__InteractiveMarkerPose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__resize_function__InteractiveMarkerPose__poses(
  void * untyped_member, size_t size)
{
  visualization_msgs__msg__InteractiveMarkerPose__Sequence * member =
    (visualization_msgs__msg__InteractiveMarkerPose__Sequence *)(untyped_member);
  visualization_msgs__msg__InteractiveMarkerPose__Sequence__fini(member);
  return visualization_msgs__msg__InteractiveMarkerPose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__InteractiveMarkerUpdate_message_member_array[6] = {
  {
    "server_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarkerUpdate, server_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "seq_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarkerUpdate, seq_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarkerUpdate, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarkerUpdate, markers),  // bytes offset in struct
    NULL,  // default value
    InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__size_function__InteractiveMarker__markers,  // size() function pointer
    InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__get_const_function__InteractiveMarker__markers,  // get_const(index) function pointer
    InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__get_function__InteractiveMarker__markers,  // get(index) function pointer
    InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__resize_function__InteractiveMarker__markers  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarkerUpdate, poses),  // bytes offset in struct
    NULL,  // default value
    InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__size_function__InteractiveMarkerPose__poses,  // size() function pointer
    InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__get_const_function__InteractiveMarkerPose__poses,  // get_const(index) function pointer
    InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__get_function__InteractiveMarkerPose__poses,  // get(index) function pointer
    InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__resize_function__InteractiveMarkerPose__poses  // resize(index) function pointer
  },
  {
    "erases",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarkerUpdate, erases),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__InteractiveMarkerUpdate_message_members = {
  "visualization_msgs__msg",  // message namespace
  "InteractiveMarkerUpdate",  // message name
  6,  // number of fields
  sizeof(visualization_msgs__msg__InteractiveMarkerUpdate),
  InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__InteractiveMarkerUpdate_message_member_array,  // message members
  InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__InteractiveMarkerUpdate_init_function,  // function to initialize message memory (memory has to be allocated)
  InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__InteractiveMarkerUpdate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__InteractiveMarkerUpdate_message_type_support_handle = {
  0,
  &InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__InteractiveMarkerUpdate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, InteractiveMarkerUpdate)() {
  InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__InteractiveMarkerUpdate_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, InteractiveMarker)();
  InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__InteractiveMarkerUpdate_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, InteractiveMarkerPose)();
  if (!InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__InteractiveMarkerUpdate_message_type_support_handle.typesupport_identifier) {
    InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__InteractiveMarkerUpdate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InteractiveMarkerUpdate__rosidl_typesupport_introspection_c__InteractiveMarkerUpdate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
