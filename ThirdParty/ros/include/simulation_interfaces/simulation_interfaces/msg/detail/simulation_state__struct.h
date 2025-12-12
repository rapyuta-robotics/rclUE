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
/**
  * Simulation is stopped, which is equivalent to pausing and resetting with ALL_PAUSED.
  * This is typically the default state when simulator is launched.
  * Stopped simulation can be played. It can also be paused, which means
  * starting simulation in a paused state immediately,
  * without any time steps for physics or simulated clock ticks.
 */
enum
{
  simulation_interfaces__msg__SimulationState__STATE_STOPPED = 0
};

/// Constant 'STATE_PLAYING'.
/**
  * Simulation is playing, can be either paused or stopped.
 */
enum
{
  simulation_interfaces__msg__SimulationState__STATE_PLAYING = 1
};

/// Constant 'STATE_PAUSED'.
/**
  * Simulation is paused, can be either stopped (which will reset it) or played.
 */
enum
{
  simulation_interfaces__msg__SimulationState__STATE_PAUSED = 2
};

/// Constant 'STATE_QUITTING'.
/**
  * Closing the simulator application. Switching from STATE_PLAYING or STATE_PAUSED
  * states is expected to stop the simulation first, and then exit.
  * Simulation interfaces will become unavailable after quitting.
  * Running simulation application is outside of the simulation interfaces as
  * there is no service to handle the call when the simulator is not up.
 */
enum
{
  simulation_interfaces__msg__SimulationState__STATE_QUITTING = 3
};

/// Constant 'STATE_NO_WORLD'.
/**
  * Simulation world is currently unloaded.
  * The simulation is inactive and cannot be started, stopped, or paused.
 */
enum
{
  simulation_interfaces__msg__SimulationState__STATE_NO_WORLD = 4
};

/// Constant 'STATE_LOADING_WORLD'.
/**
  * Simulation world is currently loading.
  * The simulation is inactive while world is loading and cannot be started, stopped, or paused.
 */
enum
{
  simulation_interfaces__msg__SimulationState__STATE_LOADING_WORLD = 5
};

/// Struct defined in msg/SimulationState in the package simulation_interfaces.
/**
  * Simulation states used in SetSimulationState and returned in GetSimulationState
 */
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
