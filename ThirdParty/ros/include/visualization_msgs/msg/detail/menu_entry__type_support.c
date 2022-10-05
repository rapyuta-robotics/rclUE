// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from visualization_msgs:msg/MenuEntry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "visualization_msgs/msg/detail/menu_entry__rosidl_typesupport_introspection_c.h"
#include "visualization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "visualization_msgs/msg/detail/menu_entry__functions.h"
#include "visualization_msgs/msg/detail/menu_entry__struct.h"


// Include directives for member types
// Member `title`
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MenuEntry__rosidl_typesupport_introspection_c__MenuEntry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  visualization_msgs__msg__MenuEntry__init(message_memory);
}

void MenuEntry__rosidl_typesupport_introspection_c__MenuEntry_fini_function(void * message_memory)
{
  visualization_msgs__msg__MenuEntry__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MenuEntry__rosidl_typesupport_introspection_c__MenuEntry_message_member_array[5] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__MenuEntry, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parent_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__MenuEntry, parent_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "title",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__MenuEntry, title),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__MenuEntry, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__MenuEntry, command_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MenuEntry__rosidl_typesupport_introspection_c__MenuEntry_message_members = {
  "visualization_msgs__msg",  // message namespace
  "MenuEntry",  // message name
  5,  // number of fields
  sizeof(visualization_msgs__msg__MenuEntry),
  MenuEntry__rosidl_typesupport_introspection_c__MenuEntry_message_member_array,  // message members
  MenuEntry__rosidl_typesupport_introspection_c__MenuEntry_init_function,  // function to initialize message memory (memory has to be allocated)
  MenuEntry__rosidl_typesupport_introspection_c__MenuEntry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MenuEntry__rosidl_typesupport_introspection_c__MenuEntry_message_type_support_handle = {
  0,
  &MenuEntry__rosidl_typesupport_introspection_c__MenuEntry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, MenuEntry)() {
  if (!MenuEntry__rosidl_typesupport_introspection_c__MenuEntry_message_type_support_handle.typesupport_identifier) {
    MenuEntry__rosidl_typesupport_introspection_c__MenuEntry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MenuEntry__rosidl_typesupport_introspection_c__MenuEntry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
