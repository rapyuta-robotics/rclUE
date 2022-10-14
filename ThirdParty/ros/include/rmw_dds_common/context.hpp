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

struct Context
{
  rmw_gid_t gid;
  rmw_publisher_t * pub;
  rmw_subscription_t * sub;
  GraphCache graph_cache;
  std::mutex node_update_mutex;
  std::thread listener_thread;
  std::atomic_bool thread_is_running;
  rmw_guard_condition_t * listener_thread_gc;
  rmw_guard_condition_t * graph_guard_condition;
};

}  // namespace rmw_dds_common

#endif  // RMW_DDS_COMMON__CONTEXT_HPP_
