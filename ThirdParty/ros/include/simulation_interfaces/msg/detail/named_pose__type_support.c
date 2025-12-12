// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simulation_interfaces:msg/NamedPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simulation_interfaces/msg/detail/named_pose__rosidl_typesupport_introspection_c.h"
#include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simulation_interfaces/msg/detail/named_pose__functions.h"
#include "simulation_interfaces/msg/detail/named_pose__struct.h"


// Include directives for member types
// Member `name`
// Member `description`
// Member `tags`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NamedPose__rosidl_typesupport_introspection_c__NamedPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__msg__NamedPose__init(message_memory);
}

void NamedPose__rosidl_typesupport_introspection_c__NamedPose_fini_function(void * message_memory)
{
  simulation_interfaces__msg__NamedPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NamedPose__rosidl_typesupport_introspection_c__NamedPose_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__NamedPose, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__NamedPose, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__NamedPose, tags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__NamedPose, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NamedPose__rosidl_typesupport_introspection_c__NamedPose_message_members = {
  "simulation_interfaces__msg",  // message namespace
  "NamedPose",  // message name
  4,  // number of fields
  sizeof(simulation_interfaces__msg__NamedPose),
  NamedPose__rosidl_typesupport_introspection_c__NamedPose_message_member_array,  // message members
  NamedPose__rosidl_typesupport_introspection_c__NamedPose_init_function,  // function to initialize message memory (memory has to be allocated)
  NamedPose__rosidl_typesupport_introspection_c__NamedPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NamedPose__rosidl_typesupport_introspection_c__NamedPose_message_type_support_handle = {
  0,
  &NamedPose__rosidl_typesupport_introspection_c__NamedPose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, NamedPose)() {
  NamedPose__rosidl_typesupport_introspection_c__NamedPose_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!NamedPose__rosidl_typesupport_introspection_c__NamedPose_message_type_support_handle.typesupport_identifier) {
    NamedPose__rosidl_typesupport_introspection_c__NamedPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NamedPose__rosidl_typesupport_introspection_c__NamedPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
