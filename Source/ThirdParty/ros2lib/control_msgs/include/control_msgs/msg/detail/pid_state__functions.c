// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/PidState.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/pid_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `timestep`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
control_msgs__msg__PidState__init(control_msgs__msg__PidState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    control_msgs__msg__PidState__fini(msg);
    return false;
  }
  // timestep
  if (!builtin_interfaces__msg__Duration__init(&msg->timestep)) {
    control_msgs__msg__PidState__fini(msg);
    return false;
  }
  // error
  // error_dot
  // p_error
  // i_error
  // d_error
  // p_term
  // i_term
  // d_term
  // i_max
  // i_min
  // output
  return true;
}

void
control_msgs__msg__PidState__fini(control_msgs__msg__PidState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // timestep
  builtin_interfaces__msg__Duration__fini(&msg->timestep);
  // error
  // error_dot
  // p_error
  // i_error
  // d_error
  // p_term
  // i_term
  // d_term
  // i_max
  // i_min
  // output
}

control_msgs__msg__PidState *
control_msgs__msg__PidState__create()
{
  control_msgs__msg__PidState * msg = (control_msgs__msg__PidState *)malloc(sizeof(control_msgs__msg__PidState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__PidState));
  bool success = control_msgs__msg__PidState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__PidState__destroy(control_msgs__msg__PidState * msg)
{
  if (msg) {
    control_msgs__msg__PidState__fini(msg);
  }
  free(msg);
}


bool
control_msgs__msg__PidState__Sequence__init(control_msgs__msg__PidState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__msg__PidState * data = NULL;
  if (size) {
    data = (control_msgs__msg__PidState *)calloc(size, sizeof(control_msgs__msg__PidState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__PidState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__PidState__fini(&data[i - 1]);
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
control_msgs__msg__PidState__Sequence__fini(control_msgs__msg__PidState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__msg__PidState__fini(&array->data[i]);
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

control_msgs__msg__PidState__Sequence *
control_msgs__msg__PidState__Sequence__create(size_t size)
{
  control_msgs__msg__PidState__Sequence * array = (control_msgs__msg__PidState__Sequence *)malloc(sizeof(control_msgs__msg__PidState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__PidState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__PidState__Sequence__destroy(control_msgs__msg__PidState__Sequence * array)
{
  if (array) {
    control_msgs__msg__PidState__Sequence__fini(array);
  }
  free(array);
}
