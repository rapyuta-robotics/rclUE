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

void tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__TFMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tf2_msgs__msg__TFMessage__init(message_memory);
}

void tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__TFMessage_fini_function(void * message_memory)
{
  tf2_msgs__msg__TFMessage__fini(message_memory);
}

size_t tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__size_function__TFMessage__transforms(
  const void * untyped_member)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__get_const_function__TFMessage__transforms(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__get_function__TFMessage__transforms(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__fetch_function__TFMessage__transforms(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__TransformStamped * item =
    ((const geometry_msgs__msg__TransformStamped *)
    tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__get_const_function__TFMessage__transforms(untyped_member, index));
  geometry_msgs__msg__TransformStamped * value =
    (geometry_msgs__msg__TransformStamped *)(untyped_value);
  *value = *item;
}

void tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__assign_function__TFMessage__transforms(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__TransformStamped * item =
    ((geometry_msgs__msg__TransformStamped *)
    tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__get_function__TFMessage__transforms(untyped_member, index));
  const geometry_msgs__msg__TransformStamped * value =
    (const geometry_msgs__msg__TransformStamped *)(untyped_value);
  *item = *value;
}

bool tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__resize_function__TFMessage__transforms(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__TransformStamped__Sequence__fini(member);
  return geometry_msgs__msg__TransformStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_member_array[1] = {
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
    tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__size_function__TFMessage__transforms,  // size() function pointer
    tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__get_const_function__TFMessage__transforms,  // get_const(index) function pointer
    tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__get_function__TFMessage__transforms,  // get(index) function pointer
    tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__fetch_function__TFMessage__transforms,  // fetch(index, &value) function pointer
    tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__assign_function__TFMessage__transforms,  // assign(index, value) function pointer
    tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__resize_function__TFMessage__transforms  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_members = {
  "tf2_msgs__msg",  // message namespace
  "TFMessage",  // message name
  1,  // number of fields
  sizeof(tf2_msgs__msg__TFMessage),
  tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_member_array,  // message members
  tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__TFMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__TFMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_type_support_handle = {
  0,
  &tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_msgs, msg, TFMessage)() {
  tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  if (!tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_type_support_handle.typesupport_identifier) {
    tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tf2_msgs__msg__TFMessage__rosidl_typesupport_introspection_c__TFMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
