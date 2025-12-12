// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:srv/ResetSimulation.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/srv/detail/reset_simulation__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__ResetSimulation__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0xe2, 0x85, 0xd7, 0xff, 0x9b, 0x8a, 0xc7,
      0x0d, 0xcc, 0x95, 0x16, 0x1f, 0x32, 0xbf, 0x54,
      0xc0, 0x5a, 0x6f, 0x4b, 0x13, 0x42, 0x79, 0x90,
      0xe4, 0x1a, 0xb4, 0x0c, 0x36, 0xc3, 0x96, 0x46,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__ResetSimulation_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0x76, 0x6d, 0x09, 0xc3, 0xaa, 0x30, 0xf0,
      0x1f, 0xad, 0xc5, 0x5a, 0x42, 0xfd, 0x76, 0x0b,
      0x63, 0xdb, 0x35, 0x8c, 0x7d, 0x1d, 0x3b, 0x6a,
      0x64, 0xea, 0x99, 0x78, 0x22, 0x5f, 0xfb, 0xc7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__ResetSimulation_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0x84, 0x28, 0x12, 0x1e, 0x0f, 0x17, 0x55,
      0x72, 0x08, 0x78, 0xd3, 0xc2, 0x8f, 0x16, 0x88,
      0xda, 0x75, 0x81, 0xee, 0x5a, 0x5d, 0x56, 0xd2,
      0x6d, 0x10, 0xd9, 0x41, 0xa2, 0x8a, 0x50, 0xa0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__ResetSimulation_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0x7c, 0xbc, 0xb8, 0x86, 0xe4, 0x66, 0xab,
      0x23, 0x21, 0x6c, 0x70, 0x33, 0xf2, 0x5e, 0x85,
      0x34, 0xe5, 0x25, 0x5a, 0x73, 0x87, 0x79, 0x44,
      0x33, 0x8b, 0xb3, 0x01, 0xe7, 0xb2, 0x96, 0x26,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "simulation_interfaces/msg/detail/result__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t simulation_interfaces__msg__Result__EXPECTED_HASH = {1, {
    0xcf, 0x43, 0xa3, 0x06, 0xad, 0xff, 0x33, 0x37,
    0xa0, 0xa4, 0x71, 0x43, 0xd8, 0xf5, 0x68, 0x99,
    0x33, 0xbc, 0x70, 0xa3, 0x04, 0x78, 0xf1, 0x3b,
    0x07, 0x7d, 0xc1, 0xfe, 0x3b, 0xc5, 0xad, 0x17,
  }};
#endif

static char simulation_interfaces__srv__ResetSimulation__TYPE_NAME[] = "simulation_interfaces/srv/ResetSimulation";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char simulation_interfaces__msg__Result__TYPE_NAME[] = "simulation_interfaces/msg/Result";
static char simulation_interfaces__srv__ResetSimulation_Event__TYPE_NAME[] = "simulation_interfaces/srv/ResetSimulation_Event";
static char simulation_interfaces__srv__ResetSimulation_Request__TYPE_NAME[] = "simulation_interfaces/srv/ResetSimulation_Request";
static char simulation_interfaces__srv__ResetSimulation_Response__TYPE_NAME[] = "simulation_interfaces/srv/ResetSimulation_Response";

// Define type names, field names, and default values
static char simulation_interfaces__srv__ResetSimulation__FIELD_NAME__request_message[] = "request_message";
static char simulation_interfaces__srv__ResetSimulation__FIELD_NAME__response_message[] = "response_message";
static char simulation_interfaces__srv__ResetSimulation__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__ResetSimulation__FIELDS[] = {
  {
    {simulation_interfaces__srv__ResetSimulation__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__ResetSimulation_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__ResetSimulation__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__ResetSimulation_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__ResetSimulation__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__ResetSimulation_Event__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__ResetSimulation__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__ResetSimulation_Event__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__ResetSimulation_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__ResetSimulation_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__ResetSimulation__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__ResetSimulation__TYPE_NAME, 41, 41},
      {simulation_interfaces__srv__ResetSimulation__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__ResetSimulation__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = simulation_interfaces__srv__ResetSimulation_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__srv__ResetSimulation_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__srv__ResetSimulation_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__ResetSimulation_Request__FIELD_NAME__scope[] = "scope";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__ResetSimulation_Request__FIELDS[] = {
  {
    {simulation_interfaces__srv__ResetSimulation_Request__FIELD_NAME__scope, 5, 5},
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
simulation_interfaces__srv__ResetSimulation_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__ResetSimulation_Request__TYPE_NAME, 49, 49},
      {simulation_interfaces__srv__ResetSimulation_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__ResetSimulation_Response__FIELD_NAME__result[] = "result";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__ResetSimulation_Response__FIELDS[] = {
  {
    {simulation_interfaces__srv__ResetSimulation_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__ResetSimulation_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__ResetSimulation_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__ResetSimulation_Response__TYPE_NAME, 50, 50},
      {simulation_interfaces__srv__ResetSimulation_Response__FIELDS, 1, 1},
    },
    {simulation_interfaces__srv__ResetSimulation_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__ResetSimulation_Event__FIELD_NAME__info[] = "info";
static char simulation_interfaces__srv__ResetSimulation_Event__FIELD_NAME__request[] = "request";
static char simulation_interfaces__srv__ResetSimulation_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__ResetSimulation_Event__FIELDS[] = {
  {
    {simulation_interfaces__srv__ResetSimulation_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__ResetSimulation_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__ResetSimulation_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__ResetSimulation_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__ResetSimulation_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__ResetSimulation_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__ResetSimulation_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__ResetSimulation_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__ResetSimulation_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__ResetSimulation_Event__TYPE_NAME, 47, 47},
      {simulation_interfaces__srv__ResetSimulation_Event__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__ResetSimulation_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = simulation_interfaces__srv__ResetSimulation_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__srv__ResetSimulation_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Reset the simulation to the start, including the entire scene and the simulation time.\n"
  "# Objects that were dynamically spawned are de-spawned.\n"
  "# Support for this interface is indicated through the SIMULATION_RESET value in GetSimulationFeatures,\n"
  "# and supported scopes are further detailed by SIMULATION_RESET_TIME, SIMULATION_RESET_STATE, and SIMULATION_RESET_SPAWNED.\n"
  "\n"
  "uint8 SCOPE_DEFAULT       = 0             # same as SCOPE_ALL.\n"
  "uint8 SCOPE_TIME          = 1             # Reset simulation time to start.\n"
  "uint8 SCOPE_STATE         = 2             # Reset state such as poses and velocities. This may include state randomization\n"
  "                                          # if such feature is available and turned on.\n"
  "uint8 SCOPE_SPAWNED       = 4             # De-spawns all spawned entities.\n"
  "uint8 SCOPE_ALL           = 255           # Fully resets simulation to the start, as if it was closed and launched again.\n"
  "\n"
  "uint8 scope                               # Scope of the reset. Note that simulators might only support some scopes.\n"
  "                                          # This is a bit field which may be checked for each scope e.g. scope & SCOPE_TIME.\n"
  "\n"
  "---\n"
  "\n"
  "Result result";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__ResetSimulation__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__ResetSimulation__TYPE_NAME, 41, 41},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 1184, 1184},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__ResetSimulation_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__ResetSimulation_Request__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__ResetSimulation_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__ResetSimulation_Response__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__ResetSimulation_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__ResetSimulation_Event__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__ResetSimulation__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__ResetSimulation__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__srv__ResetSimulation_Event__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__srv__ResetSimulation_Request__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__srv__ResetSimulation_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__ResetSimulation_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__ResetSimulation_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__ResetSimulation_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__ResetSimulation_Response__get_individual_type_description_source(NULL),
    sources[1] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__ResetSimulation_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__ResetSimulation_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__srv__ResetSimulation_Request__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__srv__ResetSimulation_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
