// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geometry_msgs:msg/QuaternionStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geometry_msgs/msg/detail/quaternion_stamped__rosidl_typesupport_introspection_c.h"
#include "geometry_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geometry_msgs/msg/detail/quaternion_stamped__functions.h"
#include "geometry_msgs/msg/detail/quaternion_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `quaternion`
#include "geometry_msgs/msg/quaternion.h"
// Member `quaternion`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void QuaternionStamped__rosidl_typesupport_introspection_c__QuaternionStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geometry_msgs__msg__QuaternionStamped__init(message_memory);
}

void QuaternionStamped__rosidl_typesupport_introspection_c__QuaternionStamped_fini_function(void * message_memory)
{
  geometry_msgs__msg__QuaternionStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember QuaternionStamped__rosidl_typesupport_introspection_c__QuaternionStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs__msg__QuaternionStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quaternion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs__msg__QuaternionStamped, quaternion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers QuaternionStamped__rosidl_typesupport_introspection_c__QuaternionStamped_message_members = {
  "geometry_msgs__msg",  // message namespace
  "QuaternionStamped",  // message name
  2,  // number of fields
  sizeof(geometry_msgs__msg__QuaternionStamped),
  QuaternionStamped__rosidl_typesupport_introspection_c__QuaternionStamped_message_member_array,  // message members
  QuaternionStamped__rosidl_typesupport_introspection_c__QuaternionStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  QuaternionStamped__rosidl_typesupport_introspection_c__QuaternionStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t QuaternionStamped__rosidl_typesupport_introspection_c__QuaternionStamped_message_type_support_handle = {
  0,
  &QuaternionStamped__rosidl_typesupport_introspection_c__QuaternionStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geometry_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, QuaternionStamped)() {
  QuaternionStamped__rosidl_typesupport_introspection_c__QuaternionStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  QuaternionStamped__rosidl_typesupport_introspection_c__QuaternionStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  if (!QuaternionStamped__rosidl_typesupport_introspection_c__QuaternionStamped_message_type_support_handle.typesupport_identifier) {
    QuaternionStamped__rosidl_typesupport_introspection_c__QuaternionStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &QuaternionStamped__rosidl_typesupport_introspection_c__QuaternionStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
