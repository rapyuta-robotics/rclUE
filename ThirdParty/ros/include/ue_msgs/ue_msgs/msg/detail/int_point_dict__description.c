// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ue_msgs:msg/IntPointDict.idl
// generated code does not contain a copyright notice

#include "ue_msgs/msg/detail/int_point_dict__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
const rosidl_type_hash_t *
ue_msgs__msg__IntPointDict__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x61, 0xbf, 0xc3, 0x68, 0xab, 0xfd, 0xc3, 0x40,
      0xe6, 0xf7, 0x18, 0x80, 0x4c, 0x48, 0x6d, 0x60,
      0x6a, 0xe1, 0x1e, 0xdf, 0x71, 0x4b, 0x90, 0xf7,
      0x13, 0x29, 0xf0, 0x18, 0x78, 0x3d, 0xb8, 0x06,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "ue_msgs/msg/detail/int_point_entry__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
static const rosidl_type_hash_t ue_msgs__msg__IntPointEntry__EXPECTED_HASH = {1, {
    0x38, 0x0e, 0xe2, 0xe7, 0xc2, 0x0d, 0x7b, 0x4a,
    0xa2, 0x64, 0x71, 0x8c, 0x4a, 0x60, 0x04, 0x81,
    0x62, 0x95, 0x16, 0xdf, 0x1a, 0x1d, 0x06, 0xcd,
    0xe1, 0xe0, 0xb6, 0x3b, 0x30, 0xcc, 0xd0, 0xd8,
  }};
#endif

static char ue_msgs__msg__IntPointDict__TYPE_NAME[] = "ue_msgs/msg/IntPointDict";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char ue_msgs__msg__IntPointEntry__TYPE_NAME[] = "ue_msgs/msg/IntPointEntry";

// Define type names, field names, and default values
static char ue_msgs__msg__IntPointDict__FIELD_NAME__header[] = "header";
static char ue_msgs__msg__IntPointDict__FIELD_NAME__entries[] = "entries";

static rosidl_runtime_c__type_description__Field ue_msgs__msg__IntPointDict__FIELDS[] = {
  {
    {ue_msgs__msg__IntPointDict__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {ue_msgs__msg__IntPointDict__FIELD_NAME__entries, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ue_msgs__msg__IntPointEntry__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ue_msgs__msg__IntPointDict__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {ue_msgs__msg__IntPointEntry__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ue_msgs__msg__IntPointDict__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ue_msgs__msg__IntPointDict__TYPE_NAME, 24, 24},
      {ue_msgs__msg__IntPointDict__FIELDS, 2, 2},
    },
    {ue_msgs__msg__IntPointDict__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ue_msgs__msg__IntPointEntry__EXPECTED_HASH, ue_msgs__msg__IntPointEntry__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = ue_msgs__msg__IntPointEntry__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Dictionary message using array of IntPointEntry\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "# Array of key-value entries\n"
  "IntPointEntry[] entries";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ue_msgs__msg__IntPointDict__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ue_msgs__msg__IntPointDict__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 128, 128},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ue_msgs__msg__IntPointDict__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ue_msgs__msg__IntPointDict__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[4] = *ue_msgs__msg__IntPointEntry__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
