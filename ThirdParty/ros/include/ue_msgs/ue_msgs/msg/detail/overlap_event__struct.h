// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:msg/OverlapEvent.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__STRUCT_H_
#define UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'self_name'
// Member 'other_actor_name'
// Member 'other_component_name'
#include "rosidl_runtime_c/string.h"
// Member 'sweep_result'
#include "ue_msgs/msg/detail/hit_result__struct.h"

/// Struct defined in msg/OverlapEvent in the package ue_msgs.
/**
  * Ref 
  * doc: https://docs.unrealengine.com/5.0/en-US/API/Runtime/Engine/Components/UPrimitiveComponent/OnComponentBeginOverlap/
 */
typedef struct ue_msgs__msg__OverlapEvent
{
  /// DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_SixParams( FComponentBeginOverlapSignature, UPrimitiveComponent, OnComponentBeginOverlap,     UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, bool, bFromSweep, const FHitResult &, SweepResult);
  /// DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_FourParams( FComponentEndOverlapSignature, UPrimitiveComponent, OnComponentEndOverlap,        UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex);
  /// DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams( FActorBeginOverlapSignature, AActor, OnActorBeginOverlap,                           AActor*, OverlappedActor, AActor*, OtherActor );
  /// DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams( FActorEndOverlapSignature, AActor, OnActorEndOverlap,                               AActor*, OverlappedActor, AActor*, OtherActor );
  /// common
  /// 0 for begin, 1 for end
  bool begin;
  /// actor or component name
  rosidl_runtime_c__String self_name;
  rosidl_runtime_c__String other_actor_name;
  /// component event only
  rosidl_runtime_c__String other_component_name;
  int32_t other_body_index;
  /// component begin event only
  bool from_sweep;
  ue_msgs__msg__HitResult sweep_result;
} ue_msgs__msg__OverlapEvent;

// Struct for a sequence of ue_msgs__msg__OverlapEvent.
typedef struct ue_msgs__msg__OverlapEvent__Sequence
{
  ue_msgs__msg__OverlapEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__msg__OverlapEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__STRUCT_H_
