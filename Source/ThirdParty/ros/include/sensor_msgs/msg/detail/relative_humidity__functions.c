// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:msg/RelativeHumidity.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/relative_humidity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sensor_msgs__msg__RelativeHumidity__init(sensor_msgs__msg__RelativeHumidity * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sensor_msgs__msg__RelativeHumidity__fini(msg);
    return false;
  }
  // relative_humidity
  // variance
  return true;
}

void
sensor_msgs__msg__RelativeHumidity__fini(sensor_msgs__msg__RelativeHumidity * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // relative_humidity
  // variance
}

bool
sensor_msgs__msg__RelativeHumidity__are_equal(const sensor_msgs__msg__RelativeHumidity * lhs, const sensor_msgs__msg__RelativeHumidity * rhs)
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
  // relative_humidity
  if (lhs->relative_humidity != rhs->relative_humidity) {
    return false;
  }
  // variance
  if (lhs->variance != rhs->variance) {
    return false;
  }
  return true;
}

bool
sensor_msgs__msg__RelativeHumidity__copy(
  const sensor_msgs__msg__RelativeHumidity * input,
  sensor_msgs__msg__RelativeHumidity * output)
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
  // relative_humidity
  output->relative_humidity = input->relative_humidity;
  // variance
  output->variance = input->variance;
  return true;
}

sensor_msgs__msg__RelativeHumidity *
sensor_msgs__msg__RelativeHumidity__create()
{
  sensor_msgs__msg__RelativeHumidity * msg = (sensor_msgs__msg__RelativeHumidity *)malloc(sizeof(sensor_msgs__msg__RelativeHumidity));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__RelativeHumidity));
  bool success = sensor_msgs__msg__RelativeHumidity__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__RelativeHumidity__destroy(sensor_msgs__msg__RelativeHumidity * msg)
{
  if (msg) {
    sensor_msgs__msg__RelativeHumidity__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__RelativeHumidity__Sequence__init(sensor_msgs__msg__RelativeHumidity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__RelativeHumidity * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__RelativeHumidity *)calloc(size, sizeof(sensor_msgs__msg__RelativeHumidity));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__RelativeHumidity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__RelativeHumidity__fini(&data[i - 1]);
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
sensor_msgs__msg__RelativeHumidity__Sequence__fini(sensor_msgs__msg__RelativeHumidity__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__RelativeHumidity__fini(&array->data[i]);
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

sensor_msgs__msg__RelativeHumidity__Sequence *
sensor_msgs__msg__RelativeHumidity__Sequence__create(size_t size)
{
  sensor_msgs__msg__RelativeHumidity__Sequence * array = (sensor_msgs__msg__RelativeHumidity__Sequence *)malloc(sizeof(sensor_msgs__msg__RelativeHumidity__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__RelativeHumidity__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__RelativeHumidity__Sequence__destroy(sensor_msgs__msg__RelativeHumidity__Sequence * array)
{
  if (array) {
    sensor_msgs__msg__RelativeHumidity__Sequence__fini(array);
  }
  free(array);
}

bool
sensor_msgs__msg__RelativeHumidity__Sequence__are_equal(const sensor_msgs__msg__RelativeHumidity__Sequence * lhs, const sensor_msgs__msg__RelativeHumidity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensor_msgs__msg__RelativeHumidity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensor_msgs__msg__RelativeHumidity__Sequence__copy(
  const sensor_msgs__msg__RelativeHumidity__Sequence * input,
  sensor_msgs__msg__RelativeHumidity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sensor_msgs__msg__RelativeHumidity);
    sensor_msgs__msg__RelativeHumidity * data =
      (sensor_msgs__msg__RelativeHumidity *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensor_msgs__msg__RelativeHumidity__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          sensor_msgs__msg__RelativeHumidity__fini(&data[i]);
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
    if (!sensor_msgs__msg__RelativeHumidity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
