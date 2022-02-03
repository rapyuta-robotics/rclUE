// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/JointTrajectoryControllerState.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/joint_trajectory_controller_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `desired`
// Member `actual`
// Member `error`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"

bool
control_msgs__msg__JointTrajectoryControllerState__init(control_msgs__msg__JointTrajectoryControllerState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // desired
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->desired)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // actual
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->actual)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // error
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->error)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__msg__JointTrajectoryControllerState__fini(control_msgs__msg__JointTrajectoryControllerState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // desired
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->desired);
  // actual
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->actual);
  // error
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->error);
}

control_msgs__msg__JointTrajectoryControllerState *
control_msgs__msg__JointTrajectoryControllerState__create()
{
  control_msgs__msg__JointTrajectoryControllerState * msg = (control_msgs__msg__JointTrajectoryControllerState *)malloc(sizeof(control_msgs__msg__JointTrajectoryControllerState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__JointTrajectoryControllerState));
  bool success = control_msgs__msg__JointTrajectoryControllerState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__JointTrajectoryControllerState__destroy(control_msgs__msg__JointTrajectoryControllerState * msg)
{
  if (msg) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
  }
  free(msg);
}


bool
control_msgs__msg__JointTrajectoryControllerState__Sequence__init(control_msgs__msg__JointTrajectoryControllerState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__msg__JointTrajectoryControllerState * data = NULL;
  if (size) {
    data = (control_msgs__msg__JointTrajectoryControllerState *)calloc(size, sizeof(control_msgs__msg__JointTrajectoryControllerState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__JointTrajectoryControllerState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__JointTrajectoryControllerState__fini(&data[i - 1]);
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
control_msgs__msg__JointTrajectoryControllerState__Sequence__fini(control_msgs__msg__JointTrajectoryControllerState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__msg__JointTrajectoryControllerState__fini(&array->data[i]);
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

control_msgs__msg__JointTrajectoryControllerState__Sequence *
control_msgs__msg__JointTrajectoryControllerState__Sequence__create(size_t size)
{
  control_msgs__msg__JointTrajectoryControllerState__Sequence * array = (control_msgs__msg__JointTrajectoryControllerState__Sequence *)malloc(sizeof(control_msgs__msg__JointTrajectoryControllerState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__JointTrajectoryControllerState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__JointTrajectoryControllerState__Sequence__destroy(control_msgs__msg__JointTrajectoryControllerState__Sequence * array)
{
  if (array) {
    control_msgs__msg__JointTrajectoryControllerState__Sequence__fini(array);
  }
  free(array);
}
