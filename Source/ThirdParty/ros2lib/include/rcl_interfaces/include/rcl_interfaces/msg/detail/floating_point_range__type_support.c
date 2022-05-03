// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rcl_interfaces:msg/FloatingPointRange.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rcl_interfaces/msg/detail/floating_point_range__rosidl_typesupport_introspection_c.h"
#include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rcl_interfaces/msg/detail/floating_point_range__functions.h"
#include "rcl_interfaces/msg/detail/floating_point_range__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void FloatingPointRange__rosidl_typesupport_introspection_c__FloatingPointRange_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rcl_interfaces__msg__FloatingPointRange__init(message_memory);
}

void FloatingPointRange__rosidl_typesupport_introspection_c__FloatingPointRange_fini_function(void * message_memory)
{
  rcl_interfaces__msg__FloatingPointRange__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FloatingPointRange__rosidl_typesupport_introspection_c__FloatingPointRange_message_member_array[3] = {
  {
    "from_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__FloatingPointRange, from_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "to_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__FloatingPointRange, to_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__FloatingPointRange, step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FloatingPointRange__rosidl_typesupport_introspection_c__FloatingPointRange_message_members = {
  "rcl_interfaces__msg",  // message namespace
  "FloatingPointRange",  // message name
  3,  // number of fields
  sizeof(rcl_interfaces__msg__FloatingPointRange),
  FloatingPointRange__rosidl_typesupport_introspection_c__FloatingPointRange_message_member_array,  // message members
  FloatingPointRange__rosidl_typesupport_introspection_c__FloatingPointRange_init_function,  // function to initialize message memory (memory has to be allocated)
  FloatingPointRange__rosidl_typesupport_introspection_c__FloatingPointRange_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FloatingPointRange__rosidl_typesupport_introspection_c__FloatingPointRange_message_type_support_handle = {
  0,
  &FloatingPointRange__rosidl_typesupport_introspection_c__FloatingPointRange_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, FloatingPointRange)() {
  if (!FloatingPointRange__rosidl_typesupport_introspection_c__FloatingPointRange_message_type_support_handle.typesupport_identifier) {
    FloatingPointRange__rosidl_typesupport_introspection_c__FloatingPointRange_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FloatingPointRange__rosidl_typesupport_introspection_c__FloatingPointRange_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
