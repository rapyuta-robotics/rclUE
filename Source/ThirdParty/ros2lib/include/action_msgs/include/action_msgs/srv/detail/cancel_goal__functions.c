// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from action_msgs:srv/CancelGoal.idl
// generated code does not contain a copyright notice
#include "action_msgs/srv/detail/cancel_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `goal_info`
#include "action_msgs/msg/detail/goal_info__functions.h"

bool
action_msgs__srv__CancelGoal_Request__init(action_msgs__srv__CancelGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_info
  if (!action_msgs__msg__GoalInfo__init(&msg->goal_info)) {
    action_msgs__srv__CancelGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
action_msgs__srv__CancelGoal_Request__fini(action_msgs__srv__CancelGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_info
  action_msgs__msg__GoalInfo__fini(&msg->goal_info);
}

action_msgs__srv__CancelGoal_Request *
action_msgs__srv__CancelGoal_Request__create()
{
  action_msgs__srv__CancelGoal_Request * msg = (action_msgs__srv__CancelGoal_Request *)malloc(sizeof(action_msgs__srv__CancelGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_msgs__srv__CancelGoal_Request));
  bool success = action_msgs__srv__CancelGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
action_msgs__srv__CancelGoal_Request__destroy(action_msgs__srv__CancelGoal_Request * msg)
{
  if (msg) {
    action_msgs__srv__CancelGoal_Request__fini(msg);
  }
  free(msg);
}


bool
action_msgs__srv__CancelGoal_Request__Sequence__init(action_msgs__srv__CancelGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  action_msgs__srv__CancelGoal_Request * data = NULL;
  if (size) {
    data = (action_msgs__srv__CancelGoal_Request *)calloc(size, sizeof(action_msgs__srv__CancelGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = action_msgs__srv__CancelGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        action_msgs__srv__CancelGoal_Request__fini(&data[i - 1]);
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
action_msgs__srv__CancelGoal_Request__Sequence__fini(action_msgs__srv__CancelGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_msgs__srv__CancelGoal_Request__fini(&array->data[i]);
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

action_msgs__srv__CancelGoal_Request__Sequence *
action_msgs__srv__CancelGoal_Request__Sequence__create(size_t size)
{
  action_msgs__srv__CancelGoal_Request__Sequence * array = (action_msgs__srv__CancelGoal_Request__Sequence *)malloc(sizeof(action_msgs__srv__CancelGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = action_msgs__srv__CancelGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
action_msgs__srv__CancelGoal_Request__Sequence__destroy(action_msgs__srv__CancelGoal_Request__Sequence * array)
{
  if (array) {
    action_msgs__srv__CancelGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goals_canceling`
// already included above
// #include "action_msgs/msg/detail/goal_info__functions.h"

bool
action_msgs__srv__CancelGoal_Response__init(action_msgs__srv__CancelGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // return_code
  // goals_canceling
  if (!action_msgs__msg__GoalInfo__Sequence__init(&msg->goals_canceling, 0)) {
    action_msgs__srv__CancelGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
action_msgs__srv__CancelGoal_Response__fini(action_msgs__srv__CancelGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // return_code
  // goals_canceling
  action_msgs__msg__GoalInfo__Sequence__fini(&msg->goals_canceling);
}

action_msgs__srv__CancelGoal_Response *
action_msgs__srv__CancelGoal_Response__create()
{
  action_msgs__srv__CancelGoal_Response * msg = (action_msgs__srv__CancelGoal_Response *)malloc(sizeof(action_msgs__srv__CancelGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_msgs__srv__CancelGoal_Response));
  bool success = action_msgs__srv__CancelGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
action_msgs__srv__CancelGoal_Response__destroy(action_msgs__srv__CancelGoal_Response * msg)
{
  if (msg) {
    action_msgs__srv__CancelGoal_Response__fini(msg);
  }
  free(msg);
}


bool
action_msgs__srv__CancelGoal_Response__Sequence__init(action_msgs__srv__CancelGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  action_msgs__srv__CancelGoal_Response * data = NULL;
  if (size) {
    data = (action_msgs__srv__CancelGoal_Response *)calloc(size, sizeof(action_msgs__srv__CancelGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = action_msgs__srv__CancelGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        action_msgs__srv__CancelGoal_Response__fini(&data[i - 1]);
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
action_msgs__srv__CancelGoal_Response__Sequence__fini(action_msgs__srv__CancelGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_msgs__srv__CancelGoal_Response__fini(&array->data[i]);
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

action_msgs__srv__CancelGoal_Response__Sequence *
action_msgs__srv__CancelGoal_Response__Sequence__create(size_t size)
{
  action_msgs__srv__CancelGoal_Response__Sequence * array = (action_msgs__srv__CancelGoal_Response__Sequence *)malloc(sizeof(action_msgs__srv__CancelGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = action_msgs__srv__CancelGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
action_msgs__srv__CancelGoal_Response__Sequence__destroy(action_msgs__srv__CancelGoal_Response__Sequence * array)
{
  if (array) {
    action_msgs__srv__CancelGoal_Response__Sequence__fini(array);
  }
  free(array);
}
