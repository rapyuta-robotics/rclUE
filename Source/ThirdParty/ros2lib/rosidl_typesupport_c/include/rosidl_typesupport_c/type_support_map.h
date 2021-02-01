// Copyright 2016 Open Source Robotics Foundation, Inc.
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

#ifndef ROSIDL_TYPESUPPORT_C__TYPE_SUPPORT_MAP_H_
#define ROSIDL_TYPESUPPORT_C__TYPE_SUPPORT_MAP_H_

#include <cstddef>

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct type_support_map_t
{
  // TODO(dirk-thomas) const should not be defined for the fields
  // but should be set for the struct when it is being used
  // same for rosidl_message_type_support_t et al
  const size_t size;
  const char * package_name;
  const char * const * typesupport_identifier;
  const char * const * symbol_name;
  void ** data;
} type_support_map_t;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_TYPESUPPORT_C__TYPE_SUPPORT_MAP_H_
