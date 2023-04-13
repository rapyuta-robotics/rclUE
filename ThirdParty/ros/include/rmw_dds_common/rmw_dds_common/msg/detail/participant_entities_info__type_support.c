// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmw_dds_common:msg/ParticipantEntitiesInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmw_dds_common/msg/detail/participant_entities_info__rosidl_typesupport_introspection_c.h"
#include "rmw_dds_common/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmw_dds_common/msg/detail/participant_entities_info__functions.h"
#include "rmw_dds_common/msg/detail/participant_entities_info__struct.h"


// Include directives for member types
// Member `gid`
#include "rmw_dds_common/msg/gid.h"
// Member `gid`
#include "rmw_dds_common/msg/detail/gid__rosidl_typesupport_introspection_c.h"
// Member `node_entities_info_seq`
#include "rmw_dds_common/msg/node_entities_info.h"
// Member `node_entities_info_seq`
#include "rmw_dds_common/msg/detail/node_entities_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__ParticipantEntitiesInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmw_dds_common__msg__ParticipantEntitiesInfo__init(message_memory);
}

void rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__ParticipantEntitiesInfo_fini_function(void * message_memory)
{
  rmw_dds_common__msg__ParticipantEntitiesInfo__fini(message_memory);
}

size_t rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__size_function__ParticipantEntitiesInfo__node_entities_info_seq(
  const void * untyped_member)
{
  const rmw_dds_common__msg__NodeEntitiesInfo__Sequence * member =
    (const rmw_dds_common__msg__NodeEntitiesInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__get_const_function__ParticipantEntitiesInfo__node_entities_info_seq(
  const void * untyped_member, size_t index)
{
  const rmw_dds_common__msg__NodeEntitiesInfo__Sequence * member =
    (const rmw_dds_common__msg__NodeEntitiesInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__get_function__ParticipantEntitiesInfo__node_entities_info_seq(
  void * untyped_member, size_t index)
{
  rmw_dds_common__msg__NodeEntitiesInfo__Sequence * member =
    (rmw_dds_common__msg__NodeEntitiesInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__fetch_function__ParticipantEntitiesInfo__node_entities_info_seq(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmw_dds_common__msg__NodeEntitiesInfo * item =
    ((const rmw_dds_common__msg__NodeEntitiesInfo *)
    rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__get_const_function__ParticipantEntitiesInfo__node_entities_info_seq(untyped_member, index));
  rmw_dds_common__msg__NodeEntitiesInfo * value =
    (rmw_dds_common__msg__NodeEntitiesInfo *)(untyped_value);
  *value = *item;
}

void rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__assign_function__ParticipantEntitiesInfo__node_entities_info_seq(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmw_dds_common__msg__NodeEntitiesInfo * item =
    ((rmw_dds_common__msg__NodeEntitiesInfo *)
    rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__get_function__ParticipantEntitiesInfo__node_entities_info_seq(untyped_member, index));
  const rmw_dds_common__msg__NodeEntitiesInfo * value =
    (const rmw_dds_common__msg__NodeEntitiesInfo *)(untyped_value);
  *item = *value;
}

bool rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__resize_function__ParticipantEntitiesInfo__node_entities_info_seq(
  void * untyped_member, size_t size)
{
  rmw_dds_common__msg__NodeEntitiesInfo__Sequence * member =
    (rmw_dds_common__msg__NodeEntitiesInfo__Sequence *)(untyped_member);
  rmw_dds_common__msg__NodeEntitiesInfo__Sequence__fini(member);
  return rmw_dds_common__msg__NodeEntitiesInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__ParticipantEntitiesInfo_message_member_array[2] = {
  {
    "gid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmw_dds_common__msg__ParticipantEntitiesInfo, gid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_entities_info_seq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmw_dds_common__msg__ParticipantEntitiesInfo, node_entities_info_seq),  // bytes offset in struct
    NULL,  // default value
    rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__size_function__ParticipantEntitiesInfo__node_entities_info_seq,  // size() function pointer
    rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__get_const_function__ParticipantEntitiesInfo__node_entities_info_seq,  // get_const(index) function pointer
    rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__get_function__ParticipantEntitiesInfo__node_entities_info_seq,  // get(index) function pointer
    rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__fetch_function__ParticipantEntitiesInfo__node_entities_info_seq,  // fetch(index, &value) function pointer
    rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__assign_function__ParticipantEntitiesInfo__node_entities_info_seq,  // assign(index, value) function pointer
    rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__resize_function__ParticipantEntitiesInfo__node_entities_info_seq  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__ParticipantEntitiesInfo_message_members = {
  "rmw_dds_common__msg",  // message namespace
  "ParticipantEntitiesInfo",  // message name
  2,  // number of fields
  sizeof(rmw_dds_common__msg__ParticipantEntitiesInfo),
  rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__ParticipantEntitiesInfo_message_member_array,  // message members
  rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__ParticipantEntitiesInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__ParticipantEntitiesInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__ParticipantEntitiesInfo_message_type_support_handle = {
  0,
  &rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__ParticipantEntitiesInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmw_dds_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmw_dds_common, msg, ParticipantEntitiesInfo)() {
  rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__ParticipantEntitiesInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmw_dds_common, msg, Gid)();
  rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__ParticipantEntitiesInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmw_dds_common, msg, NodeEntitiesInfo)();
  if (!rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__ParticipantEntitiesInfo_message_type_support_handle.typesupport_identifier) {
    rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__ParticipantEntitiesInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmw_dds_common__msg__ParticipantEntitiesInfo__rosidl_typesupport_introspection_c__ParticipantEntitiesInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
