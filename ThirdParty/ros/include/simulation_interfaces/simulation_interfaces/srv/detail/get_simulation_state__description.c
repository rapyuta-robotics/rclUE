// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:srv/GetSimulationState.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/srv/detail/get_simulation_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetSimulationState__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x33, 0x62, 0xdc, 0xeb, 0xee, 0x4b, 0x1a, 0xfe,
      0xbb, 0xf9, 0xc4, 0xbe, 0xee, 0x5c, 0x79, 0xc1,
      0x45, 0x53, 0x85, 0xad, 0xed, 0x62, 0x09, 0x2a,
      0x89, 0x2d, 0x61, 0xfd, 0xe8, 0x64, 0x4f, 0x30,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetSimulationState_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0xd6, 0x5b, 0xc5, 0xc0, 0xa9, 0x5c, 0xa2,
      0x88, 0x6b, 0xc5, 0x7f, 0x14, 0x6f, 0x80, 0x3e,
      0x01, 0x72, 0x2c, 0x84, 0xdd, 0xb5, 0xac, 0xd5,
      0xf3, 0x2a, 0x44, 0x17, 0xf5, 0x5e, 0xec, 0xfb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetSimulationState_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdc, 0x80, 0xce, 0x85, 0x2a, 0x5a, 0xb0, 0x4c,
      0x2b, 0x23, 0xcd, 0xd4, 0x79, 0x10, 0xce, 0xe1,
      0xbc, 0xc4, 0x6e, 0x0f, 0x19, 0x31, 0xca, 0xc8,
      0x58, 0x25, 0xe6, 0x91, 0x6b, 0x15, 0x51, 0x7f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetSimulationState_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x34, 0xcd, 0xb4, 0xf0, 0x69, 0x89, 0xaf, 0x23,
      0x5d, 0x34, 0x03, 0x65, 0x0b, 0xae, 0x19, 0x65,
      0x50, 0xa9, 0x28, 0x87, 0x0b, 0x69, 0x74, 0x08,
      0x99, 0xfa, 0xdc, 0x92, 0x28, 0x99, 0x74, 0x8f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "simulation_interfaces/msg/detail/simulation_state__functions.h"
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
static const rosidl_type_hash_t simulation_interfaces__msg__SimulationState__EXPECTED_HASH = {1, {
    0xbb, 0x9f, 0x87, 0xcc, 0xdd, 0x98, 0xfb, 0xa1,
    0x13, 0x05, 0x2a, 0x51, 0x2d, 0x98, 0x01, 0xe8,
    0x4c, 0xe7, 0x32, 0xd0, 0xa2, 0xb3, 0xc2, 0xb0,
    0xcb, 0x28, 0x18, 0x28, 0xde, 0x36, 0xe4, 0x15,
  }};
#endif

static char simulation_interfaces__srv__GetSimulationState__TYPE_NAME[] = "simulation_interfaces/srv/GetSimulationState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char simulation_interfaces__msg__Result__TYPE_NAME[] = "simulation_interfaces/msg/Result";
static char simulation_interfaces__msg__SimulationState__TYPE_NAME[] = "simulation_interfaces/msg/SimulationState";
static char simulation_interfaces__srv__GetSimulationState_Event__TYPE_NAME[] = "simulation_interfaces/srv/GetSimulationState_Event";
static char simulation_interfaces__srv__GetSimulationState_Request__TYPE_NAME[] = "simulation_interfaces/srv/GetSimulationState_Request";
static char simulation_interfaces__srv__GetSimulationState_Response__TYPE_NAME[] = "simulation_interfaces/srv/GetSimulationState_Response";

// Define type names, field names, and default values
static char simulation_interfaces__srv__GetSimulationState__FIELD_NAME__request_message[] = "request_message";
static char simulation_interfaces__srv__GetSimulationState__FIELD_NAME__response_message[] = "response_message";
static char simulation_interfaces__srv__GetSimulationState__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetSimulationState__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetSimulationState__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetSimulationState_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSimulationState__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetSimulationState_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSimulationState__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetSimulationState_Event__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetSimulationState__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {simulation_interfaces__msg__SimulationState__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSimulationState_Event__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSimulationState_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSimulationState_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetSimulationState__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetSimulationState__TYPE_NAME, 44, 44},
      {simulation_interfaces__srv__GetSimulationState__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetSimulationState__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__SimulationState__EXPECTED_HASH, simulation_interfaces__msg__SimulationState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = simulation_interfaces__msg__SimulationState__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__srv__GetSimulationState_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__srv__GetSimulationState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__srv__GetSimulationState_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetSimulationState_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetSimulationState_Request__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetSimulationState_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
simulation_interfaces__srv__GetSimulationState_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetSimulationState_Request__TYPE_NAME, 52, 52},
      {simulation_interfaces__srv__GetSimulationState_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetSimulationState_Response__FIELD_NAME__state[] = "state";
static char simulation_interfaces__srv__GetSimulationState_Response__FIELD_NAME__result[] = "result";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetSimulationState_Response__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetSimulationState_Response__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__SimulationState__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSimulationState_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetSimulationState_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__SimulationState__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetSimulationState_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetSimulationState_Response__TYPE_NAME, 53, 53},
      {simulation_interfaces__srv__GetSimulationState_Response__FIELDS, 2, 2},
    },
    {simulation_interfaces__srv__GetSimulationState_Response__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__SimulationState__EXPECTED_HASH, simulation_interfaces__msg__SimulationState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = simulation_interfaces__msg__SimulationState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetSimulationState_Event__FIELD_NAME__info[] = "info";
static char simulation_interfaces__srv__GetSimulationState_Event__FIELD_NAME__request[] = "request";
static char simulation_interfaces__srv__GetSimulationState_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetSimulationState_Event__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetSimulationState_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSimulationState_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetSimulationState_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSimulationState_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetSimulationState_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetSimulationState_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {simulation_interfaces__msg__SimulationState__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSimulationState_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSimulationState_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetSimulationState_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetSimulationState_Event__TYPE_NAME, 50, 50},
      {simulation_interfaces__srv__GetSimulationState_Event__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetSimulationState_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__SimulationState__EXPECTED_HASH, simulation_interfaces__msg__SimulationState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = simulation_interfaces__msg__SimulationState__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__srv__GetSimulationState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__srv__GetSimulationState_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Gets the simulation state (paused, playing, stopped)\n"
  "# Support for this interface is indicated through the SIMULATION_STATE_GETTING value in GetSimulationFeatures.\n"
  "\n"
  "---\n"
  "\n"
  "SimulationState state                      # Current state of the simulation.\n"
  "\n"
  "Result result";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetSimulationState__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetSimulationState__TYPE_NAME, 44, 44},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 265, 265},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetSimulationState_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetSimulationState_Request__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetSimulationState_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetSimulationState_Response__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetSimulationState_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetSimulationState_Event__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetSimulationState__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetSimulationState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__SimulationState__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__srv__GetSimulationState_Event__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__srv__GetSimulationState_Request__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__srv__GetSimulationState_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetSimulationState_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetSimulationState_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetSimulationState_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetSimulationState_Response__get_individual_type_description_source(NULL),
    sources[1] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[2] = *simulation_interfaces__msg__SimulationState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetSimulationState_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetSimulationState_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__SimulationState__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__srv__GetSimulationState_Request__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__srv__GetSimulationState_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
