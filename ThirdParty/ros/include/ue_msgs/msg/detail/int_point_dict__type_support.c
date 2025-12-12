// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ue_msgs:msg/IntPointDict.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ue_msgs/msg/detail/int_point_dict__rosidl_typesupport_introspection_c.h"
#include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ue_msgs/msg/detail/int_point_dict__functions.h"
#include "ue_msgs/msg/detail/int_point_dict__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `entries`
#include "ue_msgs/msg/int_point_entry.h"
// Member `entries`
#include "ue_msgs/msg/detail/int_point_entry__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__msg__IntPointDict__init(message_memory);
}

void IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_fini_function(void * message_memory)
{
  ue_msgs__msg__IntPointDict__fini(message_memory);
}

size_t IntPointDict__rosidl_typesupport_introspection_c__size_function__IntPointEntry__entries(
  const void * untyped_member)
{
  const ue_msgs__msg__IntPointEntry__Sequence * member =
    (const ue_msgs__msg__IntPointEntry__Sequence *)(untyped_member);
  return member->size;
}

const void * IntPointDict__rosidl_typesupport_introspection_c__get_const_function__IntPointEntry__entries(
  const void * untyped_member, size_t index)
{
  const ue_msgs__msg__IntPointEntry__Sequence * member =
    (const ue_msgs__msg__IntPointEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * IntPointDict__rosidl_typesupport_introspection_c__get_function__IntPointEntry__entries(
  void * untyped_member, size_t index)
{
  ue_msgs__msg__IntPointEntry__Sequence * member =
    (ue_msgs__msg__IntPointEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

bool IntPointDict__rosidl_typesupport_introspection_c__resize_function__IntPointEntry__entries(
  void * untyped_member, size_t size)
{
  ue_msgs__msg__IntPointEntry__Sequence * member =
    (ue_msgs__msg__IntPointEntry__Sequence *)(untyped_member);
  ue_msgs__msg__IntPointEntry__Sequence__fini(member);
  return ue_msgs__msg__IntPointEntry__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__IntPointDict, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "entries",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__IntPointDict, entries),  // bytes offset in struct
    NULL,  // default value
    IntPointDict__rosidl_typesupport_introspection_c__size_function__IntPointEntry__entries,  // size() function pointer
    IntPointDict__rosidl_typesupport_introspection_c__get_const_function__IntPointEntry__entries,  // get_const(index) function pointer
    IntPointDict__rosidl_typesupport_introspection_c__get_function__IntPointEntry__entries,  // get(index) function pointer
    IntPointDict__rosidl_typesupport_introspection_c__resize_function__IntPointEntry__entries  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_members = {
  "ue_msgs__msg",  // message namespace
  "IntPointDict",  // message name
  2,  // number of fields
  sizeof(ue_msgs__msg__IntPointDict),
  IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_member_array,  // message members
  IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_init_function,  // function to initialize message memory (memory has to be allocated)
  IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_type_support_handle = {
  0,
  &IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, IntPointDict)() {
  IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, IntPointEntry)();
  if (!IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_type_support_handle.typesupport_identifier) {
    IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
