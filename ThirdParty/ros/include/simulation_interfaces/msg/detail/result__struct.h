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
enum
{
  simulation_interfaces__msg__Result__RESULT_NOT_FOUND = 2
};

/// Constant 'RESULT_INCORRECT_STATE'.
enum
{
  simulation_interfaces__msg__Result__RESULT_INCORRECT_STATE = 3
};

/// Constant 'RESULT_OPERATION_FAILED'.
enum
{
  simulation_interfaces__msg__Result__RESULT_OPERATION_FAILED = 4
};

// Include directives for member types
// Member 'error_message'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Result in the package simulation_interfaces.
typedef struct simulation_interfaces__msg__Result
{
  uint8_t result;
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
