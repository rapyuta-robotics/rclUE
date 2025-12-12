// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:msg/Resource.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/msg/detail/resource__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__msg__Resource__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0xb1, 0x93, 0x9c, 0xf8, 0x0f, 0x8d, 0x2f,
      0x28, 0x4a, 0xfb, 0xa5, 0x3c, 0xbe, 0xc6, 0x0b,
      0x5f, 0xf3, 0x37, 0x59, 0xbd, 0x39, 0xb7, 0x14,
      0x12, 0x8e, 0xa8, 0x86, 0x7a, 0x34, 0xc5, 0x1a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char simulation_interfaces__msg__Resource__TYPE_NAME[] = "simulation_interfaces/msg/Resource";

// Define type names, field names, and default values
static char simulation_interfaces__msg__Resource__FIELD_NAME__uri[] = "uri";
static char simulation_interfaces__msg__Resource__FIELD_NAME__resource_string[] = "resource_string";

static rosidl_runtime_c__type_description__Field simulation_interfaces__msg__Resource__FIELDS[] = {
  {
    {simulation_interfaces__msg__Resource__FIELD_NAME__uri, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Resource__FIELD_NAME__resource_string, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__msg__Resource__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__msg__Resource__TYPE_NAME, 34, 34},
      {simulation_interfaces__msg__Resource__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is used to specify a resource, either by a URI or by its string content.\n"
  "\n"
  "string uri              # If uri field is empty, resource_string must not be empty.\n"
  "\n"
  "string resource_string  # An entity definition file passed as a string, only used if uri is empty.\n"
  "                        # If uri field is not empty, resource_string field will be ignored.\n"
  "                        # Simulators may support spawning from a file generated on the fly (e.g. XACRO).";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__msg__Resource__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__msg__Resource__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 469, 469},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__msg__Resource__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
