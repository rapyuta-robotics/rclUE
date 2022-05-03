// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav_msgs:msg/Odometry.idl
// generated code does not contain a copyright notice
#include "nav_msgs/msg/detail/odometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `child_frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"

bool
nav_msgs__msg__Odometry__init(nav_msgs__msg__Odometry * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nav_msgs__msg__Odometry__fini(msg);
    return false;
  }
  // child_frame_id
  if (!rosidl_runtime_c__String__init(&msg->child_frame_id)) {
    nav_msgs__msg__Odometry__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose)) {
    nav_msgs__msg__Odometry__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->twist)) {
    nav_msgs__msg__Odometry__fini(msg);
    return false;
  }
  return true;
}

void
nav_msgs__msg__Odometry__fini(nav_msgs__msg__Odometry * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // child_frame_id
  rosidl_runtime_c__String__fini(&msg->child_frame_id);
  // pose
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose);
  // twist
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->twist);
}

nav_msgs__msg__Odometry *
nav_msgs__msg__Odometry__create()
{
  nav_msgs__msg__Odometry * msg = (nav_msgs__msg__Odometry *)malloc(sizeof(nav_msgs__msg__Odometry));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__msg__Odometry));
  bool success = nav_msgs__msg__Odometry__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav_msgs__msg__Odometry__destroy(nav_msgs__msg__Odometry * msg)
{
  if (msg) {
    nav_msgs__msg__Odometry__fini(msg);
  }
  free(msg);
}


bool
nav_msgs__msg__Odometry__Sequence__init(nav_msgs__msg__Odometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav_msgs__msg__Odometry * data = NULL;
  if (size) {
    data = (nav_msgs__msg__Odometry *)calloc(size, sizeof(nav_msgs__msg__Odometry));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__msg__Odometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__msg__Odometry__fini(&data[i - 1]);
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
nav_msgs__msg__Odometry__Sequence__fini(nav_msgs__msg__Odometry__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_msgs__msg__Odometry__fini(&array->data[i]);
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

nav_msgs__msg__Odometry__Sequence *
nav_msgs__msg__Odometry__Sequence__create(size_t size)
{
  nav_msgs__msg__Odometry__Sequence * array = (nav_msgs__msg__Odometry__Sequence *)malloc(sizeof(nav_msgs__msg__Odometry__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__msg__Odometry__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav_msgs__msg__Odometry__Sequence__destroy(nav_msgs__msg__Odometry__Sequence * array)
{
  if (array) {
    nav_msgs__msg__Odometry__Sequence__fini(array);
  }
  free(array);
}
