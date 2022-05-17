// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from std_msgs:msg/Char.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "std_msgs/msg/detail/char__rosidl_typesupport_introspection_c.h"
#include "std_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "std_msgs/msg/detail/char__functions.h"
#include "std_msgs/msg/detail/char__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Char__rosidl_typesupport_introspection_c__Char_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  std_msgs__msg__Char__init(message_memory);
}

void Char__rosidl_typesupport_introspection_c__Char_fini_function(void * message_memory)
{
  std_msgs__msg__Char__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Char__rosidl_typesupport_introspection_c__Char_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__Char, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Char__rosidl_typesupport_introspection_c__Char_message_members = {
  "std_msgs__msg",  // message namespace
  "Char",  // message name
  1,  // number of fields
  sizeof(std_msgs__msg__Char),
  Char__rosidl_typesupport_introspection_c__Char_message_member_array,  // message members
  Char__rosidl_typesupport_introspection_c__Char_init_function,  // function to initialize message memory (memory has to be allocated)
  Char__rosidl_typesupport_introspection_c__Char_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Char__rosidl_typesupport_introspection_c__Char_message_type_support_handle = {
  0,
  &Char__rosidl_typesupport_introspection_c__Char_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Char)() {
  if (!Char__rosidl_typesupport_introspection_c__Char_message_type_support_handle.typesupport_identifier) {
    Char__rosidl_typesupport_introspection_c__Char_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Char__rosidl_typesupport_introspection_c__Char_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
