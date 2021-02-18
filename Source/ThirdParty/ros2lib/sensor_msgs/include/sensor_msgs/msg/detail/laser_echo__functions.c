// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:msg/LaserEcho.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/laser_echo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `echoes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
sensor_msgs__msg__LaserEcho__init(sensor_msgs__msg__LaserEcho * msg)
{
  if (!msg) {
    return false;
  }
  // echoes
  if (!rosidl_runtime_c__float__Sequence__init(&msg->echoes, 0)) {
    sensor_msgs__msg__LaserEcho__fini(msg);
    return false;
  }
  return true;
}

void
sensor_msgs__msg__LaserEcho__fini(sensor_msgs__msg__LaserEcho * msg)
{
  if (!msg) {
    return;
  }
  // echoes
  rosidl_runtime_c__float__Sequence__fini(&msg->echoes);
}

sensor_msgs__msg__LaserEcho *
sensor_msgs__msg__LaserEcho__create()
{
  sensor_msgs__msg__LaserEcho * msg = (sensor_msgs__msg__LaserEcho *)malloc(sizeof(sensor_msgs__msg__LaserEcho));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__LaserEcho));
  bool success = sensor_msgs__msg__LaserEcho__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__LaserEcho__destroy(sensor_msgs__msg__LaserEcho * msg)
{
  if (msg) {
    sensor_msgs__msg__LaserEcho__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__LaserEcho__Sequence__init(sensor_msgs__msg__LaserEcho__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__LaserEcho * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__LaserEcho *)calloc(size, sizeof(sensor_msgs__msg__LaserEcho));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__LaserEcho__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__LaserEcho__fini(&data[i - 1]);
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
sensor_msgs__msg__LaserEcho__Sequence__fini(sensor_msgs__msg__LaserEcho__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__LaserEcho__fini(&array->data[i]);
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

sensor_msgs__msg__LaserEcho__Sequence *
sensor_msgs__msg__LaserEcho__Sequence__create(size_t size)
{
  sensor_msgs__msg__LaserEcho__Sequence * array = (sensor_msgs__msg__LaserEcho__Sequence *)malloc(sizeof(sensor_msgs__msg__LaserEcho__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__LaserEcho__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__LaserEcho__Sequence__destroy(sensor_msgs__msg__LaserEcho__Sequence * array)
{
  if (array) {
    sensor_msgs__msg__LaserEcho__Sequence__fini(array);
  }
  free(array);
}
