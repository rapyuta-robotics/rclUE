// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from trajectory_msgs:msg/JointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "trajectory_msgs/msg/detail/joint_trajectory_point__rosidl_typesupport_introspection_c.h"
#include "trajectory_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.h"


// Include directives for member types
// Member `positions`
// Member `velocities`
// Member `accelerations`
// Member `effort`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `time_from_start`
#include "builtin_interfaces/msg/duration.h"
// Member `time_from_start`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void JointTrajectoryPoint__rosidl_typesupport_introspection_c__JointTrajectoryPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  trajectory_msgs__msg__JointTrajectoryPoint__init(message_memory);
}

void JointTrajectoryPoint__rosidl_typesupport_introspection_c__JointTrajectoryPoint_fini_function(void * message_memory)
{
  trajectory_msgs__msg__JointTrajectoryPoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember JointTrajectoryPoint__rosidl_typesupport_introspection_c__JointTrajectoryPoint_message_member_array[5] = {
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs__msg__JointTrajectoryPoint, positions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs__msg__JointTrajectoryPoint, velocities),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accelerations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs__msg__JointTrajectoryPoint, accelerations),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effort",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs__msg__JointTrajectoryPoint, effort),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_from_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trajectory_msgs__msg__JointTrajectoryPoint, time_from_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JointTrajectoryPoint__rosidl_typesupport_introspection_c__JointTrajectoryPoint_message_members = {
  "trajectory_msgs__msg",  // message namespace
  "JointTrajectoryPoint",  // message name
  5,  // number of fields
  sizeof(trajectory_msgs__msg__JointTrajectoryPoint),
  JointTrajectoryPoint__rosidl_typesupport_introspection_c__JointTrajectoryPoint_message_member_array,  // message members
  JointTrajectoryPoint__rosidl_typesupport_introspection_c__JointTrajectoryPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  JointTrajectoryPoint__rosidl_typesupport_introspection_c__JointTrajectoryPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JointTrajectoryPoint__rosidl_typesupport_introspection_c__JointTrajectoryPoint_message_type_support_handle = {
  0,
  &JointTrajectoryPoint__rosidl_typesupport_introspection_c__JointTrajectoryPoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)() {
  JointTrajectoryPoint__rosidl_typesupport_introspection_c__JointTrajectoryPoint_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!JointTrajectoryPoint__rosidl_typesupport_introspection_c__JointTrajectoryPoint_message_type_support_handle.typesupport_identifier) {
    JointTrajectoryPoint__rosidl_typesupport_introspection_c__JointTrajectoryPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JointTrajectoryPoint__rosidl_typesupport_introspection_c__JointTrajectoryPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
