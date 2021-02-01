// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rcl_interfaces:msg/IntraProcessMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rcl_interfaces/msg/intra_process_message__rosidl_typesupport_introspection_c.h"
#include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rcl_interfaces/msg/intra_process_message__functions.h"
#include "rcl_interfaces/msg/intra_process_message__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void IntraProcessMessage__rosidl_typesupport_introspection_c__IntraProcessMessage_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rcl_interfaces__msg__IntraProcessMessage__init(message_memory);
}

void IntraProcessMessage__rosidl_typesupport_introspection_c__IntraProcessMessage_fini_function(void * message_memory)
{
  rcl_interfaces__msg__IntraProcessMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IntraProcessMessage__rosidl_typesupport_introspection_c__IntraProcessMessage_message_member_array[2] = {
  {
    "publisher_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__IntraProcessMessage, publisher_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__IntraProcessMessage, message_sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IntraProcessMessage__rosidl_typesupport_introspection_c__IntraProcessMessage_message_members = {
  "rcl_interfaces__msg",  // message namespace
  "IntraProcessMessage",  // message name
  2,  // number of fields
  sizeof(rcl_interfaces__msg__IntraProcessMessage),
  IntraProcessMessage__rosidl_typesupport_introspection_c__IntraProcessMessage_message_member_array,  // message members
  IntraProcessMessage__rosidl_typesupport_introspection_c__IntraProcessMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  IntraProcessMessage__rosidl_typesupport_introspection_c__IntraProcessMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IntraProcessMessage__rosidl_typesupport_introspection_c__IntraProcessMessage_message_type_support_handle = {
  0,
  &IntraProcessMessage__rosidl_typesupport_introspection_c__IntraProcessMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, IntraProcessMessage)() {
  if (!IntraProcessMessage__rosidl_typesupport_introspection_c__IntraProcessMessage_message_type_support_handle.typesupport_identifier) {
    IntraProcessMessage__rosidl_typesupport_introspection_c__IntraProcessMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IntraProcessMessage__rosidl_typesupport_introspection_c__IntraProcessMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
