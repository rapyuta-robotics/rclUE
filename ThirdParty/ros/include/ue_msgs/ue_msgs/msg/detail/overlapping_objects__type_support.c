// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ue_msgs:msg/OverlappingObjects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ue_msgs/msg/detail/overlapping_objects__rosidl_typesupport_introspection_c.h"
#include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ue_msgs/msg/detail/overlapping_objects__functions.h"
#include "ue_msgs/msg/detail/overlapping_objects__struct.h"


// Include directives for member types
// Member `actors`
// Member `components`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__msg__OverlappingObjects__init(message_memory);
}

void ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_fini_function(void * message_memory)
{
  ue_msgs__msg__OverlappingObjects__fini(message_memory);
}

size_t ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__size_function__OverlappingObjects__actors(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__get_const_function__OverlappingObjects__actors(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__get_function__OverlappingObjects__actors(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__fetch_function__OverlappingObjects__actors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__get_const_function__OverlappingObjects__actors(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__assign_function__OverlappingObjects__actors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__get_function__OverlappingObjects__actors(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__resize_function__OverlappingObjects__actors(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__size_function__OverlappingObjects__components(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__get_const_function__OverlappingObjects__components(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__get_function__OverlappingObjects__components(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__fetch_function__OverlappingObjects__components(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__get_const_function__OverlappingObjects__components(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__assign_function__OverlappingObjects__components(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__get_function__OverlappingObjects__components(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__resize_function__OverlappingObjects__components(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_member_array[2] = {
  {
    "actors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__OverlappingObjects, actors),  // bytes offset in struct
    NULL,  // default value
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__size_function__OverlappingObjects__actors,  // size() function pointer
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__get_const_function__OverlappingObjects__actors,  // get_const(index) function pointer
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__get_function__OverlappingObjects__actors,  // get(index) function pointer
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__fetch_function__OverlappingObjects__actors,  // fetch(index, &value) function pointer
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__assign_function__OverlappingObjects__actors,  // assign(index, value) function pointer
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__resize_function__OverlappingObjects__actors  // resize(index) function pointer
  },
  {
    "components",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__OverlappingObjects, components),  // bytes offset in struct
    NULL,  // default value
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__size_function__OverlappingObjects__components,  // size() function pointer
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__get_const_function__OverlappingObjects__components,  // get_const(index) function pointer
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__get_function__OverlappingObjects__components,  // get(index) function pointer
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__fetch_function__OverlappingObjects__components,  // fetch(index, &value) function pointer
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__assign_function__OverlappingObjects__components,  // assign(index, value) function pointer
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__resize_function__OverlappingObjects__components  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_members = {
  "ue_msgs__msg",  // message namespace
  "OverlappingObjects",  // message name
  2,  // number of fields
  sizeof(ue_msgs__msg__OverlappingObjects),
  ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_member_array,  // message members
  ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_init_function,  // function to initialize message memory (memory has to be allocated)
  ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_type_support_handle = {
  0,
  &ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, OverlappingObjects)() {
  if (!ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_type_support_handle.typesupport_identifier) {
    ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ue_msgs__msg__OverlappingObjects__rosidl_typesupport_introspection_c__OverlappingObjects_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
