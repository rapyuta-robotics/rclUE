// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geometry_msgs:msg/AccelWithCovariance.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/accel_with_covariance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `accel`
#include "geometry_msgs/msg/detail/accel__functions.h"

bool
geometry_msgs__msg__AccelWithCovariance__init(geometry_msgs__msg__AccelWithCovariance * msg)
{
  if (!msg) {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Accel__init(&msg->accel)) {
    geometry_msgs__msg__AccelWithCovariance__fini(msg);
    return false;
  }
  // covariance
  return true;
}

void
geometry_msgs__msg__AccelWithCovariance__fini(geometry_msgs__msg__AccelWithCovariance * msg)
{
  if (!msg) {
    return;
  }
  // accel
  geometry_msgs__msg__Accel__fini(&msg->accel);
  // covariance
}

bool
geometry_msgs__msg__AccelWithCovariance__are_equal(const geometry_msgs__msg__AccelWithCovariance * lhs, const geometry_msgs__msg__AccelWithCovariance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Accel__are_equal(
      &(lhs->accel), &(rhs->accel)))
  {
    return false;
  }
  // covariance
  for (size_t i = 0; i < 36; ++i) {
    if (lhs->covariance[i] != rhs->covariance[i]) {
      return false;
    }
  }
  return true;
}

bool
geometry_msgs__msg__AccelWithCovariance__copy(
  const geometry_msgs__msg__AccelWithCovariance * input,
  geometry_msgs__msg__AccelWithCovariance * output)
{
  if (!input || !output) {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Accel__copy(
      &(input->accel), &(output->accel)))
  {
    return false;
  }
  // covariance
  for (size_t i = 0; i < 36; ++i) {
    output->covariance[i] = input->covariance[i];
  }
  return true;
}

geometry_msgs__msg__AccelWithCovariance *
geometry_msgs__msg__AccelWithCovariance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geometry_msgs__msg__AccelWithCovariance * msg = (geometry_msgs__msg__AccelWithCovariance *)allocator.allocate(sizeof(geometry_msgs__msg__AccelWithCovariance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__AccelWithCovariance));
  bool success = geometry_msgs__msg__AccelWithCovariance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__AccelWithCovariance__destroy(geometry_msgs__msg__AccelWithCovariance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    geometry_msgs__msg__AccelWithCovariance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
geometry_msgs__msg__AccelWithCovariance__Sequence__init(geometry_msgs__msg__AccelWithCovariance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geometry_msgs__msg__AccelWithCovariance * data = NULL;

  if (size) {
    data = (geometry_msgs__msg__AccelWithCovariance *)allocator.zero_allocate(size, sizeof(geometry_msgs__msg__AccelWithCovariance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__AccelWithCovariance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__AccelWithCovariance__fini(&data[i - 1]);
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
geometry_msgs__msg__AccelWithCovariance__Sequence__fini(geometry_msgs__msg__AccelWithCovariance__Sequence * array)
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
      geometry_msgs__msg__AccelWithCovariance__fini(&array->data[i]);
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

geometry_msgs__msg__AccelWithCovariance__Sequence *
geometry_msgs__msg__AccelWithCovariance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geometry_msgs__msg__AccelWithCovariance__Sequence * array = (geometry_msgs__msg__AccelWithCovariance__Sequence *)allocator.allocate(sizeof(geometry_msgs__msg__AccelWithCovariance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__AccelWithCovariance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__AccelWithCovariance__Sequence__destroy(geometry_msgs__msg__AccelWithCovariance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    geometry_msgs__msg__AccelWithCovariance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
geometry_msgs__msg__AccelWithCovariance__Sequence__are_equal(const geometry_msgs__msg__AccelWithCovariance__Sequence * lhs, const geometry_msgs__msg__AccelWithCovariance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!geometry_msgs__msg__AccelWithCovariance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
geometry_msgs__msg__AccelWithCovariance__Sequence__copy(
  const geometry_msgs__msg__AccelWithCovariance__Sequence * input,
  geometry_msgs__msg__AccelWithCovariance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(geometry_msgs__msg__AccelWithCovariance);
    geometry_msgs__msg__AccelWithCovariance * data =
      (geometry_msgs__msg__AccelWithCovariance *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!geometry_msgs__msg__AccelWithCovariance__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          geometry_msgs__msg__AccelWithCovariance__fini(&data[i]);
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
    if (!geometry_msgs__msg__AccelWithCovariance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
