// Copyright 2015-2018 Open Source Robotics Foundation, Inc.
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

#ifndef ROSIDL_GENERATOR_C__U16STRING_FUNCTIONS_H_
#define ROSIDL_GENERATOR_C__U16STRING_FUNCTIONS_H_

#include <stddef.h>

#include "rosidl_generator_c/u16string.h"
#include "rosidl_generator_c/visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

/// Initialize a rosidl_generator_c__U16String structure.
/* The contents of rosidl_generator_c__U16String are initialized to a single null character.
 * The string initially has size 0 and capacity 1.
 * Size represents the size of the contents of the string, while capacity represents the overall
 * storage of the string (counting the null terminator).
 * All strings must be null-terminated.
 */
ROSIDL_GENERATOR_C_PUBLIC
bool
rosidl_generator_c__U16String__init(rosidl_generator_c__U16String * str);

ROSIDL_GENERATOR_C_PUBLIC
void
rosidl_generator_c__U16String__fini(rosidl_generator_c__U16String * str);

ROSIDL_GENERATOR_C_PUBLIC
bool
rosidl_generator_c__U16String__assignn(
  rosidl_generator_c__U16String * str, const uint16_t * value, size_t n);

ROSIDL_GENERATOR_C_PUBLIC
bool
rosidl_generator_c__U16String__assignn_from_char(
  rosidl_generator_c__U16String * str, const char * value, size_t n);

ROSIDL_GENERATOR_C_PUBLIC
bool
rosidl_generator_c__U16String__assign(
  rosidl_generator_c__U16String * str, const uint16_t * value);

ROSIDL_GENERATOR_C_PUBLIC
size_t
rosidl_generator_c__U16String__len(const uint16_t * value);

ROSIDL_GENERATOR_C_PUBLIC
bool
rosidl_generator_c__U16String__resize(
  rosidl_generator_c__U16String * str, size_t n);

ROSIDL_GENERATOR_C_PUBLIC
bool
rosidl_generator_c__U16String__Sequence__init(
  rosidl_generator_c__U16String__Sequence * sequence, size_t size);

ROSIDL_GENERATOR_C_PUBLIC
void
rosidl_generator_c__U16String__Sequence__fini(
  rosidl_generator_c__U16String__Sequence * sequence);

ROSIDL_GENERATOR_C_PUBLIC
rosidl_generator_c__U16String__Sequence *
rosidl_generator_c__U16String__Sequence__create(size_t size);

ROSIDL_GENERATOR_C_PUBLIC
void
rosidl_generator_c__U16String__Sequence__destroy(
  rosidl_generator_c__U16String__Sequence * sequence);

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_C__U16STRING_FUNCTIONS_H_
