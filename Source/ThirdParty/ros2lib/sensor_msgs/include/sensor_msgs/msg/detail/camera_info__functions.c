// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:msg/CameraInfo.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/camera_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `distortion_model`
#include "rosidl_runtime_c/string_functions.h"
// Member `d`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
sensor_msgs__msg__CameraInfo__init(sensor_msgs__msg__CameraInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sensor_msgs__msg__CameraInfo__fini(msg);
    return false;
  }
  // height
  // width
  // distortion_model
  if (!rosidl_runtime_c__String__init(&msg->distortion_model)) {
    sensor_msgs__msg__CameraInfo__fini(msg);
    return false;
  }
  // d
  if (!rosidl_runtime_c__double__Sequence__init(&msg->d, 0)) {
    sensor_msgs__msg__CameraInfo__fini(msg);
    return false;
  }
  // k
  // r
  // p
  // binning_x
  // binning_y
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    sensor_msgs__msg__CameraInfo__fini(msg);
    return false;
  }
  return true;
}

void
sensor_msgs__msg__CameraInfo__fini(sensor_msgs__msg__CameraInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // height
  // width
  // distortion_model
  rosidl_runtime_c__String__fini(&msg->distortion_model);
  // d
  rosidl_runtime_c__double__Sequence__fini(&msg->d);
  // k
  // r
  // p
  // binning_x
  // binning_y
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
}

sensor_msgs__msg__CameraInfo *
sensor_msgs__msg__CameraInfo__create()
{
  sensor_msgs__msg__CameraInfo * msg = (sensor_msgs__msg__CameraInfo *)malloc(sizeof(sensor_msgs__msg__CameraInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__CameraInfo));
  bool success = sensor_msgs__msg__CameraInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__CameraInfo__destroy(sensor_msgs__msg__CameraInfo * msg)
{
  if (msg) {
    sensor_msgs__msg__CameraInfo__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__CameraInfo__Sequence__init(sensor_msgs__msg__CameraInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__CameraInfo * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__CameraInfo *)calloc(size, sizeof(sensor_msgs__msg__CameraInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__CameraInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__CameraInfo__fini(&data[i - 1]);
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
sensor_msgs__msg__CameraInfo__Sequence__fini(sensor_msgs__msg__CameraInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__CameraInfo__fini(&array->data[i]);
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

sensor_msgs__msg__CameraInfo__Sequence *
sensor_msgs__msg__CameraInfo__Sequence__create(size_t size)
{
  sensor_msgs__msg__CameraInfo__Sequence * array = (sensor_msgs__msg__CameraInfo__Sequence *)malloc(sizeof(sensor_msgs__msg__CameraInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__CameraInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__CameraInfo__Sequence__destroy(sensor_msgs__msg__CameraInfo__Sequence * array)
{
  if (array) {
    sensor_msgs__msg__CameraInfo__Sequence__fini(array);
  }
  free(array);
}
