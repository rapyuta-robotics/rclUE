// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from simulation_interfaces:srv/SpawnEntity.idl
// generated code does not contain a copyright notice

#include "simulation_interfaces/srv/detail/spawn_entity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__SpawnEntity__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x66, 0x86, 0x03, 0x13, 0xe1, 0x10, 0x09, 0xfa,
      0xdd, 0xbf, 0xc8, 0x56, 0x8e, 0x5d, 0x41, 0x0d,
      0x1a, 0x11, 0x60, 0x7f, 0xe7, 0x5e, 0xeb, 0x13,
      0x08, 0x67, 0x1d, 0xc0, 0x40, 0x6f, 0xe3, 0xa7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__SpawnEntity_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9b, 0xc0, 0x4f, 0xe3, 0x0d, 0x48, 0x44, 0x46,
      0x6c, 0x57, 0xb7, 0xb0, 0x90, 0xfd, 0x7e, 0x9a,
      0xa4, 0x26, 0x99, 0x5f, 0x3e, 0xb6, 0xff, 0x9a,
      0x72, 0x68, 0x26, 0xab, 0x72, 0x23, 0xe1, 0xfd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__SpawnEntity_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0x8c, 0x9f, 0xc0, 0x3b, 0x6f, 0xaa, 0xf9,
      0x55, 0x70, 0x94, 0x9c, 0x80, 0x19, 0x5c, 0x8c,
      0xa7, 0x5d, 0xd9, 0x9f, 0x7e, 0xfc, 0x23, 0x26,
      0x23, 0x09, 0xd4, 0x97, 0xb2, 0x92, 0x39, 0x82,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_simulation_interfaces
const rosidl_type_hash_t *
simulation_interfaces__srv__SpawnEntity_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0x92, 0x57, 0x35, 0x5a, 0xa7, 0x7a, 0xab,
      0x58, 0xea, 0x46, 0x2c, 0xbc, 0x6f, 0x04, 0x6c,
      0xf9, 0xed, 0xa6, 0x8c, 0x0f, 0x67, 0x1b, 0x71,
      0x06, 0x04, 0x5b, 0x48, 0xc9, 0x24, 0x01, 0xa4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "simulation_interfaces/msg/detail/resource__functions.h"
#include "simulation_interfaces/msg/detail/result__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
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
static const rosidl_type_hash_t geometry_msgs__msg__PoseStamped__EXPECTED_HASH = {1, {
    0x10, 0xf3, 0x78, 0x6d, 0x7d, 0x40, 0xfd, 0x2b,
    0x54, 0x36, 0x78, 0x35, 0x61, 0x4b, 0xff, 0x85,
    0xd4, 0xad, 0x3b, 0x5d, 0xab, 0x62, 0xbf, 0x8b,
    0xca, 0x0c, 0xc2, 0x32, 0xd7, 0x3b, 0x4c, 0xd8,
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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char simulation_interfaces__srv__SpawnEntity__TYPE_NAME[] = "simulation_interfaces/srv/SpawnEntity";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__PoseStamped__TYPE_NAME[] = "geometry_msgs/msg/PoseStamped";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char simulation_interfaces__msg__Resource__TYPE_NAME[] = "simulation_interfaces/msg/Resource";
static char simulation_interfaces__msg__Result__TYPE_NAME[] = "simulation_interfaces/msg/Result";
static char simulation_interfaces__srv__SpawnEntity_Event__TYPE_NAME[] = "simulation_interfaces/srv/SpawnEntity_Event";
static char simulation_interfaces__srv__SpawnEntity_Request__TYPE_NAME[] = "simulation_interfaces/srv/SpawnEntity_Request";
static char simulation_interfaces__srv__SpawnEntity_Response__TYPE_NAME[] = "simulation_interfaces/srv/SpawnEntity_Response";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char simulation_interfaces__srv__SpawnEntity__FIELD_NAME__request_message[] = "request_message";
static char simulation_interfaces__srv__SpawnEntity__FIELD_NAME__response_message[] = "response_message";
static char simulation_interfaces__srv__SpawnEntity__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__SpawnEntity__FIELDS[] = {
  {
    {simulation_interfaces__srv__SpawnEntity__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__SpawnEntity_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__SpawnEntity__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__SpawnEntity_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__SpawnEntity__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__srv__SpawnEntity_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__SpawnEntity__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
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
    {simulation_interfaces__msg__Resource__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__SpawnEntity_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__SpawnEntity_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__SpawnEntity_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__SpawnEntity__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__SpawnEntity__TYPE_NAME, 37, 37},
      {simulation_interfaces__srv__SpawnEntity__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__SpawnEntity__REFERENCED_TYPE_DESCRIPTIONS, 12, 12},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseStamped__EXPECTED_HASH, geometry_msgs__msg__PoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__PoseStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Resource__EXPECTED_HASH, simulation_interfaces__msg__Resource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__msg__Resource__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = simulation_interfaces__srv__SpawnEntity_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[9].fields = simulation_interfaces__srv__SpawnEntity_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[10].fields = simulation_interfaces__srv__SpawnEntity_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__SpawnEntity_Request__FIELD_NAME__name[] = "name";
static char simulation_interfaces__srv__SpawnEntity_Request__FIELD_NAME__allow_renaming[] = "allow_renaming";
static char simulation_interfaces__srv__SpawnEntity_Request__FIELD_NAME__entity_resource[] = "entity_resource";
static char simulation_interfaces__srv__SpawnEntity_Request__FIELD_NAME__entity_namespace[] = "entity_namespace";
static char simulation_interfaces__srv__SpawnEntity_Request__FIELD_NAME__initial_pose[] = "initial_pose";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__SpawnEntity_Request__FIELDS[] = {
  {
    {simulation_interfaces__srv__SpawnEntity_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__SpawnEntity_Request__FIELD_NAME__allow_renaming, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__SpawnEntity_Request__FIELD_NAME__entity_resource, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Resource__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__SpawnEntity_Request__FIELD_NAME__entity_namespace, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__SpawnEntity_Request__FIELD_NAME__initial_pose, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__SpawnEntity_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Resource__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__SpawnEntity_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__SpawnEntity_Request__TYPE_NAME, 45, 45},
      {simulation_interfaces__srv__SpawnEntity_Request__FIELDS, 5, 5},
    },
    {simulation_interfaces__srv__SpawnEntity_Request__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseStamped__EXPECTED_HASH, geometry_msgs__msg__PoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__PoseStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Resource__EXPECTED_HASH, simulation_interfaces__msg__Resource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = simulation_interfaces__msg__Resource__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__SpawnEntity_Response__FIELD_NAME__result[] = "result";
static char simulation_interfaces__srv__SpawnEntity_Response__FIELD_NAME__entity_name[] = "entity_name";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__SpawnEntity_Response__FIELDS[] = {
  {
    {simulation_interfaces__srv__SpawnEntity_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__SpawnEntity_Response__FIELD_NAME__entity_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__SpawnEntity_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__SpawnEntity_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__SpawnEntity_Response__TYPE_NAME, 46, 46},
      {simulation_interfaces__srv__SpawnEntity_Response__FIELDS, 2, 2},
    },
    {simulation_interfaces__srv__SpawnEntity_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char simulation_interfaces__srv__SpawnEntity_Event__FIELD_NAME__info[] = "info";
static char simulation_interfaces__srv__SpawnEntity_Event__FIELD_NAME__request[] = "request";
static char simulation_interfaces__srv__SpawnEntity_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field simulation_interfaces__srv__SpawnEntity_Event__FIELDS[] = {
  {
    {simulation_interfaces__srv__SpawnEntity_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__SpawnEntity_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__SpawnEntity_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__SpawnEntity_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {simulation_interfaces__srv__SpawnEntity_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription simulation_interfaces__srv__SpawnEntity_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
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
    {simulation_interfaces__msg__Resource__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__msg__Result__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__SpawnEntity_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {simulation_interfaces__srv__SpawnEntity_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
simulation_interfaces__srv__SpawnEntity_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {simulation_interfaces__srv__SpawnEntity_Event__TYPE_NAME, 43, 43},
      {simulation_interfaces__srv__SpawnEntity_Event__FIELDS, 3, 3},
    },
    {simulation_interfaces__srv__SpawnEntity_Event__REFERENCED_TYPE_DESCRIPTIONS, 11, 11},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseStamped__EXPECTED_HASH, geometry_msgs__msg__PoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__PoseStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Resource__EXPECTED_HASH, simulation_interfaces__msg__Resource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = simulation_interfaces__msg__Resource__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&simulation_interfaces__msg__Result__EXPECTED_HASH, simulation_interfaces__msg__Result__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = simulation_interfaces__msg__Result__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = simulation_interfaces__srv__SpawnEntity_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[9].fields = simulation_interfaces__srv__SpawnEntity_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Spawn an entity (a robot, other object) by name or URI\n"
  "# Support for this interface is indicated through the SPAWNING value in GetSimulationFeatures.\n"
  "\n"
  "string name                             # A name to give to the spawned entity.\n"
  "                                        # If empty, a name field in the uri file or resource_string will be used,\n"
  "                                        # if supported and not empty (e.g. \"name\" field in SDFormat, URDF).\n"
  "                                        # If the name is still empty or not unique (as determined by the simulator),\n"
  "                                        # the service returns a generated name in the entity_name response field if the\n"
  "                                        # allow_renaming field is set to true. Otherwise, the service call fails and an\n"
  "                                        # error is returned.\n"
  "bool allow_renaming                     # Determines whether the spawning succeeds with a non-unique name.\n"
  "                                        # If it is set to true, the user should always check entity_name response field\n"
  "                                        # and use it for any further interactions.\n"
  "\n"
  "Resource entity_resource                # Resource such as SDFormat, URDF, USD or MJCF file, a native prefab, etc.\n"
  "                                        # Valid URIs can be determined by calling GetSpawnables first. \n"
  "                                        # Check simulator format support via the spawn_formats field in GetSimulatorFeatures.\n"
  "                                        # Using resource_string is supported if GetSimulatorFeatures includes\n"
  "                                        # the SPAWNING_RESOURCE_STRING feature.\n"
  "\n"
  "string entity_namespace                 # Spawn the entity with all its interfaces under this namespace.\n"
  "geometry_msgs/PoseStamped initial_pose  # Initial entity pose.\n"
  "                                        # The header contains a reference frame, which defaults to global \"world\" frame.\n"
  "                                        # This frame must be known to the simulator, e.g. of an object spawned earlier.\n"
  "                                        # The timestamp field in the header is ignored.\n"
  "\n"
  "---\n"
  "\n"
  "# Additional result.result_code values for this service. Check result.error_message for further details.\n"
  "uint8 NAME_NOT_UNIQUE       = 101       # Given name is already taken by entity and allow_renaming is false.\n"
  "uint8 NAME_INVALID          = 102       # Given name is invalid in the simulator (e.g. does not meet naming\n"
  "                                        # requirements such as allowed characters). This is also returned if name is\n"
  "                                        # empty and allow_renaming is false.\n"
  "uint8 UNSUPPORTED_FORMAT    = 103       # Format for uri or resource string is unsupported. Check supported formats\n"
  "                                        # through GetSimulatorFeatures service, in spawn_formats field.\n"
  "uint8 NO_RESOURCE           = 104       # Both uri and resource string are empty.\n"
  "uint8 NAMESPACE_INVALID     = 105       # Namespace does not meet namespace naming standards.\n"
  "uint8 RESOURCE_PARSE_ERROR  = 106       # Resource file or string failed to parse.\n"
  "uint8 MISSING_ASSETS        = 107       # At least one of resource assets (such as meshes) was not found.\n"
  "uint8 UNSUPPORTED_ASSETS    = 108       # At least one of resource assets (such as meshes) is not supported.\n"
  "uint8 INVALID_POSE          = 109       # initial_pose is invalid, such as when the quaternion is invalid or position\n"
  "                                        # exceeds simulator world bounds.\n"
  "\n"
  "Result result\n"
  "string entity_name                      # Spawned entity full name, guaranteed to be unique in the simulation.\n"
  "                                        # If allow_renaming is true, it may differ from the request name field.";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__SpawnEntity__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__SpawnEntity__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 3863, 3863},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__SpawnEntity_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__SpawnEntity_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__SpawnEntity_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__SpawnEntity_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
simulation_interfaces__srv__SpawnEntity_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {simulation_interfaces__srv__SpawnEntity_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__SpawnEntity__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[13];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 13, 13};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__SpawnEntity__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    sources[8] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[9] = *simulation_interfaces__srv__SpawnEntity_Event__get_individual_type_description_source(NULL);
    sources[10] = *simulation_interfaces__srv__SpawnEntity_Request__get_individual_type_description_source(NULL);
    sources[11] = *simulation_interfaces__srv__SpawnEntity_Response__get_individual_type_description_source(NULL);
    sources[12] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__SpawnEntity_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__SpawnEntity_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__SpawnEntity_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__SpawnEntity_Response__get_individual_type_description_source(NULL),
    sources[1] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
simulation_interfaces__srv__SpawnEntity_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[12];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 12, 12};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *simulation_interfaces__srv__SpawnEntity_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[7] = *simulation_interfaces__msg__Resource__get_individual_type_description_source(NULL);
    sources[8] = *simulation_interfaces__msg__Result__get_individual_type_description_source(NULL);
    sources[9] = *simulation_interfaces__srv__SpawnEntity_Request__get_individual_type_description_source(NULL);
    sources[10] = *simulation_interfaces__srv__SpawnEntity_Response__get_individual_type_description_source(NULL);
    sources[11] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
