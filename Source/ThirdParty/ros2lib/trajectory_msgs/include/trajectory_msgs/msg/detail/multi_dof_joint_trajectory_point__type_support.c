// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from trajectory_msgs:msg/MultiDOFJointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__rosidl_typesupport_introspection_c.h"
#include "trajectory_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__functions.h"
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__struct.h"


// Include directives for member types
// Member `transforms`
#include "geometry_msgs/msg/transform.h"
// Member `transforms`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"
// Member `velocities`
// Member `accelerations`
#include "geometry_msgs/msg/twist.h"
// Member `velocities`
// Member `accelerations`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `time_from_start`
#include "builtin_interfaces/msg/duration.h"
// Member `time_from_start`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__init(message_memory);
}

void MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_fini_function(void * message_memory)
{
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(message_memory);
}

size_t MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__size_function__Transform__transforms(
  const void * untyped_member)
{
  const geometry_msgs__msg__Transform__Sequence * member =
    (const geometry_msgs__msg__Transform__Sequence *)(untyped_member);
  return member->size;
}

const void * MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__get_const_function__Transform__transforms(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Transform__Sequence * member =
    (const geometry_msgs__msg__Transform__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__get_function__Transform__transforms(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Transform__Sequence * member =
    (geometry_msgs__msg__Transform__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__resize_function__Transform__transforms(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Transform__Sequence * member =
    (geometry_msgs__msg__Transform__Sequence *)(untyped_member);
  geometry_msgs__msg__Transform__Sequence__fini(member);
  return geometry_msgs__msg__Transform__Sequence__init(member, size);
}

size_t MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__size_function__Twist__velocities(
  const void * untyped_member)
{
  const geometry_msgs__msg__Twist__Sequence * member =
    (const geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return member->size;
}

const void * MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__get_const_function__Twist__velocities(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Twist__Sequence * member =
    (const geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__get_function__Twist__velocities(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Twist__Sequence * member =
    (geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__resize_function__Twist__velocities(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Twist__Sequence * member =
    (geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  geometry_msgs__msg__Twist__Sequence__fini(member);
  return geometry_msgs__msg__Twist__Sequence__init(member, size);
}

size_t MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__size_function__Twist__accelerations(
  const void * untyped_member)
{
  const geometry_msgs__msg__Twist__Sequence * member =
    (const geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return member->size;
}

const void * MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__get_const_function__Twist__accelerations(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Twist__Sequence * member =
    (const geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__get_function__Twist__accelerations(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Twist__Sequence * member =
    (geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__resize_function__Twist__accelerations(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Twist__Sequence * member =
    (geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  geometry_msgs__msg__Twist__Sequence__fini(member);
  return geometry_msgs__msg__Twist__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_message_member_array[4] = {
  {
    "transforms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint, transforms),  // bytes offset in struct
    NULL,  // default value
    MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__size_function__Transform__transforms,  // size() function pointer
    MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__get_const_function__Transform__transforms,  // get_const(index) function pointer
    MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__get_function__Transform__transforms,  // get(index) function pointer
    MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__resize_function__Transform__transforms  // resize(index) function pointer
  },
  {
    "velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint, velocities),  // bytes offset in struct
    NULL,  // default value
    MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__size_function__Twist__velocities,  // size() function pointer
    MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__get_const_function__Twist__velocities,  // get_const(index) function pointer
    MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__get_function__Twist__velocities,  // get(index) function pointer
    MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__resize_function__Twist__velocities  // resize(index) function pointer
  },
  {
    "accelerations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint, accelerations),  // bytes offset in struct
    NULL,  // default value
    MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__size_function__Twist__accelerations,  // size() function pointer
    MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__get_const_function__Twist__accelerations,  // get_const(index) function pointer
    MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__get_function__Twist__accelerations,  // get(index) function pointer
    MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__resize_function__Twist__accelerations  // resize(index) function pointer
  },
  {
    "time_from_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint, time_from_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_message_members = {
  "trajectory_msgs__msg",  // message namespace
  "MultiDOFJointTrajectoryPoint",  // message name
  4,  // number of fields
  sizeof(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint),
  MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_message_member_array,  // message members
  MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_message_type_support_handle = {
  0,
  &MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)() {
  MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_message_type_support_handle.typesupport_identifier) {
    MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MultiDOFJointTrajectoryPoint__rosidl_typesupport_introspection_c__MultiDOFJointTrajectoryPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
