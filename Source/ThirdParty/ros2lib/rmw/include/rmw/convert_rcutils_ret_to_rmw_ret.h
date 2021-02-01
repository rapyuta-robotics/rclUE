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

#ifndef RMW__CONVERT_RCUTILS_RET_TO_RMW_RET_H_
#define RMW__CONVERT_RCUTILS_RET_TO_RMW_RET_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "rcutils/types.h"
#include "rmw/macros.h"
#include "rmw/types.h"
#include "rmw/visibility_control.h"

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_convert_rcutils_ret_to_rmw_ret(rcutils_ret_t rcutils_ret);

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // RMW__CONVERT_RCUTILS_RET_TO_RMW_RET_H_
