// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from std_msgs:msg/Int8.idl
// generated code does not contain a copyright notice
#include "std_msgs/msg/detail/int8__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
std_msgs__msg__Int8__init(std_msgs__msg__Int8 * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
std_msgs__msg__Int8__fini(std_msgs__msg__Int8 * msg)
{
  if (!msg) {
    return;
  }
  // data
}

bool
std_msgs__msg__Int8__are_equal(const std_msgs__msg__Int8 * lhs, const std_msgs__msg__Int8 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
std_msgs__msg__Int8__copy(
  const std_msgs__msg__Int8 * input,
  std_msgs__msg__Int8 * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  output->data = input->data;
  return true;
}

std_msgs__msg__Int8 *
std_msgs__msg__Int8__create()
{
  std_msgs__msg__Int8 * msg = (std_msgs__msg__Int8 *)malloc(sizeof(std_msgs__msg__Int8));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_msgs__msg__Int8));
  bool success = std_msgs__msg__Int8__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
std_msgs__msg__Int8__destroy(std_msgs__msg__Int8 * msg)
{
  if (msg) {
    std_msgs__msg__Int8__fini(msg);
  }
  free(msg);
}


bool
std_msgs__msg__Int8__Sequence__init(std_msgs__msg__Int8__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  std_msgs__msg__Int8 * data = NULL;
  if (size) {
    data = (std_msgs__msg__Int8 *)calloc(size, sizeof(std_msgs__msg__Int8));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_msgs__msg__Int8__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_msgs__msg__Int8__fini(&data[i - 1]);
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
std_msgs__msg__Int8__Sequence__fini(std_msgs__msg__Int8__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      std_msgs__msg__Int8__fini(&array->data[i]);
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

std_msgs__msg__Int8__Sequence *
std_msgs__msg__Int8__Sequence__create(size_t size)
{
  std_msgs__msg__Int8__Sequence * array = (std_msgs__msg__Int8__Sequence *)malloc(sizeof(std_msgs__msg__Int8__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = std_msgs__msg__Int8__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
std_msgs__msg__Int8__Sequence__destroy(std_msgs__msg__Int8__Sequence * array)
{
  if (array) {
    std_msgs__msg__Int8__Sequence__fini(array);
  }
  free(array);
}

bool
std_msgs__msg__Int8__Sequence__are_equal(const std_msgs__msg__Int8__Sequence * lhs, const std_msgs__msg__Int8__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!std_msgs__msg__Int8__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
std_msgs__msg__Int8__Sequence__copy(
  const std_msgs__msg__Int8__Sequence * input,
  std_msgs__msg__Int8__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(std_msgs__msg__Int8);
    std_msgs__msg__Int8 * data =
      (std_msgs__msg__Int8 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!std_msgs__msg__Int8__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          std_msgs__msg__Int8__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!std_msgs__msg__Int8__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
