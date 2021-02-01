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

#ifndef RMW__GET_TOPIC_NAMES_AND_TYPES_H_
#define RMW__GET_TOPIC_NAMES_AND_TYPES_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "rmw/macros.h"
#include "rmw/names_and_types.h"
#include "rmw/types.h"
#include "rmw/visibility_control.h"

/// Return a list of topic names and their types.
/**
 * This function returns a list of topic names in the ROS graph and their types.
 *
 * The node parameter must not be `NULL`, and must point to a valid node.
 *
 * The topic_names_and_types parameter must be allocated and zero initialized.
 * The topic_names_and_types is the output for this function, and contains
 * allocated memory.
 * Therefore, it should be passed to rmw_names_and_types_fini() when
 * it is no longer needed.
 * Failing to do so will result in leaked memory.
 *
 * There may be some demangling that occurs when listing the topics from the
 * middleware implementation.
 * This is the mechanism by which this function can discriminate between ROS
 * topics, non-ROS topics, and topics which may be used to implement other
 * concepts like ROS Services.
 *
 * For example, if the underlying implementation is DDS or RTPS, ROS specific
 * prefixes may be prepended to the user namespace, and the namespace may be
 * stripped of leading and trailing slashes, see:
 *
 * http://design.ros2.org/articles/topic_and_service_names.html#ros-namespaces-with-dds-partitions
 *
 * As well as:
 *
 * http://design.ros2.org/articles/topic_and_service_names.html#communicating-with-non-ros-topics
 *
 * If the no_demangle argument is true, then the topic names given by the
 * middleware will be returned without any demangling or filtering.
 * For example, the ROS topic `/foo` may be returned as `rt/foo` or the DDS
 * topic (non-ROS topic) with a partition list `['foo', 'bar']` and topic `baz`
 * may be returned as `foo/baz` (note that only the first partition is used but
 * it is still concatenated to the topic).
 *
 * \param[in] node the handle to the node being used to query the ROS graph
 * \param[in] allocator allocator to be used when allocating space for strings
 * \param[in] no_demangle if true, list all topics without any demangling
 * \param[out] topic_names_and_types list of topic names and their types
 * \return `RMW_RET_OK` if the query was successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if the node is invalid, or
 * \return `RMW_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RMW_RET_BAD_ALLOC` if memory allocation fails, or
 * \return `RMW_RET_ERROR` if an unspecified error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_get_topic_names_and_types(
  const rmw_node_t * node,
  rcutils_allocator_t * allocator,
  bool no_demangle,
  rmw_names_and_types_t * topic_names_and_types);

#ifdef __cplusplus
}
#endif

#endif  // RMW__GET_TOPIC_NAMES_AND_TYPES_H_
