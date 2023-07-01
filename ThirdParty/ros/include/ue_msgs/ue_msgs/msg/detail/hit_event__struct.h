// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:msg/HitEvent.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__HIT_EVENT__STRUCT_H_
#define UE_MSGS__MSG__DETAIL__HIT_EVENT__STRUCT_H_

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
// Member 'normal_impluse'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'hit_result'
#include "ue_msgs/msg/detail/hit_result__struct.h"

/// Struct defined in msg/HitEvent in the package ue_msgs.
/**
  * Ref 
  * doc: https://docs.unrealengine.com/5.2/en-US/using-the-onhit-event/
  * DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_FiveParams( FComponentHitSignature, UPrimitiveComponent, OnComponentHit, UPrimitiveComponent*, HitComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, FVector, NormalImpulse, const FHitResult&, Hit );
  * DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_FourParams( FActorHitSignature, AActor, OnActorHit, AActor*, SelfActor, AActor*, OtherActor, FVector, NormalImpulse, const FHitResult&, Hit );
 */
typedef struct ue_msgs__msg__HitEvent
{
  /// common
  /// actor or component name
  rosidl_runtime_c__String self_name;
  rosidl_runtime_c__String other_actor_name;
  geometry_msgs__msg__Vector3 normal_impluse;
  ue_msgs__msg__HitResult hit_result;
  /// component event only
  /// empty unless OnComponentHit event
  rosidl_runtime_c__String other_component_name;
} ue_msgs__msg__HitEvent;

// Struct for a sequence of ue_msgs__msg__HitEvent.
typedef struct ue_msgs__msg__HitEvent__Sequence
{
  ue_msgs__msg__HitEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__msg__HitEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__MSG__DETAIL__HIT_EVENT__STRUCT_H_
