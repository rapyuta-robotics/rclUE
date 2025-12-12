// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:action/SimulateSteps.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__ACTION__DETAIL__SIMULATE_STEPS__STRUCT_H_
#define SIMULATION_INTERFACES__ACTION__DETAIL__SIMULATE_STEPS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/SimulateSteps in the package simulation_interfaces.
typedef struct simulation_interfaces__action__SimulateSteps_Goal
{
  /// Action goal: step through the simulation loop this many times.
  uint64_t steps;
} simulation_interfaces__action__SimulateSteps_Goal;

// Struct for a sequence of simulation_interfaces__action__SimulateSteps_Goal.
typedef struct simulation_interfaces__action__SimulateSteps_Goal__Sequence
{
  simulation_interfaces__action__SimulateSteps_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__action__SimulateSteps_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"

/// Struct defined in action/SimulateSteps in the package simulation_interfaces.
typedef struct simulation_interfaces__action__SimulateSteps_Result
{
  /// Calling with simulation unpaused will return OPERATION_FAILED and error message.
  simulation_interfaces__msg__Result result;
} simulation_interfaces__action__SimulateSteps_Result;

// Struct for a sequence of simulation_interfaces__action__SimulateSteps_Result.
typedef struct simulation_interfaces__action__SimulateSteps_Result__Sequence
{
  simulation_interfaces__action__SimulateSteps_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__action__SimulateSteps_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/SimulateSteps in the package simulation_interfaces.
typedef struct simulation_interfaces__action__SimulateSteps_Feedback
{
  /// number of completed steps in this action so far.
  uint64_t completed_steps;
  /// number of steps remaining to be completed in this action.
  uint64_t remaining_steps;
} simulation_interfaces__action__SimulateSteps_Feedback;

// Struct for a sequence of simulation_interfaces__action__SimulateSteps_Feedback.
typedef struct simulation_interfaces__action__SimulateSteps_Feedback__Sequence
{
  simulation_interfaces__action__SimulateSteps_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__action__SimulateSteps_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "simulation_interfaces/action/detail/simulate_steps__struct.h"

/// Struct defined in action/SimulateSteps in the package simulation_interfaces.
typedef struct simulation_interfaces__action__SimulateSteps_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  simulation_interfaces__action__SimulateSteps_Goal goal;
} simulation_interfaces__action__SimulateSteps_SendGoal_Request;

// Struct for a sequence of simulation_interfaces__action__SimulateSteps_SendGoal_Request.
typedef struct simulation_interfaces__action__SimulateSteps_SendGoal_Request__Sequence
{
  simulation_interfaces__action__SimulateSteps_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__action__SimulateSteps_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SimulateSteps in the package simulation_interfaces.
typedef struct simulation_interfaces__action__SimulateSteps_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} simulation_interfaces__action__SimulateSteps_SendGoal_Response;

// Struct for a sequence of simulation_interfaces__action__SimulateSteps_SendGoal_Response.
typedef struct simulation_interfaces__action__SimulateSteps_SendGoal_Response__Sequence
{
  simulation_interfaces__action__SimulateSteps_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__action__SimulateSteps_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SimulateSteps in the package simulation_interfaces.
typedef struct simulation_interfaces__action__SimulateSteps_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} simulation_interfaces__action__SimulateSteps_GetResult_Request;

// Struct for a sequence of simulation_interfaces__action__SimulateSteps_GetResult_Request.
typedef struct simulation_interfaces__action__SimulateSteps_GetResult_Request__Sequence
{
  simulation_interfaces__action__SimulateSteps_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__action__SimulateSteps_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "simulation_interfaces/action/detail/simulate_steps__struct.h"

/// Struct defined in action/SimulateSteps in the package simulation_interfaces.
typedef struct simulation_interfaces__action__SimulateSteps_GetResult_Response
{
  int8_t status;
  simulation_interfaces__action__SimulateSteps_Result result;
} simulation_interfaces__action__SimulateSteps_GetResult_Response;

// Struct for a sequence of simulation_interfaces__action__SimulateSteps_GetResult_Response.
typedef struct simulation_interfaces__action__SimulateSteps_GetResult_Response__Sequence
{
  simulation_interfaces__action__SimulateSteps_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__action__SimulateSteps_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "simulation_interfaces/action/detail/simulate_steps__struct.h"

/// Struct defined in action/SimulateSteps in the package simulation_interfaces.
typedef struct simulation_interfaces__action__SimulateSteps_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  simulation_interfaces__action__SimulateSteps_Feedback feedback;
} simulation_interfaces__action__SimulateSteps_FeedbackMessage;

// Struct for a sequence of simulation_interfaces__action__SimulateSteps_FeedbackMessage.
typedef struct simulation_interfaces__action__SimulateSteps_FeedbackMessage__Sequence
{
  simulation_interfaces__action__SimulateSteps_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__action__SimulateSteps_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__ACTION__DETAIL__SIMULATE_STEPS__STRUCT_H_
