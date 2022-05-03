// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sensor_msgs:msg/NavSatStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sensor_msgs/msg/detail/nav_sat_status__rosidl_typesupport_introspection_c.h"
#include "sensor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sensor_msgs/msg/detail/nav_sat_status__functions.h"
#include "sensor_msgs/msg/detail/nav_sat_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void NavSatStatus__rosidl_typesupport_introspection_c__NavSatStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sensor_msgs__msg__NavSatStatus__init(message_memory);
}

void NavSatStatus__rosidl_typesupport_introspection_c__NavSatStatus_fini_function(void * message_memory)
{
  sensor_msgs__msg__NavSatStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NavSatStatus__rosidl_typesupport_introspection_c__NavSatStatus_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__NavSatStatus, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "service",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__NavSatStatus, service),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavSatStatus__rosidl_typesupport_introspection_c__NavSatStatus_message_members = {
  "sensor_msgs__msg",  // message namespace
  "NavSatStatus",  // message name
  2,  // number of fields
  sizeof(sensor_msgs__msg__NavSatStatus),
  NavSatStatus__rosidl_typesupport_introspection_c__NavSatStatus_message_member_array,  // message members
  NavSatStatus__rosidl_typesupport_introspection_c__NavSatStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  NavSatStatus__rosidl_typesupport_introspection_c__NavSatStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavSatStatus__rosidl_typesupport_introspection_c__NavSatStatus_message_type_support_handle = {
  0,
  &NavSatStatus__rosidl_typesupport_introspection_c__NavSatStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, NavSatStatus)() {
  if (!NavSatStatus__rosidl_typesupport_introspection_c__NavSatStatus_message_type_support_handle.typesupport_identifier) {
    NavSatStatus__rosidl_typesupport_introspection_c__NavSatStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavSatStatus__rosidl_typesupport_introspection_c__NavSatStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
