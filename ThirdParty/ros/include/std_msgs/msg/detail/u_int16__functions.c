// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from std_msgs:msg/UInt16.idl
// generated code does not contain a copyright notice
#include "std_msgs/msg/detail/u_int16__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
std_msgs__msg__UInt16__init(std_msgs__msg__UInt16 * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
std_msgs__msg__UInt16__fini(std_msgs__msg__UInt16 * msg)
{
  if (!msg) {
    return;
  }
  // data
}

bool
std_msgs__msg__UInt16__are_equal(const std_msgs__msg__UInt16 * lhs, const std_msgs__msg__UInt16 * rhs)
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
std_msgs__msg__UInt16__copy(
  const std_msgs__msg__UInt16 * input,
  std_msgs__msg__UInt16 * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  output->data = input->data;
  return true;
}

std_msgs__msg__UInt16 *
std_msgs__msg__UInt16__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  std_msgs__msg__UInt16 * msg = (std_msgs__msg__UInt16 *)allocator.allocate(sizeof(std_msgs__msg__UInt16), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_msgs__msg__UInt16));
  bool success = std_msgs__msg__UInt16__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
std_msgs__msg__UInt16__destroy(std_msgs__msg__UInt16 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    std_msgs__msg__UInt16__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
std_msgs__msg__UInt16__Sequence__init(std_msgs__msg__UInt16__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  std_msgs__msg__UInt16 * data = NULL;

  if (size) {
    data = (std_msgs__msg__UInt16 *)allocator.zero_allocate(size, sizeof(std_msgs__msg__UInt16), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_msgs__msg__UInt16__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_msgs__msg__UInt16__fini(&data[i - 1]);
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
std_msgs__msg__UInt16__Sequence__fini(std_msgs__msg__UInt16__Sequence * array)
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
      std_msgs__msg__UInt16__fini(&array->data[i]);
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

std_msgs__msg__UInt16__Sequence *
std_msgs__msg__UInt16__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  std_msgs__msg__UInt16__Sequence * array = (std_msgs__msg__UInt16__Sequence *)allocator.allocate(sizeof(std_msgs__msg__UInt16__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = std_msgs__msg__UInt16__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
std_msgs__msg__UInt16__Sequence__destroy(std_msgs__msg__UInt16__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    std_msgs__msg__UInt16__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
std_msgs__msg__UInt16__Sequence__are_equal(const std_msgs__msg__UInt16__Sequence * lhs, const std_msgs__msg__UInt16__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!std_msgs__msg__UInt16__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
std_msgs__msg__UInt16__Sequence__copy(
  const std_msgs__msg__UInt16__Sequence * input,
  std_msgs__msg__UInt16__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(std_msgs__msg__UInt16);
    std_msgs__msg__UInt16 * data =
      (std_msgs__msg__UInt16 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!std_msgs__msg__UInt16__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          std_msgs__msg__UInt16__fini(&data[i]);
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
    if (!std_msgs__msg__UInt16__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
