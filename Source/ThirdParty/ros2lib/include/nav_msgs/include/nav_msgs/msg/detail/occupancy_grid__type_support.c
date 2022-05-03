// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav_msgs:msg/OccupancyGrid.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav_msgs/msg/detail/occupancy_grid__rosidl_typesupport_introspection_c.h"
#include "nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav_msgs/msg/detail/occupancy_grid__functions.h"
#include "nav_msgs/msg/detail/occupancy_grid__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `info`
#include "nav_msgs/msg/map_meta_data.h"
// Member `info`
#include "nav_msgs/msg/detail/map_meta_data__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OccupancyGrid__rosidl_typesupport_introspection_c__OccupancyGrid_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav_msgs__msg__OccupancyGrid__init(message_memory);
}

void OccupancyGrid__rosidl_typesupport_introspection_c__OccupancyGrid_fini_function(void * message_memory)
{
  nav_msgs__msg__OccupancyGrid__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OccupancyGrid__rosidl_typesupport_introspection_c__OccupancyGrid_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs__msg__OccupancyGrid, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs__msg__OccupancyGrid, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs__msg__OccupancyGrid, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OccupancyGrid__rosidl_typesupport_introspection_c__OccupancyGrid_message_members = {
  "nav_msgs__msg",  // message namespace
  "OccupancyGrid",  // message name
  3,  // number of fields
  sizeof(nav_msgs__msg__OccupancyGrid),
  OccupancyGrid__rosidl_typesupport_introspection_c__OccupancyGrid_message_member_array,  // message members
  OccupancyGrid__rosidl_typesupport_introspection_c__OccupancyGrid_init_function,  // function to initialize message memory (memory has to be allocated)
  OccupancyGrid__rosidl_typesupport_introspection_c__OccupancyGrid_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OccupancyGrid__rosidl_typesupport_introspection_c__OccupancyGrid_message_type_support_handle = {
  0,
  &OccupancyGrid__rosidl_typesupport_introspection_c__OccupancyGrid_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, OccupancyGrid)() {
  OccupancyGrid__rosidl_typesupport_introspection_c__OccupancyGrid_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  OccupancyGrid__rosidl_typesupport_introspection_c__OccupancyGrid_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, MapMetaData)();
  if (!OccupancyGrid__rosidl_typesupport_introspection_c__OccupancyGrid_message_type_support_handle.typesupport_identifier) {
    OccupancyGrid__rosidl_typesupport_introspection_c__OccupancyGrid_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OccupancyGrid__rosidl_typesupport_introspection_c__OccupancyGrid_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
