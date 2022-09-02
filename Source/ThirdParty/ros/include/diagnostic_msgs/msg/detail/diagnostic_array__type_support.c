// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from diagnostic_msgs:msg/DiagnosticArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "diagnostic_msgs/msg/detail/diagnostic_array__rosidl_typesupport_introspection_c.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "diagnostic_msgs/msg/detail/diagnostic_array__functions.h"
#include "diagnostic_msgs/msg/detail/diagnostic_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "diagnostic_msgs/msg/diagnostic_status.h"
// Member `status`
#include "diagnostic_msgs/msg/detail/diagnostic_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DiagnosticArray__rosidl_typesupport_introspection_c__DiagnosticArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  diagnostic_msgs__msg__DiagnosticArray__init(message_memory);
}

void DiagnosticArray__rosidl_typesupport_introspection_c__DiagnosticArray_fini_function(void * message_memory)
{
  diagnostic_msgs__msg__DiagnosticArray__fini(message_memory);
}

size_t DiagnosticArray__rosidl_typesupport_introspection_c__size_function__DiagnosticStatus__status(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * DiagnosticArray__rosidl_typesupport_introspection_c__get_const_function__DiagnosticStatus__status(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DiagnosticArray__rosidl_typesupport_introspection_c__get_function__DiagnosticStatus__status(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DiagnosticArray__rosidl_typesupport_introspection_c__resize_function__DiagnosticStatus__status(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(member);
  return diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DiagnosticArray__rosidl_typesupport_introspection_c__DiagnosticArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__msg__DiagnosticArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs__msg__DiagnosticArray, status),  // bytes offset in struct
    NULL,  // default value
    DiagnosticArray__rosidl_typesupport_introspection_c__size_function__DiagnosticStatus__status,  // size() function pointer
    DiagnosticArray__rosidl_typesupport_introspection_c__get_const_function__DiagnosticStatus__status,  // get_const(index) function pointer
    DiagnosticArray__rosidl_typesupport_introspection_c__get_function__DiagnosticStatus__status,  // get(index) function pointer
    DiagnosticArray__rosidl_typesupport_introspection_c__resize_function__DiagnosticStatus__status  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DiagnosticArray__rosidl_typesupport_introspection_c__DiagnosticArray_message_members = {
  "diagnostic_msgs__msg",  // message namespace
  "DiagnosticArray",  // message name
  2,  // number of fields
  sizeof(diagnostic_msgs__msg__DiagnosticArray),
  DiagnosticArray__rosidl_typesupport_introspection_c__DiagnosticArray_message_member_array,  // message members
  DiagnosticArray__rosidl_typesupport_introspection_c__DiagnosticArray_init_function,  // function to initialize message memory (memory has to be allocated)
  DiagnosticArray__rosidl_typesupport_introspection_c__DiagnosticArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DiagnosticArray__rosidl_typesupport_introspection_c__DiagnosticArray_message_type_support_handle = {
  0,
  &DiagnosticArray__rosidl_typesupport_introspection_c__DiagnosticArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diagnostic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticArray)() {
  DiagnosticArray__rosidl_typesupport_introspection_c__DiagnosticArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  DiagnosticArray__rosidl_typesupport_introspection_c__DiagnosticArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)();
  if (!DiagnosticArray__rosidl_typesupport_introspection_c__DiagnosticArray_message_type_support_handle.typesupport_identifier) {
    DiagnosticArray__rosidl_typesupport_introspection_c__DiagnosticArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DiagnosticArray__rosidl_typesupport_introspection_c__DiagnosticArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
