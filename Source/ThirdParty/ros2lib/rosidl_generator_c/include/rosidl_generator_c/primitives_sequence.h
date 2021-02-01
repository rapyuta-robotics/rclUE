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

#ifndef ROSIDL_GENERATOR_C__PRIMITIVES_SEQUENCE_H_
#define ROSIDL_GENERATOR_C__PRIMITIVES_SEQUENCE_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(STRUCT_NAME, TYPE_NAME) \
  typedef struct rosidl_generator_c__ ## STRUCT_NAME ## __Sequence \
  { \
    TYPE_NAME * data; \
    size_t size; /*!< The number of valid items in data */ \
    size_t capacity; /*!< The number of allocated items in data */ \
  } rosidl_generator_c__ ## STRUCT_NAME ## __Sequence;

// sequence types for all basic types
ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(float, float)
ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(double, double)
ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(long_double, long double)
ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(char, signed char)
ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(wchar, uint16_t)
ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(boolean, bool)
ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(octet, uint8_t)
ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(uint8, uint8_t)
ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(int8, int8_t)
ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(uint16, uint16_t)
ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(int16, int16_t)
ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(uint32, uint32_t)
ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(int32, int32_t)
ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(uint64, uint64_t)
ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(int64, int64_t)

// emulate legacy API
typedef rosidl_generator_c__boolean__Sequence
  rosidl_generator_c__bool__Sequence;
typedef rosidl_generator_c__octet__Sequence
  rosidl_generator_c__byte__Sequence;
typedef rosidl_generator_c__float__Sequence
  rosidl_generator_c__float32__Sequence;
typedef rosidl_generator_c__double__Sequence
  rosidl_generator_c__float64__Sequence;

#endif  // ROSIDL_GENERATOR_C__PRIMITIVES_SEQUENCE_H_
