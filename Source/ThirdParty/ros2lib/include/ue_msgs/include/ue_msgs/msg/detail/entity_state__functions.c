// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ue_msgs:msg/EntityState.idl
// generated code does not contain a copyright notice
#include "ue_msgs/msg/detail/entity_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `reference_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
ue_msgs__msg__EntityState__init(ue_msgs__msg__EntityState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ue_msgs__msg__EntityState__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    ue_msgs__msg__EntityState__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    ue_msgs__msg__EntityState__fini(msg);
    return false;
  }
  // reference_frame
  if (!rosidl_runtime_c__String__init(&msg->reference_frame)) {
    ue_msgs__msg__EntityState__fini(msg);
    return false;
  }
  return true;
}

void
ue_msgs__msg__EntityState__fini(ue_msgs__msg__EntityState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // reference_frame
  rosidl_runtime_c__String__fini(&msg->reference_frame);
}

ue_msgs__msg__EntityState *
ue_msgs__msg__EntityState__create()
{
  ue_msgs__msg__EntityState * msg = (ue_msgs__msg__EntityState *)malloc(sizeof(ue_msgs__msg__EntityState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__msg__EntityState));
  bool success = ue_msgs__msg__EntityState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ue_msgs__msg__EntityState__destroy(ue_msgs__msg__EntityState * msg)
{
  if (msg) {
    ue_msgs__msg__EntityState__fini(msg);
  }
  free(msg);
}


bool
ue_msgs__msg__EntityState__Sequence__init(ue_msgs__msg__EntityState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ue_msgs__msg__EntityState * data = NULL;
  if (size) {
    data = (ue_msgs__msg__EntityState *)calloc(size, sizeof(ue_msgs__msg__EntityState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__msg__EntityState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__msg__EntityState__fini(&data[i - 1]);
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
ue_msgs__msg__EntityState__Sequence__fini(ue_msgs__msg__EntityState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ue_msgs__msg__EntityState__fini(&array->data[i]);
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

ue_msgs__msg__EntityState__Sequence *
ue_msgs__msg__EntityState__Sequence__create(size_t size)
{
  ue_msgs__msg__EntityState__Sequence * array = (ue_msgs__msg__EntityState__Sequence *)malloc(sizeof(ue_msgs__msg__EntityState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__msg__EntityState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ue_msgs__msg__EntityState__Sequence__destroy(ue_msgs__msg__EntityState__Sequence * array)
{
  if (array) {
    ue_msgs__msg__EntityState__Sequence__fini(array);
  }
  free(array);
}
