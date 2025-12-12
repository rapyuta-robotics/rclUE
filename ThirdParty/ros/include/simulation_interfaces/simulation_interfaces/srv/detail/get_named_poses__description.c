// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:srv/GetNamedPoses.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/srv/detail/get_named_poses__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetNamedPoses__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0xd1, 0x2a, 0xb9, 0x20, 0x11, 0x5b, 0xfd,
      0x47, 0x33, 0xf6, 0xd2, 0x05, 0x16, 0xad, 0xc3,
      0x96, 0x8f, 0xb4, 0x38, 0x53, 0x85, 0x40, 0x99,
      0x7c, 0x37, 0xe2, 0x00, 0xe0, 0x2b, 0x04, 0xe3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetNamedPoses_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3d, 0x85, 0xf7, 0x55, 0x3c, 0x5f, 0xcb, 0x49,
      0x12, 0x56, 0xb6, 0xea, 0xb6, 0x62, 0x04, 0xee,
      0x59, 0x0e, 0xdb, 0xd0, 0xad, 0x2d, 0xd5, 0x3b,
      0xb4, 0xdd, 0xf8, 0xa9, 0x5f, 0x16, 0xaf, 0x6e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetNamedPoses_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd0, 0x45, 0x9c, 0x9d, 0xa6, 0xad, 0xb8, 0x31,
      0xb3, 0x75, 0x57, 0x78, 0xbc, 0x34, 0x8c, 0xc8,
      0x8a, 0xd2, 0xb2, 0x2f, 0xe8, 0x64, 0xa1, 0x10,
      0x62, 0xdf, 0x20, 0x61, 0x0a, 0x12, 0xc3, 0x20,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__GetNamedPoses_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0x1d, 0xfb, 0x79, 0x23, 0x9f, 0xd5, 0x58,
      0x5b, 0x94, 0xec, 0x7f, 0x18, 0x04, 0x6c, 0x7d,
      0x08, 0xf8, 0xaa, 0x97, 0xd0, 0x75, 0x5b, 0xba,
      0xd3, 0xb2, 0x7a, 0xc3, 0x2a, 0x16, 0x53, 0x93,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "simulation_interfaces/msg/detail/result__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "simulation_interfaces/msg/detail/named_pose__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "simulation_interfaces/msg/detail/tags_filter__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
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
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t simulation_interfaces__msg__NamedPose__EXPECTED_HASH = {1, {
    0xb3, 0x2d, 0xa2, 0xa0, 0x39, 0xb1, 0x84, 0x0f,
    0x60, 0x5e, 0xc0, 0x25, 0xb7, 0x99, 0x1a, 0x18,
    0xef, 0xac, 0xac, 0x66, 0x2f, 0xac, 0x27, 0x28,
    0x18, 0xd1, 0xae, 0x6e, 0x2b, 0x12, 0xbc, 0x27,
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

static char simulation_interfaces__srv__GetNamedPoses__TYPE_NAME[] = "simulation_interfaces/srv/GetNamedPoses";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char simulation_interfaces__msg__NamedPose__TYPE_NAME[] = "simulation_interfaces/msg/NamedPose";
static char simulation_interfaces__msg__Result__TYPE_NAME[] = "simulation_interfaces/msg/Result";
static char simulation_interfaces__msg__TagsFilter__TYPE_NAME[] = "simulation_interfaces/msg/TagsFilter";
static char simulation_interfaces__srv__GetNamedPoses_Event__TYPE_NAME[] = "simulation_interfaces/srv/GetNamedPoses_Event";
static char simulation_interfaces__srv__GetNamedPoses_Request__TYPE_NAME[] = "simulation_interfaces/srv/GetNamedPoses_Request";
static char simulation_interfaces__srv__GetNamedPoses_Response__TYPE_NAME[] = "simulation_interfaces/srv/GetNamedPoses_Response";

// Define type names, field names, and default values
static char simulation_interfaces__srv__GetNamedPoses__FIELD_NAME__request_message[] = "request_message";
static char simulation_interfaces__srv__GetNamedPoses__FIELD_NAME__response_message[] = "response_message";
static char simulation_interfaces__srv__GetNamedPoses__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetNamedPoses__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetNamedPoses__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetNamedPoses_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetNamedPoses__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetNamedPoses_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetNamedPoses__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__GetNamedPoses_Event__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetNamedPoses__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
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
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__NamedPose__TYPE_NAME, 35, 35},
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
    {simulation_interfaces__srv__GetNamedPoses_Event__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetNamedPoses_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetNamedPoses_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetNamedPoses__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetNamedPoses__TYPE_NAME, 39, 39},
      {simulation_interfaces__srv__GetNamedPoses__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetNamedPoses__REFERENCED_TYPE_DESCRIPTIONS, 11, 11},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__NamedPose__EXPECTED_HASH, simulation_interfaces__msg__NamedPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__msg__NamedPose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__TagsFilter__EXPECTED_HASH, simulation_interfaces__msg__TagsFilter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = simulation_interfaces__msg__TagsFilter__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = simulation_interfaces__srv__GetNamedPoses_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[9].fields = simulation_interfaces__srv__GetNamedPoses_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[10].fields = simulation_interfaces__srv__GetNamedPoses_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetNamedPoses_Request__FIELD_NAME__tags[] = "tags";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetNamedPoses_Request__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetNamedPoses_Request__FIELD_NAME__tags, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__TagsFilter__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetNamedPoses_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {simulation_interfaces__msg__TagsFilter__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetNamedPoses_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetNamedPoses_Request__TYPE_NAME, 47, 47},
      {simulation_interfaces__srv__GetNamedPoses_Request__FIELDS, 1, 1},
    },
    {simulation_interfaces__srv__GetNamedPoses_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&simulation_interfaces__msg__TagsFilter__EXPECTED_HASH, simulation_interfaces__msg__TagsFilter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = simulation_interfaces__msg__TagsFilter__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetNamedPoses_Response__FIELD_NAME__result[] = "result";
static char simulation_interfaces__srv__GetNamedPoses_Response__FIELD_NAME__poses[] = "poses";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetNamedPoses_Response__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetNamedPoses_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetNamedPoses_Response__FIELD_NAME__poses, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {simulation_interfaces__msg__NamedPose__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetNamedPoses_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {simulation_interfaces__msg__NamedPose__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetNamedPoses_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetNamedPoses_Response__TYPE_NAME, 48, 48},
      {simulation_interfaces__srv__GetNamedPoses_Response__FIELDS, 2, 2},
    },
    {simulation_interfaces__srv__GetNamedPoses_Response__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__NamedPose__EXPECTED_HASH, simulation_interfaces__msg__NamedPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = simulation_interfaces__msg__NamedPose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__GetNamedPoses_Event__FIELD_NAME__info[] = "info";
static char simulation_interfaces__srv__GetNamedPoses_Event__FIELD_NAME__request[] = "request";
static char simulation_interfaces__srv__GetNamedPoses_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__GetNamedPoses_Event__FIELDS[] = {
  {
    {simulation_interfaces__srv__GetNamedPoses_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetNamedPoses_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetNamedPoses_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetNamedPoses_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__GetNamedPoses_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__GetNamedPoses_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
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
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__NamedPose__TYPE_NAME, 35, 35},
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
    {simulation_interfaces__srv__GetNamedPoses_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__GetNamedPoses_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__GetNamedPoses_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__GetNamedPoses_Event__TYPE_NAME, 45, 45},
      {simulation_interfaces__srv__GetNamedPoses_Event__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__GetNamedPoses_Event__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__NamedPose__EXPECTED_HASH, simulation_interfaces__msg__NamedPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__msg__NamedPose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__TagsFilter__EXPECTED_HASH, simulation_interfaces__msg__TagsFilter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = simulation_interfaces__msg__TagsFilter__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = simulation_interfaces__srv__GetNamedPoses_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[9].fields = simulation_interfaces__srv__GetNamedPoses_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Get predefined poses which are convenient to for spawning, navigation goals etc.\n"
  "# Support for this interface is indicated through the NAMED_POSES value in GetSimulationFeatures.\n"
  "\n"
  "TagsFilter tags                                     # Tags filter to apply. Only named poses with matching tags field\n"
  "                                                    # will be returned. Can be empty (see TagsFilter).\n"
  "\n"
  "---\n"
  "\n"
  "Result result\n"
  "NamedPose[] poses                                   # A list of predefined poses, which may be empty.";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetNamedPoses__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetNamedPoses__TYPE_NAME, 39, 39},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 525, 525},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetNamedPoses_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetNamedPoses_Request__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetNamedPoses_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetNamedPoses_Response__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__GetNamedPoses_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__GetNamedPoses_Event__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetNamedPoses__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[12];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 12, 12};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetNamedPoses__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__msg__NamedPose__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[8] = *simulation_interfaces__msg__TagsFilter__get_individual_type_description_source(NULL);
    sources[9] = *simulation_interfaces__srv__GetNamedPoses_Event__get_individual_type_description_source(NULL);
    sources[10] = *simulation_interfaces__srv__GetNamedPoses_Request__get_individual_type_description_source(NULL);
    sources[11] = *simulation_interfaces__srv__GetNamedPoses_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetNamedPoses_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetNamedPoses_Request__get_individual_type_description_source(NULL),
    sources[1] = *simulation_interfaces__msg__TagsFilter__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetNamedPoses_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetNamedPoses_Response__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[4] = *simulation_interfaces__msg__NamedPose__get_individual_type_description_source(NULL);
    sources[5] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__GetNamedPoses_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__GetNamedPoses_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__msg__NamedPose__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[8] = *simulation_interfaces__msg__TagsFilter__get_individual_type_description_source(NULL);
    sources[9] = *simulation_interfaces__srv__GetNamedPoses_Request__get_individual_type_description_source(NULL);
    sources[10] = *simulation_interfaces__srv__GetNamedPoses_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
