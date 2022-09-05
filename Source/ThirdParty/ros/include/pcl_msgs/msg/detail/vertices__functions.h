// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pcl_msgs:msg/Vertices.idl
// generated code does not contain a copyright notice

#ifndef PCL_MSGS__MSG__DETAIL__VERTICES__FUNCTIONS_H_
#define PCL_MSGS__MSG__DETAIL__VERTICES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pcl_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pcl_msgs/msg/detail/vertices__struct.h"

/// Initialize msg/Vertices message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pcl_msgs__msg__Vertices
 * )) before or use
 * pcl_msgs__msg__Vertices__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
bool
pcl_msgs__msg__Vertices__init(pcl_msgs__msg__Vertices * msg);

/// Finalize msg/Vertices message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__msg__Vertices__fini(pcl_msgs__msg__Vertices * msg);

/// Create msg/Vertices message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pcl_msgs__msg__Vertices__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
pcl_msgs__msg__Vertices *
pcl_msgs__msg__Vertices__create();

/// Destroy msg/Vertices message.
/**
 * It calls
 * pcl_msgs__msg__Vertices__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__msg__Vertices__destroy(pcl_msgs__msg__Vertices * msg);

/// Check for msg/Vertices message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
bool
pcl_msgs__msg__Vertices__are_equal(const pcl_msgs__msg__Vertices * lhs, const pcl_msgs__msg__Vertices * rhs);

/// Copy a msg/Vertices message.
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
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
bool
pcl_msgs__msg__Vertices__copy(
  const pcl_msgs__msg__Vertices * input,
  pcl_msgs__msg__Vertices * output);

/// Initialize array of msg/Vertices messages.
/**
 * It allocates the memory for the number of elements and calls
 * pcl_msgs__msg__Vertices__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
bool
pcl_msgs__msg__Vertices__Sequence__init(pcl_msgs__msg__Vertices__Sequence * array, size_t size);

/// Finalize array of msg/Vertices messages.
/**
 * It calls
 * pcl_msgs__msg__Vertices__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__msg__Vertices__Sequence__fini(pcl_msgs__msg__Vertices__Sequence * array);

/// Create array of msg/Vertices messages.
/**
 * It allocates the memory for the array and calls
 * pcl_msgs__msg__Vertices__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
pcl_msgs__msg__Vertices__Sequence *
pcl_msgs__msg__Vertices__Sequence__create(size_t size);

/// Destroy array of msg/Vertices messages.
/**
 * It calls
 * pcl_msgs__msg__Vertices__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
void
pcl_msgs__msg__Vertices__Sequence__destroy(pcl_msgs__msg__Vertices__Sequence * array);

/// Check for msg/Vertices message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
bool
pcl_msgs__msg__Vertices__Sequence__are_equal(const pcl_msgs__msg__Vertices__Sequence * lhs, const pcl_msgs__msg__Vertices__Sequence * rhs);

/// Copy an array of msg/Vertices messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pcl_msgs
bool
pcl_msgs__msg__Vertices__Sequence__copy(
  const pcl_msgs__msg__Vertices__Sequence * input,
  pcl_msgs__msg__Vertices__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PCL_MSGS__MSG__DETAIL__VERTICES__FUNCTIONS_H_
