// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from trajectory_msgs:msg/MultiDOFJointTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `transforms`
#include "geometry_msgs/msg/detail/transform__functions.h"
// Member `velocities`
// Member `accelerations`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `time_from_start`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__init(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // transforms
  if (!geometry_msgs__msg__Transform__Sequence__init(&msg->transforms, 0)) {
    trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(msg);
    return false;
  }
  // velocities
  if (!geometry_msgs__msg__Twist__Sequence__init(&msg->velocities, 0)) {
    trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(msg);
    return false;
  }
  // accelerations
  if (!geometry_msgs__msg__Twist__Sequence__init(&msg->accelerations, 0)) {
    trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(msg);
    return false;
  }
  // time_from_start
  if (!builtin_interfaces__msg__Duration__init(&msg->time_from_start)) {
    trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(msg);
    return false;
  }
  return true;
}

void
trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // transforms
  geometry_msgs__msg__Transform__Sequence__fini(&msg->transforms);
  // velocities
  geometry_msgs__msg__Twist__Sequence__fini(&msg->velocities);
  // accelerations
  geometry_msgs__msg__Twist__Sequence__fini(&msg->accelerations);
  // time_from_start
  builtin_interfaces__msg__Duration__fini(&msg->time_from_start);
}

trajectory_msgs__msg__MultiDOFJointTrajectoryPoint *
trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__create()
{
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * msg = (trajectory_msgs__msg__MultiDOFJointTrajectoryPoint *)malloc(sizeof(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint));
  bool success = trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__destroy(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * msg)
{
  if (msg) {
    trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(msg);
  }
  free(msg);
}


bool
trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence__init(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * data = NULL;
  if (size) {
    data = (trajectory_msgs__msg__MultiDOFJointTrajectoryPoint *)calloc(size, sizeof(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(&data[i - 1]);
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
trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence__fini(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(&array->data[i]);
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

trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence *
trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence__create(size_t size)
{
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence * array = (trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence *)malloc(sizeof(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence__destroy(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence * array)
{
  if (array) {
    trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence__fini(array);
  }
  free(array);
}
