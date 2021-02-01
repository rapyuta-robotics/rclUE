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

#ifndef RMW__NAMES_AND_TYPES_H_
#define RMW__NAMES_AND_TYPES_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stddef.h>

#include "rcutils/allocator.h"
#include "rcutils/types.h"
#include "rmw/macros.h"
#include "rmw/types.h"
#include "rmw/visibility_control.h"

/// Associative array of topic or service names and types.
typedef struct RMW_PUBLIC_TYPE rmw_names_and_types_t
{
  rcutils_string_array_t names;
  // The length of this array is the same as names.size
  rcutils_string_array_t * types;
} rmw_names_and_types_t;

/// Return a rmw_names_and_types_t struct with members initialized to `NULL`.
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_names_and_types_t
rmw_get_zero_initialized_names_and_types(void);

/// Check that a rmw_topic_names_and_types_t struct is zero initialized.
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_names_and_types_check_zero(rmw_names_and_types_t * names_and_types);

/// Initialize a rmw_names_and_types_t object.
/**
 * This function initializes the string array for the names and allocates space
 * for all the string arrays for the types according to the given size, but
 * it does not initialize the string array for each setup of types.
 * However, the string arrays for each set of types is zero initialized.
 *
 * \param[inout] names_and_types object to be initialized
 * \param[in] size the number of names and sets of types to be stored
 * \param[in] allocator to be used to allocate and deallocate memory
 * \returns `RMW_RET_OK` on successfully running the check, or
 * \returns `RMW_RET_INVALID_ARGUMENT` if names_and_types is NULL, or
 * \returns `RMW_BAD_ALLOC` if memory allocation fails, or
 * \returns `RMW_RET_ERROR` when an unspecified error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_names_and_types_init(
  rmw_names_and_types_t * names_and_types,
  size_t size,
  rcutils_allocator_t * allocator);

/// Finalize a rmw_names_and_types_t object.
/**
 * The names_and_types_t objects are populated by one of the
 * rmw_get_*_names_and_types() functions.
 * During which memory is allocated to store the names and types.
 * This function will reclaim any resources within the object so it is safe
 * to destroy without leaking memory.
 *
 * The allocator within the rmw_names_and_types_t object is used to deallocate
 * memory.
 *
 * \param[inout] names_and_types object to be finalized
 * \returns `RMW_RET_OK` on successfully running the check, or
 * \returns `RMW_RET_INVALID_ARGUMENT` if names_and_types is NULL, or
 * \returns `RMW_RET_ERROR` when an unspecified error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_names_and_types_fini(rmw_names_and_types_t * names_and_types);

#ifdef __cplusplus
}
#endif

#endif  // RMW__NAMES_AND_TYPES_H_
