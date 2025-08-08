// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from guided_vr_interfaces:msg/Notification2D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "guided_vr_interfaces/msg/detail/notification2_d__rosidl_typesupport_introspection_c.h"
#include "guided_vr_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "guided_vr_interfaces/msg/detail/notification2_d__functions.h"
#include "guided_vr_interfaces/msg/detail/notification2_d__struct.h"


// Include directives for member types
// Member `source`
// Member `desc`
#include "std_msgs/msg/string.h"
// Member `source`
// Member `desc`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"
// Member `level`
#include "std_msgs/msg/u_int8.h"
// Member `level`
#include "std_msgs/msg/detail/u_int8__rosidl_typesupport_introspection_c.h"
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `polygon`
#include "geometry_msgs/msg/point.h"
// Member `polygon`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  guided_vr_interfaces__msg__Notification2D__init(message_memory);
}

void guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_fini_function(void * message_memory)
{
  guided_vr_interfaces__msg__Notification2D__fini(message_memory);
}

size_t guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__size_function__Notification2D__polygon(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__get_const_function__Notification2D__polygon(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__get_function__Notification2D__polygon(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__fetch_function__Notification2D__polygon(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__get_const_function__Notification2D__polygon(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__assign_function__Notification2D__polygon(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__get_function__Notification2D__polygon(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__resize_function__Notification2D__polygon(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_message_member_array[6] = {
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guided_vr_interfaces__msg__Notification2D, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guided_vr_interfaces__msg__Notification2D, desc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guided_vr_interfaces__msg__Notification2D, level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guided_vr_interfaces__msg__Notification2D, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guided_vr_interfaces__msg__Notification2D, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "polygon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(guided_vr_interfaces__msg__Notification2D, polygon),  // bytes offset in struct
    NULL,  // default value
    guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__size_function__Notification2D__polygon,  // size() function pointer
    guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__get_const_function__Notification2D__polygon,  // get_const(index) function pointer
    guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__get_function__Notification2D__polygon,  // get(index) function pointer
    guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__fetch_function__Notification2D__polygon,  // fetch(index, &value) function pointer
    guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__assign_function__Notification2D__polygon,  // assign(index, value) function pointer
    guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__resize_function__Notification2D__polygon  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_message_members = {
  "guided_vr_interfaces__msg",  // message namespace
  "Notification2D",  // message name
  6,  // number of fields
  sizeof(guided_vr_interfaces__msg__Notification2D),
  guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_message_member_array,  // message members
  guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_init_function,  // function to initialize message memory (memory has to be allocated)
  guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_message_type_support_handle = {
  0,
  &guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_guided_vr_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, guided_vr_interfaces, msg, Notification2D)() {
  guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, UInt8)();
  guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_message_type_support_handle.typesupport_identifier) {
    guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &guided_vr_interfaces__msg__Notification2D__rosidl_typesupport_introspection_c__Notification2D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
