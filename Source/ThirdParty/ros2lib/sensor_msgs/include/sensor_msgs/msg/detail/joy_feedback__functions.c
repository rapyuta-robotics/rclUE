// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:msg/JoyFeedback.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/joy_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
sensor_msgs__msg__JoyFeedback__init(sensor_msgs__msg__JoyFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // id
  // intensity
  return true;
}

void
sensor_msgs__msg__JoyFeedback__fini(sensor_msgs__msg__JoyFeedback * msg)
{
  if (!msg) {
    return;
  }
  // type
  // id
  // intensity
}

sensor_msgs__msg__JoyFeedback *
sensor_msgs__msg__JoyFeedback__create()
{
  sensor_msgs__msg__JoyFeedback * msg = (sensor_msgs__msg__JoyFeedback *)malloc(sizeof(sensor_msgs__msg__JoyFeedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__JoyFeedback));
  bool success = sensor_msgs__msg__JoyFeedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__JoyFeedback__destroy(sensor_msgs__msg__JoyFeedback * msg)
{
  if (msg) {
    sensor_msgs__msg__JoyFeedback__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__JoyFeedback__Sequence__init(sensor_msgs__msg__JoyFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__JoyFeedback * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__JoyFeedback *)calloc(size, sizeof(sensor_msgs__msg__JoyFeedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__JoyFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__JoyFeedback__fini(&data[i - 1]);
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
sensor_msgs__msg__JoyFeedback__Sequence__fini(sensor_msgs__msg__JoyFeedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__JoyFeedback__fini(&array->data[i]);
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

sensor_msgs__msg__JoyFeedback__Sequence *
sensor_msgs__msg__JoyFeedback__Sequence__create(size_t size)
{
  sensor_msgs__msg__JoyFeedback__Sequence * array = (sensor_msgs__msg__JoyFeedback__Sequence *)malloc(sizeof(sensor_msgs__msg__JoyFeedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__JoyFeedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__JoyFeedback__Sequence__destroy(sensor_msgs__msg__JoyFeedback__Sequence * array)
{
  if (array) {
    sensor_msgs__msg__JoyFeedback__Sequence__fini(array);
  }
  free(array);
}
