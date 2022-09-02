// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from trajectory_msgs:msg/MultiDOFJointTrajectory.idl
// generated code does not contain a copyright notice
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `points`
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__functions.h"

bool
trajectory_msgs__msg__MultiDOFJointTrajectory__init(trajectory_msgs__msg__MultiDOFJointTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    trajectory_msgs__msg__MultiDOFJointTrajectory__fini(msg);
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    trajectory_msgs__msg__MultiDOFJointTrajectory__fini(msg);
    return false;
  }
  // points
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence__init(&msg->points, 0)) {
    trajectory_msgs__msg__MultiDOFJointTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
trajectory_msgs__msg__MultiDOFJointTrajectory__fini(trajectory_msgs__msg__MultiDOFJointTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // points
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence__fini(&msg->points);
}

bool
trajectory_msgs__msg__MultiDOFJointTrajectory__are_equal(const trajectory_msgs__msg__MultiDOFJointTrajectory * lhs, const trajectory_msgs__msg__MultiDOFJointTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->joint_names), &(rhs->joint_names)))
  {
    return false;
  }
  // points
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  return true;
}

bool
trajectory_msgs__msg__MultiDOFJointTrajectory__copy(
  const trajectory_msgs__msg__MultiDOFJointTrajectory * input,
  trajectory_msgs__msg__MultiDOFJointTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->joint_names), &(output->joint_names)))
  {
    return false;
  }
  // points
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  return true;
}

trajectory_msgs__msg__MultiDOFJointTrajectory *
trajectory_msgs__msg__MultiDOFJointTrajectory__create()
{
  trajectory_msgs__msg__MultiDOFJointTrajectory * msg = (trajectory_msgs__msg__MultiDOFJointTrajectory *)malloc(sizeof(trajectory_msgs__msg__MultiDOFJointTrajectory));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trajectory_msgs__msg__MultiDOFJointTrajectory));
  bool success = trajectory_msgs__msg__MultiDOFJointTrajectory__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
trajectory_msgs__msg__MultiDOFJointTrajectory__destroy(trajectory_msgs__msg__MultiDOFJointTrajectory * msg)
{
  if (msg) {
    trajectory_msgs__msg__MultiDOFJointTrajectory__fini(msg);
  }
  free(msg);
}


bool
trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__init(trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  trajectory_msgs__msg__MultiDOFJointTrajectory * data = NULL;
  if (size) {
    data = (trajectory_msgs__msg__MultiDOFJointTrajectory *)calloc(size, sizeof(trajectory_msgs__msg__MultiDOFJointTrajectory));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trajectory_msgs__msg__MultiDOFJointTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trajectory_msgs__msg__MultiDOFJointTrajectory__fini(&data[i - 1]);
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
trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__fini(trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      trajectory_msgs__msg__MultiDOFJointTrajectory__fini(&array->data[i]);
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

trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence *
trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__create(size_t size)
{
  trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence * array = (trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence *)malloc(sizeof(trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__destroy(trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence * array)
{
  if (array) {
    trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__fini(array);
  }
  free(array);
}

bool
trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__are_equal(const trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence * lhs, const trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!trajectory_msgs__msg__MultiDOFJointTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence__copy(
  const trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence * input,
  trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(trajectory_msgs__msg__MultiDOFJointTrajectory);
    trajectory_msgs__msg__MultiDOFJointTrajectory * data =
      (trajectory_msgs__msg__MultiDOFJointTrajectory *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!trajectory_msgs__msg__MultiDOFJointTrajectory__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          trajectory_msgs__msg__MultiDOFJointTrajectory__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!trajectory_msgs__msg__MultiDOFJointTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
