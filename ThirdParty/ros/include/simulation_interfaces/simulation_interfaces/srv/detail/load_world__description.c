// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:srv/LoadWorld.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/srv/detail/load_world__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__LoadWorld__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x87, 0xd0, 0xde, 0xd1, 0xbf, 0xdd, 0xb4, 0x0a,
      0x74, 0xd0, 0xbe, 0xdb, 0x96, 0x3f, 0xdd, 0x59,
      0x2f, 0xbe, 0xdb, 0x14, 0xd0, 0x05, 0x7d, 0x59,
      0x78, 0x50, 0x40, 0x4b, 0x73, 0xc3, 0x38, 0xaf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__LoadWorld_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcd, 0x38, 0x94, 0x02, 0xa6, 0x80, 0x70, 0x3d,
      0x3f, 0x9b, 0x45, 0xb1, 0xc3, 0xd6, 0xbb, 0x09,
      0xc0, 0x57, 0x8b, 0x46, 0x44, 0x65, 0x42, 0x27,
      0xf0, 0xb2, 0xe9, 0x8a, 0x2f, 0x05, 0x9f, 0x48,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__LoadWorld_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7b, 0xab, 0x32, 0x65, 0xc2, 0x46, 0x1d, 0x98,
      0xa4, 0x4d, 0xd0, 0x48, 0x30, 0xc5, 0xdc, 0x99,
      0x7b, 0x3d, 0x86, 0x05, 0xc5, 0x08, 0x61, 0x82,
      0x40, 0x66, 0x24, 0x6c, 0x96, 0xa7, 0x71, 0x6e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__LoadWorld_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0xba, 0x99, 0xd8, 0xd9, 0xa6, 0x92, 0x6f,
      0xea, 0x68, 0x61, 0x00, 0xb4, 0x93, 0x11, 0x0d,
      0x95, 0xfd, 0x11, 0xd8, 0xca, 0x57, 0x7e, 0x2b,
      0xd1, 0xcf, 0xf2, 0x49, 0x06, 0x29, 0x97, 0xa3,
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

static char simulation_interfaces__srv__LoadWorld__TYPE_NAME[] = "simulation_interfaces/srv/LoadWorld";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char simulation_interfaces__msg__Resource__TYPE_NAME[] = "simulation_interfaces/msg/Resource";
static char simulation_interfaces__msg__Result__TYPE_NAME[] = "simulation_interfaces/msg/Result";
static char simulation_interfaces__msg__WorldResource__TYPE_NAME[] = "simulation_interfaces/msg/WorldResource";
static char simulation_interfaces__srv__LoadWorld_Event__TYPE_NAME[] = "simulation_interfaces/srv/LoadWorld_Event";
static char simulation_interfaces__srv__LoadWorld_Request__TYPE_NAME[] = "simulation_interfaces/srv/LoadWorld_Request";
static char simulation_interfaces__srv__LoadWorld_Response__TYPE_NAME[] = "simulation_interfaces/srv/LoadWorld_Response";

// Define type names, field names, and default values
static char simulation_interfaces__srv__LoadWorld__FIELD_NAME__request_message[] = "request_message";
static char simulation_interfaces__srv__LoadWorld__FIELD_NAME__response_message[] = "response_message";
static char simulation_interfaces__srv__LoadWorld__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__LoadWorld__FIELDS[] = {
  {
    {simulation_interfaces__srv__LoadWorld__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__LoadWorld_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__LoadWorld__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__LoadWorld_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__LoadWorld__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__LoadWorld_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__LoadWorld__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {simulation_interfaces__srv__LoadWorld_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__LoadWorld_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__LoadWorld_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__LoadWorld__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__LoadWorld__TYPE_NAME, 35, 35},
      {simulation_interfaces__srv__LoadWorld__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__LoadWorld__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
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
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__srv__LoadWorld_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__srv__LoadWorld_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = simulation_interfaces__srv__LoadWorld_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__LoadWorld_Request__FIELD_NAME__world_resource[] = "world_resource";
static char simulation_interfaces__srv__LoadWorld_Request__FIELD_NAME__fail_on_unsupported_element[] = "fail_on_unsupported_element";
static char simulation_interfaces__srv__LoadWorld_Request__FIELD_NAME__ignore_missing_or_unsupported_assets[] = "ignore_missing_or_unsupported_assets";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__LoadWorld_Request__FIELDS[] = {
  {
    {simulation_interfaces__srv__LoadWorld_Request__FIELD_NAME__world_resource, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Resource__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__LoadWorld_Request__FIELD_NAME__fail_on_unsupported_element, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__LoadWorld_Request__FIELD_NAME__ignore_missing_or_unsupported_assets, 36, 36},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__LoadWorld_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {simulation_interfaces__msg__Resource__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__LoadWorld_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__LoadWorld_Request__TYPE_NAME, 43, 43},
      {simulation_interfaces__srv__LoadWorld_Request__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__LoadWorld_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&simulation_interfaces__msg__Resource__EXPECTED_HASH, simulation_interfaces__msg__Resource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = simulation_interfaces__msg__Resource__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__LoadWorld_Response__FIELD_NAME__result[] = "result";
static char simulation_interfaces__srv__LoadWorld_Response__FIELD_NAME__world[] = "world";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__LoadWorld_Response__FIELDS[] = {
  {
    {simulation_interfaces__srv__LoadWorld_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__LoadWorld_Response__FIELD_NAME__world, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__WorldResource__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__LoadWorld_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
simulation_interfaces__srv__LoadWorld_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__LoadWorld_Response__TYPE_NAME, 44, 44},
      {simulation_interfaces__srv__LoadWorld_Response__FIELDS, 2, 2},
    },
    {simulation_interfaces__srv__LoadWorld_Response__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
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
static char simulation_interfaces__srv__LoadWorld_Event__FIELD_NAME__info[] = "info";
static char simulation_interfaces__srv__LoadWorld_Event__FIELD_NAME__request[] = "request";
static char simulation_interfaces__srv__LoadWorld_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__LoadWorld_Event__FIELDS[] = {
  {
    {simulation_interfaces__srv__LoadWorld_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__LoadWorld_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__LoadWorld_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__LoadWorld_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__LoadWorld_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__LoadWorld_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {simulation_interfaces__srv__LoadWorld_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__LoadWorld_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__LoadWorld_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__LoadWorld_Event__TYPE_NAME, 41, 41},
      {simulation_interfaces__srv__LoadWorld_Event__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__LoadWorld_Event__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
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
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__srv__LoadWorld_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__srv__LoadWorld_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Load a simulation world from a file or resource.\n"
  "# This means clearing the current scene (removing all entities), loading the new world and setting the simulation to the stopped state.\n"
  "# Support for this interface is indicated through the WORLD_LOADING value in GetSimulatorFeatures.\n"
  "# resource_string field support is indicated through the WORLD_RESOURCE_STRING value in GetSimulatorFeatures.\n"
  "# Currently loaded worlds will be unloaded before attempting to load a new one.\n"
  "# Any previously spawned entities will be removed. Once a world is loaded, simulation will be left in a Stopped state.\n"
  "\n"
  "Resource world_resource                     # Resource such as SDF, USD, MJCF, or other simulator-native format world file or,\n"
  "                                            # Simulation world passed as a string. \n"
  "\n"
  "bool fail_on_unsupported_element            # Fail on unsupported elements (such as SDFormat sub-tags). By default, such elements are ignored.\n"
  "\n"
  "\n"
  "bool ignore_missing_or_unsupported_assets   # Ignore missing or unsupported assets. By default, missing or unsupported assets result in failure.\n"
  "\n"
  "---\n"
  "\n"
  "uint8 UNSUPPORTED_FORMAT = 101              # Format for uri or resource string is unsupported.\n"
  "uint8 NO_RESOURCE = 102                     # Both uri and resource string are empty.\n"
  "uint8 RESOURCE_PARSE_ERROR = 103            # Resource file or string failed to parse.\n"
  "uint8 MISSING_ASSETS = 104                  # At least one of resource assets (such as meshes) was not found.\n"
  "uint8 UNSUPPORTED_ASSETS = 105              # At least one of resource assets (such as meshes) is not supported.\n"
  "uint8 UNSUPPORTED_ELEMENTS = 106            # At least one of world definition elements such as format tags is unsupported.\n"
  "\n"
  "\n"
  "Result result                               # Standard result message\n"
  "\n"
  "WorldResource world                         # Information about the loaded world. Only valid if result is RESULT_OK.";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__LoadWorld__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__LoadWorld__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 1910, 1910},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__LoadWorld_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__LoadWorld_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__LoadWorld_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__LoadWorld_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__LoadWorld_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__LoadWorld_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__LoadWorld__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__LoadWorld__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__msg__WorldResource__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__srv__LoadWorld_Event__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__srv__LoadWorld_Request__get_individual_type_description_source(NULL);
    sources[8] = *simulation_interfaces__srv__LoadWorld_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__LoadWorld_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__LoadWorld_Request__get_individual_type_description_source(NULL),
    sources[1] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__LoadWorld_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__LoadWorld_Response__get_individual_type_description_source(NULL),
    sources[1] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    sources[2] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__WorldResource__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__LoadWorld_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__LoadWorld_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__msg__WorldResource__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__srv__LoadWorld_Request__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__srv__LoadWorld_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
