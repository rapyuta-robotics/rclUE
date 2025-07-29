// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from guided_vr_interfaces:msg/Notification2D.idl
// generated code does not contain a copyright notice

#ifndef GUIDED_VR_INTERFACES__MSG__DETAIL__NOTIFICATION2_D__STRUCT_H_
#define GUIDED_VR_INTERFACES__MSG__DETAIL__NOTIFICATION2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'source'
#include "std_msgs/msg/detail/string__struct.h"
// Member 'level'
#include "std_msgs/msg/detail/u_int8__struct.h"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'polygon'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Notification2D in the package guided_vr_interfaces.
typedef struct guided_vr_interfaces__msg__Notification2D
{
  std_msgs__msg__String source;
  std_msgs__msg__UInt8 level;
  builtin_interfaces__msg__Time stamp;
  uint32_t id;
  geometry_msgs__msg__Point__Sequence polygon;
} guided_vr_interfaces__msg__Notification2D;

// Struct for a sequence of guided_vr_interfaces__msg__Notification2D.
typedef struct guided_vr_interfaces__msg__Notification2D__Sequence
{
  guided_vr_interfaces__msg__Notification2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} guided_vr_interfaces__msg__Notification2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GUIDED_VR_INTERFACES__MSG__DETAIL__NOTIFICATION2_D__STRUCT_H_
