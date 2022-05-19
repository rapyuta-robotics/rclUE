// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tf2_msgs:msg/TFMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tf2_msgs/msg/detail/tf_message__rosidl_typesupport_introspection_c.h"
#include "tf2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tf2_msgs/msg/detail/tf_message__functions.h"
#include "tf2_msgs/msg/detail/tf_message__struct.h"


// Include directives for member types
// Member `transforms`
#include "geometry_msgs/msg/transform_stamped.h"
// Member `transforms`
#include "geometry_msgs/msg/detail/transform_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TFMessage__rosidl_typesupport_introspection_c__TFMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tf2_msgs__msg__TFMessage__init(message_memory);
}

void TFMessage__rosidl_typesupport_introspection_c__TFMessage_fini_function(void * message_memory)
{
  tf2_msgs__msg__TFMessage__fini(message_memory);
}

size_t TFMessage__rosidl_typesupport_introspection_c__size_function__TransformStamped__transforms(
  const void * untyped_member)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * TFMessage__rosidl_typesupport_introspection_c__get_const_function__TransformStamped__transforms(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TFMessage__rosidl_typesupport_introspection_c__get_function__TransformStamped__transforms(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TFMessage__rosidl_typesupport_introspection_c__resize_function__TransformStamped__transforms(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__TransformStamped__Sequence__fini(member);
  return geometry_msgs__msg__TransformStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_member_array[1] = {
  {
    "transforms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_msgs__msg__TFMessage, transforms),  // bytes offset in struct
    NULL,  // default value
    TFMessage__rosidl_typesupport_introspection_c__size_function__TransformStamped__transforms,  // size() function pointer
    TFMessage__rosidl_typesupport_introspection_c__get_const_function__TransformStamped__transforms,  // get_const(index) function pointer
    TFMessage__rosidl_typesupport_introspection_c__get_function__TransformStamped__transforms,  // get(index) function pointer
    TFMessage__rosidl_typesupport_introspection_c__resize_function__TransformStamped__transforms  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_members = {
  "tf2_msgs__msg",  // message namespace
  "TFMessage",  // message name
  1,  // number of fields
  sizeof(tf2_msgs__msg__TFMessage),
  TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_member_array,  // message members
  TFMessage__rosidl_typesupport_introspection_c__TFMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  TFMessage__rosidl_typesupport_introspection_c__TFMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_type_support_handle = {
  0,
  &TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_msgs, msg, TFMessage)() {
  TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  if (!TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_type_support_handle.typesupport_identifier) {
    TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
