// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from diagnostic_msgs:msg/DiagnosticStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "diagnostic_msgs/msg/detail/diagnostic_status__rosidl_typesupport_introspection_c.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "diagnostic_msgs/msg/detail/diagnostic_status__functions.h"
#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.h"


// Include directives for member types
// Member `name`
// Member `message`
// Member `hardware_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `values`
#include "diagnostic_msgs/msg/key_value.h"
// Member `values`
#include "diagnostic_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DiagnosticStatus__rosidl_typesupport_introspection_c__DiagnosticStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  diagnostic_msgs__msg__DiagnosticStatus__init(message_memory);
}

void DiagnosticStatus__rosidl_typesupport_introspection_c__DiagnosticStatus_fini_function(void * message_memory)
{
  diagnostic_msgs__msg__DiagnosticStatus__fini(message_memory);
}

size_t DiagnosticStatus__rosidl_typesupport_introspection_c__size_function__KeyValue__values(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__KeyValue__Sequence * member =
    (const diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * DiagnosticStatus__rosidl_typesupport_introspection_c__get_const_function__KeyValue__values(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__KeyValue__Sequence * member =
    (const diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DiagnosticStatus__rosidl_typesupport_introspection_c__get_function__KeyValue__values(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__KeyValue__Sequence * member =
    (diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DiagnosticStatus__rosidl_typesupport_introspection_c__resize_function__KeyValue__values(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__KeyValue__Sequence * member =
    (diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  diagnostic_msgs__msg__KeyValue__Sequence__fini(member);
  return diagnostic_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DiagnosticStatus__rosidl_typesupport_introspection_c__DiagnosticStatus_message_member_array[5] = {
  {
    "level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__msg__DiagnosticStatus, level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__msg__DiagnosticStatus, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__msg__DiagnosticStatus, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hardware_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__msg__DiagnosticStatus, hardware_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__msg__DiagnosticStatus, values),  // bytes offset in struct
    NULL,  // default value
    DiagnosticStatus__rosidl_typesupport_introspection_c__size_function__KeyValue__values,  // size() function pointer
    DiagnosticStatus__rosidl_typesupport_introspection_c__get_const_function__KeyValue__values,  // get_const(index) function pointer
    DiagnosticStatus__rosidl_typesupport_introspection_c__get_function__KeyValue__values,  // get(index) function pointer
    DiagnosticStatus__rosidl_typesupport_introspection_c__resize_function__KeyValue__values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DiagnosticStatus__rosidl_typesupport_introspection_c__DiagnosticStatus_message_members = {
  "diagnostic_msgs__msg",  // message namespace
  "DiagnosticStatus",  // message name
  5,  // number of fields
  sizeof(diagnostic_msgs__msg__DiagnosticStatus),
  DiagnosticStatus__rosidl_typesupport_introspection_c__DiagnosticStatus_message_member_array,  // message members
  DiagnosticStatus__rosidl_typesupport_introspection_c__DiagnosticStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  DiagnosticStatus__rosidl_typesupport_introspection_c__DiagnosticStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DiagnosticStatus__rosidl_typesupport_introspection_c__DiagnosticStatus_message_type_support_handle = {
  0,
  &DiagnosticStatus__rosidl_typesupport_introspection_c__DiagnosticStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diagnostic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)() {
  DiagnosticStatus__rosidl_typesupport_introspection_c__DiagnosticStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, KeyValue)();
  if (!DiagnosticStatus__rosidl_typesupport_introspection_c__DiagnosticStatus_message_type_support_handle.typesupport_identifier) {
    DiagnosticStatus__rosidl_typesupport_introspection_c__DiagnosticStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DiagnosticStatus__rosidl_typesupport_introspection_c__DiagnosticStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
