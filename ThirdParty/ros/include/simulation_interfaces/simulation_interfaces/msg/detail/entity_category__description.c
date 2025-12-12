// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:msg/EntityCategory.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/msg/detail/entity_category__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__msg__EntityCategory__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x43, 0xbd, 0xf7, 0x93, 0x3f, 0xdd, 0xf7, 0x5f,
      0x69, 0x70, 0xf7, 0xa8, 0xfe, 0x70, 0x78, 0x52,
      0x43, 0x55, 0xd8, 0x21, 0xd3, 0x90, 0xb3, 0x95,
      0x4b, 0xb4, 0x6a, 0xc3, 0x6c, 0x03, 0xdf, 0xe1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char simulation_interfaces__msg__EntityCategory__TYPE_NAME[] = "simulation_interfaces/msg/EntityCategory";

// Define type names, field names, and default values
static char simulation_interfaces__msg__EntityCategory__FIELD_NAME__category[] = "category";

static rosidl_runtime_c__type_description__Field simulation_interfaces__msg__EntityCategory__FIELDS[] = {
  {
    {simulation_interfaces__msg__EntityCategory__FIELD_NAME__category, 8, 8},
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
simulation_interfaces__msg__EntityCategory__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__msg__EntityCategory__TYPE_NAME, 40, 40},
      {simulation_interfaces__msg__EntityCategory__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Entity major category, which often warrants a specific way to handle such entity, e.g. when handling humans\n"
  "# or mapping persistence for dynamic vs static objects.\n"
  "\n"
  "uint8 CATEGORY_OBJECT         = 0    # Generic or unspecified type.\n"
  "uint8 CATEGORY_ROBOT          = 1    # A broad category for mobile robots, arms, drones etc.,\n"
  "                                     # usually with ROS 2 interfaces.\n"
  "uint8 CATEGORY_HUMAN          = 2    # Simulated humans, e.g. pedestrians, warehouse workers.\n"
  "                                     # Compared to CATEGORY_DYNAMIC_OBJECT, humans are often expected to be treated\n"
  "                                     # exceptionally in regards to safety constraints.\n"
  "uint8 CATEGORY_DYNAMIC_OBJECT = 4    # Vehicles, animals, mobile obstacles, typically to present a detection and\n"
  "                                     # tracking challenge, such as when simulation is used to test robot perception\n"
  "                                     # or navigation stack.\n"
  "uint8 CATEGORY_STATIC_OBJECT  = 5    # Any object which is static, e.g. not supposed to change its pose\n"
  "                                     # unless by means of SetEntityState.\n"
  "\n"
  "uint8 category";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__msg__EntityCategory__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__msg__EntityCategory__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1178, 1178},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__msg__EntityCategory__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__msg__EntityCategory__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
