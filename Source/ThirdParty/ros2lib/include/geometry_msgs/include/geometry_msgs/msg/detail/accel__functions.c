// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geometry_msgs:msg/Accel.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/accel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `linear`
// Member `angular`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
geometry_msgs__msg__Accel__init(geometry_msgs__msg__Accel * msg)
{
  if (!msg) {
    return false;
  }
  // linear
  if (!geometry_msgs__msg__Vector3__init(&msg->linear)) {
    geometry_msgs__msg__Accel__fini(msg);
    return false;
  }
  // angular
  if (!geometry_msgs__msg__Vector3__init(&msg->angular)) {
    geometry_msgs__msg__Accel__fini(msg);
    return false;
  }
  return true;
}

void
geometry_msgs__msg__Accel__fini(geometry_msgs__msg__Accel * msg)
{
  if (!msg) {
    return;
  }
  // linear
  geometry_msgs__msg__Vector3__fini(&msg->linear);
  // angular
  geometry_msgs__msg__Vector3__fini(&msg->angular);
}

geometry_msgs__msg__Accel *
geometry_msgs__msg__Accel__create()
{
  geometry_msgs__msg__Accel * msg = (geometry_msgs__msg__Accel *)malloc(sizeof(geometry_msgs__msg__Accel));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__Accel));
  bool success = geometry_msgs__msg__Accel__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__Accel__destroy(geometry_msgs__msg__Accel * msg)
{
  if (msg) {
    geometry_msgs__msg__Accel__fini(msg);
  }
  free(msg);
}


bool
geometry_msgs__msg__Accel__Sequence__init(geometry_msgs__msg__Accel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  geometry_msgs__msg__Accel * data = NULL;
  if (size) {
    data = (geometry_msgs__msg__Accel *)calloc(size, sizeof(geometry_msgs__msg__Accel));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__Accel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__Accel__fini(&data[i - 1]);
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
geometry_msgs__msg__Accel__Sequence__fini(geometry_msgs__msg__Accel__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geometry_msgs__msg__Accel__fini(&array->data[i]);
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

geometry_msgs__msg__Accel__Sequence *
geometry_msgs__msg__Accel__Sequence__create(size_t size)
{
  geometry_msgs__msg__Accel__Sequence * array = (geometry_msgs__msg__Accel__Sequence *)malloc(sizeof(geometry_msgs__msg__Accel__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__Accel__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__Accel__Sequence__destroy(geometry_msgs__msg__Accel__Sequence * array)
{
  if (array) {
    geometry_msgs__msg__Accel__Sequence__fini(array);
  }
  free(array);
}
