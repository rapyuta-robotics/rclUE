// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from action_msgs:msg/GoalInfo.idl
// generated code does not contain a copyright notice
#include "action_msgs/msg/detail/goal_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
action_msgs__msg__GoalInfo__init(action_msgs__msg__GoalInfo * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    action_msgs__msg__GoalInfo__fini(msg);
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    action_msgs__msg__GoalInfo__fini(msg);
    return false;
  }
  return true;
}

void
action_msgs__msg__GoalInfo__fini(action_msgs__msg__GoalInfo * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

action_msgs__msg__GoalInfo *
action_msgs__msg__GoalInfo__create()
{
  action_msgs__msg__GoalInfo * msg = (action_msgs__msg__GoalInfo *)malloc(sizeof(action_msgs__msg__GoalInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_msgs__msg__GoalInfo));
  bool success = action_msgs__msg__GoalInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
action_msgs__msg__GoalInfo__destroy(action_msgs__msg__GoalInfo * msg)
{
  if (msg) {
    action_msgs__msg__GoalInfo__fini(msg);
  }
  free(msg);
}


bool
action_msgs__msg__GoalInfo__Sequence__init(action_msgs__msg__GoalInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  action_msgs__msg__GoalInfo * data = NULL;
  if (size) {
    data = (action_msgs__msg__GoalInfo *)calloc(size, sizeof(action_msgs__msg__GoalInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = action_msgs__msg__GoalInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        action_msgs__msg__GoalInfo__fini(&data[i - 1]);
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
action_msgs__msg__GoalInfo__Sequence__fini(action_msgs__msg__GoalInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_msgs__msg__GoalInfo__fini(&array->data[i]);
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

action_msgs__msg__GoalInfo__Sequence *
action_msgs__msg__GoalInfo__Sequence__create(size_t size)
{
  action_msgs__msg__GoalInfo__Sequence * array = (action_msgs__msg__GoalInfo__Sequence *)malloc(sizeof(action_msgs__msg__GoalInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = action_msgs__msg__GoalInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
action_msgs__msg__GoalInfo__Sequence__destroy(action_msgs__msg__GoalInfo__Sequence * array)
{
  if (array) {
    action_msgs__msg__GoalInfo__Sequence__fini(array);
  }
  free(array);
}
