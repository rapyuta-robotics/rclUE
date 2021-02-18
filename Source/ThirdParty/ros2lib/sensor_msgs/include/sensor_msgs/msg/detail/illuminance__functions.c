// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:msg/Illuminance.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/illuminance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sensor_msgs__msg__Illuminance__init(sensor_msgs__msg__Illuminance * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sensor_msgs__msg__Illuminance__fini(msg);
    return false;
  }
  // illuminance
  // variance
  return true;
}

void
sensor_msgs__msg__Illuminance__fini(sensor_msgs__msg__Illuminance * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // illuminance
  // variance
}

sensor_msgs__msg__Illuminance *
sensor_msgs__msg__Illuminance__create()
{
  sensor_msgs__msg__Illuminance * msg = (sensor_msgs__msg__Illuminance *)malloc(sizeof(sensor_msgs__msg__Illuminance));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__Illuminance));
  bool success = sensor_msgs__msg__Illuminance__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__Illuminance__destroy(sensor_msgs__msg__Illuminance * msg)
{
  if (msg) {
    sensor_msgs__msg__Illuminance__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__Illuminance__Sequence__init(sensor_msgs__msg__Illuminance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__Illuminance * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__Illuminance *)calloc(size, sizeof(sensor_msgs__msg__Illuminance));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__Illuminance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__Illuminance__fini(&data[i - 1]);
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
sensor_msgs__msg__Illuminance__Sequence__fini(sensor_msgs__msg__Illuminance__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__Illuminance__fini(&array->data[i]);
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

sensor_msgs__msg__Illuminance__Sequence *
sensor_msgs__msg__Illuminance__Sequence__create(size_t size)
{
  sensor_msgs__msg__Illuminance__Sequence * array = (sensor_msgs__msg__Illuminance__Sequence *)malloc(sizeof(sensor_msgs__msg__Illuminance__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__Illuminance__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__Illuminance__Sequence__destroy(sensor_msgs__msg__Illuminance__Sequence * array)
{
  if (array) {
    sensor_msgs__msg__Illuminance__Sequence__fini(array);
  }
  free(array);
}
