// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from simulation_interfaces:srv/GetSimulationState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/srv/get_simulation_state.h"


#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATION_STATE__FUNCTIONS_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATION_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "simulation_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "simulation_interfaces/srv/detail/get_simulation_state__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetSimulationState__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetSimulationState__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetSimulationState__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetSimulationState__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/GetSimulationState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simulation_interfaces__srv__GetSimulationState_Request
 * )) before or use
 * simulation_interfaces__srv__GetSimulationState_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__GetSimulationState_Request__init(simulation_interfaces__srv__GetSimulationState_Request * msg);

/// Finalize srv/GetSimulationState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__GetSimulationState_Request__fini(simulation_interfaces__srv__GetSimulationState_Request * msg);

/// Create srv/GetSimulationState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simulation_interfaces__srv__GetSimulationState_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
simulation_interfaces__srv__GetSimulationState_Request *
simulation_interfaces__srv__GetSimulationState_Request__create(void);

/// Destroy srv/GetSimulationState message.
/**
 * It calls
 * simulation_interfaces__srv__GetSimulationState_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__GetSimulationState_Request__destroy(simulation_interfaces__srv__GetSimulationState_Request * msg);

/// Check for srv/GetSimulationState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__GetSimulationState_Request__are_equal(const simulation_interfaces__srv__GetSimulationState_Request * lhs, const simulation_interfaces__srv__GetSimulationState_Request * rhs);

/// Copy a srv/GetSimulationState message.
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
simulation_interfaces__srv__GetSimulationState_Request__copy(
  const simulation_interfaces__srv__GetSimulationState_Request * input,
  simulation_interfaces__srv__GetSimulationState_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetSimulationState_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetSimulationState_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetSimulationState_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetSimulationState_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetSimulationState messages.
/**
 * It allocates the memory for the number of elements and calls
 * simulation_interfaces__srv__GetSimulationState_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__GetSimulationState_Request__Sequence__init(simulation_interfaces__srv__GetSimulationState_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetSimulationState messages.
/**
 * It calls
 * simulation_interfaces__srv__GetSimulationState_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__GetSimulationState_Request__Sequence__fini(simulation_interfaces__srv__GetSimulationState_Request__Sequence * array);

/// Create array of srv/GetSimulationState messages.
/**
 * It allocates the memory for the array and calls
 * simulation_interfaces__srv__GetSimulationState_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
simulation_interfaces__srv__GetSimulationState_Request__Sequence *
simulation_interfaces__srv__GetSimulationState_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetSimulationState messages.
/**
 * It calls
 * simulation_interfaces__srv__GetSimulationState_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__GetSimulationState_Request__Sequence__destroy(simulation_interfaces__srv__GetSimulationState_Request__Sequence * array);

/// Check for srv/GetSimulationState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__GetSimulationState_Request__Sequence__are_equal(const simulation_interfaces__srv__GetSimulationState_Request__Sequence * lhs, const simulation_interfaces__srv__GetSimulationState_Request__Sequence * rhs);

/// Copy an array of srv/GetSimulationState messages.
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
simulation_interfaces__srv__GetSimulationState_Request__Sequence__copy(
  const simulation_interfaces__srv__GetSimulationState_Request__Sequence * input,
  simulation_interfaces__srv__GetSimulationState_Request__Sequence * output);

/// Initialize srv/GetSimulationState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simulation_interfaces__srv__GetSimulationState_Response
 * )) before or use
 * simulation_interfaces__srv__GetSimulationState_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__GetSimulationState_Response__init(simulation_interfaces__srv__GetSimulationState_Response * msg);

/// Finalize srv/GetSimulationState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__GetSimulationState_Response__fini(simulation_interfaces__srv__GetSimulationState_Response * msg);

/// Create srv/GetSimulationState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simulation_interfaces__srv__GetSimulationState_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
simulation_interfaces__srv__GetSimulationState_Response *
simulation_interfaces__srv__GetSimulationState_Response__create(void);

/// Destroy srv/GetSimulationState message.
/**
 * It calls
 * simulation_interfaces__srv__GetSimulationState_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__GetSimulationState_Response__destroy(simulation_interfaces__srv__GetSimulationState_Response * msg);

/// Check for srv/GetSimulationState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__GetSimulationState_Response__are_equal(const simulation_interfaces__srv__GetSimulationState_Response * lhs, const simulation_interfaces__srv__GetSimulationState_Response * rhs);

/// Copy a srv/GetSimulationState message.
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
simulation_interfaces__srv__GetSimulationState_Response__copy(
  const simulation_interfaces__srv__GetSimulationState_Response * input,
  simulation_interfaces__srv__GetSimulationState_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetSimulationState_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetSimulationState_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetSimulationState_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetSimulationState_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetSimulationState messages.
/**
 * It allocates the memory for the number of elements and calls
 * simulation_interfaces__srv__GetSimulationState_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__GetSimulationState_Response__Sequence__init(simulation_interfaces__srv__GetSimulationState_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetSimulationState messages.
/**
 * It calls
 * simulation_interfaces__srv__GetSimulationState_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__GetSimulationState_Response__Sequence__fini(simulation_interfaces__srv__GetSimulationState_Response__Sequence * array);

/// Create array of srv/GetSimulationState messages.
/**
 * It allocates the memory for the array and calls
 * simulation_interfaces__srv__GetSimulationState_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
simulation_interfaces__srv__GetSimulationState_Response__Sequence *
simulation_interfaces__srv__GetSimulationState_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetSimulationState messages.
/**
 * It calls
 * simulation_interfaces__srv__GetSimulationState_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__GetSimulationState_Response__Sequence__destroy(simulation_interfaces__srv__GetSimulationState_Response__Sequence * array);

/// Check for srv/GetSimulationState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__GetSimulationState_Response__Sequence__are_equal(const simulation_interfaces__srv__GetSimulationState_Response__Sequence * lhs, const simulation_interfaces__srv__GetSimulationState_Response__Sequence * rhs);

/// Copy an array of srv/GetSimulationState messages.
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
simulation_interfaces__srv__GetSimulationState_Response__Sequence__copy(
  const simulation_interfaces__srv__GetSimulationState_Response__Sequence * input,
  simulation_interfaces__srv__GetSimulationState_Response__Sequence * output);

/// Initialize srv/GetSimulationState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simulation_interfaces__srv__GetSimulationState_Event
 * )) before or use
 * simulation_interfaces__srv__GetSimulationState_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__GetSimulationState_Event__init(simulation_interfaces__srv__GetSimulationState_Event * msg);

/// Finalize srv/GetSimulationState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__GetSimulationState_Event__fini(simulation_interfaces__srv__GetSimulationState_Event * msg);

/// Create srv/GetSimulationState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simulation_interfaces__srv__GetSimulationState_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
simulation_interfaces__srv__GetSimulationState_Event *
simulation_interfaces__srv__GetSimulationState_Event__create(void);

/// Destroy srv/GetSimulationState message.
/**
 * It calls
 * simulation_interfaces__srv__GetSimulationState_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__GetSimulationState_Event__destroy(simulation_interfaces__srv__GetSimulationState_Event * msg);

/// Check for srv/GetSimulationState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__GetSimulationState_Event__are_equal(const simulation_interfaces__srv__GetSimulationState_Event * lhs, const simulation_interfaces__srv__GetSimulationState_Event * rhs);

/// Copy a srv/GetSimulationState message.
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
simulation_interfaces__srv__GetSimulationState_Event__copy(
  const simulation_interfaces__srv__GetSimulationState_Event * input,
  simulation_interfaces__srv__GetSimulationState_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetSimulationState_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetSimulationState_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetSimulationState_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetSimulationState_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetSimulationState messages.
/**
 * It allocates the memory for the number of elements and calls
 * simulation_interfaces__srv__GetSimulationState_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__GetSimulationState_Event__Sequence__init(simulation_interfaces__srv__GetSimulationState_Event__Sequence * array, size_t size);

/// Finalize array of srv/GetSimulationState messages.
/**
 * It calls
 * simulation_interfaces__srv__GetSimulationState_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__GetSimulationState_Event__Sequence__fini(simulation_interfaces__srv__GetSimulationState_Event__Sequence * array);

/// Create array of srv/GetSimulationState messages.
/**
 * It allocates the memory for the array and calls
 * simulation_interfaces__srv__GetSimulationState_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
simulation_interfaces__srv__GetSimulationState_Event__Sequence *
simulation_interfaces__srv__GetSimulationState_Event__Sequence__create(size_t size);

/// Destroy array of srv/GetSimulationState messages.
/**
 * It calls
 * simulation_interfaces__srv__GetSimulationState_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
void
simulation_interfaces__srv__GetSimulationState_Event__Sequence__destroy(simulation_interfaces__srv__GetSimulationState_Event__Sequence * array);

/// Check for srv/GetSimulationState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
bool
simulation_interfaces__srv__GetSimulationState_Event__Sequence__are_equal(const simulation_interfaces__srv__GetSimulationState_Event__Sequence * lhs, const simulation_interfaces__srv__GetSimulationState_Event__Sequence * rhs);

/// Copy an array of srv/GetSimulationState messages.
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
simulation_interfaces__srv__GetSimulationState_Event__Sequence__copy(
  const simulation_interfaces__srv__GetSimulationState_Event__Sequence * input,
  simulation_interfaces__srv__GetSimulationState_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATION_STATE__FUNCTIONS_H_
