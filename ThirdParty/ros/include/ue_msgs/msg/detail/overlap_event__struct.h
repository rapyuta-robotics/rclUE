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
// Member 'hit_result'
#include "ue_msgs/msg/detail/hit_result__struct.h"

    // Struct defined in msg/OverlapEvent in the package ue_msgs.
    typedef struct ue_msgs__msg__OverlapEvent
    {
        bool begin;
        rosidl_runtime_c__String self_name;
        rosidl_runtime_c__String other_actor_name;
        rosidl_runtime_c__String other_component_name;
        int32_t other_body_index;
        bool from_sweep;
        ue_msgs__msg__HitResult hit_result;
    } ue_msgs__msg__OverlapEvent;

    // Struct for a sequence of ue_msgs__msg__OverlapEvent.
    typedef struct ue_msgs__msg__OverlapEvent__Sequence
    {
        ue_msgs__msg__OverlapEvent* data;
        /// The number of valid items in data
        size_t size;
        /// The number of allocated items in data
        size_t capacity;
    } ue_msgs__msg__OverlapEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif    // UE_MSGS__MSG__DETAIL__OVERLAP_EVENT__STRUCT_H_
