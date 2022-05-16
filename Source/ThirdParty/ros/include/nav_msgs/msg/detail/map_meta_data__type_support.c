// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav_msgs:msg/MapMetaData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav_msgs/msg/detail/map_meta_data__rosidl_typesupport_introspection_c.h"
#include "nav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav_msgs/msg/detail/map_meta_data__functions.h"
#include "nav_msgs/msg/detail/map_meta_data__struct.h"


// Include directives for member types
// Member `map_load_time`
#include "builtin_interfaces/msg/time.h"
// Member `map_load_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `origin`
#include "geometry_msgs/msg/pose.h"
// Member `origin`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MapMetaData__rosidl_typesupport_introspection_c__MapMetaData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav_msgs__msg__MapMetaData__init(message_memory);
}

void MapMetaData__rosidl_typesupport_introspection_c__MapMetaData_fini_function(void * message_memory)
{
  nav_msgs__msg__MapMetaData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MapMetaData__rosidl_typesupport_introspection_c__MapMetaData_message_member_array[5] = {
  {
    "map_load_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs__msg__MapMetaData, map_load_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs__msg__MapMetaData, resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs__msg__MapMetaData, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs__msg__MapMetaData, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "origin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_msgs__msg__MapMetaData, origin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MapMetaData__rosidl_typesupport_introspection_c__MapMetaData_message_members = {
  "nav_msgs__msg",  // message namespace
  "MapMetaData",  // message name
  5,  // number of fields
  sizeof(nav_msgs__msg__MapMetaData),
  MapMetaData__rosidl_typesupport_introspection_c__MapMetaData_message_member_array,  // message members
  MapMetaData__rosidl_typesupport_introspection_c__MapMetaData_init_function,  // function to initialize message memory (memory has to be allocated)
  MapMetaData__rosidl_typesupport_introspection_c__MapMetaData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MapMetaData__rosidl_typesupport_introspection_c__MapMetaData_message_type_support_handle = {
  0,
  &MapMetaData__rosidl_typesupport_introspection_c__MapMetaData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, MapMetaData)() {
  MapMetaData__rosidl_typesupport_introspection_c__MapMetaData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  MapMetaData__rosidl_typesupport_introspection_c__MapMetaData_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!MapMetaData__rosidl_typesupport_introspection_c__MapMetaData_message_type_support_handle.typesupport_identifier) {
    MapMetaData__rosidl_typesupport_introspection_c__MapMetaData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MapMetaData__rosidl_typesupport_introspection_c__MapMetaData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
