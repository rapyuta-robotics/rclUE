// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from action_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice
#include "action_msgs/msg/detail/goal_status_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `status_list`
#include "action_msgs/msg/detail/goal_status__functions.h"

bool
action_msgs__msg__GoalStatusArray__init(action_msgs__msg__GoalStatusArray * msg)
{
  if (!msg) {
    return false;
  }
  // status_list
  if (!action_msgs__msg__GoalStatus__Sequence__init(&msg->status_list, 0)) {
    action_msgs__msg__GoalStatusArray__fini(msg);
    return false;
  }
  return true;
}

void
action_msgs__msg__GoalStatusArray__fini(action_msgs__msg__GoalStatusArray * msg)
{
  if (!msg) {
    return;
  }
  // status_list
  action_msgs__msg__GoalStatus__Sequence__fini(&msg->status_list);
}

action_msgs__msg__GoalStatusArray *
action_msgs__msg__GoalStatusArray__create()
{
  action_msgs__msg__GoalStatusArray * msg = (action_msgs__msg__GoalStatusArray *)malloc(sizeof(action_msgs__msg__GoalStatusArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_msgs__msg__GoalStatusArray));
  bool success = action_msgs__msg__GoalStatusArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
action_msgs__msg__GoalStatusArray__destroy(action_msgs__msg__GoalStatusArray * msg)
{
  if (msg) {
    action_msgs__msg__GoalStatusArray__fini(msg);
  }
  free(msg);
}


bool
action_msgs__msg__GoalStatusArray__Sequence__init(action_msgs__msg__GoalStatusArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  action_msgs__msg__GoalStatusArray * data = NULL;
  if (size) {
    data = (action_msgs__msg__GoalStatusArray *)calloc(size, sizeof(action_msgs__msg__GoalStatusArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = action_msgs__msg__GoalStatusArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        action_msgs__msg__GoalStatusArray__fini(&data[i - 1]);
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
action_msgs__msg__GoalStatusArray__Sequence__fini(action_msgs__msg__GoalStatusArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_msgs__msg__GoalStatusArray__fini(&array->data[i]);
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

action_msgs__msg__GoalStatusArray__Sequence *
action_msgs__msg__GoalStatusArray__Sequence__create(size_t size)
{
  action_msgs__msg__GoalStatusArray__Sequence * array = (action_msgs__msg__GoalStatusArray__Sequence *)malloc(sizeof(action_msgs__msg__GoalStatusArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = action_msgs__msg__GoalStatusArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
action_msgs__msg__GoalStatusArray__Sequence__destroy(action_msgs__msg__GoalStatusArray__Sequence * array)
{
  if (array) {
    action_msgs__msg__GoalStatusArray__Sequence__fini(array);
  }
  free(array);
}
