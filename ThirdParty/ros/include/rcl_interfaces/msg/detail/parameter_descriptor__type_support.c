// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rcl_interfaces:msg/ParameterDescriptor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rcl_interfaces/msg/detail/parameter_descriptor__rosidl_typesupport_introspection_c.h"
#include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rcl_interfaces/msg/detail/parameter_descriptor__functions.h"
#include "rcl_interfaces/msg/detail/parameter_descriptor__struct.h"


// Include directives for member types
// Member `name`
// Member `description`
// Member `additional_constraints`
#include "rosidl_runtime_c/string_functions.h"
// Member `floating_point_range`
#include "rcl_interfaces/msg/floating_point_range.h"
// Member `floating_point_range`
#include "rcl_interfaces/msg/detail/floating_point_range__rosidl_typesupport_introspection_c.h"
// Member `integer_range`
#include "rcl_interfaces/msg/integer_range.h"
// Member `integer_range`
#include "rcl_interfaces/msg/detail/integer_range__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ParameterDescriptor__rosidl_typesupport_introspection_c__ParameterDescriptor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rcl_interfaces__msg__ParameterDescriptor__init(message_memory);
}

void ParameterDescriptor__rosidl_typesupport_introspection_c__ParameterDescriptor_fini_function(void * message_memory)
{
  rcl_interfaces__msg__ParameterDescriptor__fini(message_memory);
}

size_t ParameterDescriptor__rosidl_typesupport_introspection_c__size_function__FloatingPointRange__floating_point_range(
  const void * untyped_member)
{
  const rcl_interfaces__msg__FloatingPointRange__Sequence * member =
    (const rcl_interfaces__msg__FloatingPointRange__Sequence *)(untyped_member);
  return member->size;
}

const void * ParameterDescriptor__rosidl_typesupport_introspection_c__get_const_function__FloatingPointRange__floating_point_range(
  const void * untyped_member, size_t index)
{
  const rcl_interfaces__msg__FloatingPointRange__Sequence * member =
    (const rcl_interfaces__msg__FloatingPointRange__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ParameterDescriptor__rosidl_typesupport_introspection_c__get_function__FloatingPointRange__floating_point_range(
  void * untyped_member, size_t index)
{
  rcl_interfaces__msg__FloatingPointRange__Sequence * member =
    (rcl_interfaces__msg__FloatingPointRange__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ParameterDescriptor__rosidl_typesupport_introspection_c__resize_function__FloatingPointRange__floating_point_range(
  void * untyped_member, size_t size)
{
  rcl_interfaces__msg__FloatingPointRange__Sequence * member =
    (rcl_interfaces__msg__FloatingPointRange__Sequence *)(untyped_member);
  rcl_interfaces__msg__FloatingPointRange__Sequence__fini(member);
  return rcl_interfaces__msg__FloatingPointRange__Sequence__init(member, size);
}

size_t ParameterDescriptor__rosidl_typesupport_introspection_c__size_function__IntegerRange__integer_range(
  const void * untyped_member)
{
  const rcl_interfaces__msg__IntegerRange__Sequence * member =
    (const rcl_interfaces__msg__IntegerRange__Sequence *)(untyped_member);
  return member->size;
}

const void * ParameterDescriptor__rosidl_typesupport_introspection_c__get_const_function__IntegerRange__integer_range(
  const void * untyped_member, size_t index)
{
  const rcl_interfaces__msg__IntegerRange__Sequence * member =
    (const rcl_interfaces__msg__IntegerRange__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ParameterDescriptor__rosidl_typesupport_introspection_c__get_function__IntegerRange__integer_range(
  void * untyped_member, size_t index)
{
  rcl_interfaces__msg__IntegerRange__Sequence * member =
    (rcl_interfaces__msg__IntegerRange__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ParameterDescriptor__rosidl_typesupport_introspection_c__resize_function__IntegerRange__integer_range(
  void * untyped_member, size_t size)
{
  rcl_interfaces__msg__IntegerRange__Sequence * member =
    (rcl_interfaces__msg__IntegerRange__Sequence *)(untyped_member);
  rcl_interfaces__msg__IntegerRange__Sequence__fini(member);
  return rcl_interfaces__msg__IntegerRange__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ParameterDescriptor__rosidl_typesupport_introspection_c__ParameterDescriptor_message_member_array[7] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__ParameterDescriptor, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__ParameterDescriptor, type),  // bytes offset in struct
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
    offsetof(rcl_interfaces__msg__ParameterDescriptor, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "additional_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__ParameterDescriptor, additional_constraints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "read_only",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__ParameterDescriptor, read_only),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "floating_point_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rcl_interfaces__msg__ParameterDescriptor, floating_point_range),  // bytes offset in struct
    NULL,  // default value
    ParameterDescriptor__rosidl_typesupport_introspection_c__size_function__FloatingPointRange__floating_point_range,  // size() function pointer
    ParameterDescriptor__rosidl_typesupport_introspection_c__get_const_function__FloatingPointRange__floating_point_range,  // get_const(index) function pointer
    ParameterDescriptor__rosidl_typesupport_introspection_c__get_function__FloatingPointRange__floating_point_range,  // get(index) function pointer
    ParameterDescriptor__rosidl_typesupport_introspection_c__resize_function__FloatingPointRange__floating_point_range  // resize(index) function pointer
  },
  {
    "integer_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rcl_interfaces__msg__ParameterDescriptor, integer_range),  // bytes offset in struct
    NULL,  // default value
    ParameterDescriptor__rosidl_typesupport_introspection_c__size_function__IntegerRange__integer_range,  // size() function pointer
    ParameterDescriptor__rosidl_typesupport_introspection_c__get_const_function__IntegerRange__integer_range,  // get_const(index) function pointer
    ParameterDescriptor__rosidl_typesupport_introspection_c__get_function__IntegerRange__integer_range,  // get(index) function pointer
    ParameterDescriptor__rosidl_typesupport_introspection_c__resize_function__IntegerRange__integer_range  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ParameterDescriptor__rosidl_typesupport_introspection_c__ParameterDescriptor_message_members = {
  "rcl_interfaces__msg",  // message namespace
  "ParameterDescriptor",  // message name
  7,  // number of fields
  sizeof(rcl_interfaces__msg__ParameterDescriptor),
  ParameterDescriptor__rosidl_typesupport_introspection_c__ParameterDescriptor_message_member_array,  // message members
  ParameterDescriptor__rosidl_typesupport_introspection_c__ParameterDescriptor_init_function,  // function to initialize message memory (memory has to be allocated)
  ParameterDescriptor__rosidl_typesupport_introspection_c__ParameterDescriptor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ParameterDescriptor__rosidl_typesupport_introspection_c__ParameterDescriptor_message_type_support_handle = {
  0,
  &ParameterDescriptor__rosidl_typesupport_introspection_c__ParameterDescriptor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, ParameterDescriptor)() {
  ParameterDescriptor__rosidl_typesupport_introspection_c__ParameterDescriptor_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, FloatingPointRange)();
  ParameterDescriptor__rosidl_typesupport_introspection_c__ParameterDescriptor_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, IntegerRange)();
  if (!ParameterDescriptor__rosidl_typesupport_introspection_c__ParameterDescriptor_message_type_support_handle.typesupport_identifier) {
    ParameterDescriptor__rosidl_typesupport_introspection_c__ParameterDescriptor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ParameterDescriptor__rosidl_typesupport_introspection_c__ParameterDescriptor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
