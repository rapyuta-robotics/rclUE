// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:srv/StepSimulation.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/srv/detail/step_simulation__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__StepSimulation__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x91, 0x3f, 0xe0, 0x65, 0x36, 0x90, 0xce, 0x6b,
      0xf8, 0xf0, 0x9f, 0x31, 0x6e, 0x6a, 0x62, 0x67,
      0x47, 0x01, 0x2e, 0x9f, 0xca, 0x31, 0xe2, 0x67,
      0x19, 0x91, 0x0d, 0x41, 0x7a, 0xa8, 0x56, 0x5c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__StepSimulation_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcd, 0xa3, 0x3f, 0x68, 0x87, 0x81, 0x5f, 0x3d,
      0xce, 0x0f, 0x90, 0xe6, 0x1f, 0xd8, 0xef, 0xd3,
      0x9b, 0xda, 0x13, 0xae, 0x26, 0x4d, 0xde, 0xde,
      0x15, 0xc3, 0x3f, 0xba, 0xd8, 0x90, 0x63, 0x0e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__StepSimulation_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5b, 0x4a, 0xcf, 0x2d, 0x0c, 0xe7, 0xc3, 0xfc,
      0x12, 0x5d, 0x0b, 0xef, 0x2a, 0xcb, 0x9b, 0x5a,
      0x81, 0x37, 0x7e, 0x80, 0xdb, 0x6b, 0x69, 0x6b,
      0x81, 0xbe, 0xef, 0xfb, 0x98, 0x24, 0xfb, 0x5c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__StepSimulation_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x17, 0x96, 0xfd, 0xa5, 0x4b, 0xa3, 0x81, 0xa5,
      0x6d, 0x32, 0xc1, 0x07, 0x84, 0xca, 0xbf, 0x78,
      0xe1, 0x4d, 0x6c, 0x8a, 0x19, 0x12, 0xa5, 0x15,
      0xa4, 0x7d, 0x65, 0x97, 0xad, 0x43, 0x1d, 0x90,
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

static char simulation_interfaces__srv__StepSimulation__TYPE_NAME[] = "simulation_interfaces/srv/StepSimulation";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char simulation_interfaces__msg__Result__TYPE_NAME[] = "simulation_interfaces/msg/Result";
static char simulation_interfaces__srv__StepSimulation_Event__TYPE_NAME[] = "simulation_interfaces/srv/StepSimulation_Event";
static char simulation_interfaces__srv__StepSimulation_Request__TYPE_NAME[] = "simulation_interfaces/srv/StepSimulation_Request";
static char simulation_interfaces__srv__StepSimulation_Response__TYPE_NAME[] = "simulation_interfaces/srv/StepSimulation_Response";

// Define type names, field names, and default values
static char simulation_interfaces__srv__StepSimulation__FIELD_NAME__request_message[] = "request_message";
static char simulation_interfaces__srv__StepSimulation__FIELD_NAME__response_message[] = "response_message";
static char simulation_interfaces__srv__StepSimulation__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__StepSimulation__FIELDS[] = {
  {
    {simulation_interfaces__srv__StepSimulation__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__StepSimulation_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__StepSimulation__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__StepSimulation_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__StepSimulation__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__StepSimulation_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__StepSimulation__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {simulation_interfaces__srv__StepSimulation_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__StepSimulation_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__StepSimulation_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__StepSimulation__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__StepSimulation__TYPE_NAME, 40, 40},
      {simulation_interfaces__srv__StepSimulation__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__StepSimulation__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = simulation_interfaces__srv__StepSimulation_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__srv__StepSimulation_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__srv__StepSimulation_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__StepSimulation_Request__FIELD_NAME__steps[] = "steps";
static char simulation_interfaces__srv__StepSimulation_Request__DEFAULT_VALUE__steps[] = "1";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__StepSimulation_Request__FIELDS[] = {
  {
    {simulation_interfaces__srv__StepSimulation_Request__FIELD_NAME__steps, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {simulation_interfaces__srv__StepSimulation_Request__DEFAULT_VALUE__steps, 1, 1},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__StepSimulation_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__StepSimulation_Request__TYPE_NAME, 48, 48},
      {simulation_interfaces__srv__StepSimulation_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__StepSimulation_Response__FIELD_NAME__result[] = "result";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__StepSimulation_Response__FIELDS[] = {
  {
    {simulation_interfaces__srv__StepSimulation_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__StepSimulation_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__StepSimulation_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__StepSimulation_Response__TYPE_NAME, 49, 49},
      {simulation_interfaces__srv__StepSimulation_Response__FIELDS, 1, 1},
    },
    {simulation_interfaces__srv__StepSimulation_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__StepSimulation_Event__FIELD_NAME__info[] = "info";
static char simulation_interfaces__srv__StepSimulation_Event__FIELD_NAME__request[] = "request";
static char simulation_interfaces__srv__StepSimulation_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__StepSimulation_Event__FIELDS[] = {
  {
    {simulation_interfaces__srv__StepSimulation_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__StepSimulation_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__StepSimulation_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__StepSimulation_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__StepSimulation_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__StepSimulation_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {simulation_interfaces__srv__StepSimulation_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__StepSimulation_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__StepSimulation_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__StepSimulation_Event__TYPE_NAME, 46, 46},
      {simulation_interfaces__srv__StepSimulation_Event__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__StepSimulation_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = simulation_interfaces__srv__StepSimulation_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__srv__StepSimulation_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Assuming the simulation is paused, simulate a finite number of steps and return to paused state.\n"
  "# The service only returns once stepping is complete, which might take considerable time.\n"
  "# There is an alternative in SimulateSteps action, which is worth considering for a multi-step interface.\n"
  "# Support for this interface is indicated through the STEP_SIMULATION_SINGLE and STEP_SIMULATION_MULTIPLE values\n"
  "# in GetSimulationFeatures, for steps = 1 and steps > 1 correspondingly.\n"
  "\n"
  "uint64 steps 1                      # Step through the simulation loop this many times.\n"
  "\n"
  "---\n"
  "\n"
  "Result result                       # Calling with simulation not paused will return RESULT_OPERATION_FAILED and error message.";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__StepSimulation__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__StepSimulation__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 704, 704},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__StepSimulation_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__StepSimulation_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__StepSimulation_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__StepSimulation_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__StepSimulation_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__StepSimulation_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__StepSimulation__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__StepSimulation__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__srv__StepSimulation_Event__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__srv__StepSimulation_Request__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__srv__StepSimulation_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__StepSimulation_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__StepSimulation_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__StepSimulation_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__StepSimulation_Response__get_individual_type_description_source(NULL),
    sources[1] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__StepSimulation_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__StepSimulation_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__srv__StepSimulation_Request__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__srv__StepSimulation_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
