// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:srv/GetSpawnables.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/srv/detail/get_spawnables__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetSpawnables__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3e, 0x25, 0xfd, 0x82, 0x7d, 0x8b, 0xcb, 0xd9,
      0xdb, 0x5e, 0x36, 0xcc, 0xb1, 0x90, 0xef, 0xa2,
      0x2d, 0x6f, 0x63, 0x13, 0x89, 0x78, 0x61, 0x26,
      0x8a, 0xb9, 0x23, 0xbf, 0x09, 0x1a, 0x99, 0x2a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetSpawnables_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3e, 0x1d, 0x15, 0x77, 0x44, 0x6a, 0x80, 0xda,
      0x95, 0x6d, 0xb3, 0xe8, 0x23, 0x63, 0xc2, 0xd6,
      0x63, 0x64, 0xf9, 0x80, 0x2f, 0x6e, 0x95, 0x72,
      0xd8, 0x94, 0x97, 0x93, 0x32, 0x07, 0xd9, 0x21,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetSpawnables_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0x61, 0xfd, 0x74, 0x1c, 0x42, 0x9d, 0x6b,
      0xc6, 0x89, 0x51, 0x4b, 0x7b, 0xfc, 0x65, 0xbb,
      0x15, 0x18, 0x12, 0x69, 0x61, 0x31, 0x7a, 0xcc,
      0x6e, 0x41, 0x4a, 0x84, 0x1d, 0xc4, 0x3d, 0xaa,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetSpawnables_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0x15, 0x8c, 0x8b, 0x3a, 0x4b, 0x30, 0x20,
      0x9c, 0x30, 0xf9, 0x19, 0x6f, 0x06, 0xec, 0x53,
      0x85, 0xd7, 0x9c, 0x89, 0x80, 0xa3, 0x14, 0xb7,
      0x03, 0xe6, 0xfe, 0xbd, 0x94, 0xf2, 0x68, 0xf3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "simulation_interfaces/msg/detail/bounds__functions.h"
#include "simulation_interfaces/msg/detail/resource__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "simulation_interfaces/msg/detail/spawnable__functions.h"
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
static const rosidl_type_hash_t simulation_interfaces__msg__Spawnable__EXPECTED_HASH = {1, {
    0x86, 0x75, 0xaa, 0x68, 0x6f, 0x0d, 0xf1, 0xed,
    0x78, 0x74, 0xa6, 0xec, 0x21, 0x0f, 0xdc, 0xe1,
    0xac, 0x1c, 0x07, 0xf4, 0xe4, 0x9f, 0xc2, 0x6e,
    0xc7, 0xfb, 0x6f, 0xe7, 0x29, 0xf6, 0x77, 0x2e,
  }};
#endif

static char simulation_interfaces__srv__GetSpawnables__TYPE_NAME[] = "simulation_interfaces/srv/GetSpawnables";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char simulation_interfaces__msg__Bounds__TYPE_NAME[] = "simulation_interfaces/msg/Bounds";
static char simulation_interfaces__msg__Resource__TYPE_NAME[] = "simulation_interfaces/msg/Resource";
static char simulation_interfaces__msg__Result__TYPE_NAME[] = "simulation_interfaces/msg/Result";
static char simulation_interfaces__msg__Spawnable__TYPE_NAME[] = "simulation_interfaces/msg/Spawnable";
static char simulation_interfaces__srv__GetSpawnables_Event__TYPE_NAME[] = "simulation_interfaces/srv/GetSpawnables_Event";
static char simulation_interfaces__srv__GetSpawnables_Request__TYPE_NAME[] = "simulation_interfaces/srv/GetSpawnables_Request";
static char simulation_interfaces__srv__GetSpawnables_Response__TYPE_NAME[] = "simulation_interfaces/srv/GetSpawnables_Response";

// Define type names, field names, and default values
static char simulation_interfaces__srv__GetSpawnables__FIELD_NAME__request_message[] = "request_message";
static char simulation_interfaces__srv__GetSpawnables__FIELD_NAME__response_message[] = "response_message";
static char simulation_interfaces__srv__GetSpawnables__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetSpawnables__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetSpawnables__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetSpawnables_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSpawnables__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetSpawnables_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSpawnables__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetSpawnables_Event__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetSpawnables__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {simulation_interfaces__msg__Resource__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Spawnable__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSpawnables_Event__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSpawnables_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSpawnables_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetSpawnables__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetSpawnables__TYPE_NAME, 39, 39},
      {simulation_interfaces__srv__GetSpawnables__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetSpawnables__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
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
    assert(0 == memcmp(&simulation_interfaces__msg__Resource__EXPECTED_HASH, simulation_interfaces__msg__Resource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__msg__Resource__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Spawnable__EXPECTED_HASH, simulation_interfaces__msg__Spawnable__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__msg__Spawnable__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = simulation_interfaces__srv__GetSpawnables_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = simulation_interfaces__srv__GetSpawnables_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[9].fields = simulation_interfaces__srv__GetSpawnables_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetSpawnables_Request__FIELD_NAME__sources[] = "sources";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetSpawnables_Request__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetSpawnables_Request__FIELD_NAME__sources, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetSpawnables_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetSpawnables_Request__TYPE_NAME, 47, 47},
      {simulation_interfaces__srv__GetSpawnables_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetSpawnables_Response__FIELD_NAME__result[] = "result";
static char simulation_interfaces__srv__GetSpawnables_Response__FIELD_NAME__spawnables[] = "spawnables";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetSpawnables_Response__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetSpawnables_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSpawnables_Response__FIELD_NAME__spawnables, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {simulation_interfaces__msg__Spawnable__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetSpawnables_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Bounds__TYPE_NAME, 32, 32},
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
    {simulation_interfaces__msg__Spawnable__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetSpawnables_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetSpawnables_Response__TYPE_NAME, 48, 48},
      {simulation_interfaces__srv__GetSpawnables_Response__FIELDS, 2, 2},
    },
    {simulation_interfaces__srv__GetSpawnables_Response__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Bounds__EXPECTED_HASH, simulation_interfaces__msg__Bounds__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = simulation_interfaces__msg__Bounds__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Resource__EXPECTED_HASH, simulation_interfaces__msg__Resource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = simulation_interfaces__msg__Resource__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Spawnable__EXPECTED_HASH, simulation_interfaces__msg__Spawnable__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__msg__Spawnable__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetSpawnables_Event__FIELD_NAME__info[] = "info";
static char simulation_interfaces__srv__GetSpawnables_Event__FIELD_NAME__request[] = "request";
static char simulation_interfaces__srv__GetSpawnables_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetSpawnables_Event__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetSpawnables_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSpawnables_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetSpawnables_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSpawnables_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetSpawnables_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetSpawnables_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {simulation_interfaces__msg__Resource__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Spawnable__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSpawnables_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetSpawnables_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetSpawnables_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetSpawnables_Event__TYPE_NAME, 45, 45},
      {simulation_interfaces__srv__GetSpawnables_Event__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetSpawnables_Event__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
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
    assert(0 == memcmp(&simulation_interfaces__msg__Resource__EXPECTED_HASH, simulation_interfaces__msg__Resource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__msg__Resource__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Spawnable__EXPECTED_HASH, simulation_interfaces__msg__Spawnable__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__msg__Spawnable__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = simulation_interfaces__srv__GetSpawnables_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = simulation_interfaces__srv__GetSpawnables_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Return a list of resources which are valid as SpawnEntity uri fields (e.g. visible to or registered in simulator).\n"
  "# This interface is an optional extension and might not be implemented by your simulator, check the result_code.\n"
  "# Support for this interface is indicated through the SPAWNABLES value in GetSimulationFeatures.\n"
  "\n"
  "string[] sources                                    # Optional field for additional sources (local or remote) to search.\n"
  "                                                    # By default, each simulator has visibility of spawnables through\n"
  "                                                    # some mechanisms, e.g. a set of paths, registered assets etc.\n"
  "                                                    # Since the simulator cannot possibly look everywhere,\n"
  "                                                    # this field allows the user to specify additional sources.\n"
  "                                                    # Unrecognized values are listed as such in the result.error_message,\n"
  "                                                    # but do not hinder success of the response.\n"
  "                                                    # Sources may include subcategories and be simulator-specific.\n"
  "\n"
  "---\n"
  "\n"
  "Result result\n"
  "Spawnable[] spawnables                              # Spawnable objects with URI and additional information.";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetSpawnables__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetSpawnables__TYPE_NAME, 39, 39},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 1364, 1364},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetSpawnables_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetSpawnables_Request__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetSpawnables_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetSpawnables_Response__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetSpawnables_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetSpawnables_Event__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetSpawnables__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetSpawnables__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__Bounds__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__msg__Spawnable__get_individual_type_description_source(NULL);
    sources[8] = *simulation_interfaces__srv__GetSpawnables_Event__get_individual_type_description_source(NULL);
    sources[9] = *simulation_interfaces__srv__GetSpawnables_Request__get_individual_type_description_source(NULL);
    sources[10] = *simulation_interfaces__srv__GetSpawnables_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetSpawnables_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetSpawnables_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetSpawnables_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetSpawnables_Response__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[2] = *simulation_interfaces__msg__Bounds__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__msg__Spawnable__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetSpawnables_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetSpawnables_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__Bounds__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__msg__Spawnable__get_individual_type_description_source(NULL);
    sources[8] = *simulation_interfaces__srv__GetSpawnables_Request__get_individual_type_description_source(NULL);
    sources[9] = *simulation_interfaces__srv__GetSpawnables_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
