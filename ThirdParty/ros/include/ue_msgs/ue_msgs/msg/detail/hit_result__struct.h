// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:msg/HitResult.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__HIT_RESULT__STRUCT_H_
#define UE_MSGS__MSG__DETAIL__HIT_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'component_name'
// Member 'actor_name'
// Member 'bone_name'
// Member 'my_bone_name'
// Member 'physics_material_name'
#include "rosidl_runtime_c/string.h"
// Member 'impact_normal'
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'impact_point'
// Member 'location'
// Member 'trace_start'
// Member 'trace_end'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/HitResult in the package ue_msgs.
/**
  * HitResult from UnrealEngine
  * ref https://docs.unrealengine.com/5.1/en-US/API/Runtime/Engine/Engine/FHitResult/
 */
typedef struct ue_msgs__msg__HitResult
{
  bool blocking_hit;
  bool start_penetrating;
  rosidl_runtime_c__String component_name;
  rosidl_runtime_c__String actor_name;
  float distance;
  uint8_t element_index;
  int32_t face_index;
  rosidl_runtime_c__String bone_name;
  int32_t item;
  rosidl_runtime_c__String my_bone_name;
  int32_t my_item;
  float penetration_depth;
  rosidl_runtime_c__String physics_material_name;
  float time;
  geometry_msgs__msg__Vector3 impact_normal;
  geometry_msgs__msg__Point impact_point;
  geometry_msgs__msg__Vector3 normal;
  geometry_msgs__msg__Point location;
  geometry_msgs__msg__Point trace_start;
  geometry_msgs__msg__Point trace_end;
} ue_msgs__msg__HitResult;

// Struct for a sequence of ue_msgs__msg__HitResult.
typedef struct ue_msgs__msg__HitResult__Sequence
{
  ue_msgs__msg__HitResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__msg__HitResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__MSG__DETAIL__HIT_RESULT__STRUCT_H_
