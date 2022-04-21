// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ue_msgs:msg/SpawnEntityState.idl
// generated code does not contain a copyright notice
#include "ue_msgs/msg/detail/spawn_entity_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `xml`
// Member `tags`
#include "rosidl_runtime_c/string_functions.h"
// Member `state`
#include "ue_msgs/msg/detail/entity_state__functions.h"

bool
ue_msgs__msg__SpawnEntityState__init(ue_msgs__msg__SpawnEntityState * msg)
{
  if (!msg) {
    return false;
  }
  // xml
  if (!rosidl_runtime_c__String__init(&msg->xml)) {
    ue_msgs__msg__SpawnEntityState__fini(msg);
    return false;
  }
  // state
  if (!ue_msgs__msg__EntityState__init(&msg->state)) {
    ue_msgs__msg__SpawnEntityState__fini(msg);
    return false;
  }
  // tags
  if (!rosidl_runtime_c__String__Sequence__init(&msg->tags, 0)) {
    ue_msgs__msg__SpawnEntityState__fini(msg);
    return false;
  }
  return true;
}

void
ue_msgs__msg__SpawnEntityState__fini(ue_msgs__msg__SpawnEntityState * msg)
{
  if (!msg) {
    return;
  }
  // xml
  rosidl_runtime_c__String__fini(&msg->xml);
  // state
  ue_msgs__msg__EntityState__fini(&msg->state);
  // tags
  rosidl_runtime_c__String__Sequence__fini(&msg->tags);
}

ue_msgs__msg__SpawnEntityState *
ue_msgs__msg__SpawnEntityState__create()
{
  ue_msgs__msg__SpawnEntityState * msg = (ue_msgs__msg__SpawnEntityState *)malloc(sizeof(ue_msgs__msg__SpawnEntityState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__msg__SpawnEntityState));
  bool success = ue_msgs__msg__SpawnEntityState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ue_msgs__msg__SpawnEntityState__destroy(ue_msgs__msg__SpawnEntityState * msg)
{
  if (msg) {
    ue_msgs__msg__SpawnEntityState__fini(msg);
  }
  free(msg);
}


bool
ue_msgs__msg__SpawnEntityState__Sequence__init(ue_msgs__msg__SpawnEntityState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ue_msgs__msg__SpawnEntityState * data = NULL;
  if (size) {
    data = (ue_msgs__msg__SpawnEntityState *)calloc(size, sizeof(ue_msgs__msg__SpawnEntityState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__msg__SpawnEntityState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__msg__SpawnEntityState__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ue_msgs__msg__SpawnEntityState__Sequence__fini(ue_msgs__msg__SpawnEntityState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ue_msgs__msg__SpawnEntityState__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ue_msgs__msg__SpawnEntityState__Sequence *
ue_msgs__msg__SpawnEntityState__Sequence__create(size_t size)
{
  ue_msgs__msg__SpawnEntityState__Sequence * array = (ue_msgs__msg__SpawnEntityState__Sequence *)malloc(sizeof(ue_msgs__msg__SpawnEntityState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__msg__SpawnEntityState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ue_msgs__msg__SpawnEntityState__Sequence__destroy(ue_msgs__msg__SpawnEntityState__Sequence * array)
{
  if (array) {
    ue_msgs__msg__SpawnEntityState__Sequence__fini(array);
  }
  free(array);
}
