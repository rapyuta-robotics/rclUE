// Copyright 2018 Apex.AI, Inc.
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
#ifndef RCL_YAML_PARAM_PARSER__TYPES_H_
#define RCL_YAML_PARAM_PARSER__TYPES_H_

#include "rcutils/allocator.h"
#include "rcutils/types/string_array.h"

/// \typedef rcl_bool_array_t
/// \brief Array of bool values
typedef struct rcl_bool_array_s
{
  bool * values;
  size_t size;
} rcl_bool_array_t;

/// \typedef rcl_int64_array_t
/// \brief Array of int64_t values
typedef struct rcl_int64_array_s
{
  int64_t * values;
  size_t size;
} rcl_int64_array_t;

/// \typedef rcl_double_array_t
/// \brief Array of double values
typedef struct rcl_double_array_s
{
  double * values;
  size_t size;
} rcl_double_array_t;

/// \typedef rcl_byte_array_t
/// \brief Array of byte values
typedef struct rcl_byte_array_s
{
  uint8_t * values;
  size_t size;
} rcl_byte_array_t;

/// \typedef rcl_variant_t
/// \brief variant_t stores the value of a parameter
/// Only one pointer in this struct will store the value
typedef struct rcl_variant_s
{
  bool * bool_value;  ///< If bool, gets stored here
  int64_t * integer_value;  ///< If integer, gets stored here
  double * double_value;  ///< If double, gets stored here
  char * string_value;  ///< If string, gets stored here
  rcl_byte_array_t * byte_array_value;  ///< If array of bytes
  rcl_bool_array_t * bool_array_value;  ///< If array of bool's
  rcl_int64_array_t * integer_array_value;  ///< If array of integers
  rcl_double_array_t * double_array_value;  ///< If array of doubles
  rcutils_string_array_t * string_array_value;  ///< If array of strings
} rcl_variant_t;

/// \typedef rcl_node_params_t
/// \brief node_params_t stores all the parameters(key:value) of a single node
typedef struct rcl_node_params_s
{
  char ** parameter_names;  ///< Array of parameter names (keys)
  rcl_variant_t * parameter_values;  ///< Array of coressponding parameter values
  size_t num_params;  ///< Number of parameters in the node
} rcl_node_params_t;

/// \typedef rcl_params_t
/// \brief params_t stores all the parameters of all nodes of a process
typedef struct rcl_params_s
{
  char ** node_names;  ///< List of names of the node
  rcl_node_params_t * params;  ///<  Array of parameters
  size_t num_nodes;       ///< Number of nodes
  rcutils_allocator_t allocator;  ///< Allocator used
} rcl_params_t;

#endif  // RCL_YAML_PARAM_PARSER__TYPES_H_
