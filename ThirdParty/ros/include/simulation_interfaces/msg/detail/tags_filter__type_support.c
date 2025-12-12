// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simulation_interfaces:msg/TagsFilter.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simulation_interfaces/msg/detail/tags_filter__rosidl_typesupport_introspection_c.h"
#include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simulation_interfaces/msg/detail/tags_filter__functions.h"
#include "simulation_interfaces/msg/detail/tags_filter__struct.h"


// Include directives for member types
// Member `tags`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TagsFilter__rosidl_typesupport_introspection_c__TagsFilter_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__msg__TagsFilter__init(message_memory);
}

void TagsFilter__rosidl_typesupport_introspection_c__TagsFilter_fini_function(void * message_memory)
{
  simulation_interfaces__msg__TagsFilter__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TagsFilter__rosidl_typesupport_introspection_c__TagsFilter_message_member_array[2] = {
  {
    "tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__TagsFilter, tags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "filter_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__msg__TagsFilter, filter_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TagsFilter__rosidl_typesupport_introspection_c__TagsFilter_message_members = {
  "simulation_interfaces__msg",  // message namespace
  "TagsFilter",  // message name
  2,  // number of fields
  sizeof(simulation_interfaces__msg__TagsFilter),
  TagsFilter__rosidl_typesupport_introspection_c__TagsFilter_message_member_array,  // message members
  TagsFilter__rosidl_typesupport_introspection_c__TagsFilter_init_function,  // function to initialize message memory (memory has to be allocated)
  TagsFilter__rosidl_typesupport_introspection_c__TagsFilter_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TagsFilter__rosidl_typesupport_introspection_c__TagsFilter_message_type_support_handle = {
  0,
  &TagsFilter__rosidl_typesupport_introspection_c__TagsFilter_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, TagsFilter)() {
  if (!TagsFilter__rosidl_typesupport_introspection_c__TagsFilter_message_type_support_handle.typesupport_identifier) {
    TagsFilter__rosidl_typesupport_introspection_c__TagsFilter_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TagsFilter__rosidl_typesupport_introspection_c__TagsFilter_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
