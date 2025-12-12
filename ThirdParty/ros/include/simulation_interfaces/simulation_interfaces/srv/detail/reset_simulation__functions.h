// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from simulation_interfaces:srv/ResetSimulation.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__RESET_SIMULATION__FUNCTIONS_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__RESET_SIMULATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "simulation_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "simulation_interfaces/srv/detail/reset_simulation__struct.h"

/// Initialize srv/ResetSimulation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simulation_interfaces__srv__ResetSimulation_Request
 * )) before or use
 * simulation_interfaces__srv__ResetSimulation_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__ResetSimulation_Request__init(simulation_interfaces__srv__ResetSimulation_Request * msg);

/// Finalize srv/ResetSimulation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__ResetSimulation_Request__fini(simulation_interfaces__srv__ResetSimulation_Request * msg);

/// Create srv/ResetSimulation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simulation_interfaces__srv__ResetSimulation_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
simulation_interfaces__srv__ResetSimulation_Request *
simulation_interfaces__srv__ResetSimulation_Request__create();

/// Destroy srv/ResetSimulation message.
/**
 * It calls
 * simulation_interfaces__srv__ResetSimulation_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__ResetSimulation_Request__destroy(simulation_interfaces__srv__ResetSimulation_Request * msg);

/// Check for srv/ResetSimulation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__ResetSimulation_Request__are_equal(const simulation_interfaces__srv__ResetSimulation_Request * lhs, const simulation_interfaces__srv__ResetSimulation_Request * rhs);

/// Copy a srv/ResetSimulation message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__ResetSimulation_Request__copy(
  const simulation_interfaces__srv__ResetSimulation_Request * input,
  simulation_interfaces__srv__ResetSimulation_Request * output);

/// Initialize array of srv/ResetSimulation messages.
/**
 * It allocates the memory for the number of elements and calls
 * simulation_interfaces__srv__ResetSimulation_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__ResetSimulation_Request__Sequence__init(simulation_interfaces__srv__ResetSimulation_Request__Sequence * array, size_t size);

/// Finalize array of srv/ResetSimulation messages.
/**
 * It calls
 * simulation_interfaces__srv__ResetSimulation_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__ResetSimulation_Request__Sequence__fini(simulation_interfaces__srv__ResetSimulation_Request__Sequence * array);

/// Create array of srv/ResetSimulation messages.
/**
 * It allocates the memory for the array and calls
 * simulation_interfaces__srv__ResetSimulation_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
simulation_interfaces__srv__ResetSimulation_Request__Sequence *
simulation_interfaces__srv__ResetSimulation_Request__Sequence__create(size_t size);

/// Destroy array of srv/ResetSimulation messages.
/**
 * It calls
 * simulation_interfaces__srv__ResetSimulation_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__ResetSimulation_Request__Sequence__destroy(simulation_interfaces__srv__ResetSimulation_Request__Sequence * array);

/// Check for srv/ResetSimulation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__ResetSimulation_Request__Sequence__are_equal(const simulation_interfaces__srv__ResetSimulation_Request__Sequence * lhs, const simulation_interfaces__srv__ResetSimulation_Request__Sequence * rhs);

/// Copy an array of srv/ResetSimulation messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__ResetSimulation_Request__Sequence__copy(
  const simulation_interfaces__srv__ResetSimulation_Request__Sequence * input,
  simulation_interfaces__srv__ResetSimulation_Request__Sequence * output);

/// Initialize srv/ResetSimulation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simulation_interfaces__srv__ResetSimulation_Response
 * )) before or use
 * simulation_interfaces__srv__ResetSimulation_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__ResetSimulation_Response__init(simulation_interfaces__srv__ResetSimulation_Response * msg);

/// Finalize srv/ResetSimulation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__ResetSimulation_Response__fini(simulation_interfaces__srv__ResetSimulation_Response * msg);

/// Create srv/ResetSimulation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simulation_interfaces__srv__ResetSimulation_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
simulation_interfaces__srv__ResetSimulation_Response *
simulation_interfaces__srv__ResetSimulation_Response__create();

/// Destroy srv/ResetSimulation message.
/**
 * It calls
 * simulation_interfaces__srv__ResetSimulation_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__ResetSimulation_Response__destroy(simulation_interfaces__srv__ResetSimulation_Response * msg);

/// Check for srv/ResetSimulation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__ResetSimulation_Response__are_equal(const simulation_interfaces__srv__ResetSimulation_Response * lhs, const simulation_interfaces__srv__ResetSimulation_Response * rhs);

/// Copy a srv/ResetSimulation message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__ResetSimulation_Response__copy(
  const simulation_interfaces__srv__ResetSimulation_Response * input,
  simulation_interfaces__srv__ResetSimulation_Response * output);

/// Initialize array of srv/ResetSimulation messages.
/**
 * It allocates the memory for the number of elements and calls
 * simulation_interfaces__srv__ResetSimulation_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__ResetSimulation_Response__Sequence__init(simulation_interfaces__srv__ResetSimulation_Response__Sequence * array, size_t size);

/// Finalize array of srv/ResetSimulation messages.
/**
 * It calls
 * simulation_interfaces__srv__ResetSimulation_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__ResetSimulation_Response__Sequence__fini(simulation_interfaces__srv__ResetSimulation_Response__Sequence * array);

/// Create array of srv/ResetSimulation messages.
/**
 * It allocates the memory for the array and calls
 * simulation_interfaces__srv__ResetSimulation_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
simulation_interfaces__srv__ResetSimulation_Response__Sequence *
simulation_interfaces__srv__ResetSimulation_Response__Sequence__create(size_t size);

/// Destroy array of srv/ResetSimulation messages.
/**
 * It calls
 * simulation_interfaces__srv__ResetSimulation_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__ResetSimulation_Response__Sequence__destroy(simulation_interfaces__srv__ResetSimulation_Response__Sequence * array);

/// Check for srv/ResetSimulation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__ResetSimulation_Response__Sequence__are_equal(const simulation_interfaces__srv__ResetSimulation_Response__Sequence * lhs, const simulation_interfaces__srv__ResetSimulation_Response__Sequence * rhs);

/// Copy an array of srv/ResetSimulation messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__ResetSimulation_Response__Sequence__copy(
  const simulation_interfaces__srv__ResetSimulation_Response__Sequence * input,
  simulation_interfaces__srv__ResetSimulation_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__RESET_SIMULATION__FUNCTIONS_H_
