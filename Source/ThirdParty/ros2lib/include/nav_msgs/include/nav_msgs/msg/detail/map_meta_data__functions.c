// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav_msgs:msg/MapMetaData.idl
// generated code does not contain a copyright notice
#include "nav_msgs/msg/detail/map_meta_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `map_load_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `origin`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
nav_msgs__msg__MapMetaData__init(nav_msgs__msg__MapMetaData * msg)
{
  if (!msg) {
    return false;
  }
  // map_load_time
  if (!builtin_interfaces__msg__Time__init(&msg->map_load_time)) {
    nav_msgs__msg__MapMetaData__fini(msg);
    return false;
  }
  // resolution
  // width
  // height
  // origin
  if (!geometry_msgs__msg__Pose__init(&msg->origin)) {
    nav_msgs__msg__MapMetaData__fini(msg);
    return false;
  }
  return true;
}

void
nav_msgs__msg__MapMetaData__fini(nav_msgs__msg__MapMetaData * msg)
{
  if (!msg) {
    return;
  }
  // map_load_time
  builtin_interfaces__msg__Time__fini(&msg->map_load_time);
  // resolution
  // width
  // height
  // origin
  geometry_msgs__msg__Pose__fini(&msg->origin);
}

nav_msgs__msg__MapMetaData *
nav_msgs__msg__MapMetaData__create()
{
  nav_msgs__msg__MapMetaData * msg = (nav_msgs__msg__MapMetaData *)malloc(sizeof(nav_msgs__msg__MapMetaData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__msg__MapMetaData));
  bool success = nav_msgs__msg__MapMetaData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav_msgs__msg__MapMetaData__destroy(nav_msgs__msg__MapMetaData * msg)
{
  if (msg) {
    nav_msgs__msg__MapMetaData__fini(msg);
  }
  free(msg);
}


bool
nav_msgs__msg__MapMetaData__Sequence__init(nav_msgs__msg__MapMetaData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav_msgs__msg__MapMetaData * data = NULL;
  if (size) {
    data = (nav_msgs__msg__MapMetaData *)calloc(size, sizeof(nav_msgs__msg__MapMetaData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__msg__MapMetaData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__msg__MapMetaData__fini(&data[i - 1]);
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
nav_msgs__msg__MapMetaData__Sequence__fini(nav_msgs__msg__MapMetaData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_msgs__msg__MapMetaData__fini(&array->data[i]);
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

nav_msgs__msg__MapMetaData__Sequence *
nav_msgs__msg__MapMetaData__Sequence__create(size_t size)
{
  nav_msgs__msg__MapMetaData__Sequence * array = (nav_msgs__msg__MapMetaData__Sequence *)malloc(sizeof(nav_msgs__msg__MapMetaData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__msg__MapMetaData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav_msgs__msg__MapMetaData__Sequence__destroy(nav_msgs__msg__MapMetaData__Sequence * array)
{
  if (array) {
    nav_msgs__msg__MapMetaData__Sequence__fini(array);
  }
  free(array);
}
