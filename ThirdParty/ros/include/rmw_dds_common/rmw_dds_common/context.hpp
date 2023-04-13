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

#ifndef RMW_DDS_COMMON__CONTEXT_HPP_
#define RMW_DDS_COMMON__CONTEXT_HPP_

#include <atomic>
#include <mutex>
#include <thread>

#include "rmw/types.h"

#include "rmw_dds_common/graph_cache.hpp"
#include "rmw_dds_common/visibility_control.h"

namespace rmw_dds_common
{

/// Base data structure that a Context will need in any DDS-based RMW implementation
/// mapping one Participant to Multiple Nodes.
struct Context
{
  /// Global ID of the Participant that the Context uses.
  rmw_gid_t gid;
  /// Publisher used to publish ParticipantEntitiesInfo discovery data.
  rmw_publisher_t * pub;
  /// Subscriber used to listen to ParticipantEntitiesInfo discovery data.
  rmw_subscription_t * sub;
  /// Cached graph from discovery data.
  GraphCache graph_cache;
  /// Mutex that should be locked when updating graph cache and publishing a graph message.
  std::mutex node_update_mutex;
  /// Thread to listen to discovery data.
  std::thread listener_thread;
  /// Indicates if the listener thread is running.
  std::atomic_bool thread_is_running;
  /// Awakes listener thread when finishing the context.
  rmw_guard_condition_t * listener_thread_gc;
  /// Guard condition that should be triggered when the graph changes.
  rmw_guard_condition_t * graph_guard_condition;
};

}  // namespace rmw_dds_common

#endif  // RMW_DDS_COMMON__CONTEXT_HPP_
