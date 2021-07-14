// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:msg/JoyFeedbackArray.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/joy_feedback_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `array`
#include "sensor_msgs/msg/detail/joy_feedback__functions.h"

bool
sensor_msgs__msg__JoyFeedbackArray__init(sensor_msgs__msg__JoyFeedbackArray * msg)
{
  if (!msg) {
    return false;
  }
  // array
  if (!sensor_msgs__msg__JoyFeedback__Sequence__init(&msg->array, 0)) {
    sensor_msgs__msg__JoyFeedbackArray__fini(msg);
    return false;
  }
  return true;
}

void
sensor_msgs__msg__JoyFeedbackArray__fini(sensor_msgs__msg__JoyFeedbackArray * msg)
{
  if (!msg) {
    return;
  }
  // array
  sensor_msgs__msg__JoyFeedback__Sequence__fini(&msg->array);
}

sensor_msgs__msg__JoyFeedbackArray *
sensor_msgs__msg__JoyFeedbackArray__create()
{
  sensor_msgs__msg__JoyFeedbackArray * msg = (sensor_msgs__msg__JoyFeedbackArray *)malloc(sizeof(sensor_msgs__msg__JoyFeedbackArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__JoyFeedbackArray));
  bool success = sensor_msgs__msg__JoyFeedbackArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__JoyFeedbackArray__destroy(sensor_msgs__msg__JoyFeedbackArray * msg)
{
  if (msg) {
    sensor_msgs__msg__JoyFeedbackArray__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__JoyFeedbackArray__Sequence__init(sensor_msgs__msg__JoyFeedbackArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__JoyFeedbackArray * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__JoyFeedbackArray *)calloc(size, sizeof(sensor_msgs__msg__JoyFeedbackArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__JoyFeedbackArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__JoyFeedbackArray__fini(&data[i - 1]);
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
sensor_msgs__msg__JoyFeedbackArray__Sequence__fini(sensor_msgs__msg__JoyFeedbackArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__JoyFeedbackArray__fini(&array->data[i]);
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

sensor_msgs__msg__JoyFeedbackArray__Sequence *
sensor_msgs__msg__JoyFeedbackArray__Sequence__create(size_t size)
{
  sensor_msgs__msg__JoyFeedbackArray__Sequence * array = (sensor_msgs__msg__JoyFeedbackArray__Sequence *)malloc(sizeof(sensor_msgs__msg__JoyFeedbackArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__JoyFeedbackArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__JoyFeedbackArray__Sequence__destroy(sensor_msgs__msg__JoyFeedbackArray__Sequence * array)
{
  if (array) {
    sensor_msgs__msg__JoyFeedbackArray__Sequence__fini(array);
  }
  free(array);
}
