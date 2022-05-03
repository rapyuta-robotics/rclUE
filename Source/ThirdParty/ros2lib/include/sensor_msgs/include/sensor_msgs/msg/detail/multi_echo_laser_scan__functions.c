// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:msg/MultiEchoLaserScan.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/multi_echo_laser_scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ranges`
// Member `intensities`
#include "sensor_msgs/msg/detail/laser_echo__functions.h"

bool
sensor_msgs__msg__MultiEchoLaserScan__init(sensor_msgs__msg__MultiEchoLaserScan * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sensor_msgs__msg__MultiEchoLaserScan__fini(msg);
    return false;
  }
  // angle_min
  // angle_max
  // angle_increment
  // time_increment
  // scan_time
  // range_min
  // range_max
  // ranges
  if (!sensor_msgs__msg__LaserEcho__Sequence__init(&msg->ranges, 0)) {
    sensor_msgs__msg__MultiEchoLaserScan__fini(msg);
    return false;
  }
  // intensities
  if (!sensor_msgs__msg__LaserEcho__Sequence__init(&msg->intensities, 0)) {
    sensor_msgs__msg__MultiEchoLaserScan__fini(msg);
    return false;
  }
  return true;
}

void
sensor_msgs__msg__MultiEchoLaserScan__fini(sensor_msgs__msg__MultiEchoLaserScan * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // angle_min
  // angle_max
  // angle_increment
  // time_increment
  // scan_time
  // range_min
  // range_max
  // ranges
  sensor_msgs__msg__LaserEcho__Sequence__fini(&msg->ranges);
  // intensities
  sensor_msgs__msg__LaserEcho__Sequence__fini(&msg->intensities);
}

sensor_msgs__msg__MultiEchoLaserScan *
sensor_msgs__msg__MultiEchoLaserScan__create()
{
  sensor_msgs__msg__MultiEchoLaserScan * msg = (sensor_msgs__msg__MultiEchoLaserScan *)malloc(sizeof(sensor_msgs__msg__MultiEchoLaserScan));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__MultiEchoLaserScan));
  bool success = sensor_msgs__msg__MultiEchoLaserScan__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__MultiEchoLaserScan__destroy(sensor_msgs__msg__MultiEchoLaserScan * msg)
{
  if (msg) {
    sensor_msgs__msg__MultiEchoLaserScan__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__MultiEchoLaserScan__Sequence__init(sensor_msgs__msg__MultiEchoLaserScan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__MultiEchoLaserScan * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__MultiEchoLaserScan *)calloc(size, sizeof(sensor_msgs__msg__MultiEchoLaserScan));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__MultiEchoLaserScan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__MultiEchoLaserScan__fini(&data[i - 1]);
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
sensor_msgs__msg__MultiEchoLaserScan__Sequence__fini(sensor_msgs__msg__MultiEchoLaserScan__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__MultiEchoLaserScan__fini(&array->data[i]);
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

sensor_msgs__msg__MultiEchoLaserScan__Sequence *
sensor_msgs__msg__MultiEchoLaserScan__Sequence__create(size_t size)
{
  sensor_msgs__msg__MultiEchoLaserScan__Sequence * array = (sensor_msgs__msg__MultiEchoLaserScan__Sequence *)malloc(sizeof(sensor_msgs__msg__MultiEchoLaserScan__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__MultiEchoLaserScan__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__MultiEchoLaserScan__Sequence__destroy(sensor_msgs__msg__MultiEchoLaserScan__Sequence * array)
{
  if (array) {
    sensor_msgs__msg__MultiEchoLaserScan__Sequence__fini(array);
  }
  free(array);
}
