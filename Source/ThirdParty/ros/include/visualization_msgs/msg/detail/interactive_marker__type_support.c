// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from visualization_msgs:msg/InteractiveMarker.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "visualization_msgs/msg/detail/interactive_marker__rosidl_typesupport_introspection_c.h"
#include "visualization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "visualization_msgs/msg/detail/interactive_marker__functions.h"
#include "visualization_msgs/msg/detail/interactive_marker__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `name`
// Member `description`
#include "rosidl_runtime_c/string_functions.h"
// Member `menu_entries`
#include "visualization_msgs/msg/menu_entry.h"
// Member `menu_entries`
#include "visualization_msgs/msg/detail/menu_entry__rosidl_typesupport_introspection_c.h"
// Member `controls`
#include "visualization_msgs/msg/interactive_marker_control.h"
// Member `controls`
#include "visualization_msgs/msg/detail/interactive_marker_control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  visualization_msgs__msg__InteractiveMarker__init(message_memory);
}

void InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_fini_function(void * message_memory)
{
  visualization_msgs__msg__InteractiveMarker__fini(message_memory);
}

size_t InteractiveMarker__rosidl_typesupport_introspection_c__size_function__MenuEntry__menu_entries(
  const void * untyped_member)
{
  const visualization_msgs__msg__MenuEntry__Sequence * member =
    (const visualization_msgs__msg__MenuEntry__Sequence *)(untyped_member);
  return member->size;
}

const void * InteractiveMarker__rosidl_typesupport_introspection_c__get_const_function__MenuEntry__menu_entries(
  const void * untyped_member, size_t index)
{
  const visualization_msgs__msg__MenuEntry__Sequence * member =
    (const visualization_msgs__msg__MenuEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * InteractiveMarker__rosidl_typesupport_introspection_c__get_function__MenuEntry__menu_entries(
  void * untyped_member, size_t index)
{
  visualization_msgs__msg__MenuEntry__Sequence * member =
    (visualization_msgs__msg__MenuEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

bool InteractiveMarker__rosidl_typesupport_introspection_c__resize_function__MenuEntry__menu_entries(
  void * untyped_member, size_t size)
{
  visualization_msgs__msg__MenuEntry__Sequence * member =
    (visualization_msgs__msg__MenuEntry__Sequence *)(untyped_member);
  visualization_msgs__msg__MenuEntry__Sequence__fini(member);
  return visualization_msgs__msg__MenuEntry__Sequence__init(member, size);
}

size_t InteractiveMarker__rosidl_typesupport_introspection_c__size_function__InteractiveMarkerControl__controls(
  const void * untyped_member)
{
  const visualization_msgs__msg__InteractiveMarkerControl__Sequence * member =
    (const visualization_msgs__msg__InteractiveMarkerControl__Sequence *)(untyped_member);
  return member->size;
}

const void * InteractiveMarker__rosidl_typesupport_introspection_c__get_const_function__InteractiveMarkerControl__controls(
  const void * untyped_member, size_t index)
{
  const visualization_msgs__msg__InteractiveMarkerControl__Sequence * member =
    (const visualization_msgs__msg__InteractiveMarkerControl__Sequence *)(untyped_member);
  return &member->data[index];
}

void * InteractiveMarker__rosidl_typesupport_introspection_c__get_function__InteractiveMarkerControl__controls(
  void * untyped_member, size_t index)
{
  visualization_msgs__msg__InteractiveMarkerControl__Sequence * member =
    (visualization_msgs__msg__InteractiveMarkerControl__Sequence *)(untyped_member);
  return &member->data[index];
}

bool InteractiveMarker__rosidl_typesupport_introspection_c__resize_function__InteractiveMarkerControl__controls(
  void * untyped_member, size_t size)
{
  visualization_msgs__msg__InteractiveMarkerControl__Sequence * member =
    (visualization_msgs__msg__InteractiveMarkerControl__Sequence *)(untyped_member);
  visualization_msgs__msg__InteractiveMarkerControl__Sequence__fini(member);
  return visualization_msgs__msg__InteractiveMarkerControl__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarker, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarker, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarker, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarker, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarker, scale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "menu_entries",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarker, menu_entries),  // bytes offset in struct
    NULL,  // default value
    InteractiveMarker__rosidl_typesupport_introspection_c__size_function__MenuEntry__menu_entries,  // size() function pointer
    InteractiveMarker__rosidl_typesupport_introspection_c__get_const_function__MenuEntry__menu_entries,  // get_const(index) function pointer
    InteractiveMarker__rosidl_typesupport_introspection_c__get_function__MenuEntry__menu_entries,  // get(index) function pointer
    InteractiveMarker__rosidl_typesupport_introspection_c__resize_function__MenuEntry__menu_entries  // resize(index) function pointer
  },
  {
    "controls",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarker, controls),  // bytes offset in struct
    NULL,  // default value
    InteractiveMarker__rosidl_typesupport_introspection_c__size_function__InteractiveMarkerControl__controls,  // size() function pointer
    InteractiveMarker__rosidl_typesupport_introspection_c__get_const_function__InteractiveMarkerControl__controls,  // get_const(index) function pointer
    InteractiveMarker__rosidl_typesupport_introspection_c__get_function__InteractiveMarkerControl__controls,  // get(index) function pointer
    InteractiveMarker__rosidl_typesupport_introspection_c__resize_function__InteractiveMarkerControl__controls  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_message_members = {
  "visualization_msgs__msg",  // message namespace
  "InteractiveMarker",  // message name
  7,  // number of fields
  sizeof(visualization_msgs__msg__InteractiveMarker),
  InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_message_member_array,  // message members
  InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_init_function,  // function to initialize message memory (memory has to be allocated)
  InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_message_type_support_handle = {
  0,
  &InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, InteractiveMarker)() {
  InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, MenuEntry)();
  InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, InteractiveMarkerControl)();
  if (!InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_message_type_support_handle.typesupport_identifier) {
    InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InteractiveMarker__rosidl_typesupport_introspection_c__InteractiveMarker_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
