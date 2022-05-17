// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rcl_interfaces:msg/ParameterEventDescriptors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rcl_interfaces/msg/detail/parameter_event_descriptors__rosidl_typesupport_introspection_c.h"
#include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rcl_interfaces/msg/detail/parameter_event_descriptors__functions.h"
#include "rcl_interfaces/msg/detail/parameter_event_descriptors__struct.h"


// Include directives for member types
// Member `new_parameters`
// Member `changed_parameters`
// Member `deleted_parameters`
#include "rcl_interfaces/msg/parameter_descriptor.h"
// Member `new_parameters`
// Member `changed_parameters`
// Member `deleted_parameters`
#include "rcl_interfaces/msg/detail/parameter_descriptor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ParameterEventDescriptors__rosidl_typesupport_introspection_c__ParameterEventDescriptors_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rcl_interfaces__msg__ParameterEventDescriptors__init(message_memory);
}

void ParameterEventDescriptors__rosidl_typesupport_introspection_c__ParameterEventDescriptors_fini_function(void * message_memory)
{
  rcl_interfaces__msg__ParameterEventDescriptors__fini(message_memory);
}

size_t ParameterEventDescriptors__rosidl_typesupport_introspection_c__size_function__ParameterDescriptor__new_parameters(
  const void * untyped_member)
{
  const rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (const rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  return member->size;
}

const void * ParameterEventDescriptors__rosidl_typesupport_introspection_c__get_const_function__ParameterDescriptor__new_parameters(
  const void * untyped_member, size_t index)
{
  const rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (const rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ParameterEventDescriptors__rosidl_typesupport_introspection_c__get_function__ParameterDescriptor__new_parameters(
  void * untyped_member, size_t index)
{
  rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ParameterEventDescriptors__rosidl_typesupport_introspection_c__resize_function__ParameterDescriptor__new_parameters(
  void * untyped_member, size_t size)
{
  rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  rcl_interfaces__msg__ParameterDescriptor__Sequence__fini(member);
  return rcl_interfaces__msg__ParameterDescriptor__Sequence__init(member, size);
}

size_t ParameterEventDescriptors__rosidl_typesupport_introspection_c__size_function__ParameterDescriptor__changed_parameters(
  const void * untyped_member)
{
  const rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (const rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  return member->size;
}

const void * ParameterEventDescriptors__rosidl_typesupport_introspection_c__get_const_function__ParameterDescriptor__changed_parameters(
  const void * untyped_member, size_t index)
{
  const rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (const rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ParameterEventDescriptors__rosidl_typesupport_introspection_c__get_function__ParameterDescriptor__changed_parameters(
  void * untyped_member, size_t index)
{
  rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ParameterEventDescriptors__rosidl_typesupport_introspection_c__resize_function__ParameterDescriptor__changed_parameters(
  void * untyped_member, size_t size)
{
  rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  rcl_interfaces__msg__ParameterDescriptor__Sequence__fini(member);
  return rcl_interfaces__msg__ParameterDescriptor__Sequence__init(member, size);
}

size_t ParameterEventDescriptors__rosidl_typesupport_introspection_c__size_function__ParameterDescriptor__deleted_parameters(
  const void * untyped_member)
{
  const rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (const rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  return member->size;
}

const void * ParameterEventDescriptors__rosidl_typesupport_introspection_c__get_const_function__ParameterDescriptor__deleted_parameters(
  const void * untyped_member, size_t index)
{
  const rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (const rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ParameterEventDescriptors__rosidl_typesupport_introspection_c__get_function__ParameterDescriptor__deleted_parameters(
  void * untyped_member, size_t index)
{
  rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ParameterEventDescriptors__rosidl_typesupport_introspection_c__resize_function__ParameterDescriptor__deleted_parameters(
  void * untyped_member, size_t size)
{
  rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  rcl_interfaces__msg__ParameterDescriptor__Sequence__fini(member);
  return rcl_interfaces__msg__ParameterDescriptor__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ParameterEventDescriptors__rosidl_typesupport_introspection_c__ParameterEventDescriptors_message_member_array[3] = {
  {
    "new_parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__ParameterEventDescriptors, new_parameters),  // bytes offset in struct
    NULL,  // default value
    ParameterEventDescriptors__rosidl_typesupport_introspection_c__size_function__ParameterDescriptor__new_parameters,  // size() function pointer
    ParameterEventDescriptors__rosidl_typesupport_introspection_c__get_const_function__ParameterDescriptor__new_parameters,  // get_const(index) function pointer
    ParameterEventDescriptors__rosidl_typesupport_introspection_c__get_function__ParameterDescriptor__new_parameters,  // get(index) function pointer
    ParameterEventDescriptors__rosidl_typesupport_introspection_c__resize_function__ParameterDescriptor__new_parameters  // resize(index) function pointer
  },
  {
    "changed_parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__ParameterEventDescriptors, changed_parameters),  // bytes offset in struct
    NULL,  // default value
    ParameterEventDescriptors__rosidl_typesupport_introspection_c__size_function__ParameterDescriptor__changed_parameters,  // size() function pointer
    ParameterEventDescriptors__rosidl_typesupport_introspection_c__get_const_function__ParameterDescriptor__changed_parameters,  // get_const(index) function pointer
    ParameterEventDescriptors__rosidl_typesupport_introspection_c__get_function__ParameterDescriptor__changed_parameters,  // get(index) function pointer
    ParameterEventDescriptors__rosidl_typesupport_introspection_c__resize_function__ParameterDescriptor__changed_parameters  // resize(index) function pointer
  },
  {
    "deleted_parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__ParameterEventDescriptors, deleted_parameters),  // bytes offset in struct
    NULL,  // default value
    ParameterEventDescriptors__rosidl_typesupport_introspection_c__size_function__ParameterDescriptor__deleted_parameters,  // size() function pointer
    ParameterEventDescriptors__rosidl_typesupport_introspection_c__get_const_function__ParameterDescriptor__deleted_parameters,  // get_const(index) function pointer
    ParameterEventDescriptors__rosidl_typesupport_introspection_c__get_function__ParameterDescriptor__deleted_parameters,  // get(index) function pointer
    ParameterEventDescriptors__rosidl_typesupport_introspection_c__resize_function__ParameterDescriptor__deleted_parameters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ParameterEventDescriptors__rosidl_typesupport_introspection_c__ParameterEventDescriptors_message_members = {
  "rcl_interfaces__msg",  // message namespace
  "ParameterEventDescriptors",  // message name
  3,  // number of fields
  sizeof(rcl_interfaces__msg__ParameterEventDescriptors),
  ParameterEventDescriptors__rosidl_typesupport_introspection_c__ParameterEventDescriptors_message_member_array,  // message members
  ParameterEventDescriptors__rosidl_typesupport_introspection_c__ParameterEventDescriptors_init_function,  // function to initialize message memory (memory has to be allocated)
  ParameterEventDescriptors__rosidl_typesupport_introspection_c__ParameterEventDescriptors_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ParameterEventDescriptors__rosidl_typesupport_introspection_c__ParameterEventDescriptors_message_type_support_handle = {
  0,
  &ParameterEventDescriptors__rosidl_typesupport_introspection_c__ParameterEventDescriptors_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, ParameterEventDescriptors)() {
  ParameterEventDescriptors__rosidl_typesupport_introspection_c__ParameterEventDescriptors_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, ParameterDescriptor)();
  ParameterEventDescriptors__rosidl_typesupport_introspection_c__ParameterEventDescriptors_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, ParameterDescriptor)();
  ParameterEventDescriptors__rosidl_typesupport_introspection_c__ParameterEventDescriptors_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, ParameterDescriptor)();
  if (!ParameterEventDescriptors__rosidl_typesupport_introspection_c__ParameterEventDescriptors_message_type_support_handle.typesupport_identifier) {
    ParameterEventDescriptors__rosidl_typesupport_introspection_c__ParameterEventDescriptors_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ParameterEventDescriptors__rosidl_typesupport_introspection_c__ParameterEventDescriptors_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
