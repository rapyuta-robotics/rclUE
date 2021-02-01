// Copyright 2015 Open Source Robotics Foundation, Inc.
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

#ifndef ROSIDL_GENERATOR_C__PRIMITIVES_SEQUENCE_FUNCTIONS_H_
#define ROSIDL_GENERATOR_C__PRIMITIVES_SEQUENCE_FUNCTIONS_H_

#include <stdbool.h>
#include <stddef.h>

#include "rosidl_generator_c/primitives_sequence.h"
#include "rosidl_generator_c/visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(STRUCT_NAME, TYPE_NAME) \
  ROSIDL_GENERATOR_C_PUBLIC \
  bool rosidl_generator_c__ ## STRUCT_NAME ## __Sequence__init( \
    rosidl_generator_c__ ## STRUCT_NAME ## __Sequence * sequence, size_t size); \
 \
  ROSIDL_GENERATOR_C_PUBLIC \
  void rosidl_generator_c__ ## STRUCT_NAME ## __Sequence__fini( \
    rosidl_generator_c__ ## STRUCT_NAME ## __Sequence * sequence);

// array functions for all basic types
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(float, float)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(double, double)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(long_double, long double)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(char, signed char)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(wchar, uint16_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(boolean, bool)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(octet, uint8_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(uint8, uint8_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(int8, int8_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(uint16, uint16_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(int16, int16_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(uint32, uint32_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(int32, int32_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(uint64, uint64_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_SEQUENCE_FUNCTIONS(int64, int64_t)

// emulate legacy API
ROSIDL_GENERATOR_C_PUBLIC
bool rosidl_generator_c__bool__Sequence__init(
  rosidl_generator_c__boolean__Sequence * sequence, size_t size);
ROSIDL_GENERATOR_C_PUBLIC
void rosidl_generator_c__bool__Sequence__fini(
  rosidl_generator_c__boolean__Sequence * sequence);

ROSIDL_GENERATOR_C_PUBLIC
bool rosidl_generator_c__byte__Sequence__init(
  rosidl_generator_c__octet__Sequence * sequence, size_t size);
ROSIDL_GENERATOR_C_PUBLIC
void rosidl_generator_c__byte__Sequence__fini(
  rosidl_generator_c__octet__Sequence * sequence);

ROSIDL_GENERATOR_C_PUBLIC
bool rosidl_generator_c__float32__Sequence__init(
  rosidl_generator_c__float__Sequence * sequence, size_t size);
ROSIDL_GENERATOR_C_PUBLIC
void rosidl_generator_c__float32__Sequence__fini(
  rosidl_generator_c__float__Sequence * sequence);

ROSIDL_GENERATOR_C_PUBLIC
bool rosidl_generator_c__float64__Sequence__init(
  rosidl_generator_c__double__Sequence * sequence, size_t size);
ROSIDL_GENERATOR_C_PUBLIC
void rosidl_generator_c__float64__Sequence__fini(
  rosidl_generator_c__double__Sequence * sequence);

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_C__PRIMITIVES_SEQUENCE_FUNCTIONS_H_
