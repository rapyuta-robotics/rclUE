// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:msg/EntityFilters.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/msg/detail/entity_filters__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__msg__EntityFilters__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8e, 0x7b, 0x12, 0xe8, 0xea, 0x06, 0x2f, 0x14,
      0xc5, 0x5d, 0xe4, 0x87, 0x72, 0x21, 0xfe, 0x1b,
      0x7c, 0xd9, 0x74, 0x96, 0x65, 0xa7, 0xad, 0x8a,
      0x4a, 0xb8, 0x55, 0xfc, 0x4b, 0x14, 0x83, 0x03,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "simulation_interfaces/msg/detail/entity_category__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "simulation_interfaces/msg/detail/tags_filter__functions.h"
#include "simulation_interfaces/msg/detail/bounds__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t simulation_interfaces__msg__Bounds__EXPECTED_HASH = {1, {
    0xe8, 0x62, 0x4f, 0xe5, 0x1f, 0x0f, 0x55, 0x48,
    0x19, 0x75, 0x42, 0x69, 0x7d, 0x92, 0x4c, 0x56,
    0x99, 0xac, 0x71, 0x98, 0xf1, 0xe4, 0xc6, 0x8e,
    0x50, 0xc3, 0xca, 0x2a, 0xf7, 0x3f, 0x5b, 0x3f,
  }};
static const rosidl_type_hash_t simulation_interfaces__msg__EntityCategory__EXPECTED_HASH = {1, {
    0x43, 0xbd, 0xf7, 0x93, 0x3f, 0xdd, 0xf7, 0x5f,
    0x69, 0x70, 0xf7, 0xa8, 0xfe, 0x70, 0x78, 0x52,
    0x43, 0x55, 0xd8, 0x21, 0xd3, 0x90, 0xb3, 0x95,
    0x4b, 0xb4, 0x6a, 0xc3, 0x6c, 0x03, 0xdf, 0xe1,
  }};
static const rosidl_type_hash_t simulation_interfaces__msg__TagsFilter__EXPECTED_HASH = {1, {
    0x5c, 0x3e, 0xfc, 0x51, 0xe8, 0xed, 0x04, 0xc2,
    0x66, 0xc0, 0x9c, 0xb4, 0x69, 0x1e, 0xc9, 0x5b,
    0x96, 0x4c, 0xd4, 0x10, 0x55, 0x8e, 0x01, 0xd8,
    0xc8, 0x36, 0x46, 0xb0, 0x38, 0x82, 0x6b, 0x45,
  }};
#endif

static char simulation_interfaces__msg__EntityFilters__TYPE_NAME[] = "simulation_interfaces/msg/EntityFilters";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char simulation_interfaces__msg__Bounds__TYPE_NAME[] = "simulation_interfaces/msg/Bounds";
static char simulation_interfaces__msg__EntityCategory__TYPE_NAME[] = "simulation_interfaces/msg/EntityCategory";
static char simulation_interfaces__msg__TagsFilter__TYPE_NAME[] = "simulation_interfaces/msg/TagsFilter";

// Define type names, field names, and default values
static char simulation_interfaces__msg__EntityFilters__FIELD_NAME__filter[] = "filter";
static char simulation_interfaces__msg__EntityFilters__FIELD_NAME__categories[] = "categories";
static char simulation_interfaces__msg__EntityFilters__FIELD_NAME__tags[] = "tags";
static char simulation_interfaces__msg__EntityFilters__FIELD_NAME__bounds[] = "bounds";

static rosidl_runtime_c__type_description__Field simulation_interfaces__msg__EntityFilters__FIELDS[] = {
  {
    {simulation_interfaces__msg__EntityFilters__FIELD_NAME__filter, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__EntityFilters__FIELD_NAME__categories, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {simulation_interfaces__msg__EntityCategory__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__EntityFilters__FIELD_NAME__tags, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__TagsFilter__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__EntityFilters__FIELD_NAME__bounds, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Bounds__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__msg__EntityFilters__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Bounds__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__EntityCategory__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__TagsFilter__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__msg__EntityFilters__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__msg__EntityFilters__TYPE_NAME, 39, 39},
      {simulation_interfaces__msg__EntityFilters__FIELDS, 4, 4},
    },
    {simulation_interfaces__msg__EntityFilters__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Bounds__EXPECTED_HASH, simulation_interfaces__msg__Bounds__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = simulation_interfaces__msg__Bounds__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__EntityCategory__EXPECTED_HASH, simulation_interfaces__msg__EntityCategory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = simulation_interfaces__msg__EntityCategory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__TagsFilter__EXPECTED_HASH, simulation_interfaces__msg__TagsFilter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = simulation_interfaces__msg__TagsFilter__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# A set of filters to apply to entity queries. See GetEntities, GetEntitiesStates.\n"
  "\n"
  "string filter                                       # Optional, defaults to empty. Return entities with matching names.\n"
  "                                                    # Entity names are matched with the filter regular expression.\n"
  "                                                    # An empty filter will result in all entities being returned.\n"
  "                                                    # The regular expression syntax is POSIX Extended,\n"
  "                                                    # see https://pubs.opengroup.org/onlinepubs/9799919799/ definitions.\n"
  "                                                    # Applies together with other filters (categories, tags).\n"
  "EntityCategory[] categories                         # Optional, defaults to empty, which means no category filter.\n"
  "                                                    # Entities matching any of the categories will be returned.\n"
  "                                                    # To get entity category, use GetEntityInfo.\n"
  "                                                    # Applies together with other filters (filter, tags).\n"
  "                                                    # Check ENTITY_CATEGORIES in GetSimulatorFeatures to determine if\n"
  "                                                    # your simulator supports entity categories.\n"
  "TagsFilter tags                                     # Tags filter to apply. To get entity tags, use GetEntityInfo.\n"
  "                                                    # Applies together with other filters (filter, categories).\n"
  "                                                    # Check support for this feature (ENTITY_TAGS) in GetSimulationFeatures.\n"
  "Bounds bounds                                       # if bounds are not empty, the overlap filter is applied\n"
  "                                                    # and entities overlapping with bounds will be returned.\n"
  "                                                    # Note that not all bound types might be supported by the simulator,\n"
  "                                                    # though at least TYPE_SPHERE needs to be supported.\n"
  "                                                    # Check ENTITY_BOUNDS_BOX and ENTITY_BOUNDS_CONVEX in GetSimulationFeatures\n"
  "                                                    # to determine whether your simulator supports other bound types.\n"
  "                                                    # If service is called with filter bounds set to an unsupported type,\n"
  "                                                    # a FEATURE_UNSUPPORTED result will be returned.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__msg__EntityFilters__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__msg__EntityFilters__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2677, 2677},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__msg__EntityFilters__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__msg__EntityFilters__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[2] = *simulation_interfaces__msg__Bounds__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__EntityCategory__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__TagsFilter__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
