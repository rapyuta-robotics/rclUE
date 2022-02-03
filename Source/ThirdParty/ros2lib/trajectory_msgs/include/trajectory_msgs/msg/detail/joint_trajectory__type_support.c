// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from trajectory_msgs:msg/JointTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
#include "trajectory_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `points`
#include "trajectory_msgs/msg/joint_trajectory_point.h"
// Member `points`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  trajectory_msgs__msg__JointTrajectory__init(message_memory);
}

void JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_fini_function(void * message_memory)
{
  trajectory_msgs__msg__JointTrajectory__fini(message_memory);
}

size_t JointTrajectory__rosidl_typesupport_introspection_c__size_function__JointTrajectoryPoint__points(
  const void * untyped_member)
{
  const trajectory_msgs__msg__JointTrajectoryPoint__Sequence * member =
    (const trajectory_msgs__msg__JointTrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * JointTrajectory__rosidl_typesupport_introspection_c__get_const_function__JointTrajectoryPoint__points(
  const void * untyped_member, size_t index)
{
  const trajectory_msgs__msg__JointTrajectoryPoint__Sequence * member =
    (const trajectory_msgs__msg__JointTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * JointTrajectory__rosidl_typesupport_introspection_c__get_function__JointTrajectoryPoint__points(
  void * untyped_member, size_t index)
{
  trajectory_msgs__msg__JointTrajectoryPoint__Sequence * member =
    (trajectory_msgs__msg__JointTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool JointTrajectory__rosidl_typesupport_introspection_c__resize_function__JointTrajectoryPoint__points(
  void * untyped_member, size_t size)
{
  trajectory_msgs__msg__JointTrajectoryPoint__Sequence * member =
    (trajectory_msgs__msg__JointTrajectoryPoint__Sequence *)(untyped_member);
  trajectory_msgs__msg__JointTrajectoryPoint__Sequence__fini(member);
  return trajectory_msgs__msg__JointTrajectoryPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs__msg__JointTrajectory, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs__msg__JointTrajectory, joint_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs__msg__JointTrajectory, points),  // bytes offset in struct
    NULL,  // default value
    JointTrajectory__rosidl_typesupport_introspection_c__size_function__JointTrajectoryPoint__points,  // size() function pointer
    JointTrajectory__rosidl_typesupport_introspection_c__get_const_function__JointTrajectoryPoint__points,  // get_const(index) function pointer
    JointTrajectory__rosidl_typesupport_introspection_c__get_function__JointTrajectoryPoint__points,  // get(index) function pointer
    JointTrajectory__rosidl_typesupport_introspection_c__resize_function__JointTrajectoryPoint__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_members = {
  "trajectory_msgs__msg",  // message namespace
  "JointTrajectory",  // message name
  3,  // number of fields
  sizeof(trajectory_msgs__msg__JointTrajectory),
  JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_member_array,  // message members
  JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_type_support_handle = {
  0,
  &JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)() {
  JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  if (!JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_type_support_handle.typesupport_identifier) {
    JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JointTrajectory__rosidl_typesupport_introspection_c__JointTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
