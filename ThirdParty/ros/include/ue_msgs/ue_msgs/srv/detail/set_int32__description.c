// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ue_msgs:srv/SetInt32.idl
// generated code does not contain a copyright notice

#include "ue_msgs/srv/detail/set_int32__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
const rosidl_type_hash_t *
ue_msgs__srv__SetInt32__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x69, 0x09, 0x22, 0x5f, 0xd3, 0xa7, 0x0c, 0x7b,
      0x1f, 0x3e, 0x16, 0xcc, 0x3c, 0xf8, 0x34, 0x5b,
      0x21, 0xdc, 0x0f, 0xc7, 0x0d, 0x21, 0xbf, 0x41,
      0x61, 0x6f, 0x83, 0x2e, 0xeb, 0x70, 0xa5, 0x43,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
const rosidl_type_hash_t *
ue_msgs__srv__SetInt32_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x69, 0xe1, 0x05, 0x33, 0x50, 0x21, 0xa1, 0x67,
      0x63, 0x3e, 0x9e, 0xa2, 0x9f, 0x49, 0x5e, 0xfe,
      0xa9, 0x93, 0x57, 0xba, 0x6d, 0x9e, 0x38, 0xc6,
      0x39, 0xae, 0x26, 0xf6, 0xcd, 0x52, 0x15, 0xa3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
const rosidl_type_hash_t *
ue_msgs__srv__SetInt32_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x87, 0x2c, 0xa4, 0x5d, 0xad, 0xd1, 0x33, 0x41,
      0x11, 0x38, 0x66, 0xd1, 0xb5, 0x85, 0xb4, 0xac,
      0x12, 0xf5, 0x23, 0x06, 0xb9, 0x4c, 0x30, 0xdd,
      0x5a, 0x07, 0xbe, 0xd1, 0x50, 0x98, 0x5d, 0x60,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
const rosidl_type_hash_t *
ue_msgs__srv__SetInt32_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0x6a, 0xa3, 0x86, 0xa3, 0x45, 0xca, 0x89,
      0x35, 0x5e, 0xe3, 0xf0, 0x52, 0x52, 0x2f, 0xae,
      0xed, 0x95, 0x11, 0x1d, 0x5b, 0x77, 0x8f, 0x8d,
      0xe5, 0xd3, 0x7b, 0x9f, 0x98, 0x2e, 0x71, 0xd4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

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
#endif

static char ue_msgs__srv__SetInt32__TYPE_NAME[] = "ue_msgs/srv/SetInt32";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char ue_msgs__srv__SetInt32_Event__TYPE_NAME[] = "ue_msgs/srv/SetInt32_Event";
static char ue_msgs__srv__SetInt32_Request__TYPE_NAME[] = "ue_msgs/srv/SetInt32_Request";
static char ue_msgs__srv__SetInt32_Response__TYPE_NAME[] = "ue_msgs/srv/SetInt32_Response";

// Define type names, field names, and default values
static char ue_msgs__srv__SetInt32__FIELD_NAME__request_message[] = "request_message";
static char ue_msgs__srv__SetInt32__FIELD_NAME__response_message[] = "response_message";
static char ue_msgs__srv__SetInt32__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ue_msgs__srv__SetInt32__FIELDS[] = {
  {
    {ue_msgs__srv__SetInt32__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ue_msgs__srv__SetInt32_Request__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {ue_msgs__srv__SetInt32__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ue_msgs__srv__SetInt32_Response__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {ue_msgs__srv__SetInt32__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ue_msgs__srv__SetInt32_Event__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ue_msgs__srv__SetInt32__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ue_msgs__srv__SetInt32_Event__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {ue_msgs__srv__SetInt32_Request__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {ue_msgs__srv__SetInt32_Response__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ue_msgs__srv__SetInt32__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ue_msgs__srv__SetInt32__TYPE_NAME, 20, 20},
      {ue_msgs__srv__SetInt32__FIELDS, 3, 3},
    },
    {ue_msgs__srv__SetInt32__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ue_msgs__srv__SetInt32_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ue_msgs__srv__SetInt32_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ue_msgs__srv__SetInt32_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ue_msgs__srv__SetInt32_Request__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field ue_msgs__srv__SetInt32_Request__FIELDS[] = {
  {
    {ue_msgs__srv__SetInt32_Request__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ue_msgs__srv__SetInt32_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ue_msgs__srv__SetInt32_Request__TYPE_NAME, 28, 28},
      {ue_msgs__srv__SetInt32_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ue_msgs__srv__SetInt32_Response__FIELD_NAME__success[] = "success";
static char ue_msgs__srv__SetInt32_Response__FIELD_NAME__remarks[] = "remarks";

static rosidl_runtime_c__type_description__Field ue_msgs__srv__SetInt32_Response__FIELDS[] = {
  {
    {ue_msgs__srv__SetInt32_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ue_msgs__srv__SetInt32_Response__FIELD_NAME__remarks, 7, 7},
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
ue_msgs__srv__SetInt32_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ue_msgs__srv__SetInt32_Response__TYPE_NAME, 29, 29},
      {ue_msgs__srv__SetInt32_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ue_msgs__srv__SetInt32_Event__FIELD_NAME__info[] = "info";
static char ue_msgs__srv__SetInt32_Event__FIELD_NAME__request[] = "request";
static char ue_msgs__srv__SetInt32_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ue_msgs__srv__SetInt32_Event__FIELDS[] = {
  {
    {ue_msgs__srv__SetInt32_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ue_msgs__srv__SetInt32_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ue_msgs__srv__SetInt32_Request__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {ue_msgs__srv__SetInt32_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ue_msgs__srv__SetInt32_Response__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ue_msgs__srv__SetInt32_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ue_msgs__srv__SetInt32_Request__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {ue_msgs__srv__SetInt32_Response__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ue_msgs__srv__SetInt32_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ue_msgs__srv__SetInt32_Event__TYPE_NAME, 26, 26},
      {ue_msgs__srv__SetInt32_Event__FIELDS, 3, 3},
    },
    {ue_msgs__srv__SetInt32_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ue_msgs__srv__SetInt32_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ue_msgs__srv__SetInt32_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 data\n"
  "---\n"
  "bool success\n"
  "string remarks";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ue_msgs__srv__SetInt32__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ue_msgs__srv__SetInt32__TYPE_NAME, 20, 20},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 43, 43},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ue_msgs__srv__SetInt32_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ue_msgs__srv__SetInt32_Request__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ue_msgs__srv__SetInt32_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ue_msgs__srv__SetInt32_Response__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ue_msgs__srv__SetInt32_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ue_msgs__srv__SetInt32_Event__TYPE_NAME, 26, 26},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ue_msgs__srv__SetInt32__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ue_msgs__srv__SetInt32__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ue_msgs__srv__SetInt32_Event__get_individual_type_description_source(NULL);
    sources[4] = *ue_msgs__srv__SetInt32_Request__get_individual_type_description_source(NULL);
    sources[5] = *ue_msgs__srv__SetInt32_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ue_msgs__srv__SetInt32_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ue_msgs__srv__SetInt32_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ue_msgs__srv__SetInt32_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ue_msgs__srv__SetInt32_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ue_msgs__srv__SetInt32_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ue_msgs__srv__SetInt32_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ue_msgs__srv__SetInt32_Request__get_individual_type_description_source(NULL);
    sources[4] = *ue_msgs__srv__SetInt32_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
