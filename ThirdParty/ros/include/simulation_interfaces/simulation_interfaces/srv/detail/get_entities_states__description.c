// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:srv/GetEntitiesStates.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/srv/detail/get_entities_states__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetEntitiesStates__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0x76, 0x17, 0x0d, 0x0c, 0x1c, 0x90, 0xe1,
      0xea, 0xf8, 0x05, 0xcf, 0xab, 0x78, 0xea, 0x80,
      0x1d, 0x1f, 0x82, 0xdf, 0x30, 0x9a, 0x28, 0xc1,
      0xf0, 0xfa, 0xe4, 0xb5, 0x70, 0xf1, 0x97, 0x54,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetEntitiesStates_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0xf5, 0x30, 0x2d, 0x35, 0x26, 0x83, 0x4e,
      0x83, 0xbd, 0x98, 0x61, 0xfb, 0xcc, 0x52, 0x14,
      0xaf, 0x2b, 0x9a, 0x4b, 0x0c, 0x93, 0xa9, 0x65,
      0x84, 0x0f, 0xb1, 0xa6, 0xc2, 0x89, 0x17, 0x24,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetEntitiesStates_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb6, 0x51, 0x84, 0x8f, 0x4d, 0x93, 0xa2, 0xb0,
      0xec, 0x5e, 0xc3, 0xf3, 0x66, 0x59, 0x29, 0x7c,
      0xa3, 0x05, 0x47, 0xc4, 0x99, 0xf9, 0x33, 0xeb,
      0x27, 0x9b, 0x60, 0xf8, 0xbe, 0x43, 0x43, 0x15,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetEntitiesStates_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3b, 0xfc, 0xf2, 0x8a, 0x70, 0x87, 0x00, 0x2f,
      0x7f, 0x5b, 0xe3, 0x53, 0x9f, 0x5d, 0x06, 0x9b,
      0x66, 0x02, 0x27, 0xc3, 0xf8, 0x1e, 0x0e, 0x31,
      0x95, 0x98, 0x1e, 0x13, 0xa5, 0x6d, 0x8b, 0x3d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "simulation_interfaces/msg/detail/bounds__functions.h"
#include "simulation_interfaces/msg/detail/entity_filters__functions.h"
#include "geometry_msgs/msg/detail/accel__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "simulation_interfaces/msg/detail/result__functions.h"
#include "simulation_interfaces/msg/detail/entity_category__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/twist__functions.h"
#include "simulation_interfaces/msg/detail/tags_filter__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "simulation_interfaces/msg/detail/entity_state__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Accel__EXPECTED_HASH = {1, {
    0xdc, 0x44, 0x82, 0x43, 0xde, 0xd9, 0xb1, 0xfc,
    0xbc, 0xca, 0x24, 0xab, 0xa0, 0xc2, 0x2f, 0x01,
    0x3d, 0xae, 0x06, 0xc3, 0x54, 0xba, 0x2d, 0x84,
    0x95, 0x71, 0xc0, 0xa2, 0xa3, 0xf5, 0x7c, 0xa0,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Twist__EXPECTED_HASH = {1, {
    0x9c, 0x45, 0xbf, 0x16, 0xfe, 0x09, 0x83, 0xd8,
    0x0e, 0x3c, 0xfe, 0x75, 0x0d, 0x68, 0x35, 0x84,
    0x3d, 0x26, 0x5a, 0x9a, 0x6c, 0x46, 0xbd, 0x2e,
    0x60, 0x9f, 0xcd, 0xdd, 0xe6, 0xfb, 0x8d, 0x2a,
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
static const rosidl_type_hash_t simulation_interfaces__msg__EntityState__EXPECTED_HASH = {1, {
    0x2e, 0x04, 0x64, 0xa8, 0x5e, 0xb8, 0x0a, 0x93,
    0x90, 0x25, 0x07, 0x5d, 0x6c, 0x20, 0x76, 0x1e,
    0xca, 0x6a, 0x4c, 0xb9, 0xd6, 0xba, 0xf2, 0xc0,
    0xba, 0x37, 0x34, 0x67, 0xc8, 0xb5, 0x98, 0xd0,
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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char simulation_interfaces__srv__GetEntitiesStates__TYPE_NAME[] = "simulation_interfaces/srv/GetEntitiesStates";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Accel__TYPE_NAME[] = "geometry_msgs/msg/Accel";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Twist__TYPE_NAME[] = "geometry_msgs/msg/Twist";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char simulation_interfaces__msg__Bounds__TYPE_NAME[] = "simulation_interfaces/msg/Bounds";
static char simulation_interfaces__msg__EntityCategory__TYPE_NAME[] = "simulation_interfaces/msg/EntityCategory";
static char simulation_interfaces__msg__EntityFilters__TYPE_NAME[] = "simulation_interfaces/msg/EntityFilters";
static char simulation_interfaces__msg__EntityState__TYPE_NAME[] = "simulation_interfaces/msg/EntityState";
static char simulation_interfaces__msg__Result__TYPE_NAME[] = "simulation_interfaces/msg/Result";
static char simulation_interfaces__msg__TagsFilter__TYPE_NAME[] = "simulation_interfaces/msg/TagsFilter";
static char simulation_interfaces__srv__GetEntitiesStates_Event__TYPE_NAME[] = "simulation_interfaces/srv/GetEntitiesStates_Event";
static char simulation_interfaces__srv__GetEntitiesStates_Request__TYPE_NAME[] = "simulation_interfaces/srv/GetEntitiesStates_Request";
static char simulation_interfaces__srv__GetEntitiesStates_Response__TYPE_NAME[] = "simulation_interfaces/srv/GetEntitiesStates_Response";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char simulation_interfaces__srv__GetEntitiesStates__FIELD_NAME__request_message[] = "request_message";
static char simulation_interfaces__srv__GetEntitiesStates__FIELD_NAME__response_message[] = "response_message";
static char simulation_interfaces__srv__GetEntitiesStates__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetEntitiesStates__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetEntitiesStates__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetEntitiesStates_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntitiesStates__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetEntitiesStates_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntitiesStates__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetEntitiesStates_Event__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetEntitiesStates__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Accel__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
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
    {simulation_interfaces__msg__EntityState__TYPE_NAME, 37, 37},
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
    {simulation_interfaces__srv__GetEntitiesStates_Event__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntitiesStates_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntitiesStates_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetEntitiesStates__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetEntitiesStates__TYPE_NAME, 43, 43},
      {simulation_interfaces__srv__GetEntitiesStates__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetEntitiesStates__REFERENCED_TYPE_DESCRIPTIONS, 18, 18},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Accel__EXPECTED_HASH, geometry_msgs__msg__Accel__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Accel__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Bounds__EXPECTED_HASH, simulation_interfaces__msg__Bounds__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = simulation_interfaces__msg__Bounds__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__EntityCategory__EXPECTED_HASH, simulation_interfaces__msg__EntityCategory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = simulation_interfaces__msg__EntityCategory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__EntityFilters__EXPECTED_HASH, simulation_interfaces__msg__EntityFilters__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = simulation_interfaces__msg__EntityFilters__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__EntityState__EXPECTED_HASH, simulation_interfaces__msg__EntityState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = simulation_interfaces__msg__EntityState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__TagsFilter__EXPECTED_HASH, simulation_interfaces__msg__TagsFilter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = simulation_interfaces__msg__TagsFilter__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[14].fields = simulation_interfaces__srv__GetEntitiesStates_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[15].fields = simulation_interfaces__srv__GetEntitiesStates_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[16].fields = simulation_interfaces__srv__GetEntitiesStates_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[17].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetEntitiesStates_Request__FIELD_NAME__filters[] = "filters";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetEntitiesStates_Request__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetEntitiesStates_Request__FIELD_NAME__filters, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__EntityFilters__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetEntitiesStates_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
simulation_interfaces__srv__GetEntitiesStates_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetEntitiesStates_Request__TYPE_NAME, 51, 51},
      {simulation_interfaces__srv__GetEntitiesStates_Request__FIELDS, 1, 1},
    },
    {simulation_interfaces__srv__GetEntitiesStates_Request__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
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
static char simulation_interfaces__srv__GetEntitiesStates_Response__FIELD_NAME__result[] = "result";
static char simulation_interfaces__srv__GetEntitiesStates_Response__FIELD_NAME__entities[] = "entities";
static char simulation_interfaces__srv__GetEntitiesStates_Response__FIELD_NAME__states[] = "states";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetEntitiesStates_Response__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetEntitiesStates_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntitiesStates_Response__FIELD_NAME__entities, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntitiesStates_Response__FIELD_NAME__states, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {simulation_interfaces__msg__EntityState__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetEntitiesStates_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Accel__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__EntityState__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetEntitiesStates_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetEntitiesStates_Response__TYPE_NAME, 52, 52},
      {simulation_interfaces__srv__GetEntitiesStates_Response__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetEntitiesStates_Response__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Accel__EXPECTED_HASH, geometry_msgs__msg__Accel__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Accel__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__EntityState__EXPECTED_HASH, simulation_interfaces__msg__EntityState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = simulation_interfaces__msg__EntityState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetEntitiesStates_Event__FIELD_NAME__info[] = "info";
static char simulation_interfaces__srv__GetEntitiesStates_Event__FIELD_NAME__request[] = "request";
static char simulation_interfaces__srv__GetEntitiesStates_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetEntitiesStates_Event__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetEntitiesStates_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntitiesStates_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetEntitiesStates_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntitiesStates_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetEntitiesStates_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetEntitiesStates_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Accel__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
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
    {simulation_interfaces__msg__EntityState__TYPE_NAME, 37, 37},
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
    {simulation_interfaces__srv__GetEntitiesStates_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetEntitiesStates_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetEntitiesStates_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetEntitiesStates_Event__TYPE_NAME, 49, 49},
      {simulation_interfaces__srv__GetEntitiesStates_Event__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetEntitiesStates_Event__REFERENCED_TYPE_DESCRIPTIONS, 17, 17},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Accel__EXPECTED_HASH, geometry_msgs__msg__Accel__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Accel__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Bounds__EXPECTED_HASH, simulation_interfaces__msg__Bounds__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = simulation_interfaces__msg__Bounds__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__EntityCategory__EXPECTED_HASH, simulation_interfaces__msg__EntityCategory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = simulation_interfaces__msg__EntityCategory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__EntityFilters__EXPECTED_HASH, simulation_interfaces__msg__EntityFilters__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = simulation_interfaces__msg__EntityFilters__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__EntityState__EXPECTED_HASH, simulation_interfaces__msg__EntityState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = simulation_interfaces__msg__EntityState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__TagsFilter__EXPECTED_HASH, simulation_interfaces__msg__TagsFilter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = simulation_interfaces__msg__TagsFilter__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[14].fields = simulation_interfaces__srv__GetEntitiesStates_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[15].fields = simulation_interfaces__srv__GetEntitiesStates_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Get objects in the scene which can be interacted, e.g. with using SetEntityState.\n"
  "# Use GetEntities service instead if EntityState information for all entities is not needed.\n"
  "# Support for this interface is indicated through the ENTITY_STATE_GETTING value in GetSimulationFeatures.\n"
  "\n"
  "EntityFilters filters                               # Optional filters for the query, including name, category, tags,\n"
  "                                                    # and overlap filters.\n"
  "\n"
  "---\n"
  "\n"
  "Result result\n"
  "string[] entities                                   # Unique names of all entities matching the filters.\n"
  "EntityState[] states                                # States for these entities.";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetEntitiesStates__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetEntitiesStates__TYPE_NAME, 43, 43},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 684, 684},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetEntitiesStates_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetEntitiesStates_Request__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetEntitiesStates_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetEntitiesStates_Response__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetEntitiesStates_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetEntitiesStates_Event__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetEntitiesStates__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[19];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 19, 19};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetEntitiesStates__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Accel__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[8] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[9] = *simulation_interfaces__msg__Bounds__get_individual_type_description_source(NULL);
    sources[10] = *simulation_interfaces__msg__EntityCategory__get_individual_type_description_source(NULL);
    sources[11] = *simulation_interfaces__msg__EntityFilters__get_individual_type_description_source(NULL);
    sources[12] = *simulation_interfaces__msg__EntityState__get_individual_type_description_source(NULL);
    sources[13] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[14] = *simulation_interfaces__msg__TagsFilter__get_individual_type_description_source(NULL);
    sources[15] = *simulation_interfaces__srv__GetEntitiesStates_Event__get_individual_type_description_source(NULL);
    sources[16] = *simulation_interfaces__srv__GetEntitiesStates_Request__get_individual_type_description_source(NULL);
    sources[17] = *simulation_interfaces__srv__GetEntitiesStates_Response__get_individual_type_description_source(NULL);
    sources[18] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetEntitiesStates_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetEntitiesStates_Request__get_individual_type_description_source(NULL),
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
simulation_interfaces__srv__GetEntitiesStates_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetEntitiesStates_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Accel__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[8] = *simulation_interfaces__msg__EntityState__get_individual_type_description_source(NULL);
    sources[9] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[10] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetEntitiesStates_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[18];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 18, 18};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetEntitiesStates_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Accel__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[8] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[9] = *simulation_interfaces__msg__Bounds__get_individual_type_description_source(NULL);
    sources[10] = *simulation_interfaces__msg__EntityCategory__get_individual_type_description_source(NULL);
    sources[11] = *simulation_interfaces__msg__EntityFilters__get_individual_type_description_source(NULL);
    sources[12] = *simulation_interfaces__msg__EntityState__get_individual_type_description_source(NULL);
    sources[13] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[14] = *simulation_interfaces__msg__TagsFilter__get_individual_type_description_source(NULL);
    sources[15] = *simulation_interfaces__srv__GetEntitiesStates_Request__get_individual_type_description_source(NULL);
    sources[16] = *simulation_interfaces__srv__GetEntitiesStates_Response__get_individual_type_description_source(NULL);
    sources[17] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
