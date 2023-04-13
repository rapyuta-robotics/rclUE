// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmw_dds_common:msg/Gid.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmw_dds_common/msg/detail/gid__rosidl_typesupport_introspection_c.h"
#include "rmw_dds_common/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmw_dds_common/msg/detail/gid__functions.h"
#include "rmw_dds_common/msg/detail/gid__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__Gid_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmw_dds_common__msg__Gid__init(message_memory);
}

void rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__Gid_fini_function(void * message_memory)
{
  rmw_dds_common__msg__Gid__fini(message_memory);
}

size_t rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__size_function__Gid__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 24;
}

const void * rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__get_const_function__Gid__data(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__get_function__Gid__data(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__fetch_function__Gid__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__get_const_function__Gid__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__assign_function__Gid__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__get_function__Gid__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__Gid_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    24,  // array size
    false,  // is upper bound
    offsetof(rmw_dds_common__msg__Gid, data),  // bytes offset in struct
    NULL,  // default value
    rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__size_function__Gid__data,  // size() function pointer
    rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__get_const_function__Gid__data,  // get_const(index) function pointer
    rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__get_function__Gid__data,  // get(index) function pointer
    rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__fetch_function__Gid__data,  // fetch(index, &value) function pointer
    rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__assign_function__Gid__data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__Gid_message_members = {
  "rmw_dds_common__msg",  // message namespace
  "Gid",  // message name
  1,  // number of fields
  sizeof(rmw_dds_common__msg__Gid),
  rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__Gid_message_member_array,  // message members
  rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__Gid_init_function,  // function to initialize message memory (memory has to be allocated)
  rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__Gid_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__Gid_message_type_support_handle = {
  0,
  &rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__Gid_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmw_dds_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmw_dds_common, msg, Gid)() {
  if (!rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__Gid_message_type_support_handle.typesupport_identifier) {
    rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__Gid_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmw_dds_common__msg__Gid__rosidl_typesupport_introspection_c__Gid_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
