// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sensor_msgs:msg/JoyFeedbackArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sensor_msgs/msg/detail/joy_feedback_array__rosidl_typesupport_introspection_c.h"
#include "sensor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sensor_msgs/msg/detail/joy_feedback_array__functions.h"
#include "sensor_msgs/msg/detail/joy_feedback_array__struct.h"


// Include directives for member types
// Member `array`
#include "sensor_msgs/msg/joy_feedback.h"
// Member `array`
#include "sensor_msgs/msg/detail/joy_feedback__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void JoyFeedbackArray__rosidl_typesupport_introspection_c__JoyFeedbackArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sensor_msgs__msg__JoyFeedbackArray__init(message_memory);
}

void JoyFeedbackArray__rosidl_typesupport_introspection_c__JoyFeedbackArray_fini_function(void * message_memory)
{
  sensor_msgs__msg__JoyFeedbackArray__fini(message_memory);
}

size_t JoyFeedbackArray__rosidl_typesupport_introspection_c__size_function__JoyFeedback__array(
  const void * untyped_member)
{
  const sensor_msgs__msg__JoyFeedback__Sequence * member =
    (const sensor_msgs__msg__JoyFeedback__Sequence *)(untyped_member);
  return member->size;
}

const void * JoyFeedbackArray__rosidl_typesupport_introspection_c__get_const_function__JoyFeedback__array(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__JoyFeedback__Sequence * member =
    (const sensor_msgs__msg__JoyFeedback__Sequence *)(untyped_member);
  return &member->data[index];
}

void * JoyFeedbackArray__rosidl_typesupport_introspection_c__get_function__JoyFeedback__array(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__JoyFeedback__Sequence * member =
    (sensor_msgs__msg__JoyFeedback__Sequence *)(untyped_member);
  return &member->data[index];
}

bool JoyFeedbackArray__rosidl_typesupport_introspection_c__resize_function__JoyFeedback__array(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__JoyFeedback__Sequence * member =
    (sensor_msgs__msg__JoyFeedback__Sequence *)(untyped_member);
  sensor_msgs__msg__JoyFeedback__Sequence__fini(member);
  return sensor_msgs__msg__JoyFeedback__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember JoyFeedbackArray__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_member_array[1] = {
  {
    "array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__JoyFeedbackArray, array),  // bytes offset in struct
    NULL,  // default value
    JoyFeedbackArray__rosidl_typesupport_introspection_c__size_function__JoyFeedback__array,  // size() function pointer
    JoyFeedbackArray__rosidl_typesupport_introspection_c__get_const_function__JoyFeedback__array,  // get_const(index) function pointer
    JoyFeedbackArray__rosidl_typesupport_introspection_c__get_function__JoyFeedback__array,  // get(index) function pointer
    JoyFeedbackArray__rosidl_typesupport_introspection_c__resize_function__JoyFeedback__array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JoyFeedbackArray__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_members = {
  "sensor_msgs__msg",  // message namespace
  "JoyFeedbackArray",  // message name
  1,  // number of fields
  sizeof(sensor_msgs__msg__JoyFeedbackArray),
  JoyFeedbackArray__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_member_array,  // message members
  JoyFeedbackArray__rosidl_typesupport_introspection_c__JoyFeedbackArray_init_function,  // function to initialize message memory (memory has to be allocated)
  JoyFeedbackArray__rosidl_typesupport_introspection_c__JoyFeedbackArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JoyFeedbackArray__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_type_support_handle = {
  0,
  &JoyFeedbackArray__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JoyFeedbackArray)() {
  JoyFeedbackArray__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JoyFeedback)();
  if (!JoyFeedbackArray__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_type_support_handle.typesupport_identifier) {
    JoyFeedbackArray__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JoyFeedbackArray__rosidl_typesupport_introspection_c__JoyFeedbackArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
