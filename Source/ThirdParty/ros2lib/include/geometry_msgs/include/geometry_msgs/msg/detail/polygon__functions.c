// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geometry_msgs:msg/Polygon.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/polygon__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `points`
#include "geometry_msgs/msg/detail/point32__functions.h"

bool
geometry_msgs__msg__Polygon__init(geometry_msgs__msg__Polygon * msg)
{
  if (!msg) {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point32__Sequence__init(&msg->points, 0)) {
    geometry_msgs__msg__Polygon__fini(msg);
    return false;
  }
  return true;
}

void
geometry_msgs__msg__Polygon__fini(geometry_msgs__msg__Polygon * msg)
{
  if (!msg) {
    return;
  }
  // points
  geometry_msgs__msg__Point32__Sequence__fini(&msg->points);
}

geometry_msgs__msg__Polygon *
geometry_msgs__msg__Polygon__create()
{
  geometry_msgs__msg__Polygon * msg = (geometry_msgs__msg__Polygon *)malloc(sizeof(geometry_msgs__msg__Polygon));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__Polygon));
  bool success = geometry_msgs__msg__Polygon__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__Polygon__destroy(geometry_msgs__msg__Polygon * msg)
{
  if (msg) {
    geometry_msgs__msg__Polygon__fini(msg);
  }
  free(msg);
}


bool
geometry_msgs__msg__Polygon__Sequence__init(geometry_msgs__msg__Polygon__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  geometry_msgs__msg__Polygon * data = NULL;
  if (size) {
    data = (geometry_msgs__msg__Polygon *)calloc(size, sizeof(geometry_msgs__msg__Polygon));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__Polygon__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__Polygon__fini(&data[i - 1]);
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
geometry_msgs__msg__Polygon__Sequence__fini(geometry_msgs__msg__Polygon__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geometry_msgs__msg__Polygon__fini(&array->data[i]);
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

geometry_msgs__msg__Polygon__Sequence *
geometry_msgs__msg__Polygon__Sequence__create(size_t size)
{
  geometry_msgs__msg__Polygon__Sequence * array = (geometry_msgs__msg__Polygon__Sequence *)malloc(sizeof(geometry_msgs__msg__Polygon__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__Polygon__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__Polygon__Sequence__destroy(geometry_msgs__msg__Polygon__Sequence * array)
{
  if (array) {
    geometry_msgs__msg__Polygon__Sequence__fini(array);
  }
  free(array);
}
