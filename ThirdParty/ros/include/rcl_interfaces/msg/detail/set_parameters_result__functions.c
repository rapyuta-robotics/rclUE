// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rcl_interfaces:msg/SetParametersResult.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/set_parameters_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


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

bool
rcl_interfaces__msg__SetParametersResult__are_equal(const rcl_interfaces__msg__SetParametersResult * lhs, const rcl_interfaces__msg__SetParametersResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // successful
  if (lhs->successful != rhs->successful) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  return true;
}

bool
rcl_interfaces__msg__SetParametersResult__copy(
  const rcl_interfaces__msg__SetParametersResult * input,
  rcl_interfaces__msg__SetParametersResult * output)
{
  if (!input || !output) {
    return false;
  }
  // successful
  output->successful = input->successful;
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  return true;
}

rcl_interfaces__msg__SetParametersResult *
rcl_interfaces__msg__SetParametersResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__msg__SetParametersResult * msg = (rcl_interfaces__msg__SetParametersResult *)allocator.allocate(sizeof(rcl_interfaces__msg__SetParametersResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__msg__SetParametersResult));
  bool success = rcl_interfaces__msg__SetParametersResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__msg__SetParametersResult__destroy(rcl_interfaces__msg__SetParametersResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rcl_interfaces__msg__SetParametersResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rcl_interfaces__msg__SetParametersResult__Sequence__init(rcl_interfaces__msg__SetParametersResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__msg__SetParametersResult * data = NULL;

  if (size) {
    data = (rcl_interfaces__msg__SetParametersResult *)allocator.zero_allocate(size, sizeof(rcl_interfaces__msg__SetParametersResult), allocator.state);
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
      allocator.deallocate(data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__msg__SetParametersResult__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__msg__SetParametersResult__Sequence * array = (rcl_interfaces__msg__SetParametersResult__Sequence *)allocator.allocate(sizeof(rcl_interfaces__msg__SetParametersResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__msg__SetParametersResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__msg__SetParametersResult__Sequence__destroy(rcl_interfaces__msg__SetParametersResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rcl_interfaces__msg__SetParametersResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rcl_interfaces__msg__SetParametersResult__Sequence__are_equal(const rcl_interfaces__msg__SetParametersResult__Sequence * lhs, const rcl_interfaces__msg__SetParametersResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rcl_interfaces__msg__SetParametersResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rcl_interfaces__msg__SetParametersResult__Sequence__copy(
  const rcl_interfaces__msg__SetParametersResult__Sequence * input,
  rcl_interfaces__msg__SetParametersResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rcl_interfaces__msg__SetParametersResult);
    rcl_interfaces__msg__SetParametersResult * data =
      (rcl_interfaces__msg__SetParametersResult *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rcl_interfaces__msg__SetParametersResult__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rcl_interfaces__msg__SetParametersResult__fini(&data[i]);
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
    if (!rcl_interfaces__msg__SetParametersResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
