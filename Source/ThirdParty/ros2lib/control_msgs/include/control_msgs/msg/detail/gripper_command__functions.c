// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/GripperCommand.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/gripper_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
control_msgs__msg__GripperCommand__init(control_msgs__msg__GripperCommand * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // max_effort
  return true;
}

void
control_msgs__msg__GripperCommand__fini(control_msgs__msg__GripperCommand * msg)
{
  if (!msg) {
    return;
  }
  // position
  // max_effort
}

control_msgs__msg__GripperCommand *
control_msgs__msg__GripperCommand__create()
{
  control_msgs__msg__GripperCommand * msg = (control_msgs__msg__GripperCommand *)malloc(sizeof(control_msgs__msg__GripperCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__GripperCommand));
  bool success = control_msgs__msg__GripperCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__GripperCommand__destroy(control_msgs__msg__GripperCommand * msg)
{
  if (msg) {
    control_msgs__msg__GripperCommand__fini(msg);
  }
  free(msg);
}


bool
control_msgs__msg__GripperCommand__Sequence__init(control_msgs__msg__GripperCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__msg__GripperCommand * data = NULL;
  if (size) {
    data = (control_msgs__msg__GripperCommand *)calloc(size, sizeof(control_msgs__msg__GripperCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__GripperCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__GripperCommand__fini(&data[i - 1]);
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
control_msgs__msg__GripperCommand__Sequence__fini(control_msgs__msg__GripperCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__msg__GripperCommand__fini(&array->data[i]);
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

control_msgs__msg__GripperCommand__Sequence *
control_msgs__msg__GripperCommand__Sequence__create(size_t size)
{
  control_msgs__msg__GripperCommand__Sequence * array = (control_msgs__msg__GripperCommand__Sequence *)malloc(sizeof(control_msgs__msg__GripperCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__GripperCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__GripperCommand__Sequence__destroy(control_msgs__msg__GripperCommand__Sequence * array)
{
  if (array) {
    control_msgs__msg__GripperCommand__Sequence__fini(array);
  }
  free(array);
}
