// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from example_interfaces:msg/Bool.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/bool__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
example_interfaces__msg__Bool__init(example_interfaces__msg__Bool * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
example_interfaces__msg__Bool__fini(example_interfaces__msg__Bool * msg)
{
  if (!msg) {
    return;
  }
  // data
}

bool
example_interfaces__msg__Bool__are_equal(const example_interfaces__msg__Bool * lhs, const example_interfaces__msg__Bool * rhs)
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
example_interfaces__msg__Bool__copy(
  const example_interfaces__msg__Bool * input,
  example_interfaces__msg__Bool * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  output->data = input->data;
  return true;
}

example_interfaces__msg__Bool *
example_interfaces__msg__Bool__create()
{
  example_interfaces__msg__Bool * msg = (example_interfaces__msg__Bool *)malloc(sizeof(example_interfaces__msg__Bool));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__msg__Bool));
  bool success = example_interfaces__msg__Bool__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
example_interfaces__msg__Bool__destroy(example_interfaces__msg__Bool * msg)
{
  if (msg) {
    example_interfaces__msg__Bool__fini(msg);
  }
  free(msg);
}


bool
example_interfaces__msg__Bool__Sequence__init(example_interfaces__msg__Bool__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  example_interfaces__msg__Bool * data = NULL;
  if (size) {
    data = (example_interfaces__msg__Bool *)calloc(size, sizeof(example_interfaces__msg__Bool));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__msg__Bool__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__msg__Bool__fini(&data[i - 1]);
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
example_interfaces__msg__Bool__Sequence__fini(example_interfaces__msg__Bool__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      example_interfaces__msg__Bool__fini(&array->data[i]);
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

example_interfaces__msg__Bool__Sequence *
example_interfaces__msg__Bool__Sequence__create(size_t size)
{
  example_interfaces__msg__Bool__Sequence * array = (example_interfaces__msg__Bool__Sequence *)malloc(sizeof(example_interfaces__msg__Bool__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__msg__Bool__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
example_interfaces__msg__Bool__Sequence__destroy(example_interfaces__msg__Bool__Sequence * array)
{
  if (array) {
    example_interfaces__msg__Bool__Sequence__fini(array);
  }
  free(array);
}

bool
example_interfaces__msg__Bool__Sequence__are_equal(const example_interfaces__msg__Bool__Sequence * lhs, const example_interfaces__msg__Bool__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_interfaces__msg__Bool__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_interfaces__msg__Bool__Sequence__copy(
  const example_interfaces__msg__Bool__Sequence * input,
  example_interfaces__msg__Bool__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_interfaces__msg__Bool);
    example_interfaces__msg__Bool * data =
      (example_interfaces__msg__Bool *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_interfaces__msg__Bool__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_interfaces__msg__Bool__fini(&data[i]);
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
    if (!example_interfaces__msg__Bool__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
