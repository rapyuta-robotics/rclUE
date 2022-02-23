// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:action/SimShutDown.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__ACTION__DETAIL__SIM_SHUT_DOWN__STRUCT_H_
#define UE_MSGS__ACTION__DETAIL__SIM_SHUT_DOWN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/SimShutDown in the package ue_msgs.
typedef struct ue_msgs__action__SimShutDown_Goal
{
  uint8_t structure_needs_at_least_one_member;
} ue_msgs__action__SimShutDown_Goal;

// Struct for a sequence of ue_msgs__action__SimShutDown_Goal.
typedef struct ue_msgs__action__SimShutDown_Goal__Sequence
{
  ue_msgs__action__SimShutDown_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__action__SimShutDown_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/SimShutDown in the package ue_msgs.
typedef struct ue_msgs__action__SimShutDown_Result
{
  bool success;
} ue_msgs__action__SimShutDown_Result;

// Struct for a sequence of ue_msgs__action__SimShutDown_Result.
typedef struct ue_msgs__action__SimShutDown_Result__Sequence
{
  ue_msgs__action__SimShutDown_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__action__SimShutDown_Result__Sequence;


// Constants defined in the message

// Struct defined in action/SimShutDown in the package ue_msgs.
typedef struct ue_msgs__action__SimShutDown_Feedback
{
  bool done;
} ue_msgs__action__SimShutDown_Feedback;

// Struct for a sequence of ue_msgs__action__SimShutDown_Feedback.
typedef struct ue_msgs__action__SimShutDown_Feedback__Sequence
{
  ue_msgs__action__SimShutDown_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__action__SimShutDown_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ue_msgs/action/detail/sim_shut_down__struct.h"

// Struct defined in action/SimShutDown in the package ue_msgs.
typedef struct ue_msgs__action__SimShutDown_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ue_msgs__action__SimShutDown_Goal goal;
} ue_msgs__action__SimShutDown_SendGoal_Request;

// Struct for a sequence of ue_msgs__action__SimShutDown_SendGoal_Request.
typedef struct ue_msgs__action__SimShutDown_SendGoal_Request__Sequence
{
  ue_msgs__action__SimShutDown_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__action__SimShutDown_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/SimShutDown in the package ue_msgs.
typedef struct ue_msgs__action__SimShutDown_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ue_msgs__action__SimShutDown_SendGoal_Response;

// Struct for a sequence of ue_msgs__action__SimShutDown_SendGoal_Response.
typedef struct ue_msgs__action__SimShutDown_SendGoal_Response__Sequence
{
  ue_msgs__action__SimShutDown_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__action__SimShutDown_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/SimShutDown in the package ue_msgs.
typedef struct ue_msgs__action__SimShutDown_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ue_msgs__action__SimShutDown_GetResult_Request;

// Struct for a sequence of ue_msgs__action__SimShutDown_GetResult_Request.
typedef struct ue_msgs__action__SimShutDown_GetResult_Request__Sequence
{
  ue_msgs__action__SimShutDown_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__action__SimShutDown_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ue_msgs/action/detail/sim_shut_down__struct.h"

// Struct defined in action/SimShutDown in the package ue_msgs.
typedef struct ue_msgs__action__SimShutDown_GetResult_Response
{
  int8_t status;
  ue_msgs__action__SimShutDown_Result result;
} ue_msgs__action__SimShutDown_GetResult_Response;

// Struct for a sequence of ue_msgs__action__SimShutDown_GetResult_Response.
typedef struct ue_msgs__action__SimShutDown_GetResult_Response__Sequence
{
  ue_msgs__action__SimShutDown_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__action__SimShutDown_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ue_msgs/action/detail/sim_shut_down__struct.h"

// Struct defined in action/SimShutDown in the package ue_msgs.
typedef struct ue_msgs__action__SimShutDown_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ue_msgs__action__SimShutDown_Feedback feedback;
} ue_msgs__action__SimShutDown_FeedbackMessage;

// Struct for a sequence of ue_msgs__action__SimShutDown_FeedbackMessage.
typedef struct ue_msgs__action__SimShutDown_FeedbackMessage__Sequence
{
  ue_msgs__action__SimShutDown_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__action__SimShutDown_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__ACTION__DETAIL__SIM_SHUT_DOWN__STRUCT_H_
