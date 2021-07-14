// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geometry_msgs:msg/Transform.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/transform__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `translation`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `rotation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
geometry_msgs__msg__Transform__init(geometry_msgs__msg__Transform * msg)
{
  if (!msg) {
    return false;
  }
  // translation
  if (!geometry_msgs__msg__Vector3__init(&msg->translation)) {
    geometry_msgs__msg__Transform__fini(msg);
    return false;
  }
  // rotation
  if (!geometry_msgs__msg__Quaternion__init(&msg->rotation)) {
    geometry_msgs__msg__Transform__fini(msg);
    return false;
  }
  return true;
}

void
geometry_msgs__msg__Transform__fini(geometry_msgs__msg__Transform * msg)
{
  if (!msg) {
    return;
  }
  // translation
  geometry_msgs__msg__Vector3__fini(&msg->translation);
  // rotation
  geometry_msgs__msg__Quaternion__fini(&msg->rotation);
}

geometry_msgs__msg__Transform *
geometry_msgs__msg__Transform__create()
{
  geometry_msgs__msg__Transform * msg = (geometry_msgs__msg__Transform *)malloc(sizeof(geometry_msgs__msg__Transform));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__Transform));
  bool success = geometry_msgs__msg__Transform__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__Transform__destroy(geometry_msgs__msg__Transform * msg)
{
  if (msg) {
    geometry_msgs__msg__Transform__fini(msg);
  }
  free(msg);
}


bool
geometry_msgs__msg__Transform__Sequence__init(geometry_msgs__msg__Transform__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  geometry_msgs__msg__Transform * data = NULL;
  if (size) {
    data = (geometry_msgs__msg__Transform *)calloc(size, sizeof(geometry_msgs__msg__Transform));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__Transform__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__Transform__fini(&data[i - 1]);
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
geometry_msgs__msg__Transform__Sequence__fini(geometry_msgs__msg__Transform__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geometry_msgs__msg__Transform__fini(&array->data[i]);
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

geometry_msgs__msg__Transform__Sequence *
geometry_msgs__msg__Transform__Sequence__create(size_t size)
{
  geometry_msgs__msg__Transform__Sequence * array = (geometry_msgs__msg__Transform__Sequence *)malloc(sizeof(geometry_msgs__msg__Transform__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__Transform__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__Transform__Sequence__destroy(geometry_msgs__msg__Transform__Sequence * array)
{
  if (array) {
    geometry_msgs__msg__Transform__Sequence__fini(array);
  }
  free(array);
}
