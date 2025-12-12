// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simulation_interfaces:msg/Bounds.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simulation_interfaces/msg/detail/bounds__rosidl_typesupport_introspection_c.h"
#include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simulation_interfaces/msg/detail/bounds__functions.h"
#include "simulation_interfaces/msg/detail/bounds__struct.h"


// Include directives for member types
// Member `points`
#include "geometry_msgs/msg/vector3.h"
// Member `points`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__Bounds_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__msg__Bounds__init(message_memory);
}

void simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__Bounds_fini_function(void * message_memory)
{
  simulation_interfaces__msg__Bounds__fini(message_memory);
}

size_t simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__size_function__Bounds__points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__get_const_function__Bounds__points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__get_function__Bounds__points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__fetch_function__Bounds__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__get_const_function__Bounds__points(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__assign_function__Bounds__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__get_function__Bounds__points(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__resize_function__Bounds__points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__Bounds_message_member_array[2] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__Bounds, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    offsetof(simulation_interfaces__msg__Bounds, points),  // bytes offset in struct
    NULL,  // default value
    simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__size_function__Bounds__points,  // size() function pointer
    simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__get_const_function__Bounds__points,  // get_const(index) function pointer
    simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__get_function__Bounds__points,  // get(index) function pointer
    simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__fetch_function__Bounds__points,  // fetch(index, &value) function pointer
    simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__assign_function__Bounds__points,  // assign(index, value) function pointer
    simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__resize_function__Bounds__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__Bounds_message_members = {
  "simulation_interfaces__msg",  // message namespace
  "Bounds",  // message name
  2,  // number of fields
  sizeof(simulation_interfaces__msg__Bounds),
  simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__Bounds_message_member_array,  // message members
  simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__Bounds_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__Bounds_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__Bounds_message_type_support_handle = {
  0,
  &simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__Bounds_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, Bounds)() {
  simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__Bounds_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__Bounds_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__Bounds_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__msg__Bounds__rosidl_typesupport_introspection_c__Bounds_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
