// Copyright 2019 Open Source Robotics Foundation, Inc.
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

#ifndef RCL_LOGGING_SPDLOG__LOGGING_INTERFACE_H_
#define RCL_LOGGING_SPDLOG__LOGGING_INTERFACE_H_

#include "rcl_logging_spdlog/visibility_control.h"
#include "rcutils/allocator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef int rcl_logging_ret_t;

/// Initialize spdlog logging library.
/*
 * \param[in] config_file The location of a config file that the external
 *   logging library should use to configure itself.
 *   If no config file is provided this will be set to an empty string.
 *   Must be a NULL terminated c string.
 * \param[in] allocator The allocator to use for memory allocation. This is
 *   an rcutils_allocator_t rather than an rcl_allocator_t to ensure that the
 *   rcl_logging_* packages don't have a circular dependency back to rcl.
 * \return RCL_LOGGING_RET_OK if initialized successfully, or
 * \return RCL_LOGGING_RET_ERROR if an unspecified error occurs.
 */
RCL_LOGGING_PUBLIC
rcl_logging_ret_t rcl_logging_external_initialize(
  const char * config_file,
  rcutils_allocator_t allocator);

/// Free the resources allocated for the spdlog external logging system.
/**
 * This puts the system into a state equivalent to being uninitialized.
 *
 * \return always RCL_LOGGING_RET_OK.
 */
RCL_LOGGING_PUBLIC
rcl_logging_ret_t rcl_logging_external_shutdown();

/// Log a message.
/**
 * \param[in] severity The severity level of the message being logged.
 * \param[in] name The name of the logger (unused).
 * \param[in] msg The message to be logged. Must be a null terminated c string.
 */
RCL_LOGGING_PUBLIC
void rcl_logging_external_log(int severity, const char * name, const char * msg);

/// Set the severity level for a logger.
/**
 * This function sets the severity level for the specified logger.
 * If the name provided is an empty string or NULL it will change the level of
 * the root logger.
 *
 * \param[in] name The name of the logger (unused).
 * \param[in] level The severity level to be used for the specified logger. Values:
 *   RCUTILS_LOG_SEVERITY_DEBUG, RCUTILS_LOG_SEVERITY_UNSET, RCUTILS_LOG_SEVERITY_DEBUG,
 *   RCUTILS_LOG_SEVERITY_INFO, RCUTILS_LOG_SEVERITY_WARN, RCUTILS_LOG_SEVERITY_ERROR,
 *   RCUTILS_LOG_SEVERITY_FATAL
 * \return always RCL_LOGGING_RET_OK.
 */
RCL_LOGGING_PUBLIC
RCUTILS_WARN_UNUSED
rcl_logging_ret_t rcl_logging_external_set_logger_level(const char * name, int level);

/// Get the logging directory.
/**
 * Uses various environment variables to construct a logging directory path.
 *
 * Use $ROS_LOG_DIR if ROS_LOG_DIR is set and not empty.
 * Otherwise, use $ROS_HOME/log, using ~/.ros for ROS_HOME if not set or if empty.
 *
 * It also expands an initial '~' to the current user's home directory,
 * and converts the path separator if necessary.
 *
 * If successful, the directory C string should be deallocated using the given allocator when it is
 * no longer needed.
 *
 * \param[in] allocator The allocator to use for memory allocation.
 * \param[out] directory The C string pointer at which to write the directory path.
 *   Only meaningful if the call is successful. Must not be nullptr and must point to nullptr.
 * \return RCL_LOGGING_RET_OK if successful, or
 * \return RCL_LOGGING_RET_INVALID_ARGUMENT if any arguments are invalid, or
 * \return RCL_LOGGING_RET_ERROR if an unspecified error occurs.
 */
RCL_LOGGING_PUBLIC
rcl_logging_ret_t
rcl_logging_get_logging_directory(rcutils_allocator_t allocator, char ** directory);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif  // RCL_LOGGING_SPDLOG__LOGGING_INTERFACE_H_
