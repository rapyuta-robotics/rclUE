// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geometry_msgs:msg/QuaternionStamped.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/quaternion_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `quaternion`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
geometry_msgs__msg__QuaternionStamped__init(geometry_msgs__msg__QuaternionStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    geometry_msgs__msg__QuaternionStamped__fini(msg);
    return false;
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__init(&msg->quaternion)) {
    geometry_msgs__msg__QuaternionStamped__fini(msg);
    return false;
  }
  return true;
}

void
geometry_msgs__msg__QuaternionStamped__fini(geometry_msgs__msg__QuaternionStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // quaternion
  geometry_msgs__msg__Quaternion__fini(&msg->quaternion);
}

bool
geometry_msgs__msg__QuaternionStamped__are_equal(const geometry_msgs__msg__QuaternionStamped * lhs, const geometry_msgs__msg__QuaternionStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->quaternion), &(rhs->quaternion)))
  {
    return false;
  }
  return true;
}

bool
geometry_msgs__msg__QuaternionStamped__copy(
  const geometry_msgs__msg__QuaternionStamped * input,
  geometry_msgs__msg__QuaternionStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->quaternion), &(output->quaternion)))
  {
    return false;
  }
  return true;
}

geometry_msgs__msg__QuaternionStamped *
geometry_msgs__msg__QuaternionStamped__create()
{
  geometry_msgs__msg__QuaternionStamped * msg = (geometry_msgs__msg__QuaternionStamped *)malloc(sizeof(geometry_msgs__msg__QuaternionStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__QuaternionStamped));
  bool success = geometry_msgs__msg__QuaternionStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__QuaternionStamped__destroy(geometry_msgs__msg__QuaternionStamped * msg)
{
  if (msg) {
    geometry_msgs__msg__QuaternionStamped__fini(msg);
  }
  free(msg);
}


bool
geometry_msgs__msg__QuaternionStamped__Sequence__init(geometry_msgs__msg__QuaternionStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  geometry_msgs__msg__QuaternionStamped * data = NULL;
  if (size) {
    data = (geometry_msgs__msg__QuaternionStamped *)calloc(size, sizeof(geometry_msgs__msg__QuaternionStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__QuaternionStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__QuaternionStamped__fini(&data[i - 1]);
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
geometry_msgs__msg__QuaternionStamped__Sequence__fini(geometry_msgs__msg__QuaternionStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geometry_msgs__msg__QuaternionStamped__fini(&array->data[i]);
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

geometry_msgs__msg__QuaternionStamped__Sequence *
geometry_msgs__msg__QuaternionStamped__Sequence__create(size_t size)
{
  geometry_msgs__msg__QuaternionStamped__Sequence * array = (geometry_msgs__msg__QuaternionStamped__Sequence *)malloc(sizeof(geometry_msgs__msg__QuaternionStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__QuaternionStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__QuaternionStamped__Sequence__destroy(geometry_msgs__msg__QuaternionStamped__Sequence * array)
{
  if (array) {
    geometry_msgs__msg__QuaternionStamped__Sequence__fini(array);
  }
  free(array);
}

bool
geometry_msgs__msg__QuaternionStamped__Sequence__are_equal(const geometry_msgs__msg__QuaternionStamped__Sequence * lhs, const geometry_msgs__msg__QuaternionStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!geometry_msgs__msg__QuaternionStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
geometry_msgs__msg__QuaternionStamped__Sequence__copy(
  const geometry_msgs__msg__QuaternionStamped__Sequence * input,
  geometry_msgs__msg__QuaternionStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(geometry_msgs__msg__QuaternionStamped);
    geometry_msgs__msg__QuaternionStamped * data =
      (geometry_msgs__msg__QuaternionStamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!geometry_msgs__msg__QuaternionStamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          geometry_msgs__msg__QuaternionStamped__fini(&data[i]);
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
    if (!geometry_msgs__msg__QuaternionStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}