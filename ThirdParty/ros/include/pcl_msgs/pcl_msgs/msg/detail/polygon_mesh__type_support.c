// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pcl_msgs:msg/PolygonMesh.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pcl_msgs/msg/detail/polygon_mesh__rosidl_typesupport_introspection_c.h"
#include "pcl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pcl_msgs/msg/detail/polygon_mesh__functions.h"
#include "pcl_msgs/msg/detail/polygon_mesh__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `cloud`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `cloud`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `polygons`
#include "pcl_msgs/msg/vertices.h"
// Member `polygons`
#include "pcl_msgs/msg/detail/vertices__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__PolygonMesh_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pcl_msgs__msg__PolygonMesh__init(message_memory);
}

void pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__PolygonMesh_fini_function(void * message_memory)
{
  pcl_msgs__msg__PolygonMesh__fini(message_memory);
}

size_t pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__size_function__PolygonMesh__polygons(
  const void * untyped_member)
{
  const pcl_msgs__msg__Vertices__Sequence * member =
    (const pcl_msgs__msg__Vertices__Sequence *)(untyped_member);
  return member->size;
}

const void * pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__get_const_function__PolygonMesh__polygons(
  const void * untyped_member, size_t index)
{
  const pcl_msgs__msg__Vertices__Sequence * member =
    (const pcl_msgs__msg__Vertices__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__get_function__PolygonMesh__polygons(
  void * untyped_member, size_t index)
{
  pcl_msgs__msg__Vertices__Sequence * member =
    (pcl_msgs__msg__Vertices__Sequence *)(untyped_member);
  return &member->data[index];
}

void pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__fetch_function__PolygonMesh__polygons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pcl_msgs__msg__Vertices * item =
    ((const pcl_msgs__msg__Vertices *)
    pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__get_const_function__PolygonMesh__polygons(untyped_member, index));
  pcl_msgs__msg__Vertices * value =
    (pcl_msgs__msg__Vertices *)(untyped_value);
  *value = *item;
}

void pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__assign_function__PolygonMesh__polygons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pcl_msgs__msg__Vertices * item =
    ((pcl_msgs__msg__Vertices *)
    pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__get_function__PolygonMesh__polygons(untyped_member, index));
  const pcl_msgs__msg__Vertices * value =
    (const pcl_msgs__msg__Vertices *)(untyped_value);
  *item = *value;
}

bool pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__resize_function__PolygonMesh__polygons(
  void * untyped_member, size_t size)
{
  pcl_msgs__msg__Vertices__Sequence * member =
    (pcl_msgs__msg__Vertices__Sequence *)(untyped_member);
  pcl_msgs__msg__Vertices__Sequence__fini(member);
  return pcl_msgs__msg__Vertices__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__PolygonMesh_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pcl_msgs__msg__PolygonMesh, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cloud",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pcl_msgs__msg__PolygonMesh, cloud),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "polygons",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pcl_msgs__msg__PolygonMesh, polygons),  // bytes offset in struct
    NULL,  // default value
    pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__size_function__PolygonMesh__polygons,  // size() function pointer
    pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__get_const_function__PolygonMesh__polygons,  // get_const(index) function pointer
    pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__get_function__PolygonMesh__polygons,  // get(index) function pointer
    pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__fetch_function__PolygonMesh__polygons,  // fetch(index, &value) function pointer
    pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__assign_function__PolygonMesh__polygons,  // assign(index, value) function pointer
    pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__resize_function__PolygonMesh__polygons  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__PolygonMesh_message_members = {
  "pcl_msgs__msg",  // message namespace
  "PolygonMesh",  // message name
  3,  // number of fields
  sizeof(pcl_msgs__msg__PolygonMesh),
  pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__PolygonMesh_message_member_array,  // message members
  pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__PolygonMesh_init_function,  // function to initialize message memory (memory has to be allocated)
  pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__PolygonMesh_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__PolygonMesh_message_type_support_handle = {
  0,
  &pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__PolygonMesh_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pcl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, msg, PolygonMesh)() {
  pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__PolygonMesh_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__PolygonMesh_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__PolygonMesh_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, msg, Vertices)();
  if (!pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__PolygonMesh_message_type_support_handle.typesupport_identifier) {
    pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__PolygonMesh_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pcl_msgs__msg__PolygonMesh__rosidl_typesupport_introspection_c__PolygonMesh_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
