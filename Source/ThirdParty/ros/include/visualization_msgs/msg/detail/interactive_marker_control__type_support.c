// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from visualization_msgs:msg/InteractiveMarkerControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "visualization_msgs/msg/detail/interactive_marker_control__rosidl_typesupport_introspection_c.h"
#include "visualization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "visualization_msgs/msg/detail/interactive_marker_control__functions.h"
#include "visualization_msgs/msg/detail/interactive_marker_control__struct.h"


// Include directives for member types
// Member `name`
// Member `description`
#include "rosidl_runtime_c/string_functions.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `markers`
#include "visualization_msgs/msg/marker.h"
// Member `markers`
#include "visualization_msgs/msg/detail/marker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void InteractiveMarkerControl__rosidl_typesupport_introspection_c__InteractiveMarkerControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  visualization_msgs__msg__InteractiveMarkerControl__init(message_memory);
}

void InteractiveMarkerControl__rosidl_typesupport_introspection_c__InteractiveMarkerControl_fini_function(void * message_memory)
{
  visualization_msgs__msg__InteractiveMarkerControl__fini(message_memory);
}

size_t InteractiveMarkerControl__rosidl_typesupport_introspection_c__size_function__Marker__markers(
  const void * untyped_member)
{
  const visualization_msgs__msg__Marker__Sequence * member =
    (const visualization_msgs__msg__Marker__Sequence *)(untyped_member);
  return member->size;
}

const void * InteractiveMarkerControl__rosidl_typesupport_introspection_c__get_const_function__Marker__markers(
  const void * untyped_member, size_t index)
{
  const visualization_msgs__msg__Marker__Sequence * member =
    (const visualization_msgs__msg__Marker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * InteractiveMarkerControl__rosidl_typesupport_introspection_c__get_function__Marker__markers(
  void * untyped_member, size_t index)
{
  visualization_msgs__msg__Marker__Sequence * member =
    (visualization_msgs__msg__Marker__Sequence *)(untyped_member);
  return &member->data[index];
}

bool InteractiveMarkerControl__rosidl_typesupport_introspection_c__resize_function__Marker__markers(
  void * untyped_member, size_t size)
{
  visualization_msgs__msg__Marker__Sequence * member =
    (visualization_msgs__msg__Marker__Sequence *)(untyped_member);
  visualization_msgs__msg__Marker__Sequence__fini(member);
  return visualization_msgs__msg__Marker__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember InteractiveMarkerControl__rosidl_typesupport_introspection_c__InteractiveMarkerControl_message_member_array[8] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarkerControl, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarkerControl, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarkerControl, orientation_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "interaction_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarkerControl, interaction_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "always_visible",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarkerControl, always_visible),  // bytes offset in struct
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
    offsetof(visualization_msgs__msg__InteractiveMarkerControl, markers),  // bytes offset in struct
    NULL,  // default value
    InteractiveMarkerControl__rosidl_typesupport_introspection_c__size_function__Marker__markers,  // size() function pointer
    InteractiveMarkerControl__rosidl_typesupport_introspection_c__get_const_function__Marker__markers,  // get_const(index) function pointer
    InteractiveMarkerControl__rosidl_typesupport_introspection_c__get_function__Marker__markers,  // get(index) function pointer
    InteractiveMarkerControl__rosidl_typesupport_introspection_c__resize_function__Marker__markers  // resize(index) function pointer
  },
  {
    "independent_marker_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__InteractiveMarkerControl, independent_marker_orientation),  // bytes offset in struct
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
    offsetof(visualization_msgs__msg__InteractiveMarkerControl, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InteractiveMarkerControl__rosidl_typesupport_introspection_c__InteractiveMarkerControl_message_members = {
  "visualization_msgs__msg",  // message namespace
  "InteractiveMarkerControl",  // message name
  8,  // number of fields
  sizeof(visualization_msgs__msg__InteractiveMarkerControl),
  InteractiveMarkerControl__rosidl_typesupport_introspection_c__InteractiveMarkerControl_message_member_array,  // message members
  InteractiveMarkerControl__rosidl_typesupport_introspection_c__InteractiveMarkerControl_init_function,  // function to initialize message memory (memory has to be allocated)
  InteractiveMarkerControl__rosidl_typesupport_introspection_c__InteractiveMarkerControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InteractiveMarkerControl__rosidl_typesupport_introspection_c__InteractiveMarkerControl_message_type_support_handle = {
  0,
  &InteractiveMarkerControl__rosidl_typesupport_introspection_c__InteractiveMarkerControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, InteractiveMarkerControl)() {
  InteractiveMarkerControl__rosidl_typesupport_introspection_c__InteractiveMarkerControl_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  InteractiveMarkerControl__rosidl_typesupport_introspection_c__InteractiveMarkerControl_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, Marker)();
  if (!InteractiveMarkerControl__rosidl_typesupport_introspection_c__InteractiveMarkerControl_message_type_support_handle.typesupport_identifier) {
    InteractiveMarkerControl__rosidl_typesupport_introspection_c__InteractiveMarkerControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InteractiveMarkerControl__rosidl_typesupport_introspection_c__InteractiveMarkerControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
