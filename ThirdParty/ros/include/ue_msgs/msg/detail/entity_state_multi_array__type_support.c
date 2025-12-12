// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ue_msgs:msg/EntityStateMultiArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ue_msgs/msg/detail/entity_state_multi_array__rosidl_typesupport_introspection_c.h"
#include "ue_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ue_msgs/msg/detail/entity_state_multi_array__functions.h"
#include "ue_msgs/msg/detail/entity_state_multi_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `entity_states`
#include "ue_msgs/msg/entity_state.h"
// Member `entity_states`
#include "ue_msgs/msg/detail/entity_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void EntityStateMultiArray__rosidl_typesupport_introspection_c__EntityStateMultiArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ue_msgs__msg__EntityStateMultiArray__init(message_memory);
}

void EntityStateMultiArray__rosidl_typesupport_introspection_c__EntityStateMultiArray_fini_function(void * message_memory)
{
  ue_msgs__msg__EntityStateMultiArray__fini(message_memory);
}

size_t EntityStateMultiArray__rosidl_typesupport_introspection_c__size_function__EntityState__entity_states(
  const void * untyped_member)
{
  const ue_msgs__msg__EntityState__Sequence * member =
    (const ue_msgs__msg__EntityState__Sequence *)(untyped_member);
  return member->size;
}

const void * EntityStateMultiArray__rosidl_typesupport_introspection_c__get_const_function__EntityState__entity_states(
  const void * untyped_member, size_t index)
{
  const ue_msgs__msg__EntityState__Sequence * member =
    (const ue_msgs__msg__EntityState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * EntityStateMultiArray__rosidl_typesupport_introspection_c__get_function__EntityState__entity_states(
  void * untyped_member, size_t index)
{
  ue_msgs__msg__EntityState__Sequence * member =
    (ue_msgs__msg__EntityState__Sequence *)(untyped_member);
  return &member->data[index];
}

bool EntityStateMultiArray__rosidl_typesupport_introspection_c__resize_function__EntityState__entity_states(
  void * untyped_member, size_t size)
{
  ue_msgs__msg__EntityState__Sequence * member =
    (ue_msgs__msg__EntityState__Sequence *)(untyped_member);
  ue_msgs__msg__EntityState__Sequence__fini(member);
  return ue_msgs__msg__EntityState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember EntityStateMultiArray__rosidl_typesupport_introspection_c__EntityStateMultiArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__EntityStateMultiArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "entity_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ue_msgs__msg__EntityStateMultiArray, entity_states),  // bytes offset in struct
    NULL,  // default value
    EntityStateMultiArray__rosidl_typesupport_introspection_c__size_function__EntityState__entity_states,  // size() function pointer
    EntityStateMultiArray__rosidl_typesupport_introspection_c__get_const_function__EntityState__entity_states,  // get_const(index) function pointer
    EntityStateMultiArray__rosidl_typesupport_introspection_c__get_function__EntityState__entity_states,  // get(index) function pointer
    EntityStateMultiArray__rosidl_typesupport_introspection_c__resize_function__EntityState__entity_states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EntityStateMultiArray__rosidl_typesupport_introspection_c__EntityStateMultiArray_message_members = {
  "ue_msgs__msg",  // message namespace
  "EntityStateMultiArray",  // message name
  2,  // number of fields
  sizeof(ue_msgs__msg__EntityStateMultiArray),
  EntityStateMultiArray__rosidl_typesupport_introspection_c__EntityStateMultiArray_message_member_array,  // message members
  EntityStateMultiArray__rosidl_typesupport_introspection_c__EntityStateMultiArray_init_function,  // function to initialize message memory (memory has to be allocated)
  EntityStateMultiArray__rosidl_typesupport_introspection_c__EntityStateMultiArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EntityStateMultiArray__rosidl_typesupport_introspection_c__EntityStateMultiArray_message_type_support_handle = {
  0,
  &EntityStateMultiArray__rosidl_typesupport_introspection_c__EntityStateMultiArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ue_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, EntityStateMultiArray)() {
  EntityStateMultiArray__rosidl_typesupport_introspection_c__EntityStateMultiArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  EntityStateMultiArray__rosidl_typesupport_introspection_c__EntityStateMultiArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ue_msgs, msg, EntityState)();
  if (!EntityStateMultiArray__rosidl_typesupport_introspection_c__EntityStateMultiArray_message_type_support_handle.typesupport_identifier) {
    EntityStateMultiArray__rosidl_typesupport_introspection_c__EntityStateMultiArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EntityStateMultiArray__rosidl_typesupport_introspection_c__EntityStateMultiArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
