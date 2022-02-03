// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/DynamicJointState.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/dynamic_joint_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `interface_values`
#include "control_msgs/msg/detail/interface_value__functions.h"

bool
control_msgs__msg__DynamicJointState__init(control_msgs__msg__DynamicJointState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    control_msgs__msg__DynamicJointState__fini(msg);
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    control_msgs__msg__DynamicJointState__fini(msg);
    return false;
  }
  // interface_values
  if (!control_msgs__msg__InterfaceValue__Sequence__init(&msg->interface_values, 0)) {
    control_msgs__msg__DynamicJointState__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__msg__DynamicJointState__fini(control_msgs__msg__DynamicJointState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // interface_values
  control_msgs__msg__InterfaceValue__Sequence__fini(&msg->interface_values);
}

control_msgs__msg__DynamicJointState *
control_msgs__msg__DynamicJointState__create()
{
  control_msgs__msg__DynamicJointState * msg = (control_msgs__msg__DynamicJointState *)malloc(sizeof(control_msgs__msg__DynamicJointState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__DynamicJointState));
  bool success = control_msgs__msg__DynamicJointState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__DynamicJointState__destroy(control_msgs__msg__DynamicJointState * msg)
{
  if (msg) {
    control_msgs__msg__DynamicJointState__fini(msg);
  }
  free(msg);
}


bool
control_msgs__msg__DynamicJointState__Sequence__init(control_msgs__msg__DynamicJointState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__msg__DynamicJointState * data = NULL;
  if (size) {
    data = (control_msgs__msg__DynamicJointState *)calloc(size, sizeof(control_msgs__msg__DynamicJointState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__DynamicJointState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__DynamicJointState__fini(&data[i - 1]);
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
control_msgs__msg__DynamicJointState__Sequence__fini(control_msgs__msg__DynamicJointState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__msg__DynamicJointState__fini(&array->data[i]);
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

control_msgs__msg__DynamicJointState__Sequence *
control_msgs__msg__DynamicJointState__Sequence__create(size_t size)
{
  control_msgs__msg__DynamicJointState__Sequence * array = (control_msgs__msg__DynamicJointState__Sequence *)malloc(sizeof(control_msgs__msg__DynamicJointState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__DynamicJointState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__DynamicJointState__Sequence__destroy(control_msgs__msg__DynamicJointState__Sequence * array)
{
  if (array) {
    control_msgs__msg__DynamicJointState__Sequence__fini(array);
  }
  free(array);
}
