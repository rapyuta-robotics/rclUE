// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:msg/Imu.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/imu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `angular_velocity`
// Member `linear_acceleration`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
sensor_msgs__msg__Imu__init(sensor_msgs__msg__Imu * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sensor_msgs__msg__Imu__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    sensor_msgs__msg__Imu__fini(msg);
    return false;
  }
  // orientation_covariance
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity)) {
    sensor_msgs__msg__Imu__fini(msg);
    return false;
  }
  // angular_velocity_covariance
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->linear_acceleration)) {
    sensor_msgs__msg__Imu__fini(msg);
    return false;
  }
  // linear_acceleration_covariance
  return true;
}

void
sensor_msgs__msg__Imu__fini(sensor_msgs__msg__Imu * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // orientation_covariance
  // angular_velocity
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity);
  // angular_velocity_covariance
  // linear_acceleration
  geometry_msgs__msg__Vector3__fini(&msg->linear_acceleration);
  // linear_acceleration_covariance
}

sensor_msgs__msg__Imu *
sensor_msgs__msg__Imu__create()
{
  sensor_msgs__msg__Imu * msg = (sensor_msgs__msg__Imu *)malloc(sizeof(sensor_msgs__msg__Imu));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__Imu));
  bool success = sensor_msgs__msg__Imu__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__Imu__destroy(sensor_msgs__msg__Imu * msg)
{
  if (msg) {
    sensor_msgs__msg__Imu__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__Imu__Sequence__init(sensor_msgs__msg__Imu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__Imu * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__Imu *)calloc(size, sizeof(sensor_msgs__msg__Imu));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__Imu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__Imu__fini(&data[i - 1]);
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
sensor_msgs__msg__Imu__Sequence__fini(sensor_msgs__msg__Imu__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__Imu__fini(&array->data[i]);
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

sensor_msgs__msg__Imu__Sequence *
sensor_msgs__msg__Imu__Sequence__create(size_t size)
{
  sensor_msgs__msg__Imu__Sequence * array = (sensor_msgs__msg__Imu__Sequence *)malloc(sizeof(sensor_msgs__msg__Imu__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__Imu__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__Imu__Sequence__destroy(sensor_msgs__msg__Imu__Sequence * array)
{
  if (array) {
    sensor_msgs__msg__Imu__Sequence__fini(array);
  }
  free(array);
}
