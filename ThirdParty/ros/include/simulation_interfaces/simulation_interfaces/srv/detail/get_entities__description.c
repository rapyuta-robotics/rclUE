// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:srv/GetEntities.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/srv/detail/get_entities__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetEntities__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0x90, 0x00, 0x4c, 0x48, 0xcd, 0x50, 0xf3,
      0x77, 0x32, 0xfb, 0x00, 0x8e, 0x22, 0xc3, 0x4c,
      0x26, 0x1d, 0xd6, 0x80, 0xa7, 0x23, 0xbf, 0x0f,
      0x85, 0xd8, 0x43, 0x7e, 0xa4, 0x49, 0x8b, 0xf7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetEntities_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0xa4, 0xc6, 0xc0, 0xc3, 0x9c, 0x87, 0xf8,
      0x4c, 0xbd, 0x1e, 0xa3, 0x19, 0x56, 0xb9, 0xf3,
      0x9b, 0x3f, 0xa5, 0x38, 0xae, 0x9c, 0x4a, 0xa7,
      0xfc, 0x24, 0x3a, 0x32, 0x36, 0x0e, 0x8c, 0x70,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetEntities_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0x19, 0x16, 0xed, 0xbd, 0xc6, 0x59, 0xd3,
      0x55, 0xe7, 0x79, 0x80, 0xb1, 0x6e, 0xd6, 0xeb,
      0x4d, 0x41, 0xd5, 0xff, 0x44, 0x55, 0x57, 0x93,
      0x1e, 0xd6, 0x5c, 0x58, 0xb0, 0x0f, 0x7b, 0x2c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetEntities_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0x6c, 0xff, 0x3c, 0x94, 0xca, 0x0d, 0xf9,
      0x67, 0xf9, 0xf2, 0x23, 0xaf, 0x89, 0x34, 0x0d,
      0xcb, 0x6b, 0xec, 0xb0, 0x5b, 0x9d, 0x32, 0x54,
      0x4e, 0xb8, 0x4c, 0xac, 0x0e, 0x85, 0xca, 0x8d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "simulation_interfaces/msg/detail/bounds__functions.h"
#include "simulation_interfaces/msg/detail/entity_filters__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "simulation_interfaces/msg/detail/entity_category__functions.h"
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
static const rosidl_type_hash_t simulation_interfaces__msg__EntityCategory__EXPECTED_HASH = {1, {
    0x43, 0xbd, 0xf7, 0x93, 0x3f, 0xdd, 0xf7, 0x5f,
    0x69, 0x70, 0xf7, 0xa8, 0xfe, 0x70, 0x78, 0x52,
    0x43, 0x55, 0xd8, 0x21, 0xd3, 0x90, 0xb3, 0x95,
    0x4b, 0xb4, 0x6a, 0xc3, 0x6c, 0x03, 0xdf, 0xe1,
  }};
static const rosidl_type_hash_t simulation_interfaces__msg__EntityFilters__EXPECTED_HASH = {1, {
    0x8e, 0x7b, 0x12, 0xe8, 0xea, 0x06, 0x2f, 0x14,
    0xc5, 0x5d, 0xe4, 0x87, 0x72, 0x21, 0xfe, 0x1b,
    0x7c, 0xd9, 0x74, 0x96, 0x65, 0xa7, 0xad, 0x8a,
    0x4a, 0xb8, 0x55, 0xfc, 0x4b, 0x14, 0x83, 0x03,
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
#endif

static char simulation_interfaces__srv__GetEntities__TYPE_NAME[] = "simulation_interfaces/srv/GetEntities";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char simulation_interfaces__msg__Bounds__TYPE_NAME[] = "simulation_interfaces/msg/Bounds";
static char simulation_interfaces__msg__EntityCategory__TYPE_NAME[] = "simulation_interfaces/msg/EntityCategory";
static char simulation_interfaces__msg__EntityFilters__TYPE_NAME[] = "simulation_interfaces/msg/EntityFilters";
static char simulation_interfaces__msg__Result__TYPE_NAME[] = "simulation_interfaces/msg/Result";
static char simulation_interfaces__msg__TagsFilter__TYPE_NAME[] = "simulation_interfaces/msg/TagsFilter";
static char simulation_interfaces__srv__GetEntities_Event__TYPE_NAME[] = "simulation_interfaces/srv/GetEntities_Event";
static char simulation_interfaces__srv__GetEntities_Request__TYPE_NAME[] = "simulation_interfaces/srv/GetEntities_Request";
static char simulation_interfaces__srv__GetEntities_Response__TYPE_NAME[] = "simulation_interfaces/srv/GetEntities_Response";

// Define type names, field names, and default values
static char simulation_interfaces__srv__GetEntities__FIELD_NAME__request_message[] = "request_message";
static char simulation_interfaces__srv__GetEntities__FIELD_NAME__response_message[] = "response_message";
static char simulation_interfaces__srv__GetEntities__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetEntities__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetEntities__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetEntities_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntities__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetEntities_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntities__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetEntities_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetEntities__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {simulation_interfaces__msg__EntityCategory__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__EntityFilters__TYPE_NAME, 39, 39},
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
    {simulation_interfaces__srv__GetEntities_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntities_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntities_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetEntities__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetEntities__TYPE_NAME, 37, 37},
      {simulation_interfaces__srv__GetEntities__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetEntities__REFERENCED_TYPE_DESCRIPTIONS, 11, 11},
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
    assert(0 == memcmp(&simulation_interfaces__msg__EntityCategory__EXPECTED_HASH, simulation_interfaces__msg__EntityCategory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__msg__EntityCategory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__EntityFilters__EXPECTED_HASH, simulation_interfaces__msg__EntityFilters__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__msg__EntityFilters__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__TagsFilter__EXPECTED_HASH, simulation_interfaces__msg__TagsFilter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = simulation_interfaces__msg__TagsFilter__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = simulation_interfaces__srv__GetEntities_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[9].fields = simulation_interfaces__srv__GetEntities_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[10].fields = simulation_interfaces__srv__GetEntities_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetEntities_Request__FIELD_NAME__filters[] = "filters";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetEntities_Request__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetEntities_Request__FIELD_NAME__filters, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__EntityFilters__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetEntities_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Bounds__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__EntityCategory__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__EntityFilters__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__TagsFilter__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetEntities_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetEntities_Request__TYPE_NAME, 45, 45},
      {simulation_interfaces__srv__GetEntities_Request__FIELDS, 1, 1},
    },
    {simulation_interfaces__srv__GetEntities_Request__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Bounds__EXPECTED_HASH, simulation_interfaces__msg__Bounds__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = simulation_interfaces__msg__Bounds__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__EntityCategory__EXPECTED_HASH, simulation_interfaces__msg__EntityCategory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = simulation_interfaces__msg__EntityCategory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__EntityFilters__EXPECTED_HASH, simulation_interfaces__msg__EntityFilters__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = simulation_interfaces__msg__EntityFilters__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__TagsFilter__EXPECTED_HASH, simulation_interfaces__msg__TagsFilter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__msg__TagsFilter__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetEntities_Response__FIELD_NAME__result[] = "result";
static char simulation_interfaces__srv__GetEntities_Response__FIELD_NAME__entities[] = "entities";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetEntities_Response__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetEntities_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntities_Response__FIELD_NAME__entities, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetEntities_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetEntities_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetEntities_Response__TYPE_NAME, 46, 46},
      {simulation_interfaces__srv__GetEntities_Response__FIELDS, 2, 2},
    },
    {simulation_interfaces__srv__GetEntities_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetEntities_Event__FIELD_NAME__info[] = "info";
static char simulation_interfaces__srv__GetEntities_Event__FIELD_NAME__request[] = "request";
static char simulation_interfaces__srv__GetEntities_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetEntities_Event__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetEntities_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntities_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetEntities_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntities_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetEntities_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetEntities_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {simulation_interfaces__msg__EntityCategory__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__EntityFilters__TYPE_NAME, 39, 39},
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
    {simulation_interfaces__srv__GetEntities_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntities_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetEntities_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetEntities_Event__TYPE_NAME, 43, 43},
      {simulation_interfaces__srv__GetEntities_Event__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetEntities_Event__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
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
    assert(0 == memcmp(&simulation_interfaces__msg__EntityCategory__EXPECTED_HASH, simulation_interfaces__msg__EntityCategory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__msg__EntityCategory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__EntityFilters__EXPECTED_HASH, simulation_interfaces__msg__EntityFilters__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__msg__EntityFilters__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__TagsFilter__EXPECTED_HASH, simulation_interfaces__msg__TagsFilter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = simulation_interfaces__msg__TagsFilter__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = simulation_interfaces__srv__GetEntities_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[9].fields = simulation_interfaces__srv__GetEntities_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Get objects in the scene which can be interacted with, e.g. with using SetEntityState.\n"
  "# You can get further information about entities through GetEntityInfo and GetEntityState services.\n"
  "# There is also a GetEntitiesStates service if you would like to get state for each entity.\n"
  "\n"
  "EntityFilters filters                               # Optional filters for the query, including name, category, tags,\n"
  "                                                    # and overlap filters.\n"
  "\n"
  "---\n"
  "\n"
  "Result result\n"
  "string[] entities                                   # Unique names of all entities matching the filters.";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetEntities__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetEntities__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 600, 600},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetEntities_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetEntities_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetEntities_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetEntities_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetEntities_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetEntities_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetEntities__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[12];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 12, 12};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetEntities__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__Bounds__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__msg__EntityCategory__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__msg__EntityFilters__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[8] = *simulation_interfaces__msg__TagsFilter__get_individual_type_description_source(NULL);
    sources[9] = *simulation_interfaces__srv__GetEntities_Event__get_individual_type_description_source(NULL);
    sources[10] = *simulation_interfaces__srv__GetEntities_Request__get_individual_type_description_source(NULL);
    sources[11] = *simulation_interfaces__srv__GetEntities_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetEntities_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetEntities_Request__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[2] = *simulation_interfaces__msg__Bounds__get_individual_type_description_source(NULL);
    sources[3] = *simulation_interfaces__msg__EntityCategory__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__EntityFilters__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__msg__TagsFilter__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetEntities_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetEntities_Response__get_individual_type_description_source(NULL),
    sources[1] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetEntities_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetEntities_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__Bounds__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__msg__EntityCategory__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__msg__EntityFilters__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[8] = *simulation_interfaces__msg__TagsFilter__get_individual_type_description_source(NULL);
    sources[9] = *simulation_interfaces__srv__GetEntities_Request__get_individual_type_description_source(NULL);
    sources[10] = *simulation_interfaces__srv__GetEntities_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
