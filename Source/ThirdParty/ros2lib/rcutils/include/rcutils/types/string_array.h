// Copyright 2017 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RCUTILS__TYPES__STRING_ARRAY_H_
#define RCUTILS__TYPES__STRING_ARRAY_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <string.h>

#include "rcutils/allocator.h"
#include "rcutils/macros.h"
#include "rcutils/types/rcutils_ret.h"
#include "rcutils/visibility_control.h"

typedef struct RCUTILS_PUBLIC_TYPE rcutils_string_array_t
{
  size_t size;
  char ** data;
  rcutils_allocator_t allocator;
} rcutils_string_array_t;

/// Return an empty string array struct.
/**
 * This function returns an empty and zero initialized string array struct.
 * Calling rcutils_string_array_fini() on any non-initialized instance leads
 * to undefined behavior.
 * Every instance of string_array_t has to either be zero_initialized with this
 * function or manually allocated.
 *
 * Example:
 *
 * ```c
 * rcutils_string_array_t foo;
 * rcutils_string_array_fini(&foo); // undefined behavior!
 *
 * rcutils_string_array_t bar = rcutils_get_zero_initialized_string_array();
 * rcutils_string_array_fini(&bar); // ok
 * ```
 */
RCUTILS_PUBLIC
rcutils_string_array_t
rcutils_get_zero_initialized_string_array(void);

/// Initialize a string array with a given size.
/**
 * This function will initialize a given, zero initialized, string array to
 * a given size.
 *
 * Note that putting a string into the array gives owenship to the array.
 *
 * Example:
 *
 * ```c
 * rcutils_allocator_t allocator = rcutils_get_default_allocator();
 * rcutils_string_array_t string_array = rcutils_get_zero_initialized_string_array();
 * rcutils_ret_t ret = rcutils_string_array_init(&string_array, 2, &allocator);
 * if (ret != RCUTILS_RET_OK) {
 *   // ... error handling
 * }
 * string_array.data[0] = rcutils_strdup("Hello", &allocator);
 * string_array.data[1] = rcutils_strdup("World", &allocator);
 * ret = rcutils_string_array_fini(&string_array);
 *
 * \param[inout] string_array object to be initialized
 * \param[in] size the size the array should be
 * \param[in] allocator to be used to allocate and deallocate memory
 * \return `RCUTILS_RET_OK` if successful, or
 * \return `RCUTILS_RET_INVALID_ARGUMENT` for invalid arguments, or
 * \return `RCUTILS_RET_BAD_ALLOC` if memory allocation fails, or
 * \return `RCUTILS_RET_ERROR` if an unknown error occurs
 * ```
 */
RCUTILS_PUBLIC
RCUTILS_WARN_UNUSED
rcutils_ret_t
rcutils_string_array_init(
  rcutils_string_array_t * string_array,
  size_t size,
  const rcutils_allocator_t * allocator);

/// Finalize a string array, reclaiming all resources.
/**
 * This function reclaims any memory owned by the string array, including the
 * strings it references.
 *
 * The allocator used to initialize the string array is used to deallocate each
 * string in the array and the array of strings itself.
 *
 * \param[inout] string_array object to be finalized
 * \return `RCUTILS_RET_OK` if successful, or
 * \return `RCUTILS_RET_INVALID_ARGUMENT` for invalid arguments, or
 * \return `RCUTILS_RET_ERROR` if an unknown error occurs
 */
RCUTILS_PUBLIC
RCUTILS_WARN_UNUSED
rcutils_ret_t
rcutils_string_array_fini(rcutils_string_array_t * string_array);

/// Compare two string arrays.
/**
 * The two string arrays are compared according to lexographical order.
 *
 * \param[in] sa0 The first string array.
 * \param[in] sa1 The second string array.
 * \param[out] res Negative value if `lhs` appears before `rhs` in lexographical order.
 *   Zero if `lhs` and `rhs` are equal.
 *   Positive value if `lhs` appears after `rhs in lexographical order.
 * \return `RCUTILS_RET_OK` if successful, or
 * \return `RCUTILS_RET_INVALID_ARGUMENT` if any argument is `NULL`, or
 * \return `RCUTILS_RET_INVALID_ARGUMENT` if `lhs->data` or `rhs->data` is `NULL`, or
 * \return `RCUTILS_RET_ERROR` if an unknown error occurs.
 */
RCUTILS_PUBLIC
RCUTILS_WARN_UNUSED
rcutils_ret_t
rcutils_string_array_cmp(
  const rcutils_string_array_t * lhs,
  const rcutils_string_array_t * rhs,
  int * res);

#ifdef __cplusplus
}
#endif

#endif  // RCUTILS__TYPES__STRING_ARRAY_H_
