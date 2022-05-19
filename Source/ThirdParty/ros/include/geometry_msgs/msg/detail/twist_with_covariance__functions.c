// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geometry_msgs:msg/TwistWithCovariance.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
geometry_msgs__msg__TwistWithCovariance__init(geometry_msgs__msg__TwistWithCovariance * msg)
{
  if (!msg) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    geometry_msgs__msg__TwistWithCovariance__fini(msg);
    return false;
  }
  // covariance
  return true;
}

void
geometry_msgs__msg__TwistWithCovariance__fini(geometry_msgs__msg__TwistWithCovariance * msg)
{
  if (!msg) {
    return;
  }
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // covariance
}

bool
geometry_msgs__msg__TwistWithCovariance__are_equal(const geometry_msgs__msg__TwistWithCovariance * lhs, const geometry_msgs__msg__TwistWithCovariance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
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
geometry_msgs__msg__TwistWithCovariance__copy(
  const geometry_msgs__msg__TwistWithCovariance * input,
  geometry_msgs__msg__TwistWithCovariance * output)
{
  if (!input || !output) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // covariance
  for (size_t i = 0; i < 36; ++i) {
    output->covariance[i] = input->covariance[i];
  }
  return true;
}

geometry_msgs__msg__TwistWithCovariance *
geometry_msgs__msg__TwistWithCovariance__create()
{
  geometry_msgs__msg__TwistWithCovariance * msg = (geometry_msgs__msg__TwistWithCovariance *)malloc(sizeof(geometry_msgs__msg__TwistWithCovariance));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__TwistWithCovariance));
  bool success = geometry_msgs__msg__TwistWithCovariance__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__TwistWithCovariance__destroy(geometry_msgs__msg__TwistWithCovariance * msg)
{
  if (msg) {
    geometry_msgs__msg__TwistWithCovariance__fini(msg);
  }
  free(msg);
}


bool
geometry_msgs__msg__TwistWithCovariance__Sequence__init(geometry_msgs__msg__TwistWithCovariance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  geometry_msgs__msg__TwistWithCovariance * data = NULL;
  if (size) {
    data = (geometry_msgs__msg__TwistWithCovariance *)calloc(size, sizeof(geometry_msgs__msg__TwistWithCovariance));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__TwistWithCovariance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__TwistWithCovariance__fini(&data[i - 1]);
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
geometry_msgs__msg__TwistWithCovariance__Sequence__fini(geometry_msgs__msg__TwistWithCovariance__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geometry_msgs__msg__TwistWithCovariance__fini(&array->data[i]);
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

geometry_msgs__msg__TwistWithCovariance__Sequence *
geometry_msgs__msg__TwistWithCovariance__Sequence__create(size_t size)
{
  geometry_msgs__msg__TwistWithCovariance__Sequence * array = (geometry_msgs__msg__TwistWithCovariance__Sequence *)malloc(sizeof(geometry_msgs__msg__TwistWithCovariance__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__TwistWithCovariance__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__TwistWithCovariance__Sequence__destroy(geometry_msgs__msg__TwistWithCovariance__Sequence * array)
{
  if (array) {
    geometry_msgs__msg__TwistWithCovariance__Sequence__fini(array);
  }
  free(array);
}

bool
geometry_msgs__msg__TwistWithCovariance__Sequence__are_equal(const geometry_msgs__msg__TwistWithCovariance__Sequence * lhs, const geometry_msgs__msg__TwistWithCovariance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!geometry_msgs__msg__TwistWithCovariance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
geometry_msgs__msg__TwistWithCovariance__Sequence__copy(
  const geometry_msgs__msg__TwistWithCovariance__Sequence * input,
  geometry_msgs__msg__TwistWithCovariance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(geometry_msgs__msg__TwistWithCovariance);
    geometry_msgs__msg__TwistWithCovariance * data =
      (geometry_msgs__msg__TwistWithCovariance *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!geometry_msgs__msg__TwistWithCovariance__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          geometry_msgs__msg__TwistWithCovariance__fini(&data[i]);
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
    if (!geometry_msgs__msg__TwistWithCovariance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
