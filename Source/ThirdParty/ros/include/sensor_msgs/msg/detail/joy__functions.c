// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:msg/Joy.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/joy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `axes`
// Member `buttons`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
sensor_msgs__msg__Joy__init(sensor_msgs__msg__Joy * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sensor_msgs__msg__Joy__fini(msg);
    return false;
  }
  // axes
  if (!rosidl_runtime_c__float__Sequence__init(&msg->axes, 0)) {
    sensor_msgs__msg__Joy__fini(msg);
    return false;
  }
  // buttons
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->buttons, 0)) {
    sensor_msgs__msg__Joy__fini(msg);
    return false;
  }
  return true;
}

void
sensor_msgs__msg__Joy__fini(sensor_msgs__msg__Joy * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // axes
  rosidl_runtime_c__float__Sequence__fini(&msg->axes);
  // buttons
  rosidl_runtime_c__int32__Sequence__fini(&msg->buttons);
}

bool
sensor_msgs__msg__Joy__are_equal(const sensor_msgs__msg__Joy * lhs, const sensor_msgs__msg__Joy * rhs)
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
  // axes
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->axes), &(rhs->axes)))
  {
    return false;
  }
  // buttons
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->buttons), &(rhs->buttons)))
  {
    return false;
  }
  return true;
}

bool
sensor_msgs__msg__Joy__copy(
  const sensor_msgs__msg__Joy * input,
  sensor_msgs__msg__Joy * output)
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
  // axes
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->axes), &(output->axes)))
  {
    return false;
  }
  // buttons
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->buttons), &(output->buttons)))
  {
    return false;
  }
  return true;
}

sensor_msgs__msg__Joy *
sensor_msgs__msg__Joy__create()
{
  sensor_msgs__msg__Joy * msg = (sensor_msgs__msg__Joy *)malloc(sizeof(sensor_msgs__msg__Joy));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__Joy));
  bool success = sensor_msgs__msg__Joy__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__Joy__destroy(sensor_msgs__msg__Joy * msg)
{
  if (msg) {
    sensor_msgs__msg__Joy__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__Joy__Sequence__init(sensor_msgs__msg__Joy__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__Joy * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__Joy *)calloc(size, sizeof(sensor_msgs__msg__Joy));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__Joy__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__Joy__fini(&data[i - 1]);
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
sensor_msgs__msg__Joy__Sequence__fini(sensor_msgs__msg__Joy__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__Joy__fini(&array->data[i]);
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

sensor_msgs__msg__Joy__Sequence *
sensor_msgs__msg__Joy__Sequence__create(size_t size)
{
  sensor_msgs__msg__Joy__Sequence * array = (sensor_msgs__msg__Joy__Sequence *)malloc(sizeof(sensor_msgs__msg__Joy__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__Joy__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__Joy__Sequence__destroy(sensor_msgs__msg__Joy__Sequence * array)
{
  if (array) {
    sensor_msgs__msg__Joy__Sequence__fini(array);
  }
  free(array);
}

bool
sensor_msgs__msg__Joy__Sequence__are_equal(const sensor_msgs__msg__Joy__Sequence * lhs, const sensor_msgs__msg__Joy__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensor_msgs__msg__Joy__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensor_msgs__msg__Joy__Sequence__copy(
  const sensor_msgs__msg__Joy__Sequence * input,
  sensor_msgs__msg__Joy__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sensor_msgs__msg__Joy);
    sensor_msgs__msg__Joy * data =
      (sensor_msgs__msg__Joy *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensor_msgs__msg__Joy__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          sensor_msgs__msg__Joy__fini(&data[i]);
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
    if (!sensor_msgs__msg__Joy__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
