// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:msg/EntityInfo.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/msg/detail/entity_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__msg__EntityInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3b, 0x9a, 0x2e, 0x7f, 0xa0, 0x0f, 0x9a, 0x59,
      0xd3, 0x25, 0xb6, 0xe4, 0x79, 0x04, 0x04, 0x4c,
      0x42, 0x15, 0x61, 0xa3, 0x85, 0x68, 0x20, 0x27,
      0xc7, 0xfc, 0x06, 0xc3, 0x59, 0x80, 0x63, 0x19,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "simulation_interfaces/msg/detail/entity_category__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t simulation_interfaces__msg__EntityCategory__EXPECTED_HASH = {1, {
    0x43, 0xbd, 0xf7, 0x93, 0x3f, 0xdd, 0xf7, 0x5f,
    0x69, 0x70, 0xf7, 0xa8, 0xfe, 0x70, 0x78, 0x52,
    0x43, 0x55, 0xd8, 0x21, 0xd3, 0x90, 0xb3, 0x95,
    0x4b, 0xb4, 0x6a, 0xc3, 0x6c, 0x03, 0xdf, 0xe1,
  }};
#endif

static char simulation_interfaces__msg__EntityInfo__TYPE_NAME[] = "simulation_interfaces/msg/EntityInfo";
static char simulation_interfaces__msg__EntityCategory__TYPE_NAME[] = "simulation_interfaces/msg/EntityCategory";

// Define type names, field names, and default values
static char simulation_interfaces__msg__EntityInfo__FIELD_NAME__category[] = "category";
static char simulation_interfaces__msg__EntityInfo__FIELD_NAME__description[] = "description";
static char simulation_interfaces__msg__EntityInfo__FIELD_NAME__tags[] = "tags";

static rosidl_runtime_c__type_description__Field simulation_interfaces__msg__EntityInfo__FIELDS[] = {
  {
    {simulation_interfaces__msg__EntityInfo__FIELD_NAME__category, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__EntityCategory__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__EntityInfo__FIELD_NAME__description, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__EntityInfo__FIELD_NAME__tags, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__msg__EntityInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {simulation_interfaces__msg__EntityCategory__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__msg__EntityInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__msg__EntityInfo__TYPE_NAME, 36, 36},
      {simulation_interfaces__msg__EntityInfo__FIELDS, 3, 3},
    },
    {simulation_interfaces__msg__EntityInfo__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&simulation_interfaces__msg__EntityCategory__EXPECTED_HASH, simulation_interfaces__msg__EntityCategory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = simulation_interfaces__msg__EntityCategory__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Entity type and additional information\n"
  "\n"
  "EntityCategory category     # Major category for the entity. Extra entity type distinction can be made through tags.\n"
  "string description          # optional: verbose, human-readable description of the entity.\n"
  "string[] tags               # optional: tags which are useful for filtering and categorizing entities further.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__msg__EntityInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__msg__EntityInfo__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 361, 361},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__msg__EntityInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__msg__EntityInfo__get_individual_type_description_source(NULL),
    sources[1] = *simulation_interfaces__msg__EntityCategory__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
