// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from visualization_msgs:msg/MarkerArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "visualization_msgs/msg/detail/marker_array__rosidl_typesupport_introspection_c.h"
#include "visualization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "visualization_msgs/msg/detail/marker_array__functions.h"
#include "visualization_msgs/msg/detail/marker_array__struct.h"


// Include directives for member types
// Member `markers`
#include "visualization_msgs/msg/marker.h"
// Member `markers`
#include "visualization_msgs/msg/detail/marker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MarkerArray__rosidl_typesupport_introspection_c__MarkerArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  visualization_msgs__msg__MarkerArray__init(message_memory);
}

void MarkerArray__rosidl_typesupport_introspection_c__MarkerArray_fini_function(void * message_memory)
{
  visualization_msgs__msg__MarkerArray__fini(message_memory);
}

size_t MarkerArray__rosidl_typesupport_introspection_c__size_function__Marker__markers(
  const void * untyped_member)
{
  const visualization_msgs__msg__Marker__Sequence * member =
    (const visualization_msgs__msg__Marker__Sequence *)(untyped_member);
  return member->size;
}

const void * MarkerArray__rosidl_typesupport_introspection_c__get_const_function__Marker__markers(
  const void * untyped_member, size_t index)
{
  const visualization_msgs__msg__Marker__Sequence * member =
    (const visualization_msgs__msg__Marker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MarkerArray__rosidl_typesupport_introspection_c__get_function__Marker__markers(
  void * untyped_member, size_t index)
{
  visualization_msgs__msg__Marker__Sequence * member =
    (visualization_msgs__msg__Marker__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MarkerArray__rosidl_typesupport_introspection_c__resize_function__Marker__markers(
  void * untyped_member, size_t size)
{
  visualization_msgs__msg__Marker__Sequence * member =
    (visualization_msgs__msg__Marker__Sequence *)(untyped_member);
  visualization_msgs__msg__Marker__Sequence__fini(member);
  return visualization_msgs__msg__Marker__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MarkerArray__rosidl_typesupport_introspection_c__MarkerArray_message_member_array[1] = {
  {
    "markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__MarkerArray, markers),  // bytes offset in struct
    NULL,  // default value
    MarkerArray__rosidl_typesupport_introspection_c__size_function__Marker__markers,  // size() function pointer
    MarkerArray__rosidl_typesupport_introspection_c__get_const_function__Marker__markers,  // get_const(index) function pointer
    MarkerArray__rosidl_typesupport_introspection_c__get_function__Marker__markers,  // get(index) function pointer
    MarkerArray__rosidl_typesupport_introspection_c__resize_function__Marker__markers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MarkerArray__rosidl_typesupport_introspection_c__MarkerArray_message_members = {
  "visualization_msgs__msg",  // message namespace
  "MarkerArray",  // message name
  1,  // number of fields
  sizeof(visualization_msgs__msg__MarkerArray),
  MarkerArray__rosidl_typesupport_introspection_c__MarkerArray_message_member_array,  // message members
  MarkerArray__rosidl_typesupport_introspection_c__MarkerArray_init_function,  // function to initialize message memory (memory has to be allocated)
  MarkerArray__rosidl_typesupport_introspection_c__MarkerArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MarkerArray__rosidl_typesupport_introspection_c__MarkerArray_message_type_support_handle = {
  0,
  &MarkerArray__rosidl_typesupport_introspection_c__MarkerArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, MarkerArray)() {
  MarkerArray__rosidl_typesupport_introspection_c__MarkerArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, Marker)();
  if (!MarkerArray__rosidl_typesupport_introspection_c__MarkerArray_message_type_support_handle.typesupport_identifier) {
    MarkerArray__rosidl_typesupport_introspection_c__MarkerArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MarkerArray__rosidl_typesupport_introspection_c__MarkerArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
