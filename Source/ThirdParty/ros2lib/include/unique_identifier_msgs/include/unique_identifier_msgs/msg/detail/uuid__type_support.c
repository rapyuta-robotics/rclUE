// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unique_identifier_msgs:msg/UUID.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
#include "unique_identifier_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void UUID__rosidl_typesupport_introspection_c__UUID_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unique_identifier_msgs__msg__UUID__init(message_memory);
}

void UUID__rosidl_typesupport_introspection_c__UUID_fini_function(void * message_memory)
{
  unique_identifier_msgs__msg__UUID__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UUID__rosidl_typesupport_introspection_c__UUID_message_member_array[1] = {
  {
    "uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(unique_identifier_msgs__msg__UUID, uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UUID__rosidl_typesupport_introspection_c__UUID_message_members = {
  "unique_identifier_msgs__msg",  // message namespace
  "UUID",  // message name
  1,  // number of fields
  sizeof(unique_identifier_msgs__msg__UUID),
  UUID__rosidl_typesupport_introspection_c__UUID_message_member_array,  // message members
  UUID__rosidl_typesupport_introspection_c__UUID_init_function,  // function to initialize message memory (memory has to be allocated)
  UUID__rosidl_typesupport_introspection_c__UUID_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UUID__rosidl_typesupport_introspection_c__UUID_message_type_support_handle = {
  0,
  &UUID__rosidl_typesupport_introspection_c__UUID_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unique_identifier_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)() {
  if (!UUID__rosidl_typesupport_introspection_c__UUID_message_type_support_handle.typesupport_identifier) {
    UUID__rosidl_typesupport_introspection_c__UUID_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UUID__rosidl_typesupport_introspection_c__UUID_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
