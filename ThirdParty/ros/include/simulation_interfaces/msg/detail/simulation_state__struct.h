// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/SimulationState.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SIMULATION_STATE__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__SIMULATION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_STOPPED'.
enum
{
  simulation_interfaces__msg__SimulationState__STATE_STOPPED = 0
};

/// Constant 'STATE_PLAYING'.
enum
{
  simulation_interfaces__msg__SimulationState__STATE_PLAYING = 1
};

/// Constant 'STATE_PAUSED'.
enum
{
  simulation_interfaces__msg__SimulationState__STATE_PAUSED = 2
};

/// Constant 'STATE_QUITTING'.
enum
{
  simulation_interfaces__msg__SimulationState__STATE_QUITTING = 3
};

/// Constant 'STATE_NO_WORLD'.
enum
{
  simulation_interfaces__msg__SimulationState__STATE_NO_WORLD = 4
};

/// Constant 'STATE_LOADING_WORLD'.
enum
{
  simulation_interfaces__msg__SimulationState__STATE_LOADING_WORLD = 5
};

// Struct defined in msg/SimulationState in the package simulation_interfaces.
typedef struct simulation_interfaces__msg__SimulationState
{
  uint8_t state;
} simulation_interfaces__msg__SimulationState;

// Struct for a sequence of simulation_interfaces__msg__SimulationState.
typedef struct simulation_interfaces__msg__SimulationState__Sequence
{
  simulation_interfaces__msg__SimulationState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__SimulationState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SIMULATION_STATE__STRUCT_H_
