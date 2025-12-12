// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/Result.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__RESULT__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESULT_FEATURE_UNSUPPORTED'.
/**
  * Feature is not supported by the simulator, check GetSimulatorFeatures.
  * While feature support can sometimes be deduced from presence of corresponding
  * service / action interface, in other cases it is about supporting certain
  * call parameters, formats and options within interface call.
 */
enum
{
  simulation_interfaces__msg__Result__RESULT_FEATURE_UNSUPPORTED = 0
};

/// Constant 'RESULT_OK'.
enum
{
  simulation_interfaces__msg__Result__RESULT_OK = 1
};

/// Constant 'RESULT_NOT_FOUND'.
/**
  * No match for input (such as when entity name does not exist).
 */
enum
{
  simulation_interfaces__msg__Result__RESULT_NOT_FOUND = 2
};

/// Constant 'RESULT_INCORRECT_STATE'.
/**
  * Simulator is in an incorrect state for this interface call, e.g. a service
  * requires paused state but the simulator is not paused.
 */
enum
{
  simulation_interfaces__msg__Result__RESULT_INCORRECT_STATE = 3
};

/// Constant 'RESULT_OPERATION_FAILED'.
/**
  * Request could not be completed successfully even though feature is supported
  * and the input is correct; check error_message for details.
  * Implementation rule: check extended codes for called service
  *  (e.g. SpawnEntity) to provide a return code which is more specific.
 */
enum
{
  simulation_interfaces__msg__Result__RESULT_OPERATION_FAILED = 4
};

// Include directives for member types
// Member 'error_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Result in the package simulation_interfaces.
/**
  * Result code and message for service calls.
  * Note that additional results for specific services can defined within them using values above 100.
 */
typedef struct simulation_interfaces__msg__Result
{
  /// Result to be checked on return from service interface call
  uint8_t result;
  /// Additional error description when useful.
  rosidl_runtime_c__String error_message;
} simulation_interfaces__msg__Result;

// Struct for a sequence of simulation_interfaces__msg__Result.
typedef struct simulation_interfaces__msg__Result__Sequence
{
  simulation_interfaces__msg__Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__Result__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__RESULT__STRUCT_H_
