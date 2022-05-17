// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geometry_msgs:msg/TransformStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geometry_msgs/msg/detail/transform_stamped__rosidl_typesupport_introspection_c.h"
#include "geometry_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `child_frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `transform`
#include "geometry_msgs/msg/transform.h"
// Member `transform`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TransformStamped__rosidl_typesupport_introspection_c__TransformStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geometry_msgs__msg__TransformStamped__init(message_memory);
}

void TransformStamped__rosidl_typesupport_introspection_c__TransformStamped_fini_function(void * message_memory)
{
  geometry_msgs__msg__TransformStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TransformStamped__rosidl_typesupport_introspection_c__TransformStamped_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs__msg__TransformStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs__msg__TransformStamped, child_frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs__msg__TransformStamped, transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TransformStamped__rosidl_typesupport_introspection_c__TransformStamped_message_members = {
  "geometry_msgs__msg",  // message namespace
  "TransformStamped",  // message name
  3,  // number of fields
  sizeof(geometry_msgs__msg__TransformStamped),
  TransformStamped__rosidl_typesupport_introspection_c__TransformStamped_message_member_array,  // message members
  TransformStamped__rosidl_typesupport_introspection_c__TransformStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  TransformStamped__rosidl_typesupport_introspection_c__TransformStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TransformStamped__rosidl_typesupport_introspection_c__TransformStamped_message_type_support_handle = {
  0,
  &TransformStamped__rosidl_typesupport_introspection_c__TransformStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geometry_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)() {
  TransformStamped__rosidl_typesupport_introspection_c__TransformStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  TransformStamped__rosidl_typesupport_introspection_c__TransformStamped_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  if (!TransformStamped__rosidl_typesupport_introspection_c__TransformStamped_message_type_support_handle.typesupport_identifier) {
    TransformStamped__rosidl_typesupport_introspection_c__TransformStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TransformStamped__rosidl_typesupport_introspection_c__TransformStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
