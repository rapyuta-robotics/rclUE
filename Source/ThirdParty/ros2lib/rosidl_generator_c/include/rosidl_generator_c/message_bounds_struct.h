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

#ifndef ROSIDL_GENERATOR_C__MESSAGE_BOUNDS_STRUCT_H_
#define ROSIDL_GENERATOR_C__MESSAGE_BOUNDS_STRUCT_H_

#include "rosidl_generator_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct rosidl_message_bounds_t rosidl_message_bounds_t;

typedef const rosidl_message_bounds_t * (* rosidl_message_bounds_handle_function)(
  const rosidl_message_bounds_t *, const char *);

struct rosidl_message_bounds_t
{
  const char * typesupport_identifier;
  const void * data;
  rosidl_message_bounds_handle_function func;
};

ROSIDL_GENERATOR_C_PUBLIC
const rosidl_message_bounds_t * get_message_bounds_handle(
  const rosidl_message_bounds_t * handle, const char * identifier);

ROSIDL_GENERATOR_C_PUBLIC
const rosidl_message_bounds_t * get_message_bounds_handle_function(
  const rosidl_message_bounds_t * handle, const char * identifier);

#define ROSIDL_GET_MSG_BOUNDS(PkgName, MsgSubfolder, MsgName) \
  ROSIDL_BOUNDS_INTERFACE__MESSAGE_SYMBOL_NAME( \
    rosidl_typesupport_c, PkgName, MsgSubfolder, MsgName)()

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_C__MESSAGE_BOUNDS_STRUCT_H_
