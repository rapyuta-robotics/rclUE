// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from actionlib_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "actionlib_msgs/msg/detail/goal_status_array__rosidl_typesupport_introspection_c.h"
#include "actionlib_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "actionlib_msgs/msg/detail/goal_status_array__functions.h"
#include "actionlib_msgs/msg/detail/goal_status_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `status_list`
#include "actionlib_msgs/msg/goal_status.h"
// Member `status_list`
#include "actionlib_msgs/msg/detail/goal_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  actionlib_msgs__msg__GoalStatusArray__init(message_memory);
}

void GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_fini_function(void * message_memory)
{
  actionlib_msgs__msg__GoalStatusArray__fini(message_memory);
}

size_t GoalStatusArray__rosidl_typesupport_introspection_c__size_function__GoalStatus__status_list(
  const void * untyped_member)
{
  const actionlib_msgs__msg__GoalStatus__Sequence * member =
    (const actionlib_msgs__msg__GoalStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * GoalStatusArray__rosidl_typesupport_introspection_c__get_const_function__GoalStatus__status_list(
  const void * untyped_member, size_t index)
{
  const actionlib_msgs__msg__GoalStatus__Sequence * member =
    (const actionlib_msgs__msg__GoalStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GoalStatusArray__rosidl_typesupport_introspection_c__get_function__GoalStatus__status_list(
  void * untyped_member, size_t index)
{
  actionlib_msgs__msg__GoalStatus__Sequence * member =
    (actionlib_msgs__msg__GoalStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GoalStatusArray__rosidl_typesupport_introspection_c__resize_function__GoalStatus__status_list(
  void * untyped_member, size_t size)
{
  actionlib_msgs__msg__GoalStatus__Sequence * member =
    (actionlib_msgs__msg__GoalStatus__Sequence *)(untyped_member);
  actionlib_msgs__msg__GoalStatus__Sequence__fini(member);
  return actionlib_msgs__msg__GoalStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(actionlib_msgs__msg__GoalStatusArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(actionlib_msgs__msg__GoalStatusArray, status_list),  // bytes offset in struct
    NULL,  // default value
    GoalStatusArray__rosidl_typesupport_introspection_c__size_function__GoalStatus__status_list,  // size() function pointer
    GoalStatusArray__rosidl_typesupport_introspection_c__get_const_function__GoalStatus__status_list,  // get_const(index) function pointer
    GoalStatusArray__rosidl_typesupport_introspection_c__get_function__GoalStatus__status_list,  // get(index) function pointer
    GoalStatusArray__rosidl_typesupport_introspection_c__resize_function__GoalStatus__status_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_members = {
  "actionlib_msgs__msg",  // message namespace
  "GoalStatusArray",  // message name
  2,  // number of fields
  sizeof(actionlib_msgs__msg__GoalStatusArray),
  GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_member_array,  // message members
  GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_type_support_handle = {
  0,
  &GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_actionlib_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actionlib_msgs, msg, GoalStatusArray)() {
  GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, actionlib_msgs, msg, GoalStatus)();
  if (!GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_type_support_handle.typesupport_identifier) {
    GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
