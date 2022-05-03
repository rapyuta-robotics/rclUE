// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rcl_interfaces:msg/FloatingPointRange.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/floating_point_range__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rcl_interfaces__msg__FloatingPointRange__init(rcl_interfaces__msg__FloatingPointRange * msg)
{
  if (!msg) {
    return false;
  }
  // from_value
  // to_value
  // step
  return true;
}

void
rcl_interfaces__msg__FloatingPointRange__fini(rcl_interfaces__msg__FloatingPointRange * msg)
{
  if (!msg) {
    return;
  }
  // from_value
  // to_value
  // step
}

rcl_interfaces__msg__FloatingPointRange *
rcl_interfaces__msg__FloatingPointRange__create()
{
  rcl_interfaces__msg__FloatingPointRange * msg = (rcl_interfaces__msg__FloatingPointRange *)malloc(sizeof(rcl_interfaces__msg__FloatingPointRange));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__msg__FloatingPointRange));
  bool success = rcl_interfaces__msg__FloatingPointRange__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__msg__FloatingPointRange__destroy(rcl_interfaces__msg__FloatingPointRange * msg)
{
  if (msg) {
    rcl_interfaces__msg__FloatingPointRange__fini(msg);
  }
  free(msg);
}


bool
rcl_interfaces__msg__FloatingPointRange__Sequence__init(rcl_interfaces__msg__FloatingPointRange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcl_interfaces__msg__FloatingPointRange * data = NULL;
  if (size) {
    data = (rcl_interfaces__msg__FloatingPointRange *)calloc(size, sizeof(rcl_interfaces__msg__FloatingPointRange));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__msg__FloatingPointRange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__msg__FloatingPointRange__fini(&data[i - 1]);
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
rcl_interfaces__msg__FloatingPointRange__Sequence__fini(rcl_interfaces__msg__FloatingPointRange__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__msg__FloatingPointRange__fini(&array->data[i]);
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

rcl_interfaces__msg__FloatingPointRange__Sequence *
rcl_interfaces__msg__FloatingPointRange__Sequence__create(size_t size)
{
  rcl_interfaces__msg__FloatingPointRange__Sequence * array = (rcl_interfaces__msg__FloatingPointRange__Sequence *)malloc(sizeof(rcl_interfaces__msg__FloatingPointRange__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__msg__FloatingPointRange__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__msg__FloatingPointRange__Sequence__destroy(rcl_interfaces__msg__FloatingPointRange__Sequence * array)
{
  if (array) {
    rcl_interfaces__msg__FloatingPointRange__Sequence__fini(array);
  }
  free(array);
}
