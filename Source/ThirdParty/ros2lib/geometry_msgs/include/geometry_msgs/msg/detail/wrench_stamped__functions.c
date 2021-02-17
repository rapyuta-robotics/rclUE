// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geometry_msgs:msg/WrenchStamped.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/wrench_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `wrench`
#include "geometry_msgs/msg/detail/wrench__functions.h"

bool
geometry_msgs__msg__WrenchStamped__init(geometry_msgs__msg__WrenchStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    geometry_msgs__msg__WrenchStamped__fini(msg);
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__init(&msg->wrench)) {
    geometry_msgs__msg__WrenchStamped__fini(msg);
    return false;
  }
  return true;
}

void
geometry_msgs__msg__WrenchStamped__fini(geometry_msgs__msg__WrenchStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // wrench
  geometry_msgs__msg__Wrench__fini(&msg->wrench);
}

geometry_msgs__msg__WrenchStamped *
geometry_msgs__msg__WrenchStamped__create()
{
  geometry_msgs__msg__WrenchStamped * msg = (geometry_msgs__msg__WrenchStamped *)malloc(sizeof(geometry_msgs__msg__WrenchStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__WrenchStamped));
  bool success = geometry_msgs__msg__WrenchStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__WrenchStamped__destroy(geometry_msgs__msg__WrenchStamped * msg)
{
  if (msg) {
    geometry_msgs__msg__WrenchStamped__fini(msg);
  }
  free(msg);
}


bool
geometry_msgs__msg__WrenchStamped__Sequence__init(geometry_msgs__msg__WrenchStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  geometry_msgs__msg__WrenchStamped * data = NULL;
  if (size) {
    data = (geometry_msgs__msg__WrenchStamped *)calloc(size, sizeof(geometry_msgs__msg__WrenchStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__WrenchStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__WrenchStamped__fini(&data[i - 1]);
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
geometry_msgs__msg__WrenchStamped__Sequence__fini(geometry_msgs__msg__WrenchStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geometry_msgs__msg__WrenchStamped__fini(&array->data[i]);
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

geometry_msgs__msg__WrenchStamped__Sequence *
geometry_msgs__msg__WrenchStamped__Sequence__create(size_t size)
{
  geometry_msgs__msg__WrenchStamped__Sequence * array = (geometry_msgs__msg__WrenchStamped__Sequence *)malloc(sizeof(geometry_msgs__msg__WrenchStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__WrenchStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__WrenchStamped__Sequence__destroy(geometry_msgs__msg__WrenchStamped__Sequence * array)
{
  if (array) {
    geometry_msgs__msg__WrenchStamped__Sequence__fini(array);
  }
  free(array);
}
