// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:msg/Bounds.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/msg/detail/bounds__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__msg__Bounds__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe8, 0x62, 0x4f, 0xe5, 0x1f, 0x0f, 0x55, 0x48,
      0x19, 0x75, 0x42, 0x69, 0x7d, 0x92, 0x4c, 0x56,
      0x99, 0xac, 0x71, 0x98, 0xf1, 0xe4, 0xc6, 0x8e,
      0x50, 0xc3, 0xca, 0x2a, 0xf7, 0x3f, 0x5b, 0x3f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
#endif

static char simulation_interfaces__msg__Bounds__TYPE_NAME[] = "simulation_interfaces/msg/Bounds";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char simulation_interfaces__msg__Bounds__FIELD_NAME__type[] = "type";
static char simulation_interfaces__msg__Bounds__FIELD_NAME__points[] = "points";

static rosidl_runtime_c__type_description__Field simulation_interfaces__msg__Bounds__FIELDS[] = {
  {
    {simulation_interfaces__msg__Bounds__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Bounds__FIELD_NAME__points, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__msg__Bounds__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__msg__Bounds__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__msg__Bounds__TYPE_NAME, 32, 32},
      {simulation_interfaces__msg__Bounds__FIELDS, 2, 2},
    },
    {simulation_interfaces__msg__Bounds__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Bounds which are useful in several contexts, e.g. to avoid spawning with other object overlap,\n"
  "# or parking in a spot that is too small.\n"
  "# Certain goals or points might be valid for a small object, but not suitable for a large one,\n"
  "# or a differently shaped one.\n"
  "# Bounds can be also checked to ensure certain scenario conditions are met.\n"
  "# For entities, these limits are relative to entity's canonical link transform, following ROS rep-103 convention.\n"
  "\n"
  "# As bounds are optional in most interfaces, TYPE_EMPTY signifies empty bounds, to be understood as \"unbounded\".\n"
  "# Otherwise, the fields are expected to define a valid volume.\n"
  "# For spawning with a named pose, you should check whether the entity simulation model fits within the bounds\n"
  "# before calling SpawnEntity, to avoid overlaps and unstable behavior.\n"
  "\n"
  "# bounds type\n"
  "uint8 TYPE_EMPTY         = 0      # No bounds. The points vector will be empty.\n"
  "uint8 TYPE_BOX           = 1      # Axis-aligned bounding box, points field should have two values,\n"
  "                                  # which are upper right and lower left corners of the box.\n"
  "uint8 TYPE_CONVEX_HULL   = 2      # Points define a convex hull (at least 3 non-collinear points).\n"
  "uint8 TYPE_SPHERE        = 3      # A sphere with center and radius. First element of points vector is the center.\n"
  "                                  # The x field of the second point of the vector is the radius (y and z are ignored).\n"
  "\n"
  "\n"
  "uint8 type\n"
  "geometry_msgs/Vector3[] points           # Points defining the bounded area. Check type field to determine semantics.\n"
  "                                         # Valid sizes are zero (no bounds), 2 (sphere or box, depending on type field),\n"
  "                                         # and 3 or more (convex hull).";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__msg__Bounds__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__msg__Bounds__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1758, 1758},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__msg__Bounds__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__msg__Bounds__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
