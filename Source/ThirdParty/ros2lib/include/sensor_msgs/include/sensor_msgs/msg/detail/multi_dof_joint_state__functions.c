// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:msg/MultiDOFJointState.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/multi_dof_joint_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `transforms`
#include "geometry_msgs/msg/detail/transform__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `wrench`
#include "geometry_msgs/msg/detail/wrench__functions.h"

bool
sensor_msgs__msg__MultiDOFJointState__init(sensor_msgs__msg__MultiDOFJointState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sensor_msgs__msg__MultiDOFJointState__fini(msg);
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    sensor_msgs__msg__MultiDOFJointState__fini(msg);
    return false;
  }
  // transforms
  if (!geometry_msgs__msg__Transform__Sequence__init(&msg->transforms, 0)) {
    sensor_msgs__msg__MultiDOFJointState__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__Sequence__init(&msg->twist, 0)) {
    sensor_msgs__msg__MultiDOFJointState__fini(msg);
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__Sequence__init(&msg->wrench, 0)) {
    sensor_msgs__msg__MultiDOFJointState__fini(msg);
    return false;
  }
  return true;
}

void
sensor_msgs__msg__MultiDOFJointState__fini(sensor_msgs__msg__MultiDOFJointState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // transforms
  geometry_msgs__msg__Transform__Sequence__fini(&msg->transforms);
  // twist
  geometry_msgs__msg__Twist__Sequence__fini(&msg->twist);
  // wrench
  geometry_msgs__msg__Wrench__Sequence__fini(&msg->wrench);
}

sensor_msgs__msg__MultiDOFJointState *
sensor_msgs__msg__MultiDOFJointState__create()
{
  sensor_msgs__msg__MultiDOFJointState * msg = (sensor_msgs__msg__MultiDOFJointState *)malloc(sizeof(sensor_msgs__msg__MultiDOFJointState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__MultiDOFJointState));
  bool success = sensor_msgs__msg__MultiDOFJointState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__MultiDOFJointState__destroy(sensor_msgs__msg__MultiDOFJointState * msg)
{
  if (msg) {
    sensor_msgs__msg__MultiDOFJointState__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__MultiDOFJointState__Sequence__init(sensor_msgs__msg__MultiDOFJointState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__MultiDOFJointState * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__MultiDOFJointState *)calloc(size, sizeof(sensor_msgs__msg__MultiDOFJointState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__MultiDOFJointState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__MultiDOFJointState__fini(&data[i - 1]);
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
sensor_msgs__msg__MultiDOFJointState__Sequence__fini(sensor_msgs__msg__MultiDOFJointState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__MultiDOFJointState__fini(&array->data[i]);
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

sensor_msgs__msg__MultiDOFJointState__Sequence *
sensor_msgs__msg__MultiDOFJointState__Sequence__create(size_t size)
{
  sensor_msgs__msg__MultiDOFJointState__Sequence * array = (sensor_msgs__msg__MultiDOFJointState__Sequence *)malloc(sizeof(sensor_msgs__msg__MultiDOFJointState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__MultiDOFJointState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__MultiDOFJointState__Sequence__destroy(sensor_msgs__msg__MultiDOFJointState__Sequence * array)
{
  if (array) {
    sensor_msgs__msg__MultiDOFJointState__Sequence__fini(array);
  }
  free(array);
}
