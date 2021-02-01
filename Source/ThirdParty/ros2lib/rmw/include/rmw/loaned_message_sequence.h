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

#ifndef RMW__LOANED_MESSAGE_SEQUENCE_H_
#define RMW__LOANED_MESSAGE_SEQUENCE_H_

#include <stddef.h>

#include "rmw/macros.h"
#include "rmw/visibility_control.h"

#if __cplusplus
extern "C"
{
#endif

typedef struct RMW_PUBLIC_TYPE rmw_loaned_message_sequence_t
{
  void * message_sequence;
  size_t size;
  size_t capacity;
} rmw_loaned_message_sequence_t;

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_loaned_message_sequence_t
rmw_get_zero_initialized_loaned_message_sequence(void);

#if __cplusplus
}
#endif

#endif  // RMW__LOANED_MESSAGE_SEQUENCE_H_
