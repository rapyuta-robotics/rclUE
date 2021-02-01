// Copyright 2014 Open Source Robotics Foundation, Inc.
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

#ifndef RMW__ERROR_HANDLING_H_
#define RMW__ERROR_HANDLING_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <rcutils/error_handling.h>

typedef rcutils_error_string_t rmw_error_string_t;
typedef rcutils_error_state_t rmw_error_state_t;

#define RMW_SAFE_FWRITE_TO_STDERR RCUTILS_SAFE_FWRITE_TO_STDERR

#define rmw_initialize_error_handling_thread_local_storage \
  rcutils_initialize_error_handling_thread_local_storage

#define rmw_set_error_state rcutils_set_error_state

#define RMW_CHECK_ARGUMENT_FOR_NULL(argument, error_return_type) \
  RCUTILS_CHECK_ARGUMENT_FOR_NULL(argument, error_return_type)

#define RMW_CHECK_FOR_NULL_WITH_MSG(value, msg, error_statement) \
  RCUTILS_CHECK_FOR_NULL_WITH_MSG(value, msg, error_statement)

#define RMW_SET_ERROR_MSG(msg) RCUTILS_SET_ERROR_MSG(msg)

#define RMW_SET_ERROR_MSG_WITH_FORMAT_STRING(format_string, ...) \
  RCUTILS_SET_ERROR_MSG_WITH_FORMAT_STRING(format_string, __VA_ARGS__)

#define rmw_error_is_set rcutils_error_is_set

#define rmw_get_error_state rcutils_get_error_state

#define rmw_get_error_string rcutils_get_error_string

#define rmw_reset_error rcutils_reset_error

#ifdef __cplusplus
}
#endif

#endif  // RMW__ERROR_HANDLING_H_
