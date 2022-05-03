// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rcl_interfaces:msg/ParameterType.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/parameter_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rcl_interfaces__msg__ParameterType__init(rcl_interfaces__msg__ParameterType * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rcl_interfaces__msg__ParameterType__fini(rcl_interfaces__msg__ParameterType * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

rcl_interfaces__msg__ParameterType *
rcl_interfaces__msg__ParameterType__create()
{
  rcl_interfaces__msg__ParameterType * msg = (rcl_interfaces__msg__ParameterType *)malloc(sizeof(rcl_interfaces__msg__ParameterType));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__msg__ParameterType));
  bool success = rcl_interfaces__msg__ParameterType__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__msg__ParameterType__destroy(rcl_interfaces__msg__ParameterType * msg)
{
  if (msg) {
    rcl_interfaces__msg__ParameterType__fini(msg);
  }
  free(msg);
}


bool
rcl_interfaces__msg__ParameterType__Sequence__init(rcl_interfaces__msg__ParameterType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcl_interfaces__msg__ParameterType * data = NULL;
  if (size) {
    data = (rcl_interfaces__msg__ParameterType *)calloc(size, sizeof(rcl_interfaces__msg__ParameterType));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__msg__ParameterType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__msg__ParameterType__fini(&data[i - 1]);
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
rcl_interfaces__msg__ParameterType__Sequence__fini(rcl_interfaces__msg__ParameterType__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__msg__ParameterType__fini(&array->data[i]);
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

rcl_interfaces__msg__ParameterType__Sequence *
rcl_interfaces__msg__ParameterType__Sequence__create(size_t size)
{
  rcl_interfaces__msg__ParameterType__Sequence * array = (rcl_interfaces__msg__ParameterType__Sequence *)malloc(sizeof(rcl_interfaces__msg__ParameterType__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__msg__ParameterType__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__msg__ParameterType__Sequence__destroy(rcl_interfaces__msg__ParameterType__Sequence * array)
{
  if (array) {
    rcl_interfaces__msg__ParameterType__Sequence__fini(array);
  }
  free(array);
}
