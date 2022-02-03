// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/JointTolerance.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/joint_tolerance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
control_msgs__msg__JointTolerance__init(control_msgs__msg__JointTolerance * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    control_msgs__msg__JointTolerance__fini(msg);
    return false;
  }
  // position
  // velocity
  // acceleration
  return true;
}

void
control_msgs__msg__JointTolerance__fini(control_msgs__msg__JointTolerance * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // position
  // velocity
  // acceleration
}

control_msgs__msg__JointTolerance *
control_msgs__msg__JointTolerance__create()
{
  control_msgs__msg__JointTolerance * msg = (control_msgs__msg__JointTolerance *)malloc(sizeof(control_msgs__msg__JointTolerance));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__JointTolerance));
  bool success = control_msgs__msg__JointTolerance__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__JointTolerance__destroy(control_msgs__msg__JointTolerance * msg)
{
  if (msg) {
    control_msgs__msg__JointTolerance__fini(msg);
  }
  free(msg);
}


bool
control_msgs__msg__JointTolerance__Sequence__init(control_msgs__msg__JointTolerance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__msg__JointTolerance * data = NULL;
  if (size) {
    data = (control_msgs__msg__JointTolerance *)calloc(size, sizeof(control_msgs__msg__JointTolerance));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__JointTolerance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__JointTolerance__fini(&data[i - 1]);
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
control_msgs__msg__JointTolerance__Sequence__fini(control_msgs__msg__JointTolerance__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__msg__JointTolerance__fini(&array->data[i]);
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

control_msgs__msg__JointTolerance__Sequence *
control_msgs__msg__JointTolerance__Sequence__create(size_t size)
{
  control_msgs__msg__JointTolerance__Sequence * array = (control_msgs__msg__JointTolerance__Sequence *)malloc(sizeof(control_msgs__msg__JointTolerance__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__JointTolerance__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__JointTolerance__Sequence__destroy(control_msgs__msg__JointTolerance__Sequence * array)
{
  if (array) {
    control_msgs__msg__JointTolerance__Sequence__fini(array);
  }
  free(array);
}
