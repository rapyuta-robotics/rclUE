// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geometry_msgs:msg/Polygon.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geometry_msgs/msg/detail/polygon__rosidl_typesupport_introspection_c.h"
#include "geometry_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geometry_msgs/msg/detail/polygon__functions.h"
#include "geometry_msgs/msg/detail/polygon__struct.h"


// Include directives for member types
// Member `points`
#include "geometry_msgs/msg/point32.h"
// Member `points`
#include "geometry_msgs/msg/detail/point32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Polygon__rosidl_typesupport_introspection_c__Polygon_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geometry_msgs__msg__Polygon__init(message_memory);
}

void Polygon__rosidl_typesupport_introspection_c__Polygon_fini_function(void * message_memory)
{
  geometry_msgs__msg__Polygon__fini(message_memory);
}

size_t Polygon__rosidl_typesupport_introspection_c__size_function__Point32__points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point32__Sequence * member =
    (const geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return member->size;
}

const void * Polygon__rosidl_typesupport_introspection_c__get_const_function__Point32__points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point32__Sequence * member =
    (const geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Polygon__rosidl_typesupport_introspection_c__get_function__Point32__points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point32__Sequence * member =
    (geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Polygon__rosidl_typesupport_introspection_c__resize_function__Point32__points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point32__Sequence * member =
    (geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  geometry_msgs__msg__Point32__Sequence__fini(member);
  return geometry_msgs__msg__Point32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Polygon__rosidl_typesupport_introspection_c__Polygon_message_member_array[1] = {
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs__msg__Polygon, points),  // bytes offset in struct
    NULL,  // default value
    Polygon__rosidl_typesupport_introspection_c__size_function__Point32__points,  // size() function pointer
    Polygon__rosidl_typesupport_introspection_c__get_const_function__Point32__points,  // get_const(index) function pointer
    Polygon__rosidl_typesupport_introspection_c__get_function__Point32__points,  // get(index) function pointer
    Polygon__rosidl_typesupport_introspection_c__resize_function__Point32__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Polygon__rosidl_typesupport_introspection_c__Polygon_message_members = {
  "geometry_msgs__msg",  // message namespace
  "Polygon",  // message name
  1,  // number of fields
  sizeof(geometry_msgs__msg__Polygon),
  Polygon__rosidl_typesupport_introspection_c__Polygon_message_member_array,  // message members
  Polygon__rosidl_typesupport_introspection_c__Polygon_init_function,  // function to initialize message memory (memory has to be allocated)
  Polygon__rosidl_typesupport_introspection_c__Polygon_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Polygon__rosidl_typesupport_introspection_c__Polygon_message_type_support_handle = {
  0,
  &Polygon__rosidl_typesupport_introspection_c__Polygon_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geometry_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Polygon)() {
  Polygon__rosidl_typesupport_introspection_c__Polygon_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  if (!Polygon__rosidl_typesupport_introspection_c__Polygon_message_type_support_handle.typesupport_identifier) {
    Polygon__rosidl_typesupport_introspection_c__Polygon_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Polygon__rosidl_typesupport_introspection_c__Polygon_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
