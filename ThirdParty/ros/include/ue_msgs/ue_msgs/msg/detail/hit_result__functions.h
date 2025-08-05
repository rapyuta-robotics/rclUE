// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ue_msgs:msg/HitResult.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__HIT_RESULT__FUNCTIONS_H_
#define UE_MSGS__MSG__DETAIL__HIT_RESULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ue_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ue_msgs/msg/detail/hit_result__struct.h"

/// Initialize msg/HitResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ue_msgs__msg__HitResult
 * )) before or use
 * ue_msgs__msg__HitResult__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
bool
ue_msgs__msg__HitResult__init(ue_msgs__msg__HitResult * msg);

/// Finalize msg/HitResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
void
ue_msgs__msg__HitResult__fini(ue_msgs__msg__HitResult * msg);

/// Create msg/HitResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ue_msgs__msg__HitResult__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
ue_msgs__msg__HitResult *
ue_msgs__msg__HitResult__create();

/// Destroy msg/HitResult message.
/**
 * It calls
 * ue_msgs__msg__HitResult__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
void
ue_msgs__msg__HitResult__destroy(ue_msgs__msg__HitResult * msg);

/// Check for msg/HitResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
bool
ue_msgs__msg__HitResult__are_equal(const ue_msgs__msg__HitResult * lhs, const ue_msgs__msg__HitResult * rhs);

/// Copy a msg/HitResult message.
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
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
bool
ue_msgs__msg__HitResult__copy(
  const ue_msgs__msg__HitResult * input,
  ue_msgs__msg__HitResult * output);

/// Initialize array of msg/HitResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * ue_msgs__msg__HitResult__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
bool
ue_msgs__msg__HitResult__Sequence__init(ue_msgs__msg__HitResult__Sequence * array, size_t size);

/// Finalize array of msg/HitResult messages.
/**
 * It calls
 * ue_msgs__msg__HitResult__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
void
ue_msgs__msg__HitResult__Sequence__fini(ue_msgs__msg__HitResult__Sequence * array);

/// Create array of msg/HitResult messages.
/**
 * It allocates the memory for the array and calls
 * ue_msgs__msg__HitResult__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
ue_msgs__msg__HitResult__Sequence *
ue_msgs__msg__HitResult__Sequence__create(size_t size);

/// Destroy array of msg/HitResult messages.
/**
 * It calls
 * ue_msgs__msg__HitResult__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
void
ue_msgs__msg__HitResult__Sequence__destroy(ue_msgs__msg__HitResult__Sequence * array);

/// Check for msg/HitResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
bool
ue_msgs__msg__HitResult__Sequence__are_equal(const ue_msgs__msg__HitResult__Sequence * lhs, const ue_msgs__msg__HitResult__Sequence * rhs);

/// Copy an array of msg/HitResult messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
bool
ue_msgs__msg__HitResult__Sequence__copy(
  const ue_msgs__msg__HitResult__Sequence * input,
  ue_msgs__msg__HitResult__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__MSG__DETAIL__HIT_RESULT__FUNCTIONS_H_
