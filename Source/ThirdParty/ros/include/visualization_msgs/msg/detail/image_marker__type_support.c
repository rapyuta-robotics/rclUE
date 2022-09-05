// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from visualization_msgs:msg/ImageMarker.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "visualization_msgs/msg/detail/image_marker__rosidl_typesupport_introspection_c.h"
#include "visualization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "visualization_msgs/msg/detail/image_marker__functions.h"
#include "visualization_msgs/msg/detail/image_marker__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ns`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `points`
#include "geometry_msgs/msg/point.h"
// Member `position`
// Member `points`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `outline_color`
// Member `fill_color`
// Member `outline_colors`
#include "std_msgs/msg/color_rgba.h"
// Member `outline_color`
// Member `fill_color`
// Member `outline_colors`
#include "std_msgs/msg/detail/color_rgba__rosidl_typesupport_introspection_c.h"
// Member `lifetime`
#include "builtin_interfaces/msg/duration.h"
// Member `lifetime`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  visualization_msgs__msg__ImageMarker__init(message_memory);
}

void ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_fini_function(void * message_memory)
{
  visualization_msgs__msg__ImageMarker__fini(message_memory);
}

size_t ImageMarker__rosidl_typesupport_introspection_c__size_function__Point__points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * ImageMarker__rosidl_typesupport_introspection_c__get_const_function__Point__points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ImageMarker__rosidl_typesupport_introspection_c__get_function__Point__points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ImageMarker__rosidl_typesupport_introspection_c__resize_function__Point__points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t ImageMarker__rosidl_typesupport_introspection_c__size_function__ColorRGBA__outline_colors(
  const void * untyped_member)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return member->size;
}

const void * ImageMarker__rosidl_typesupport_introspection_c__get_const_function__ColorRGBA__outline_colors(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ImageMarker__rosidl_typesupport_introspection_c__get_function__ColorRGBA__outline_colors(
  void * untyped_member, size_t index)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ImageMarker__rosidl_typesupport_introspection_c__resize_function__ColorRGBA__outline_colors(
  void * untyped_member, size_t size)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  std_msgs__msg__ColorRGBA__Sequence__fini(member);
  return std_msgs__msg__ColorRGBA__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_message_member_array[13] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__ImageMarker, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ns",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__ImageMarker, ns),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__ImageMarker, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__ImageMarker, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__ImageMarker, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__ImageMarker, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__ImageMarker, scale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "outline_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__ImageMarker, outline_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "filled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__ImageMarker, filled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fill_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__ImageMarker, fill_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lifetime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__ImageMarker, lifetime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__ImageMarker, points),  // bytes offset in struct
    NULL,  // default value
    ImageMarker__rosidl_typesupport_introspection_c__size_function__Point__points,  // size() function pointer
    ImageMarker__rosidl_typesupport_introspection_c__get_const_function__Point__points,  // get_const(index) function pointer
    ImageMarker__rosidl_typesupport_introspection_c__get_function__Point__points,  // get(index) function pointer
    ImageMarker__rosidl_typesupport_introspection_c__resize_function__Point__points  // resize(index) function pointer
  },
  {
    "outline_colors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(visualization_msgs__msg__ImageMarker, outline_colors),  // bytes offset in struct
    NULL,  // default value
    ImageMarker__rosidl_typesupport_introspection_c__size_function__ColorRGBA__outline_colors,  // size() function pointer
    ImageMarker__rosidl_typesupport_introspection_c__get_const_function__ColorRGBA__outline_colors,  // get_const(index) function pointer
    ImageMarker__rosidl_typesupport_introspection_c__get_function__ColorRGBA__outline_colors,  // get(index) function pointer
    ImageMarker__rosidl_typesupport_introspection_c__resize_function__ColorRGBA__outline_colors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_message_members = {
  "visualization_msgs__msg",  // message namespace
  "ImageMarker",  // message name
  13,  // number of fields
  sizeof(visualization_msgs__msg__ImageMarker),
  ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_message_member_array,  // message members
  ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_message_type_support_handle = {
  0,
  &ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_visualization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, ImageMarker)() {
  ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  if (!ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_message_type_support_handle.typesupport_identifier) {
    ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ImageMarker__rosidl_typesupport_introspection_c__ImageMarker_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
