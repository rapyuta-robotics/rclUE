// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:msg/Result.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/msg/detail/result__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__msg__Result__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0x43, 0xa3, 0x06, 0xad, 0xff, 0x33, 0x37,
      0xa0, 0xa4, 0x71, 0x43, 0xd8, 0xf5, 0x68, 0x99,
      0x33, 0xbc, 0x70, 0xa3, 0x04, 0x78, 0xf1, 0x3b,
      0x07, 0x7d, 0xc1, 0xfe, 0x3b, 0xc5, 0xad, 0x17,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char simulation_interfaces__msg__Result__TYPE_NAME[] = "simulation_interfaces/msg/Result";

// Define type names, field names, and default values
static char simulation_interfaces__msg__Result__FIELD_NAME__result[] = "result";
static char simulation_interfaces__msg__Result__FIELD_NAME__error_message[] = "error_message";

static rosidl_runtime_c__type_description__Field simulation_interfaces__msg__Result__FIELDS[] = {
  {
    {simulation_interfaces__msg__Result__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Result__FIELD_NAME__error_message, 13, 13},
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
simulation_interfaces__msg__Result__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
      {simulation_interfaces__msg__Result__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Result code and message for service calls.\n"
  "# Note that additional results for specific services can defined within them using values above 100.\n"
  "\n"
  "uint8 RESULT_FEATURE_UNSUPPORTED   = 0    # Feature is not supported by the simulator, check GetSimulatorFeatures.\n"
  "                                          # While feature support can sometimes be deduced from presence of corresponding\n"
  "                                          # service / action interface, in other cases it is about supporting certain\n"
  "                                          # call parameters, formats and options within interface call.\n"
  "uint8 RESULT_OK                    = 1\n"
  "uint8 RESULT_NOT_FOUND             = 2    # No match for input (such as when entity name does not exist).\n"
  "uint8 RESULT_INCORRECT_STATE       = 3    # Simulator is in an incorrect state for this interface call, e.g. a service\n"
  "                                          # requires paused state but the simulator is not paused.\n"
  "uint8 RESULT_OPERATION_FAILED      = 4    # Request could not be completed successfully even though feature is supported\n"
  "                                          # and the input is correct; check error_message for details.\n"
  "                                          # Implementation rule: check extended codes for called service\n"
  "                                          #  (e.g. SpawnEntity) to provide a return code which is more specific.\n"
  "\n"
  "uint8 result                              # Result to be checked on return from service interface call\n"
  "string error_message                      # Additional error description when useful.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__msg__Result__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1601, 1601},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__msg__Result__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
