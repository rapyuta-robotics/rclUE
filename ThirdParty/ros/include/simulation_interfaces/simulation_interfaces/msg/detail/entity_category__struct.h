// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/EntityCategory.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_CATEGORY__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_CATEGORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CATEGORY_OBJECT'.
/**
  * Generic or unspecified type.
 */
enum
{
  simulation_interfaces__msg__EntityCategory__CATEGORY_OBJECT = 0
};

/// Constant 'CATEGORY_ROBOT'.
/**
  * A broad category for mobile robots, arms, drones etc.,
  * usually with ROS 2 interfaces.
 */
enum
{
  simulation_interfaces__msg__EntityCategory__CATEGORY_ROBOT = 1
};

/// Constant 'CATEGORY_HUMAN'.
/**
  * Simulated humans, e.g. pedestrians, warehouse workers.
  * Compared to CATEGORY_DYNAMIC_OBJECT, humans are often expected to be treated
  * exceptionally in regards to safety constraints.
 */
enum
{
  simulation_interfaces__msg__EntityCategory__CATEGORY_HUMAN = 2
};

/// Constant 'CATEGORY_DYNAMIC_OBJECT'.
/**
  * Vehicles, animals, mobile obstacles, typically to present a detection and
  * tracking challenge, such as when simulation is used to test robot perception
  * or navigation stack.
 */
enum
{
  simulation_interfaces__msg__EntityCategory__CATEGORY_DYNAMIC_OBJECT = 4
};

/// Constant 'CATEGORY_STATIC_OBJECT'.
/**
  * Any object which is static, e.g. not supposed to change its pose
  * unless by means of SetEntityState.
 */
enum
{
  simulation_interfaces__msg__EntityCategory__CATEGORY_STATIC_OBJECT = 5
};

/// Struct defined in msg/EntityCategory in the package simulation_interfaces.
/**
  * Entity major category, which often warrants a specific way to handle such entity, e.g. when handling humans
  * or mapping persistence for dynamic vs static objects.
 */
typedef struct simulation_interfaces__msg__EntityCategory
{
  uint8_t category;
} simulation_interfaces__msg__EntityCategory;

// Struct for a sequence of simulation_interfaces__msg__EntityCategory.
typedef struct simulation_interfaces__msg__EntityCategory__Sequence
{
  simulation_interfaces__msg__EntityCategory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__EntityCategory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__ENTITY_CATEGORY__STRUCT_H_
