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

#ifndef ROSIDL_GENERATOR_C__U16STRING_H_
#define ROSIDL_GENERATOR_C__U16STRING_H_

#include <stddef.h>

#include "rosidl_generator_c/primitives_sequence.h"

/// U16String struct
typedef struct rosidl_generator_c__U16String
{
  /// The pointer to the first character.
  uint_least16_t * data;  // using uint_least16_t to match a C++ std::u16string
  /// The length of the u16string (excluding the null byte).
  size_t size;
  /// The capacity represents the number of allocated characters (including the null byte).
  size_t capacity;
} rosidl_generator_c__U16String;

ROSIDL_GENERATOR_C__PRIMITIVE_SEQUENCE(U16String, rosidl_generator_c__U16String)

#endif  // ROSIDL_GENERATOR_C__U16STRING_H_
