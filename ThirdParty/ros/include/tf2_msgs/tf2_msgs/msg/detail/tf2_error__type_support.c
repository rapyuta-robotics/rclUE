// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tf2_msgs:msg/TF2Error.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tf2_msgs/msg/detail/tf2_error__rosidl_typesupport_introspection_c.h"
#include "tf2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tf2_msgs/msg/detail/tf2_error__functions.h"
#include "tf2_msgs/msg/detail/tf2_error__struct.h"


// Include directives for member types
// Member `error_string`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tf2_msgs__msg__TF2Error__rosidl_typesupport_introspection_c__TF2Error_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tf2_msgs__msg__TF2Error__init(message_memory);
}

void tf2_msgs__msg__TF2Error__rosidl_typesupport_introspection_c__TF2Error_fini_function(void * message_memory)
{
  tf2_msgs__msg__TF2Error__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tf2_msgs__msg__TF2Error__rosidl_typesupport_introspection_c__TF2Error_message_member_array[2] = {
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_msgs__msg__TF2Error, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_msgs__msg__TF2Error, error_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tf2_msgs__msg__TF2Error__rosidl_typesupport_introspection_c__TF2Error_message_members = {
  "tf2_msgs__msg",  // message namespace
  "TF2Error",  // message name
  2,  // number of fields
  sizeof(tf2_msgs__msg__TF2Error),
  tf2_msgs__msg__TF2Error__rosidl_typesupport_introspection_c__TF2Error_message_member_array,  // message members
  tf2_msgs__msg__TF2Error__rosidl_typesupport_introspection_c__TF2Error_init_function,  // function to initialize message memory (memory has to be allocated)
  tf2_msgs__msg__TF2Error__rosidl_typesupport_introspection_c__TF2Error_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tf2_msgs__msg__TF2Error__rosidl_typesupport_introspection_c__TF2Error_message_type_support_handle = {
  0,
  &tf2_msgs__msg__TF2Error__rosidl_typesupport_introspection_c__TF2Error_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_msgs, msg, TF2Error)() {
  if (!tf2_msgs__msg__TF2Error__rosidl_typesupport_introspection_c__TF2Error_message_type_support_handle.typesupport_identifier) {
    tf2_msgs__msg__TF2Error__rosidl_typesupport_introspection_c__TF2Error_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tf2_msgs__msg__TF2Error__rosidl_typesupport_introspection_c__TF2Error_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
