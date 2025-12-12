// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:srv/GetAvailableWorlds.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/srv/detail/get_available_worlds__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetAvailableWorlds__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xce, 0x55, 0x89, 0xb5, 0x52, 0x3f, 0x27, 0x32,
      0xd1, 0x96, 0x9a, 0x3c, 0x5a, 0x7e, 0x6b, 0x17,
      0xa3, 0x87, 0x09, 0x1d, 0xf8, 0x19, 0x0c, 0x62,
      0xf7, 0x8d, 0x7f, 0xdd, 0x11, 0x09, 0xe3, 0xe3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetAvailableWorlds_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0x35, 0x18, 0x0e, 0x35, 0x03, 0x8b, 0xa6,
      0x2e, 0xb2, 0xba, 0xe3, 0xd1, 0xc1, 0xba, 0xcd,
      0x4b, 0x77, 0x91, 0x20, 0x91, 0x37, 0xea, 0xcb,
      0xdd, 0xfe, 0xe1, 0x26, 0x29, 0xbf, 0x6c, 0x3a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetAvailableWorlds_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0xe9, 0x8a, 0x15, 0x47, 0xf1, 0x85, 0x2f,
      0xd6, 0xd9, 0x5f, 0x79, 0x4a, 0xe4, 0xba, 0xe8,
      0xb1, 0xd9, 0x7b, 0x9c, 0xfa, 0x83, 0xea, 0x22,
      0xb8, 0x0f, 0x63, 0x49, 0x99, 0x23, 0x4a, 0x18,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetAvailableWorlds_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd3, 0xdd, 0xd4, 0xce, 0xf8, 0x45, 0xa1, 0xd6,
      0xfb, 0xe4, 0x02, 0xa3, 0x76, 0x96, 0x3b, 0x1f,
      0xbc, 0xed, 0xd0, 0x66, 0xfd, 0xd9, 0xb7, 0xaf,
      0xcc, 0xd3, 0x2f, 0xac, 0x73, 0xec, 0x91, 0x35,
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
#include "simulation_interfaces/msg/detail/tags_filter__functions.h"
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
static const rosidl_type_hash_t simulation_interfaces__msg__TagsFilter__EXPECTED_HASH = {1, {
    0x5c, 0x3e, 0xfc, 0x51, 0xe8, 0xed, 0x04, 0xc2,
    0x66, 0xc0, 0x9c, 0xb4, 0x69, 0x1e, 0xc9, 0x5b,
    0x96, 0x4c, 0xd4, 0x10, 0x55, 0x8e, 0x01, 0xd8,
    0xc8, 0x36, 0x46, 0xb0, 0x38, 0x82, 0x6b, 0x45,
  }};
static const rosidl_type_hash_t simulation_interfaces__msg__WorldResource__EXPECTED_HASH = {1, {
    0xe3, 0xb6, 0x5e, 0xcf, 0x90, 0x4b, 0x9b, 0x11,
    0x56, 0x73, 0xe4, 0xa3, 0x43, 0xc6, 0xaa, 0x3d,
    0x28, 0xc1, 0x9e, 0x18, 0x5a, 0x71, 0x22, 0x8f,
    0xaa, 0x64, 0xb7, 0x83, 0xaf, 0xcf, 0x24, 0x03,
  }};
#endif

static char simulation_interfaces__srv__GetAvailableWorlds__TYPE_NAME[] = "simulation_interfaces/srv/GetAvailableWorlds";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char simulation_interfaces__msg__Resource__TYPE_NAME[] = "simulation_interfaces/msg/Resource";
static char simulation_interfaces__msg__Result__TYPE_NAME[] = "simulation_interfaces/msg/Result";
static char simulation_interfaces__msg__TagsFilter__TYPE_NAME[] = "simulation_interfaces/msg/TagsFilter";
static char simulation_interfaces__msg__WorldResource__TYPE_NAME[] = "simulation_interfaces/msg/WorldResource";
static char simulation_interfaces__srv__GetAvailableWorlds_Event__TYPE_NAME[] = "simulation_interfaces/srv/GetAvailableWorlds_Event";
static char simulation_interfaces__srv__GetAvailableWorlds_Request__TYPE_NAME[] = "simulation_interfaces/srv/GetAvailableWorlds_Request";
static char simulation_interfaces__srv__GetAvailableWorlds_Response__TYPE_NAME[] = "simulation_interfaces/srv/GetAvailableWorlds_Response";

// Define type names, field names, and default values
static char simulation_interfaces__srv__GetAvailableWorlds__FIELD_NAME__request_message[] = "request_message";
static char simulation_interfaces__srv__GetAvailableWorlds__FIELD_NAME__response_message[] = "response_message";
static char simulation_interfaces__srv__GetAvailableWorlds__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetAvailableWorlds__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetAvailableWorlds__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetAvailableWorlds_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetAvailableWorlds__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetAvailableWorlds_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetAvailableWorlds__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetAvailableWorlds_Event__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetAvailableWorlds__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {simulation_interfaces__msg__TagsFilter__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__WorldResource__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetAvailableWorlds_Event__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetAvailableWorlds_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetAvailableWorlds_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetAvailableWorlds__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetAvailableWorlds__TYPE_NAME, 44, 44},
      {simulation_interfaces__srv__GetAvailableWorlds__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetAvailableWorlds__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
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
    assert(0 == memcmp(&simulation_interfaces__msg__TagsFilter__EXPECTED_HASH, simulation_interfaces__msg__TagsFilter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__msg__TagsFilter__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__WorldResource__EXPECTED_HASH, simulation_interfaces__msg__WorldResource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__msg__WorldResource__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__srv__GetAvailableWorlds_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = simulation_interfaces__srv__GetAvailableWorlds_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = simulation_interfaces__srv__GetAvailableWorlds_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetAvailableWorlds_Request__FIELD_NAME__additional_sources[] = "additional_sources";
static char simulation_interfaces__srv__GetAvailableWorlds_Request__FIELD_NAME__filter[] = "filter";
static char simulation_interfaces__srv__GetAvailableWorlds_Request__FIELD_NAME__offline_only[] = "offline_only";
static char simulation_interfaces__srv__GetAvailableWorlds_Request__FIELD_NAME__continue_on_error[] = "continue_on_error";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetAvailableWorlds_Request__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetAvailableWorlds_Request__FIELD_NAME__additional_sources, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetAvailableWorlds_Request__FIELD_NAME__filter, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__TagsFilter__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetAvailableWorlds_Request__FIELD_NAME__offline_only, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetAvailableWorlds_Request__FIELD_NAME__continue_on_error, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetAvailableWorlds_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {simulation_interfaces__msg__TagsFilter__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetAvailableWorlds_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetAvailableWorlds_Request__TYPE_NAME, 52, 52},
      {simulation_interfaces__srv__GetAvailableWorlds_Request__FIELDS, 4, 4},
    },
    {simulation_interfaces__srv__GetAvailableWorlds_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&simulation_interfaces__msg__TagsFilter__EXPECTED_HASH, simulation_interfaces__msg__TagsFilter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = simulation_interfaces__msg__TagsFilter__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetAvailableWorlds_Response__FIELD_NAME__result[] = "result";
static char simulation_interfaces__srv__GetAvailableWorlds_Response__FIELD_NAME__worlds[] = "worlds";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetAvailableWorlds_Response__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetAvailableWorlds_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetAvailableWorlds_Response__FIELD_NAME__worlds, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {simulation_interfaces__msg__WorldResource__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetAvailableWorlds_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
simulation_interfaces__srv__GetAvailableWorlds_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetAvailableWorlds_Response__TYPE_NAME, 53, 53},
      {simulation_interfaces__srv__GetAvailableWorlds_Response__FIELDS, 2, 2},
    },
    {simulation_interfaces__srv__GetAvailableWorlds_Response__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
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
static char simulation_interfaces__srv__GetAvailableWorlds_Event__FIELD_NAME__info[] = "info";
static char simulation_interfaces__srv__GetAvailableWorlds_Event__FIELD_NAME__request[] = "request";
static char simulation_interfaces__srv__GetAvailableWorlds_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetAvailableWorlds_Event__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetAvailableWorlds_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetAvailableWorlds_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetAvailableWorlds_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetAvailableWorlds_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetAvailableWorlds_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetAvailableWorlds_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {simulation_interfaces__msg__TagsFilter__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__WorldResource__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetAvailableWorlds_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetAvailableWorlds_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetAvailableWorlds_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetAvailableWorlds_Event__TYPE_NAME, 50, 50},
      {simulation_interfaces__srv__GetAvailableWorlds_Event__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetAvailableWorlds_Event__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
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
    assert(0 == memcmp(&simulation_interfaces__msg__TagsFilter__EXPECTED_HASH, simulation_interfaces__msg__TagsFilter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__msg__TagsFilter__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__WorldResource__EXPECTED_HASH, simulation_interfaces__msg__WorldResource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__msg__WorldResource__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__srv__GetAvailableWorlds_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = simulation_interfaces__srv__GetAvailableWorlds_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Return a list of available world resources which can be used with LoadWorld.\n"
  "# Support for this interface is indicated through the AVAILABLE_WORLDS value in GetSimulatorFeatures.\n"
  "# By default, a simulator will search its default local and online sources. If some\n"
  "# default sources can't be accessed (e.g. due to connectivity issues), the\n"
  "# DEFAULT_SOURCES_FAILED error result code will be returned.\n"
  "\n"
  "string[] additional_sources             # Optional field for additional sources (local or remote) to search, \n"
  "                                        # specified as standard URIs if possible.\n"
  "\n"
  "TagsFilter filter                       # Only get worlds with tags matching the filter. The filter is optional and matches everything by default.\n"
  "                                        # This feature is supported if WORLD_TAGS feature is included in output of GetSimulatorFeatures.\n"
  "\n"
  "bool offline_only                       # If true, only offline/local sources should be searched. Defaults to false.\n"
  "\n"
  "bool continue_on_error                  # If true, the simulator will continue to search sources even if some fail.\n"
  "                                        # The service will return success if any source yielded worlds. Defaults to false.\n"
  "---\n"
  "\n"
  "uint8 DEFAULT_SOURCES_FAILED = 101      # Some default sources could not be accessed.\n"
  "\n"
  "Result result                           # Standard result message. A specific result code should be used if some sources were not accessible.\n"
  "\n"
  "WorldResource[] worlds                  # Available world resources.";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetAvailableWorlds__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetAvailableWorlds__TYPE_NAME, 44, 44},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 1541, 1541},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetAvailableWorlds_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetAvailableWorlds_Request__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetAvailableWorlds_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetAvailableWorlds_Response__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetAvailableWorlds_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetAvailableWorlds_Event__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetAvailableWorlds__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetAvailableWorlds__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__msg__TagsFilter__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__msg__WorldResource__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__srv__GetAvailableWorlds_Event__get_individual_type_description_source(NULL);
    sources[8] = *simulation_interfaces__srv__GetAvailableWorlds_Request__get_individual_type_description_source(NULL);
    sources[9] = *simulation_interfaces__srv__GetAvailableWorlds_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetAvailableWorlds_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetAvailableWorlds_Request__get_individual_type_description_source(NULL),
    sources[1] = *simulation_interfaces__msg__TagsFilter__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetAvailableWorlds_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetAvailableWorlds_Response__get_individual_type_description_source(NULL),
    sources[1] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    sources[2] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__WorldResource__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetAvailableWorlds_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetAvailableWorlds_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__msg__TagsFilter__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__msg__WorldResource__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__srv__GetAvailableWorlds_Request__get_individual_type_description_source(NULL);
    sources[8] = *simulation_interfaces__srv__GetAvailableWorlds_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
