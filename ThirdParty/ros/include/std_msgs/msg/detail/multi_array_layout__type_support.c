// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from std_msgs:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "std_msgs/msg/detail/multi_array_layout__rosidl_typesupport_introspection_c.h"
#include "std_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "std_msgs/msg/detail/multi_array_layout__functions.h"
#include "std_msgs/msg/detail/multi_array_layout__struct.h"


// Include directives for member types
// Member `dim`
#include "std_msgs/msg/multi_array_dimension.h"
// Member `dim`
#include "std_msgs/msg/detail/multi_array_dimension__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MultiArrayLayout__rosidl_typesupport_introspection_c__MultiArrayLayout_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  std_msgs__msg__MultiArrayLayout__init(message_memory);
}

void MultiArrayLayout__rosidl_typesupport_introspection_c__MultiArrayLayout_fini_function(void * message_memory)
{
  std_msgs__msg__MultiArrayLayout__fini(message_memory);
}

size_t MultiArrayLayout__rosidl_typesupport_introspection_c__size_function__MultiArrayDimension__dim(
  const void * untyped_member)
{
  const std_msgs__msg__MultiArrayDimension__Sequence * member =
    (const std_msgs__msg__MultiArrayDimension__Sequence *)(untyped_member);
  return member->size;
}

const void * MultiArrayLayout__rosidl_typesupport_introspection_c__get_const_function__MultiArrayDimension__dim(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__MultiArrayDimension__Sequence * member =
    (const std_msgs__msg__MultiArrayDimension__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MultiArrayLayout__rosidl_typesupport_introspection_c__get_function__MultiArrayDimension__dim(
  void * untyped_member, size_t index)
{
  std_msgs__msg__MultiArrayDimension__Sequence * member =
    (std_msgs__msg__MultiArrayDimension__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MultiArrayLayout__rosidl_typesupport_introspection_c__resize_function__MultiArrayDimension__dim(
  void * untyped_member, size_t size)
{
  std_msgs__msg__MultiArrayDimension__Sequence * member =
    (std_msgs__msg__MultiArrayDimension__Sequence *)(untyped_member);
  std_msgs__msg__MultiArrayDimension__Sequence__fini(member);
  return std_msgs__msg__MultiArrayDimension__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MultiArrayLayout__rosidl_typesupport_introspection_c__MultiArrayLayout_message_member_array[2] = {
  {
    "dim",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__MultiArrayLayout, dim),  // bytes offset in struct
    NULL,  // default value
    MultiArrayLayout__rosidl_typesupport_introspection_c__size_function__MultiArrayDimension__dim,  // size() function pointer
    MultiArrayLayout__rosidl_typesupport_introspection_c__get_const_function__MultiArrayDimension__dim,  // get_const(index) function pointer
    MultiArrayLayout__rosidl_typesupport_introspection_c__get_function__MultiArrayDimension__dim,  // get(index) function pointer
    MultiArrayLayout__rosidl_typesupport_introspection_c__resize_function__MultiArrayDimension__dim  // resize(index) function pointer
  },
  {
    "data_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__MultiArrayLayout, data_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MultiArrayLayout__rosidl_typesupport_introspection_c__MultiArrayLayout_message_members = {
  "std_msgs__msg",  // message namespace
  "MultiArrayLayout",  // message name
  2,  // number of fields
  sizeof(std_msgs__msg__MultiArrayLayout),
  MultiArrayLayout__rosidl_typesupport_introspection_c__MultiArrayLayout_message_member_array,  // message members
  MultiArrayLayout__rosidl_typesupport_introspection_c__MultiArrayLayout_init_function,  // function to initialize message memory (memory has to be allocated)
  MultiArrayLayout__rosidl_typesupport_introspection_c__MultiArrayLayout_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MultiArrayLayout__rosidl_typesupport_introspection_c__MultiArrayLayout_message_type_support_handle = {
  0,
  &MultiArrayLayout__rosidl_typesupport_introspection_c__MultiArrayLayout_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, MultiArrayLayout)() {
  MultiArrayLayout__rosidl_typesupport_introspection_c__MultiArrayLayout_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, MultiArrayDimension)();
  if (!MultiArrayLayout__rosidl_typesupport_introspection_c__MultiArrayLayout_message_type_support_handle.typesupport_identifier) {
    MultiArrayLayout__rosidl_typesupport_introspection_c__MultiArrayLayout_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MultiArrayLayout__rosidl_typesupport_introspection_c__MultiArrayLayout_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
