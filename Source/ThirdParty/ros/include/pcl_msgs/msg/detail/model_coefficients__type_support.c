// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pcl_msgs:msg/ModelCoefficients.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pcl_msgs/msg/detail/model_coefficients__rosidl_typesupport_introspection_c.h"
#include "pcl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pcl_msgs/msg/detail/model_coefficients__functions.h"
#include "pcl_msgs/msg/detail/model_coefficients__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ModelCoefficients__rosidl_typesupport_introspection_c__ModelCoefficients_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pcl_msgs__msg__ModelCoefficients__init(message_memory);
}

void ModelCoefficients__rosidl_typesupport_introspection_c__ModelCoefficients_fini_function(void * message_memory)
{
  pcl_msgs__msg__ModelCoefficients__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ModelCoefficients__rosidl_typesupport_introspection_c__ModelCoefficients_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pcl_msgs__msg__ModelCoefficients, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pcl_msgs__msg__ModelCoefficients, values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ModelCoefficients__rosidl_typesupport_introspection_c__ModelCoefficients_message_members = {
  "pcl_msgs__msg",  // message namespace
  "ModelCoefficients",  // message name
  2,  // number of fields
  sizeof(pcl_msgs__msg__ModelCoefficients),
  ModelCoefficients__rosidl_typesupport_introspection_c__ModelCoefficients_message_member_array,  // message members
  ModelCoefficients__rosidl_typesupport_introspection_c__ModelCoefficients_init_function,  // function to initialize message memory (memory has to be allocated)
  ModelCoefficients__rosidl_typesupport_introspection_c__ModelCoefficients_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ModelCoefficients__rosidl_typesupport_introspection_c__ModelCoefficients_message_type_support_handle = {
  0,
  &ModelCoefficients__rosidl_typesupport_introspection_c__ModelCoefficients_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pcl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, msg, ModelCoefficients)() {
  ModelCoefficients__rosidl_typesupport_introspection_c__ModelCoefficients_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ModelCoefficients__rosidl_typesupport_introspection_c__ModelCoefficients_message_type_support_handle.typesupport_identifier) {
    ModelCoefficients__rosidl_typesupport_introspection_c__ModelCoefficients_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ModelCoefficients__rosidl_typesupport_introspection_c__ModelCoefficients_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
