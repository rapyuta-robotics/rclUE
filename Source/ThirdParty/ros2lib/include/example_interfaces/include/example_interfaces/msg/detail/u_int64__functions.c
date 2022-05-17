// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from example_interfaces:msg/UInt64.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/u_int64__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
example_interfaces__msg__UInt64__init(example_interfaces__msg__UInt64 * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
example_interfaces__msg__UInt64__fini(example_interfaces__msg__UInt64 * msg)
{
  if (!msg) {
    return;
  }
  // data
}

example_interfaces__msg__UInt64 *
example_interfaces__msg__UInt64__create()
{
  example_interfaces__msg__UInt64 * msg = (example_interfaces__msg__UInt64 *)malloc(sizeof(example_interfaces__msg__UInt64));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__msg__UInt64));
  bool success = example_interfaces__msg__UInt64__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
example_interfaces__msg__UInt64__destroy(example_interfaces__msg__UInt64 * msg)
{
  if (msg) {
    example_interfaces__msg__UInt64__fini(msg);
  }
  free(msg);
}


bool
example_interfaces__msg__UInt64__Sequence__init(example_interfaces__msg__UInt64__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  example_interfaces__msg__UInt64 * data = NULL;
  if (size) {
    data = (example_interfaces__msg__UInt64 *)calloc(size, sizeof(example_interfaces__msg__UInt64));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__msg__UInt64__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__msg__UInt64__fini(&data[i - 1]);
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
example_interfaces__msg__UInt64__Sequence__fini(example_interfaces__msg__UInt64__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      example_interfaces__msg__UInt64__fini(&array->data[i]);
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

example_interfaces__msg__UInt64__Sequence *
example_interfaces__msg__UInt64__Sequence__create(size_t size)
{
  example_interfaces__msg__UInt64__Sequence * array = (example_interfaces__msg__UInt64__Sequence *)malloc(sizeof(example_interfaces__msg__UInt64__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__msg__UInt64__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
example_interfaces__msg__UInt64__Sequence__destroy(example_interfaces__msg__UInt64__Sequence * array)
{
  if (array) {
    example_interfaces__msg__UInt64__Sequence__fini(array);
  }
  free(array);
}
