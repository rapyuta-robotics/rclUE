// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ue_msgs:msg/IntPoseEntry.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__INT_POSE_ENTRY__FUNCTIONS_H_
#define UE_MSGS__MSG__DETAIL__INT_POSE_ENTRY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ue_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ue_msgs/msg/detail/int_pose_entry__struct.h"

/// Initialize msg/IntPoseEntry message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ue_msgs__msg__IntPoseEntry
 * )) before or use
 * ue_msgs__msg__IntPoseEntry__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
bool
ue_msgs__msg__IntPoseEntry__init(ue_msgs__msg__IntPoseEntry * msg);

/// Finalize msg/IntPoseEntry message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
void
ue_msgs__msg__IntPoseEntry__fini(ue_msgs__msg__IntPoseEntry * msg);

/// Create msg/IntPoseEntry message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ue_msgs__msg__IntPoseEntry__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
ue_msgs__msg__IntPoseEntry *
ue_msgs__msg__IntPoseEntry__create();

/// Destroy msg/IntPoseEntry message.
/**
 * It calls
 * ue_msgs__msg__IntPoseEntry__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
void
ue_msgs__msg__IntPoseEntry__destroy(ue_msgs__msg__IntPoseEntry * msg);

/// Check for msg/IntPoseEntry message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
bool
ue_msgs__msg__IntPoseEntry__are_equal(const ue_msgs__msg__IntPoseEntry * lhs, const ue_msgs__msg__IntPoseEntry * rhs);

/// Copy a msg/IntPoseEntry message.
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
ue_msgs__msg__IntPoseEntry__copy(
  const ue_msgs__msg__IntPoseEntry * input,
  ue_msgs__msg__IntPoseEntry * output);

/// Initialize array of msg/IntPoseEntry messages.
/**
 * It allocates the memory for the number of elements and calls
 * ue_msgs__msg__IntPoseEntry__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
bool
ue_msgs__msg__IntPoseEntry__Sequence__init(ue_msgs__msg__IntPoseEntry__Sequence * array, size_t size);

/// Finalize array of msg/IntPoseEntry messages.
/**
 * It calls
 * ue_msgs__msg__IntPoseEntry__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
void
ue_msgs__msg__IntPoseEntry__Sequence__fini(ue_msgs__msg__IntPoseEntry__Sequence * array);

/// Create array of msg/IntPoseEntry messages.
/**
 * It allocates the memory for the array and calls
 * ue_msgs__msg__IntPoseEntry__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
ue_msgs__msg__IntPoseEntry__Sequence *
ue_msgs__msg__IntPoseEntry__Sequence__create(size_t size);

/// Destroy array of msg/IntPoseEntry messages.
/**
 * It calls
 * ue_msgs__msg__IntPoseEntry__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
void
ue_msgs__msg__IntPoseEntry__Sequence__destroy(ue_msgs__msg__IntPoseEntry__Sequence * array);

/// Check for msg/IntPoseEntry message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
bool
ue_msgs__msg__IntPoseEntry__Sequence__are_equal(const ue_msgs__msg__IntPoseEntry__Sequence * lhs, const ue_msgs__msg__IntPoseEntry__Sequence * rhs);

/// Copy an array of msg/IntPoseEntry messages.
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
ue_msgs__msg__IntPoseEntry__Sequence__copy(
  const ue_msgs__msg__IntPoseEntry__Sequence * input,
  ue_msgs__msg__IntPoseEntry__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__MSG__DETAIL__INT_POSE_ENTRY__FUNCTIONS_H_
