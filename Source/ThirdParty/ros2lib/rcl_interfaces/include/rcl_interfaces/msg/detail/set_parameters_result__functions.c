// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rcl_interfaces:msg/SetParametersResult.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/set_parameters_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
rcl_interfaces__msg__SetParametersResult__init(rcl_interfaces__msg__SetParametersResult * msg)
{
  if (!msg) {
    return false;
  }
  // successful
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    rcl_interfaces__msg__SetParametersResult__fini(msg);
    return false;
  }
  return true;
}

void
rcl_interfaces__msg__SetParametersResult__fini(rcl_interfaces__msg__SetParametersResult * msg)
{
  if (!msg) {
    return;
  }
  // successful
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
}

rcl_interfaces__msg__SetParametersResult *
rcl_interfaces__msg__SetParametersResult__create()
{
  rcl_interfaces__msg__SetParametersResult * msg = (rcl_interfaces__msg__SetParametersResult *)malloc(sizeof(rcl_interfaces__msg__SetParametersResult));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__msg__SetParametersResult));
  bool success = rcl_interfaces__msg__SetParametersResult__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__msg__SetParametersResult__destroy(rcl_interfaces__msg__SetParametersResult * msg)
{
  if (msg) {
    rcl_interfaces__msg__SetParametersResult__fini(msg);
  }
  free(msg);
}


bool
rcl_interfaces__msg__SetParametersResult__Sequence__init(rcl_interfaces__msg__SetParametersResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcl_interfaces__msg__SetParametersResult * data = NULL;
  if (size) {
    data = (rcl_interfaces__msg__SetParametersResult *)calloc(size, sizeof(rcl_interfaces__msg__SetParametersResult));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__msg__SetParametersResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__msg__SetParametersResult__fini(&data[i - 1]);
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
rcl_interfaces__msg__SetParametersResult__Sequence__fini(rcl_interfaces__msg__SetParametersResult__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__msg__SetParametersResult__fini(&array->data[i]);
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

rcl_interfaces__msg__SetParametersResult__Sequence *
rcl_interfaces__msg__SetParametersResult__Sequence__create(size_t size)
{
  rcl_interfaces__msg__SetParametersResult__Sequence * array = (rcl_interfaces__msg__SetParametersResult__Sequence *)malloc(sizeof(rcl_interfaces__msg__SetParametersResult__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__msg__SetParametersResult__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__msg__SetParametersResult__Sequence__destroy(rcl_interfaces__msg__SetParametersResult__Sequence * array)
{
  if (array) {
    rcl_interfaces__msg__SetParametersResult__Sequence__fini(array);
  }
  free(array);
}
