// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:srv/GetCurrentWorld.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/srv/detail/get_current_world__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetCurrentWorld__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0xed, 0x4e, 0x91, 0x0e, 0x1b, 0x7a, 0x1c,
      0x9f, 0x79, 0x50, 0xff, 0x75, 0x8b, 0xfb, 0xa3,
      0x53, 0x5b, 0xf0, 0xde, 0xc6, 0x69, 0x05, 0x4e,
      0x8a, 0xf1, 0x15, 0xa0, 0x99, 0x72, 0x4d, 0xdd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetCurrentWorld_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x41, 0x4a, 0xc6, 0xe1, 0xc5, 0xfd, 0x5f, 0x8b,
      0xe0, 0xb8, 0x28, 0xca, 0x7f, 0xf8, 0xcb, 0xee,
      0x71, 0x66, 0x29, 0x78, 0x09, 0xde, 0x31, 0xa3,
      0x61, 0x29, 0xf1, 0xd0, 0x91, 0x3c, 0xd8, 0x77,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetCurrentWorld_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x03, 0x9f, 0x99, 0xeb, 0x4e, 0x15, 0x6a, 0xc5,
      0x97, 0xef, 0xed, 0x75, 0x98, 0x24, 0x99, 0x21,
      0xf8, 0xe4, 0x7e, 0x5b, 0xff, 0x8c, 0x29, 0x9d,
      0x86, 0xab, 0x08, 0x19, 0x83, 0xa3, 0xa5, 0x2a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetCurrentWorld_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0x2c, 0x9e, 0x9d, 0xbb, 0x35, 0x20, 0x3e,
      0x71, 0xf7, 0x34, 0x41, 0x0d, 0x7b, 0x8c, 0x0e,
      0xc9, 0x4f, 0xa8, 0x19, 0x1f, 0xb0, 0x42, 0x87,
      0xa9, 0x36, 0xa7, 0x2d, 0xd7, 0x13, 0xd5, 0xc0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "simulation_interfaces/msg/detail/resource__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "simulation_interfaces/msg/detail/world_resource__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
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
static const rosidl_type_hash_t simulation_interfaces__msg__Resource__EXPECTED_HASH = {1, {
    0x2b, 0xb1, 0x93, 0x9c, 0xf8, 0x0f, 0x8d, 0x2f,
    0x28, 0x4a, 0xfb, 0xa5, 0x3c, 0xbe, 0xc6, 0x0b,
    0x5f, 0xf3, 0x37, 0x59, 0xbd, 0x39, 0xb7, 0x14,
    0x12, 0x8e, 0xa8, 0x86, 0x7a, 0x34, 0xc5, 0x1a,
  }};
static const rosidl_type_hash_t simulation_interfaces__msg__Result__EXPECTED_HASH = {1, {
    0xcf, 0x43, 0xa3, 0x06, 0xad, 0xff, 0x33, 0x37,
    0xa0, 0xa4, 0x71, 0x43, 0xd8, 0xf5, 0x68, 0x99,
    0x33, 0xbc, 0x70, 0xa3, 0x04, 0x78, 0xf1, 0x3b,
    0x07, 0x7d, 0xc1, 0xfe, 0x3b, 0xc5, 0xad, 0x17,
  }};
static const rosidl_type_hash_t simulation_interfaces__msg__WorldResource__EXPECTED_HASH = {1, {
    0xe3, 0xb6, 0x5e, 0xcf, 0x90, 0x4b, 0x9b, 0x11,
    0x56, 0x73, 0xe4, 0xa3, 0x43, 0xc6, 0xaa, 0x3d,
    0x28, 0xc1, 0x9e, 0x18, 0x5a, 0x71, 0x22, 0x8f,
    0xaa, 0x64, 0xb7, 0x83, 0xaf, 0xcf, 0x24, 0x03,
  }};
#endif

static char simulation_interfaces__srv__GetCurrentWorld__TYPE_NAME[] = "simulation_interfaces/srv/GetCurrentWorld";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char simulation_interfaces__msg__Resource__TYPE_NAME[] = "simulation_interfaces/msg/Resource";
static char simulation_interfaces__msg__Result__TYPE_NAME[] = "simulation_interfaces/msg/Result";
static char simulation_interfaces__msg__WorldResource__TYPE_NAME[] = "simulation_interfaces/msg/WorldResource";
static char simulation_interfaces__srv__GetCurrentWorld_Event__TYPE_NAME[] = "simulation_interfaces/srv/GetCurrentWorld_Event";
static char simulation_interfaces__srv__GetCurrentWorld_Request__TYPE_NAME[] = "simulation_interfaces/srv/GetCurrentWorld_Request";
static char simulation_interfaces__srv__GetCurrentWorld_Response__TYPE_NAME[] = "simulation_interfaces/srv/GetCurrentWorld_Response";

// Define type names, field names, and default values
static char simulation_interfaces__srv__GetCurrentWorld__FIELD_NAME__request_message[] = "request_message";
static char simulation_interfaces__srv__GetCurrentWorld__FIELD_NAME__response_message[] = "response_message";
static char simulation_interfaces__srv__GetCurrentWorld__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetCurrentWorld__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetCurrentWorld__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetCurrentWorld_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetCurrentWorld__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetCurrentWorld_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetCurrentWorld__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetCurrentWorld_Event__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetCurrentWorld__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Resource__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__WorldResource__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetCurrentWorld_Event__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetCurrentWorld_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetCurrentWorld_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetCurrentWorld__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetCurrentWorld__TYPE_NAME, 41, 41},
      {simulation_interfaces__srv__GetCurrentWorld__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetCurrentWorld__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Resource__EXPECTED_HASH, simulation_interfaces__msg__Resource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = simulation_interfaces__msg__Resource__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__WorldResource__EXPECTED_HASH, simulation_interfaces__msg__WorldResource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__msg__WorldResource__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__srv__GetCurrentWorld_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__srv__GetCurrentWorld_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = simulation_interfaces__srv__GetCurrentWorld_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetCurrentWorld_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetCurrentWorld_Request__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetCurrentWorld_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
simulation_interfaces__srv__GetCurrentWorld_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetCurrentWorld_Request__TYPE_NAME, 49, 49},
      {simulation_interfaces__srv__GetCurrentWorld_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetCurrentWorld_Response__FIELD_NAME__result[] = "result";
static char simulation_interfaces__srv__GetCurrentWorld_Response__FIELD_NAME__world[] = "world";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetCurrentWorld_Response__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetCurrentWorld_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetCurrentWorld_Response__FIELD_NAME__world, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__WorldResource__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetCurrentWorld_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {simulation_interfaces__msg__Resource__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__WorldResource__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetCurrentWorld_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetCurrentWorld_Response__TYPE_NAME, 50, 50},
      {simulation_interfaces__srv__GetCurrentWorld_Response__FIELDS, 2, 2},
    },
    {simulation_interfaces__srv__GetCurrentWorld_Response__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&simulation_interfaces__msg__Resource__EXPECTED_HASH, simulation_interfaces__msg__Resource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = simulation_interfaces__msg__Resource__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__WorldResource__EXPECTED_HASH, simulation_interfaces__msg__WorldResource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = simulation_interfaces__msg__WorldResource__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetCurrentWorld_Event__FIELD_NAME__info[] = "info";
static char simulation_interfaces__srv__GetCurrentWorld_Event__FIELD_NAME__request[] = "request";
static char simulation_interfaces__srv__GetCurrentWorld_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetCurrentWorld_Event__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetCurrentWorld_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetCurrentWorld_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetCurrentWorld_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetCurrentWorld_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetCurrentWorld_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetCurrentWorld_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Resource__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__WorldResource__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetCurrentWorld_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetCurrentWorld_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetCurrentWorld_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetCurrentWorld_Event__TYPE_NAME, 47, 47},
      {simulation_interfaces__srv__GetCurrentWorld_Event__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetCurrentWorld_Event__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Resource__EXPECTED_HASH, simulation_interfaces__msg__Resource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = simulation_interfaces__msg__Resource__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__WorldResource__EXPECTED_HASH, simulation_interfaces__msg__WorldResource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__msg__WorldResource__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__srv__GetCurrentWorld_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__srv__GetCurrentWorld_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Get information about the currently loaded world in the simulation.\n"
  "# Support for this interface is indicated through the WORLD_INFO_GETTING value in GetSimulatorFeatures.\n"
  "\n"
  "---\n"
  "\n"
  "uint8 NO_WORLD_LOADED = 101     # No world is loaded at the moment.\n"
  "\n"
  "Result result                   # Standard result message\n"
  "\n"
  "WorldResource world             # Information about the currently loaded world. Only valid if result is RESULT_OK.";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetCurrentWorld__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetCurrentWorld__TYPE_NAME, 41, 41},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 423, 423},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetCurrentWorld_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetCurrentWorld_Request__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetCurrentWorld_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetCurrentWorld_Response__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetCurrentWorld_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetCurrentWorld_Event__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetCurrentWorld__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetCurrentWorld__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__msg__WorldResource__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__srv__GetCurrentWorld_Event__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__srv__GetCurrentWorld_Request__get_individual_type_description_source(NULL);
    sources[8] = *simulation_interfaces__srv__GetCurrentWorld_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetCurrentWorld_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetCurrentWorld_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetCurrentWorld_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetCurrentWorld_Response__get_individual_type_description_source(NULL),
    sources[1] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    sources[2] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__WorldResource__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetCurrentWorld_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetCurrentWorld_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__msg__WorldResource__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__srv__GetCurrentWorld_Request__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__srv__GetCurrentWorld_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
