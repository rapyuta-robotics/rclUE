// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simulation_interfaces:msg/Spawnable.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simulation_interfaces/msg/detail/spawnable__rosidl_typesupport_introspection_c.h"
#include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simulation_interfaces/msg/detail/spawnable__functions.h"
#include "simulation_interfaces/msg/detail/spawnable__struct.h"


// Include directives for member types
// Member `entity_resource`
#include "simulation_interfaces/msg/resource.h"
// Member `entity_resource`
#include "simulation_interfaces/msg/detail/resource__rosidl_typesupport_introspection_c.h"
// Member `description`
#include "rosidl_runtime_c/string_functions.h"
// Member `spawn_bounds`
#include "simulation_interfaces/msg/bounds.h"
// Member `spawn_bounds`
#include "simulation_interfaces/msg/detail/bounds__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__msg__Spawnable__rosidl_typesupport_introspection_c__Spawnable_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__msg__Spawnable__init(message_memory);
}

void simulation_interfaces__msg__Spawnable__rosidl_typesupport_introspection_c__Spawnable_fini_function(void * message_memory)
{
  simulation_interfaces__msg__Spawnable__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__msg__Spawnable__rosidl_typesupport_introspection_c__Spawnable_message_member_array[3] = {
  {
    "entity_resource",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__Spawnable, entity_resource),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    offsetof(simulation_interfaces__msg__Spawnable, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spawn_bounds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__Spawnable, spawn_bounds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__msg__Spawnable__rosidl_typesupport_introspection_c__Spawnable_message_members = {
  "simulation_interfaces__msg",  // message namespace
  "Spawnable",  // message name
  3,  // number of fields
  sizeof(simulation_interfaces__msg__Spawnable),
  simulation_interfaces__msg__Spawnable__rosidl_typesupport_introspection_c__Spawnable_message_member_array,  // message members
  simulation_interfaces__msg__Spawnable__rosidl_typesupport_introspection_c__Spawnable_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__msg__Spawnable__rosidl_typesupport_introspection_c__Spawnable_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__msg__Spawnable__rosidl_typesupport_introspection_c__Spawnable_message_type_support_handle = {
  0,
  &simulation_interfaces__msg__Spawnable__rosidl_typesupport_introspection_c__Spawnable_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, Spawnable)() {
  simulation_interfaces__msg__Spawnable__rosidl_typesupport_introspection_c__Spawnable_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, Resource)();
  simulation_interfaces__msg__Spawnable__rosidl_typesupport_introspection_c__Spawnable_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, Bounds)();
  if (!simulation_interfaces__msg__Spawnable__rosidl_typesupport_introspection_c__Spawnable_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__msg__Spawnable__rosidl_typesupport_introspection_c__Spawnable_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__msg__Spawnable__rosidl_typesupport_introspection_c__Spawnable_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
