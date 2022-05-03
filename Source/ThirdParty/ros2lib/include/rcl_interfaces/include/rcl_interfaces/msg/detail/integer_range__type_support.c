// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rcl_interfaces:msg/IntegerRange.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rcl_interfaces/msg/detail/integer_range__rosidl_typesupport_introspection_c.h"
#include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rcl_interfaces/msg/detail/integer_range__functions.h"
#include "rcl_interfaces/msg/detail/integer_range__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void IntegerRange__rosidl_typesupport_introspection_c__IntegerRange_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rcl_interfaces__msg__IntegerRange__init(message_memory);
}

void IntegerRange__rosidl_typesupport_introspection_c__IntegerRange_fini_function(void * message_memory)
{
  rcl_interfaces__msg__IntegerRange__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IntegerRange__rosidl_typesupport_introspection_c__IntegerRange_message_member_array[3] = {
  {
    "from_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__IntegerRange, from_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "to_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__IntegerRange, to_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__IntegerRange, step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IntegerRange__rosidl_typesupport_introspection_c__IntegerRange_message_members = {
  "rcl_interfaces__msg",  // message namespace
  "IntegerRange",  // message name
  3,  // number of fields
  sizeof(rcl_interfaces__msg__IntegerRange),
  IntegerRange__rosidl_typesupport_introspection_c__IntegerRange_message_member_array,  // message members
  IntegerRange__rosidl_typesupport_introspection_c__IntegerRange_init_function,  // function to initialize message memory (memory has to be allocated)
  IntegerRange__rosidl_typesupport_introspection_c__IntegerRange_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IntegerRange__rosidl_typesupport_introspection_c__IntegerRange_message_type_support_handle = {
  0,
  &IntegerRange__rosidl_typesupport_introspection_c__IntegerRange_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, IntegerRange)() {
  if (!IntegerRange__rosidl_typesupport_introspection_c__IntegerRange_message_type_support_handle.typesupport_identifier) {
    IntegerRange__rosidl_typesupport_introspection_c__IntegerRange_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IntegerRange__rosidl_typesupport_introspection_c__IntegerRange_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
