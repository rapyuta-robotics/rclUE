// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:msg/TagsFilter.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/msg/detail/tags_filter__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__msg__TagsFilter__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0x3e, 0xfc, 0x51, 0xe8, 0xed, 0x04, 0xc2,
      0x66, 0xc0, 0x9c, 0xb4, 0x69, 0x1e, 0xc9, 0x5b,
      0x96, 0x4c, 0xd4, 0x10, 0x55, 0x8e, 0x01, 0xd8,
      0xc8, 0x36, 0x46, 0xb0, 0x38, 0x82, 0x6b, 0x45,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char simulation_interfaces__msg__TagsFilter__TYPE_NAME[] = "simulation_interfaces/msg/TagsFilter";

// Define type names, field names, and default values
static char simulation_interfaces__msg__TagsFilter__FIELD_NAME__tags[] = "tags";
static char simulation_interfaces__msg__TagsFilter__FIELD_NAME__filter_mode[] = "filter_mode";

static rosidl_runtime_c__type_description__Field simulation_interfaces__msg__TagsFilter__FIELDS[] = {
  {
    {simulation_interfaces__msg__TagsFilter__FIELD_NAME__tags, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__TagsFilter__FIELD_NAME__filter_mode, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__msg__TagsFilter__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__msg__TagsFilter__TYPE_NAME, 36, 36},
      {simulation_interfaces__msg__TagsFilter__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# An utility message type for specification of tag-based filtering\n"
  "\n"
  "string[] tags                           # Optional, defaults to empty, which means no tags filter.\n"
  "                                        # Results matching any or all of tags will be returned, depending\n"
  "                                        # on tags_filter_mode.\n"
  "\n"
  "uint8 FILTER_MODE_ANY    = 0            # Filter with OR mode (any tag can match).\n"
  "uint8 FILTER_MODE_ALL    = 1            # Filter with AND mode (all tags need to match).\n"
  "\n"
  "uint8 filter_mode                       # Set to control filter application for tags.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__msg__TagsFilter__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__msg__TagsFilter__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 596, 596},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__msg__TagsFilter__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__msg__TagsFilter__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
