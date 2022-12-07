// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pcl_msgs:msg/PointIndices.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pcl_msgs/msg/detail/point_indices__rosidl_typesupport_introspection_c.h"
#include "pcl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pcl_msgs/msg/detail/point_indices__functions.h"
#include "pcl_msgs/msg/detail/point_indices__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__PointIndices_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pcl_msgs__msg__PointIndices__init(message_memory);
}

void pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__PointIndices_fini_function(void * message_memory)
{
  pcl_msgs__msg__PointIndices__fini(message_memory);
}

size_t pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__size_function__PointIndices__indices(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__get_const_function__PointIndices__indices(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__get_function__PointIndices__indices(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__fetch_function__PointIndices__indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__get_const_function__PointIndices__indices(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__assign_function__PointIndices__indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__get_function__PointIndices__indices(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__resize_function__PointIndices__indices(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__PointIndices_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pcl_msgs__msg__PointIndices, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "indices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pcl_msgs__msg__PointIndices, indices),  // bytes offset in struct
    NULL,  // default value
    pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__size_function__PointIndices__indices,  // size() function pointer
    pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__get_const_function__PointIndices__indices,  // get_const(index) function pointer
    pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__get_function__PointIndices__indices,  // get(index) function pointer
    pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__fetch_function__PointIndices__indices,  // fetch(index, &value) function pointer
    pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__assign_function__PointIndices__indices,  // assign(index, value) function pointer
    pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__resize_function__PointIndices__indices  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__PointIndices_message_members = {
  "pcl_msgs__msg",  // message namespace
  "PointIndices",  // message name
  2,  // number of fields
  sizeof(pcl_msgs__msg__PointIndices),
  pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__PointIndices_message_member_array,  // message members
  pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__PointIndices_init_function,  // function to initialize message memory (memory has to be allocated)
  pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__PointIndices_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__PointIndices_message_type_support_handle = {
  0,
  &pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__PointIndices_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pcl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, msg, PointIndices)() {
  pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__PointIndices_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__PointIndices_message_type_support_handle.typesupport_identifier) {
    pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__PointIndices_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pcl_msgs__msg__PointIndices__rosidl_typesupport_introspection_c__PointIndices_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
