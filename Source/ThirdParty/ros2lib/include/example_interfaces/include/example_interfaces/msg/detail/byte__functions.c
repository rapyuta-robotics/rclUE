// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from example_interfaces:msg/Byte.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/byte__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
example_interfaces__msg__Byte__init(example_interfaces__msg__Byte * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
example_interfaces__msg__Byte__fini(example_interfaces__msg__Byte * msg)
{
  if (!msg) {
    return;
  }
  // data
}

example_interfaces__msg__Byte *
example_interfaces__msg__Byte__create()
{
  example_interfaces__msg__Byte * msg = (example_interfaces__msg__Byte *)malloc(sizeof(example_interfaces__msg__Byte));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__msg__Byte));
  bool success = example_interfaces__msg__Byte__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
example_interfaces__msg__Byte__destroy(example_interfaces__msg__Byte * msg)
{
  if (msg) {
    example_interfaces__msg__Byte__fini(msg);
  }
  free(msg);
}


bool
example_interfaces__msg__Byte__Sequence__init(example_interfaces__msg__Byte__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  example_interfaces__msg__Byte * data = NULL;
  if (size) {
    data = (example_interfaces__msg__Byte *)calloc(size, sizeof(example_interfaces__msg__Byte));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__msg__Byte__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__msg__Byte__fini(&data[i - 1]);
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
example_interfaces__msg__Byte__Sequence__fini(example_interfaces__msg__Byte__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      example_interfaces__msg__Byte__fini(&array->data[i]);
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

example_interfaces__msg__Byte__Sequence *
example_interfaces__msg__Byte__Sequence__create(size_t size)
{
  example_interfaces__msg__Byte__Sequence * array = (example_interfaces__msg__Byte__Sequence *)malloc(sizeof(example_interfaces__msg__Byte__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__msg__Byte__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
example_interfaces__msg__Byte__Sequence__destroy(example_interfaces__msg__Byte__Sequence * array)
{
  if (array) {
    example_interfaces__msg__Byte__Sequence__fini(array);
  }
  free(array);
}
