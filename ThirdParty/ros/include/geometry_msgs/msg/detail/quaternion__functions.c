// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geometry_msgs:msg/Quaternion.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/quaternion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
geometry_msgs__msg__Quaternion__init(geometry_msgs__msg__Quaternion * msg)
{
  if (!msg) {
    return false;
  }
  // x
  msg->x = 0.0l;
  // y
  msg->y = 0.0l;
  // z
  msg->z = 0.0l;
  // w
  msg->w = 1.0l;
  return true;
}

void
geometry_msgs__msg__Quaternion__fini(geometry_msgs__msg__Quaternion * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // w
}

bool
geometry_msgs__msg__Quaternion__are_equal(const geometry_msgs__msg__Quaternion * lhs, const geometry_msgs__msg__Quaternion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // w
  if (lhs->w != rhs->w) {
    return false;
  }
  return true;
}

bool
geometry_msgs__msg__Quaternion__copy(
  const geometry_msgs__msg__Quaternion * input,
  geometry_msgs__msg__Quaternion * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // w
  output->w = input->w;
  return true;
}

geometry_msgs__msg__Quaternion *
geometry_msgs__msg__Quaternion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geometry_msgs__msg__Quaternion * msg = (geometry_msgs__msg__Quaternion *)allocator.allocate(sizeof(geometry_msgs__msg__Quaternion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__Quaternion));
  bool success = geometry_msgs__msg__Quaternion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__Quaternion__destroy(geometry_msgs__msg__Quaternion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    geometry_msgs__msg__Quaternion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
geometry_msgs__msg__Quaternion__Sequence__init(geometry_msgs__msg__Quaternion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geometry_msgs__msg__Quaternion * data = NULL;

  if (size) {
    data = (geometry_msgs__msg__Quaternion *)allocator.zero_allocate(size, sizeof(geometry_msgs__msg__Quaternion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__Quaternion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__Quaternion__fini(&data[i - 1]);
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
geometry_msgs__msg__Quaternion__Sequence__fini(geometry_msgs__msg__Quaternion__Sequence * array)
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
      geometry_msgs__msg__Quaternion__fini(&array->data[i]);
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

geometry_msgs__msg__Quaternion__Sequence *
geometry_msgs__msg__Quaternion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geometry_msgs__msg__Quaternion__Sequence * array = (geometry_msgs__msg__Quaternion__Sequence *)allocator.allocate(sizeof(geometry_msgs__msg__Quaternion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__Quaternion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__Quaternion__Sequence__destroy(geometry_msgs__msg__Quaternion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    geometry_msgs__msg__Quaternion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
geometry_msgs__msg__Quaternion__Sequence__are_equal(const geometry_msgs__msg__Quaternion__Sequence * lhs, const geometry_msgs__msg__Quaternion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!geometry_msgs__msg__Quaternion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
geometry_msgs__msg__Quaternion__Sequence__copy(
  const geometry_msgs__msg__Quaternion__Sequence * input,
  geometry_msgs__msg__Quaternion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(geometry_msgs__msg__Quaternion);
    geometry_msgs__msg__Quaternion * data =
      (geometry_msgs__msg__Quaternion *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!geometry_msgs__msg__Quaternion__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          geometry_msgs__msg__Quaternion__fini(&data[i]);
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
    if (!geometry_msgs__msg__Quaternion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
