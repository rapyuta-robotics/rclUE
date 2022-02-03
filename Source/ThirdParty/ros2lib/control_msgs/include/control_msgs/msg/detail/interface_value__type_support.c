// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_msgs:msg/InterfaceValue.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_msgs/msg/detail/interface_value__rosidl_typesupport_introspection_c.h"
#include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_msgs/msg/detail/interface_value__functions.h"
#include "control_msgs/msg/detail/interface_value__struct.h"


// Include directives for member types
// Member `interface_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void InterfaceValue__rosidl_typesupport_introspection_c__InterfaceValue_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__msg__InterfaceValue__init(message_memory);
}

void InterfaceValue__rosidl_typesupport_introspection_c__InterfaceValue_fini_function(void * message_memory)
{
  control_msgs__msg__InterfaceValue__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember InterfaceValue__rosidl_typesupport_introspection_c__InterfaceValue_message_member_array[2] = {
  {
    "interface_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__InterfaceValue, interface_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__InterfaceValue, values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InterfaceValue__rosidl_typesupport_introspection_c__InterfaceValue_message_members = {
  "control_msgs__msg",  // message namespace
  "InterfaceValue",  // message name
  2,  // number of fields
  sizeof(control_msgs__msg__InterfaceValue),
  InterfaceValue__rosidl_typesupport_introspection_c__InterfaceValue_message_member_array,  // message members
  InterfaceValue__rosidl_typesupport_introspection_c__InterfaceValue_init_function,  // function to initialize message memory (memory has to be allocated)
  InterfaceValue__rosidl_typesupport_introspection_c__InterfaceValue_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InterfaceValue__rosidl_typesupport_introspection_c__InterfaceValue_message_type_support_handle = {
  0,
  &InterfaceValue__rosidl_typesupport_introspection_c__InterfaceValue_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, InterfaceValue)() {
  if (!InterfaceValue__rosidl_typesupport_introspection_c__InterfaceValue_message_type_support_handle.typesupport_identifier) {
    InterfaceValue__rosidl_typesupport_introspection_c__InterfaceValue_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InterfaceValue__rosidl_typesupport_introspection_c__InterfaceValue_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
