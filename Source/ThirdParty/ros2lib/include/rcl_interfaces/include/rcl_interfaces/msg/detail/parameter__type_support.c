// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rcl_interfaces:msg/Parameter.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rcl_interfaces/msg/detail/parameter__rosidl_typesupport_introspection_c.h"
#include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rcl_interfaces/msg/detail/parameter__functions.h"
#include "rcl_interfaces/msg/detail/parameter__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `value`
#include "rcl_interfaces/msg/parameter_value.h"
// Member `value`
#include "rcl_interfaces/msg/detail/parameter_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Parameter__rosidl_typesupport_introspection_c__Parameter_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rcl_interfaces__msg__Parameter__init(message_memory);
}

void Parameter__rosidl_typesupport_introspection_c__Parameter_fini_function(void * message_memory)
{
  rcl_interfaces__msg__Parameter__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Parameter__rosidl_typesupport_introspection_c__Parameter_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__Parameter, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__Parameter, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Parameter__rosidl_typesupport_introspection_c__Parameter_message_members = {
  "rcl_interfaces__msg",  // message namespace
  "Parameter",  // message name
  2,  // number of fields
  sizeof(rcl_interfaces__msg__Parameter),
  Parameter__rosidl_typesupport_introspection_c__Parameter_message_member_array,  // message members
  Parameter__rosidl_typesupport_introspection_c__Parameter_init_function,  // function to initialize message memory (memory has to be allocated)
  Parameter__rosidl_typesupport_introspection_c__Parameter_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Parameter__rosidl_typesupport_introspection_c__Parameter_message_type_support_handle = {
  0,
  &Parameter__rosidl_typesupport_introspection_c__Parameter_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, Parameter)() {
  Parameter__rosidl_typesupport_introspection_c__Parameter_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, ParameterValue)();
  if (!Parameter__rosidl_typesupport_introspection_c__Parameter_message_type_support_handle.typesupport_identifier) {
    Parameter__rosidl_typesupport_introspection_c__Parameter_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Parameter__rosidl_typesupport_introspection_c__Parameter_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
