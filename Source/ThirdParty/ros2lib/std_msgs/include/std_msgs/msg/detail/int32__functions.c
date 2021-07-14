// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from std_msgs:msg/Int32.idl
// generated code does not contain a copyright notice
#include "std_msgs/msg/detail/int32__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
std_msgs__msg__Int32__init(std_msgs__msg__Int32 * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
std_msgs__msg__Int32__fini(std_msgs__msg__Int32 * msg)
{
  if (!msg) {
    return;
  }
  // data
}

std_msgs__msg__Int32 *
std_msgs__msg__Int32__create()
{
  std_msgs__msg__Int32 * msg = (std_msgs__msg__Int32 *)malloc(sizeof(std_msgs__msg__Int32));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_msgs__msg__Int32));
  bool success = std_msgs__msg__Int32__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
std_msgs__msg__Int32__destroy(std_msgs__msg__Int32 * msg)
{
  if (msg) {
    std_msgs__msg__Int32__fini(msg);
  }
  free(msg);
}


bool
std_msgs__msg__Int32__Sequence__init(std_msgs__msg__Int32__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  std_msgs__msg__Int32 * data = NULL;
  if (size) {
    data = (std_msgs__msg__Int32 *)calloc(size, sizeof(std_msgs__msg__Int32));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_msgs__msg__Int32__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_msgs__msg__Int32__fini(&data[i - 1]);
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
std_msgs__msg__Int32__Sequence__fini(std_msgs__msg__Int32__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      std_msgs__msg__Int32__fini(&array->data[i]);
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

std_msgs__msg__Int32__Sequence *
std_msgs__msg__Int32__Sequence__create(size_t size)
{
  std_msgs__msg__Int32__Sequence * array = (std_msgs__msg__Int32__Sequence *)malloc(sizeof(std_msgs__msg__Int32__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = std_msgs__msg__Int32__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
std_msgs__msg__Int32__Sequence__destroy(std_msgs__msg__Int32__Sequence * array)
{
  if (array) {
    std_msgs__msg__Int32__Sequence__fini(array);
  }
  free(array);
}
