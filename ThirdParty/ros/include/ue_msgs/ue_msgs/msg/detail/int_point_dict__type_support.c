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

void ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__msg__IntPointDict__init(message_memory);
}

void ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_fini_function(void * message_memory)
{
  ue_msgs__msg__IntPointDict__fini(message_memory);
}

size_t ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__size_function__IntPointDict__entries(
  const void * untyped_member)
{
  const ue_msgs__msg__IntPointEntry__Sequence * member =
    (const ue_msgs__msg__IntPointEntry__Sequence *)(untyped_member);
  return member->size;
}

const void * ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__get_const_function__IntPointDict__entries(
  const void * untyped_member, size_t index)
{
  const ue_msgs__msg__IntPointEntry__Sequence * member =
    (const ue_msgs__msg__IntPointEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__get_function__IntPointDict__entries(
  void * untyped_member, size_t index)
{
  ue_msgs__msg__IntPointEntry__Sequence * member =
    (ue_msgs__msg__IntPointEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__fetch_function__IntPointDict__entries(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ue_msgs__msg__IntPointEntry * item =
    ((const ue_msgs__msg__IntPointEntry *)
    ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__get_const_function__IntPointDict__entries(untyped_member, index));
  ue_msgs__msg__IntPointEntry * value =
    (ue_msgs__msg__IntPointEntry *)(untyped_value);
  *value = *item;
}

void ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__assign_function__IntPointDict__entries(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ue_msgs__msg__IntPointEntry * item =
    ((ue_msgs__msg__IntPointEntry *)
    ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__get_function__IntPointDict__entries(untyped_member, index));
  const ue_msgs__msg__IntPointEntry * value =
    (const ue_msgs__msg__IntPointEntry *)(untyped_value);
  *item = *value;
}

bool ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__resize_function__IntPointDict__entries(
  void * untyped_member, size_t size)
{
  ue_msgs__msg__IntPointEntry__Sequence * member =
    (ue_msgs__msg__IntPointEntry__Sequence *)(untyped_member);
  ue_msgs__msg__IntPointEntry__Sequence__fini(member);
  return ue_msgs__msg__IntPointEntry__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__IntPointDict, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "entries",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__IntPointDict, entries),  // bytes offset in struct
    NULL,  // default value
    ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__size_function__IntPointDict__entries,  // size() function pointer
    ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__get_const_function__IntPointDict__entries,  // get_const(index) function pointer
    ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__get_function__IntPointDict__entries,  // get(index) function pointer
    ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__fetch_function__IntPointDict__entries,  // fetch(index, &value) function pointer
    ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__assign_function__IntPointDict__entries,  // assign(index, value) function pointer
    ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__resize_function__IntPointDict__entries  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_members = {
  "ue_msgs__msg",  // message namespace
  "IntPointDict",  // message name
  2,  // number of fields
  sizeof(ue_msgs__msg__IntPointDict),
  false,  // has_any_key_member_
  ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_member_array,  // message members
  ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_init_function,  // function to initialize message memory (memory has to be allocated)
  ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_type_support_handle = {
  0,
  &ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_members,
  get_message_typesupport_handle_function,
  &ue_msgs__msg__IntPointDict__get_type_hash,
  &ue_msgs__msg__IntPointDict__get_type_description,
  &ue_msgs__msg__IntPointDict__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, IntPointDict)() {
  ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, IntPointEntry)();
  if (!ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_type_support_handle.typesupport_identifier) {
    ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ue_msgs__msg__IntPointDict__rosidl_typesupport_introspection_c__IntPointDict_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
