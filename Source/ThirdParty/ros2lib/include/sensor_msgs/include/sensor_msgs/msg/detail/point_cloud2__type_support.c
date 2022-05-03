// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sensor_msgs:msg/PointCloud2.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"
#include "sensor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `fields`
#include "sensor_msgs/msg/point_field.h"
// Member `fields`
#include "sensor_msgs/msg/detail/point_field__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PointCloud2__rosidl_typesupport_introspection_c__PointCloud2_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sensor_msgs__msg__PointCloud2__init(message_memory);
}

void PointCloud2__rosidl_typesupport_introspection_c__PointCloud2_fini_function(void * message_memory)
{
  sensor_msgs__msg__PointCloud2__fini(message_memory);
}

size_t PointCloud2__rosidl_typesupport_introspection_c__size_function__PointField__fields(
  const void * untyped_member)
{
  const sensor_msgs__msg__PointField__Sequence * member =
    (const sensor_msgs__msg__PointField__Sequence *)(untyped_member);
  return member->size;
}

const void * PointCloud2__rosidl_typesupport_introspection_c__get_const_function__PointField__fields(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__PointField__Sequence * member =
    (const sensor_msgs__msg__PointField__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PointCloud2__rosidl_typesupport_introspection_c__get_function__PointField__fields(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__PointField__Sequence * member =
    (sensor_msgs__msg__PointField__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PointCloud2__rosidl_typesupport_introspection_c__resize_function__PointField__fields(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__PointField__Sequence * member =
    (sensor_msgs__msg__PointField__Sequence *)(untyped_member);
  sensor_msgs__msg__PointField__Sequence__fini(member);
  return sensor_msgs__msg__PointField__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PointCloud2__rosidl_typesupport_introspection_c__PointCloud2_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, header),  // bytes offset in struct
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
    offsetof(sensor_msgs__msg__PointCloud2, height),  // bytes offset in struct
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
    offsetof(sensor_msgs__msg__PointCloud2, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fields",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, fields),  // bytes offset in struct
    NULL,  // default value
    PointCloud2__rosidl_typesupport_introspection_c__size_function__PointField__fields,  // size() function pointer
    PointCloud2__rosidl_typesupport_introspection_c__get_const_function__PointField__fields,  // get_const(index) function pointer
    PointCloud2__rosidl_typesupport_introspection_c__get_function__PointField__fields,  // get(index) function pointer
    PointCloud2__rosidl_typesupport_introspection_c__resize_function__PointField__fields  // resize(index) function pointer
  },
  {
    "is_bigendian",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, is_bigendian),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, point_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "row_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, row_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_dense",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs__msg__PointCloud2, is_dense),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PointCloud2__rosidl_typesupport_introspection_c__PointCloud2_message_members = {
  "sensor_msgs__msg",  // message namespace
  "PointCloud2",  // message name
  9,  // number of fields
  sizeof(sensor_msgs__msg__PointCloud2),
  PointCloud2__rosidl_typesupport_introspection_c__PointCloud2_message_member_array,  // message members
  PointCloud2__rosidl_typesupport_introspection_c__PointCloud2_init_function,  // function to initialize message memory (memory has to be allocated)
  PointCloud2__rosidl_typesupport_introspection_c__PointCloud2_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PointCloud2__rosidl_typesupport_introspection_c__PointCloud2_message_type_support_handle = {
  0,
  &PointCloud2__rosidl_typesupport_introspection_c__PointCloud2_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)() {
  PointCloud2__rosidl_typesupport_introspection_c__PointCloud2_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  PointCloud2__rosidl_typesupport_introspection_c__PointCloud2_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointField)();
  if (!PointCloud2__rosidl_typesupport_introspection_c__PointCloud2_message_type_support_handle.typesupport_identifier) {
    PointCloud2__rosidl_typesupport_introspection_c__PointCloud2_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PointCloud2__rosidl_typesupport_introspection_c__PointCloud2_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
