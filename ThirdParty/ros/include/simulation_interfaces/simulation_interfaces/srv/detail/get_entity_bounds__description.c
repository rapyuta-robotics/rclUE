// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:srv/GetEntityBounds.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/srv/detail/get_entity_bounds__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetEntityBounds__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x17, 0xbe, 0x8d, 0x36, 0x23, 0x11, 0x78, 0xa5,
      0xee, 0xd0, 0xde, 0x03, 0x44, 0xb5, 0x5c, 0x19,
      0x97, 0x55, 0x81, 0x62, 0x7a, 0x9a, 0xec, 0x30,
      0xa4, 0xfe, 0xe9, 0x92, 0x6a, 0x35, 0xde, 0xed,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetEntityBounds_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x41, 0x76, 0x6a, 0xfd, 0x48, 0x1a, 0xbf, 0xa0,
      0x3a, 0x9d, 0xfa, 0xce, 0x86, 0xa4, 0x87, 0xe3,
      0x17, 0xda, 0x51, 0x63, 0x33, 0xaf, 0x3f, 0x5b,
      0x01, 0x7d, 0xf2, 0x48, 0xdd, 0x5d, 0x7f, 0xee,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetEntityBounds_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0x8d, 0x41, 0x4a, 0x3b, 0xe6, 0xd7, 0x68,
      0x9f, 0xad, 0x9d, 0x32, 0x18, 0xc8, 0x37, 0x8c,
      0x68, 0xfb, 0xe0, 0x8c, 0x2c, 0xfb, 0xf9, 0x87,
      0x8a, 0xc1, 0x4d, 0xe7, 0x13, 0xfc, 0xf4, 0xc1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetEntityBounds_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0x52, 0x56, 0x54, 0xc3, 0xc1, 0x27, 0x1d,
      0xa0, 0x6c, 0xe9, 0x76, 0xdd, 0x1a, 0xb7, 0x29,
      0x20, 0xfb, 0xe3, 0x87, 0x97, 0x68, 0xc4, 0xb5,
      0x3f, 0x10, 0x74, 0xb9, 0xb9, 0x8f, 0x05, 0xbb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "simulation_interfaces/msg/detail/bounds__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
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
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t simulation_interfaces__msg__Bounds__EXPECTED_HASH = {1, {
    0xe8, 0x62, 0x4f, 0xe5, 0x1f, 0x0f, 0x55, 0x48,
    0x19, 0x75, 0x42, 0x69, 0x7d, 0x92, 0x4c, 0x56,
    0x99, 0xac, 0x71, 0x98, 0xf1, 0xe4, 0xc6, 0x8e,
    0x50, 0xc3, 0xca, 0x2a, 0xf7, 0x3f, 0x5b, 0x3f,
  }};
static const rosidl_type_hash_t simulation_interfaces__msg__Result__EXPECTED_HASH = {1, {
    0xcf, 0x43, 0xa3, 0x06, 0xad, 0xff, 0x33, 0x37,
    0xa0, 0xa4, 0x71, 0x43, 0xd8, 0xf5, 0x68, 0x99,
    0x33, 0xbc, 0x70, 0xa3, 0x04, 0x78, 0xf1, 0x3b,
    0x07, 0x7d, 0xc1, 0xfe, 0x3b, 0xc5, 0xad, 0x17,
  }};
#endif

static char simulation_interfaces__srv__GetEntityBounds__TYPE_NAME[] = "simulation_interfaces/srv/GetEntityBounds";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char simulation_interfaces__msg__Bounds__TYPE_NAME[] = "simulation_interfaces/msg/Bounds";
static char simulation_interfaces__msg__Result__TYPE_NAME[] = "simulation_interfaces/msg/Result";
static char simulation_interfaces__srv__GetEntityBounds_Event__TYPE_NAME[] = "simulation_interfaces/srv/GetEntityBounds_Event";
static char simulation_interfaces__srv__GetEntityBounds_Request__TYPE_NAME[] = "simulation_interfaces/srv/GetEntityBounds_Request";
static char simulation_interfaces__srv__GetEntityBounds_Response__TYPE_NAME[] = "simulation_interfaces/srv/GetEntityBounds_Response";

// Define type names, field names, and default values
static char simulation_interfaces__srv__GetEntityBounds__FIELD_NAME__request_message[] = "request_message";
static char simulation_interfaces__srv__GetEntityBounds__FIELD_NAME__response_message[] = "response_message";
static char simulation_interfaces__srv__GetEntityBounds__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetEntityBounds__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetEntityBounds__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetEntityBounds_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntityBounds__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetEntityBounds_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntityBounds__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetEntityBounds_Event__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetEntityBounds__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Bounds__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntityBounds_Event__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntityBounds_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntityBounds_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetEntityBounds__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetEntityBounds__TYPE_NAME, 41, 41},
      {simulation_interfaces__srv__GetEntityBounds__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetEntityBounds__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Bounds__EXPECTED_HASH, simulation_interfaces__msg__Bounds__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = simulation_interfaces__msg__Bounds__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__srv__GetEntityBounds_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__srv__GetEntityBounds_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = simulation_interfaces__srv__GetEntityBounds_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetEntityBounds_Request__FIELD_NAME__entity[] = "entity";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetEntityBounds_Request__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetEntityBounds_Request__FIELD_NAME__entity, 6, 6},
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
simulation_interfaces__srv__GetEntityBounds_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetEntityBounds_Request__TYPE_NAME, 49, 49},
      {simulation_interfaces__srv__GetEntityBounds_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetEntityBounds_Response__FIELD_NAME__result[] = "result";
static char simulation_interfaces__srv__GetEntityBounds_Response__FIELD_NAME__bounds[] = "bounds";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetEntityBounds_Response__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetEntityBounds_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntityBounds_Response__FIELD_NAME__bounds, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Bounds__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetEntityBounds_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Bounds__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetEntityBounds_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetEntityBounds_Response__TYPE_NAME, 50, 50},
      {simulation_interfaces__srv__GetEntityBounds_Response__FIELDS, 2, 2},
    },
    {simulation_interfaces__srv__GetEntityBounds_Response__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Bounds__EXPECTED_HASH, simulation_interfaces__msg__Bounds__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = simulation_interfaces__msg__Bounds__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetEntityBounds_Event__FIELD_NAME__info[] = "info";
static char simulation_interfaces__srv__GetEntityBounds_Event__FIELD_NAME__request[] = "request";
static char simulation_interfaces__srv__GetEntityBounds_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetEntityBounds_Event__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetEntityBounds_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntityBounds_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetEntityBounds_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntityBounds_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetEntityBounds_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetEntityBounds_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Bounds__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntityBounds_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntityBounds_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetEntityBounds_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetEntityBounds_Event__TYPE_NAME, 47, 47},
      {simulation_interfaces__srv__GetEntityBounds_Event__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetEntityBounds_Event__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Bounds__EXPECTED_HASH, simulation_interfaces__msg__Bounds__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = simulation_interfaces__msg__Bounds__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__srv__GetEntityBounds_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__srv__GetEntityBounds_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Get geometrical bounds for entity. This feature is available if GetSimulatorFeatures includes ENTITY_BOUNDS feature.\n"
  "# Support for this interface is indicated through the ENTITY_BOUNDS value in GetSimulationFeatures.\n"
  "\n"
  "string entity                         # Entity identified by its unique name as returned by GetEntities / SpawnEntity.\n"
  "\n"
  "---\n"
  "\n"
  "Result result\n"
  "Bounds bounds                         # Entity bounds. Only valid if result.result_code is OK.\n"
  "                                      # Bounds with TYPE_BOX should be returned, unless there is a configuration\n"
  "                                      # parameter for the simulator to control the type and it is set otherwise.";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetEntityBounds__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetEntityBounds__TYPE_NAME, 41, 41},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 680, 680},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetEntityBounds_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetEntityBounds_Request__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetEntityBounds_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetEntityBounds_Response__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetEntityBounds_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetEntityBounds_Event__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetEntityBounds__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetEntityBounds__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__Bounds__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__srv__GetEntityBounds_Event__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__srv__GetEntityBounds_Request__get_individual_type_description_source(NULL);
    sources[8] = *simulation_interfaces__srv__GetEntityBounds_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetEntityBounds_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetEntityBounds_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetEntityBounds_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetEntityBounds_Response__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[2] = *simulation_interfaces__msg__Bounds__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetEntityBounds_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetEntityBounds_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__Bounds__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__srv__GetEntityBounds_Request__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__srv__GetEntityBounds_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
