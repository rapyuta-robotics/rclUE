// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ue_msgs:msg/HitEvent.idl
// generated code does not contain a copyright notice

#include "ue_msgs/msg/detail/hit_event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ue_msgs
const rosidl_type_hash_t *
ue_msgs__msg__HitEvent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0x66, 0x24, 0x10, 0x1e, 0xcd, 0x8a, 0xac,
      0x9b, 0xf5, 0xd0, 0x73, 0x91, 0x24, 0x69, 0x37,
      0x97, 0x30, 0x4b, 0x8a, 0x32, 0x3f, 0xb4, 0x9b,
      0x53, 0xf6, 0xba, 0xea, 0x60, 0xca, 0x86, 0xc9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "ue_msgs/msg/detail/hit_result__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t ue_msgs__msg__HitResult__EXPECTED_HASH = {1, {
    0x12, 0x38, 0xdc, 0x33, 0x3c, 0xa3, 0x43, 0xa1,
    0xd2, 0xa0, 0x26, 0x37, 0x3e, 0xd0, 0xd2, 0xf1,
    0x5e, 0x1b, 0xdc, 0x6a, 0x1e, 0x47, 0x12, 0x05,
    0x0b, 0x9e, 0xd1, 0x31, 0xe1, 0x23, 0x4b, 0x26,
  }};
#endif

static char ue_msgs__msg__HitEvent__TYPE_NAME[] = "ue_msgs/msg/HitEvent";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char ue_msgs__msg__HitResult__TYPE_NAME[] = "ue_msgs/msg/HitResult";

// Define type names, field names, and default values
static char ue_msgs__msg__HitEvent__FIELD_NAME__self_name[] = "self_name";
static char ue_msgs__msg__HitEvent__FIELD_NAME__other_actor_name[] = "other_actor_name";
static char ue_msgs__msg__HitEvent__FIELD_NAME__normal_impluse[] = "normal_impluse";
static char ue_msgs__msg__HitEvent__FIELD_NAME__hit_result[] = "hit_result";
static char ue_msgs__msg__HitEvent__FIELD_NAME__other_component_name[] = "other_component_name";

static rosidl_runtime_c__type_description__Field ue_msgs__msg__HitEvent__FIELDS[] = {
  {
    {ue_msgs__msg__HitEvent__FIELD_NAME__self_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ue_msgs__msg__HitEvent__FIELD_NAME__other_actor_name, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ue_msgs__msg__HitEvent__FIELD_NAME__normal_impluse, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {ue_msgs__msg__HitEvent__FIELD_NAME__hit_result, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ue_msgs__msg__HitResult__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
  {
    {ue_msgs__msg__HitEvent__FIELD_NAME__other_component_name, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ue_msgs__msg__HitEvent__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {ue_msgs__msg__HitResult__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ue_msgs__msg__HitEvent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ue_msgs__msg__HitEvent__TYPE_NAME, 20, 20},
      {ue_msgs__msg__HitEvent__FIELDS, 5, 5},
    },
    {ue_msgs__msg__HitEvent__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ue_msgs__msg__HitResult__EXPECTED_HASH, ue_msgs__msg__HitResult__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ue_msgs__msg__HitResult__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Ref \n"
  "# doc: https://docs.unrealengine.com/5.2/en-US/using-the-onhit-event/\n"
  "# DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_FiveParams( FComponentHitSignature, UPrimitiveComponent, OnComponentHit, UPrimitiveComponent*, HitComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, FVector, NormalImpulse, const FHitResult&, Hit );\n"
  "# DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_FourParams( FActorHitSignature, AActor, OnActorHit, AActor*, SelfActor, AActor*, OtherActor, FVector, NormalImpulse, const FHitResult&, Hit );\n"
  "\n"
  "# common\n"
  "string self_name # actor or component name\n"
  "string other_actor_name\n"
  "geometry_msgs/Vector3 normal_impluse\n"
  "ue_msgs/HitResult hit_result\n"
  "\n"
  "# component event only\n"
  "string other_component_name # empty unless OnComponentHit event\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ue_msgs__msg__HitEvent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ue_msgs__msg__HitEvent__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 753, 753},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ue_msgs__msg__HitEvent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ue_msgs__msg__HitEvent__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[3] = *ue_msgs__msg__HitResult__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
