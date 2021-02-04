// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from std_msgs:msg/Byte.idl
// generated code does not contain a copyright notice
#include "std_msgs/msg/detail/byte__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
std_msgs__msg__Byte__init(std_msgs__msg__Byte * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
std_msgs__msg__Byte__fini(std_msgs__msg__Byte * msg)
{
  if (!msg) {
    return;
  }
  // data
}

std_msgs__msg__Byte *
std_msgs__msg__Byte__create()
{
  std_msgs__msg__Byte * msg = (std_msgs__msg__Byte *)malloc(sizeof(std_msgs__msg__Byte));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_msgs__msg__Byte));
  bool success = std_msgs__msg__Byte__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
std_msgs__msg__Byte__destroy(std_msgs__msg__Byte * msg)
{
  if (msg) {
    std_msgs__msg__Byte__fini(msg);
  }
  free(msg);
}


bool
std_msgs__msg__Byte__Sequence__init(std_msgs__msg__Byte__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  std_msgs__msg__Byte * data = NULL;
  if (size) {
    data = (std_msgs__msg__Byte *)calloc(size, sizeof(std_msgs__msg__Byte));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_msgs__msg__Byte__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_msgs__msg__Byte__fini(&data[i - 1]);
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
std_msgs__msg__Byte__Sequence__fini(std_msgs__msg__Byte__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      std_msgs__msg__Byte__fini(&array->data[i]);
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

std_msgs__msg__Byte__Sequence *
std_msgs__msg__Byte__Sequence__create(size_t size)
{
  std_msgs__msg__Byte__Sequence * array = (std_msgs__msg__Byte__Sequence *)malloc(sizeof(std_msgs__msg__Byte__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = std_msgs__msg__Byte__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
std_msgs__msg__Byte__Sequence__destroy(std_msgs__msg__Byte__Sequence * array)
{
  if (array) {
    std_msgs__msg__Byte__Sequence__fini(array);
  }
  free(array);
}
