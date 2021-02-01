// Copyright 2018 Open Source Robotics Foundation, Inc.
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

#ifndef RMW__SERIALIZED_MESSAGE_H_
#define RMW__SERIALIZED_MESSAGE_H_

#if __cplusplus
extern "C"
{
#endif

#include "rcutils/types/uint8_array.h"

// aliases for rcutils_uint8_array_t
/*
 * For now this is a simple aliasing from a serialized message to a uint8 array.
 * However, in future developments this serialized message can become something
 * more complex and is therefore aliased.
 */
typedef rcutils_uint8_array_t rmw_serialized_message_t;
#define rmw_get_zero_initialized_serialized_message rcutils_get_zero_initialized_uint8_array
#define rmw_serialized_message_init rcutils_uint8_array_init
#define rmw_serialized_message_fini rcutils_uint8_array_fini
#define rmw_serialized_message_resize rcutils_uint8_array_resize

#if __cplusplus
}
#endif

#endif  // RMW__SERIALIZED_MESSAGE_H_
