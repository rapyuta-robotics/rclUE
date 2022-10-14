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

#ifndef RMW_DDS_COMMON__GID_UTILS_HPP_
#define RMW_DDS_COMMON__GID_UTILS_HPP_

#include "rmw/types.h"

#include "rmw_dds_common/visibility_control.h"
#include "rmw_dds_common/msg/gid.hpp"

namespace rmw_dds_common
{

/// Comparator for rmw_gid_t, in order to use them as a key of a map
struct RMW_DDS_COMMON_PUBLIC_TYPE Compare_rmw_gid_t
{
  bool operator()(const rmw_gid_t & lhs, const rmw_gid_t & rhs) const;
};

/// Stream operator for rmw_gid_t
RMW_DDS_COMMON_PUBLIC
std::ostream &
operator<<(std::ostream & ostream, const rmw_gid_t & gid);

/// operator== for rmw_gid_t
RMW_DDS_COMMON_PUBLIC
bool
operator==(const rmw_gid_t & lhs, const rmw_gid_t & rhs);

/// Converts from rmw_gid_t to rmw_dds_common::msg::Gid
/**
 * For internal usage, both pointers are assumed to be valid.
 */
RMW_DDS_COMMON_PUBLIC
void
convert_gid_to_msg(
  const rmw_gid_t * gid,
  rmw_dds_common::msg::Gid * msg_gid);

/// Converts from rmw_dds_common::msg::Gid to rmw_gid_t
/**
 * For internal usage, both pointers are supposed to be valid.
 */
RMW_DDS_COMMON_PUBLIC
void
convert_msg_to_gid(
  const rmw_dds_common::msg::Gid * msg_gid,
  rmw_gid_t * gid);

}  // namespace rmw_dds_common

#endif  // RMW_DDS_COMMON__GID_UTILS_HPP_
