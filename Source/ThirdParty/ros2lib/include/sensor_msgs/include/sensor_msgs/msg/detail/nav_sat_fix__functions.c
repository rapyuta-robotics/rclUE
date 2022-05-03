// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:msg/NavSatFix.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/nav_sat_fix__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `status`
#include "sensor_msgs/msg/detail/nav_sat_status__functions.h"

bool
sensor_msgs__msg__NavSatFix__init(sensor_msgs__msg__NavSatFix * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sensor_msgs__msg__NavSatFix__fini(msg);
    return false;
  }
  // status
  if (!sensor_msgs__msg__NavSatStatus__init(&msg->status)) {
    sensor_msgs__msg__NavSatFix__fini(msg);
    return false;
  }
  // latitude
  // longitude
  // altitude
  // position_covariance
  // position_covariance_type
  return true;
}

void
sensor_msgs__msg__NavSatFix__fini(sensor_msgs__msg__NavSatFix * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status
  sensor_msgs__msg__NavSatStatus__fini(&msg->status);
  // latitude
  // longitude
  // altitude
  // position_covariance
  // position_covariance_type
}

sensor_msgs__msg__NavSatFix *
sensor_msgs__msg__NavSatFix__create()
{
  sensor_msgs__msg__NavSatFix * msg = (sensor_msgs__msg__NavSatFix *)malloc(sizeof(sensor_msgs__msg__NavSatFix));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__NavSatFix));
  bool success = sensor_msgs__msg__NavSatFix__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__NavSatFix__destroy(sensor_msgs__msg__NavSatFix * msg)
{
  if (msg) {
    sensor_msgs__msg__NavSatFix__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__NavSatFix__Sequence__init(sensor_msgs__msg__NavSatFix__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__NavSatFix * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__NavSatFix *)calloc(size, sizeof(sensor_msgs__msg__NavSatFix));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__NavSatFix__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__NavSatFix__fini(&data[i - 1]);
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
sensor_msgs__msg__NavSatFix__Sequence__fini(sensor_msgs__msg__NavSatFix__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__NavSatFix__fini(&array->data[i]);
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

sensor_msgs__msg__NavSatFix__Sequence *
sensor_msgs__msg__NavSatFix__Sequence__create(size_t size)
{
  sensor_msgs__msg__NavSatFix__Sequence * array = (sensor_msgs__msg__NavSatFix__Sequence *)malloc(sizeof(sensor_msgs__msg__NavSatFix__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__NavSatFix__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__NavSatFix__Sequence__destroy(sensor_msgs__msg__NavSatFix__Sequence * array)
{
  if (array) {
    sensor_msgs__msg__NavSatFix__Sequence__fini(array);
  }
  free(array);
}
