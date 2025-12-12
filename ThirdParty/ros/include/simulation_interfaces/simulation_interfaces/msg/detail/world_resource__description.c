// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:msg/WorldResource.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/msg/detail/world_resource__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__msg__WorldResource__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0xb6, 0x5e, 0xcf, 0x90, 0x4b, 0x9b, 0x11,
      0x56, 0x73, 0xe4, 0xa3, 0x43, 0xc6, 0xaa, 0x3d,
      0x28, 0xc1, 0x9e, 0x18, 0x5a, 0x71, 0x22, 0x8f,
      0xaa, 0x64, 0xb7, 0x83, 0xaf, 0xcf, 0x24, 0x03,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "simulation_interfaces/msg/detail/resource__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t simulation_interfaces__msg__Resource__EXPECTED_HASH = {1, {
    0x2b, 0xb1, 0x93, 0x9c, 0xf8, 0x0f, 0x8d, 0x2f,
    0x28, 0x4a, 0xfb, 0xa5, 0x3c, 0xbe, 0xc6, 0x0b,
    0x5f, 0xf3, 0x37, 0x59, 0xbd, 0x39, 0xb7, 0x14,
    0x12, 0x8e, 0xa8, 0x86, 0x7a, 0x34, 0xc5, 0x1a,
  }};
#endif

static char simulation_interfaces__msg__WorldResource__TYPE_NAME[] = "simulation_interfaces/msg/WorldResource";
static char simulation_interfaces__msg__Resource__TYPE_NAME[] = "simulation_interfaces/msg/Resource";

// Define type names, field names, and default values
static char simulation_interfaces__msg__WorldResource__FIELD_NAME__name[] = "name";
static char simulation_interfaces__msg__WorldResource__FIELD_NAME__world_resource[] = "world_resource";
static char simulation_interfaces__msg__WorldResource__FIELD_NAME__description[] = "description";
static char simulation_interfaces__msg__WorldResource__FIELD_NAME__tags[] = "tags";

static rosidl_runtime_c__type_description__Field simulation_interfaces__msg__WorldResource__FIELDS[] = {
  {
    {simulation_interfaces__msg__WorldResource__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__WorldResource__FIELD_NAME__world_resource, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Resource__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__WorldResource__FIELD_NAME__description, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__WorldResource__FIELD_NAME__tags, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__msg__WorldResource__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {simulation_interfaces__msg__Resource__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__msg__WorldResource__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__msg__WorldResource__TYPE_NAME, 39, 39},
      {simulation_interfaces__msg__WorldResource__FIELDS, 4, 4},
    },
    {simulation_interfaces__msg__WorldResource__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&simulation_interfaces__msg__Resource__EXPECTED_HASH, simulation_interfaces__msg__Resource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = simulation_interfaces__msg__Resource__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# World is a virtual environment in which the simulation happens.\n"
  "# Worlds are also known as scenes or levels in some simulators.\n"
  "# Depending on the world format, loading of a world might be associated with changes\n"
  "# in certain parameters, including physics settings such as gravity.\n"
  "# World resources may be defined in standard or simulation-specific formats,\n"
  "# and, depending on the simulator, loaded from local or remote repositories.\n"
  "\n"
  "\n"
  "string name                               # World name, which is not necessarily unique.\n"
  "\n"
  "Resource world_resource                   # The resource for the world to be loaded.\n"
  "\n"
  "string description                        # Optional custom description of the world\n"
  "\n"
  "string[] tags                             # Optional tags describing the world (e.g., \"indoor\", \"outdoor\", \"warehouse\")";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__msg__WorldResource__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__msg__WorldResource__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 822, 822},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__msg__WorldResource__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__msg__WorldResource__get_individual_type_description_source(NULL),
    sources[1] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
