// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sensor_msgs:msg/RelativeHumidity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sensor_msgs/msg/detail/relative_humidity__rosidl_typesupport_introspection_c.h"
#include "sensor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sensor_msgs/msg/detail/relative_humidity__functions.h"
#include "sensor_msgs/msg/detail/relative_humidity__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RelativeHumidity__rosidl_typesupport_introspection_c__RelativeHumidity_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sensor_msgs__msg__RelativeHumidity__init(message_memory);
}

void RelativeHumidity__rosidl_typesupport_introspection_c__RelativeHumidity_fini_function(void * message_memory)
{
  sensor_msgs__msg__RelativeHumidity__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RelativeHumidity__rosidl_typesupport_introspection_c__RelativeHumidity_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__RelativeHumidity, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relative_humidity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__RelativeHumidity, relative_humidity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "variance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__RelativeHumidity, variance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RelativeHumidity__rosidl_typesupport_introspection_c__RelativeHumidity_message_members = {
  "sensor_msgs__msg",  // message namespace
  "RelativeHumidity",  // message name
  3,  // number of fields
  sizeof(sensor_msgs__msg__RelativeHumidity),
  RelativeHumidity__rosidl_typesupport_introspection_c__RelativeHumidity_message_member_array,  // message members
  RelativeHumidity__rosidl_typesupport_introspection_c__RelativeHumidity_init_function,  // function to initialize message memory (memory has to be allocated)
  RelativeHumidity__rosidl_typesupport_introspection_c__RelativeHumidity_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RelativeHumidity__rosidl_typesupport_introspection_c__RelativeHumidity_message_type_support_handle = {
  0,
  &RelativeHumidity__rosidl_typesupport_introspection_c__RelativeHumidity_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, RelativeHumidity)() {
  RelativeHumidity__rosidl_typesupport_introspection_c__RelativeHumidity_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!RelativeHumidity__rosidl_typesupport_introspection_c__RelativeHumidity_message_type_support_handle.typesupport_identifier) {
    RelativeHumidity__rosidl_typesupport_introspection_c__RelativeHumidity_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RelativeHumidity__rosidl_typesupport_introspection_c__RelativeHumidity_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
