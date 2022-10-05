// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from action_msgs:srv/CancelGoal.idl
// generated code does not contain a copyright notice
#include "action_msgs/srv/detail/cancel_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

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

bool
action_msgs__srv__CancelGoal_Request__are_equal(const action_msgs__srv__CancelGoal_Request * lhs, const action_msgs__srv__CancelGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_info
  if (!action_msgs__msg__GoalInfo__are_equal(
      &(lhs->goal_info), &(rhs->goal_info)))
  {
    return false;
  }
  return true;
}

bool
action_msgs__srv__CancelGoal_Request__copy(
  const action_msgs__srv__CancelGoal_Request * input,
  action_msgs__srv__CancelGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_info
  if (!action_msgs__msg__GoalInfo__copy(
      &(input->goal_info), &(output->goal_info)))
  {
    return false;
  }
  return true;
}

action_msgs__srv__CancelGoal_Request *
action_msgs__srv__CancelGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  action_msgs__srv__CancelGoal_Request * msg = (action_msgs__srv__CancelGoal_Request *)allocator.allocate(sizeof(action_msgs__srv__CancelGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_msgs__srv__CancelGoal_Request));
  bool success = action_msgs__srv__CancelGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
action_msgs__srv__CancelGoal_Request__destroy(action_msgs__srv__CancelGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    action_msgs__srv__CancelGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
action_msgs__srv__CancelGoal_Request__Sequence__init(action_msgs__srv__CancelGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  action_msgs__srv__CancelGoal_Request * data = NULL;

  if (size) {
    data = (action_msgs__srv__CancelGoal_Request *)allocator.zero_allocate(size, sizeof(action_msgs__srv__CancelGoal_Request), allocator.state);
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
      allocator.deallocate(data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_msgs__srv__CancelGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  action_msgs__srv__CancelGoal_Request__Sequence * array = (action_msgs__srv__CancelGoal_Request__Sequence *)allocator.allocate(sizeof(action_msgs__srv__CancelGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = action_msgs__srv__CancelGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
action_msgs__srv__CancelGoal_Request__Sequence__destroy(action_msgs__srv__CancelGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    action_msgs__srv__CancelGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
action_msgs__srv__CancelGoal_Request__Sequence__are_equal(const action_msgs__srv__CancelGoal_Request__Sequence * lhs, const action_msgs__srv__CancelGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!action_msgs__srv__CancelGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
action_msgs__srv__CancelGoal_Request__Sequence__copy(
  const action_msgs__srv__CancelGoal_Request__Sequence * input,
  action_msgs__srv__CancelGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(action_msgs__srv__CancelGoal_Request);
    action_msgs__srv__CancelGoal_Request * data =
      (action_msgs__srv__CancelGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!action_msgs__srv__CancelGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          action_msgs__srv__CancelGoal_Request__fini(&data[i]);
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
    if (!action_msgs__srv__CancelGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
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

bool
action_msgs__srv__CancelGoal_Response__are_equal(const action_msgs__srv__CancelGoal_Response * lhs, const action_msgs__srv__CancelGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // return_code
  if (lhs->return_code != rhs->return_code) {
    return false;
  }
  // goals_canceling
  if (!action_msgs__msg__GoalInfo__Sequence__are_equal(
      &(lhs->goals_canceling), &(rhs->goals_canceling)))
  {
    return false;
  }
  return true;
}

bool
action_msgs__srv__CancelGoal_Response__copy(
  const action_msgs__srv__CancelGoal_Response * input,
  action_msgs__srv__CancelGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // return_code
  output->return_code = input->return_code;
  // goals_canceling
  if (!action_msgs__msg__GoalInfo__Sequence__copy(
      &(input->goals_canceling), &(output->goals_canceling)))
  {
    return false;
  }
  return true;
}

action_msgs__srv__CancelGoal_Response *
action_msgs__srv__CancelGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  action_msgs__srv__CancelGoal_Response * msg = (action_msgs__srv__CancelGoal_Response *)allocator.allocate(sizeof(action_msgs__srv__CancelGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(action_msgs__srv__CancelGoal_Response));
  bool success = action_msgs__srv__CancelGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
action_msgs__srv__CancelGoal_Response__destroy(action_msgs__srv__CancelGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    action_msgs__srv__CancelGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
action_msgs__srv__CancelGoal_Response__Sequence__init(action_msgs__srv__CancelGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  action_msgs__srv__CancelGoal_Response * data = NULL;

  if (size) {
    data = (action_msgs__srv__CancelGoal_Response *)allocator.zero_allocate(size, sizeof(action_msgs__srv__CancelGoal_Response), allocator.state);
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
      allocator.deallocate(data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      action_msgs__srv__CancelGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  action_msgs__srv__CancelGoal_Response__Sequence * array = (action_msgs__srv__CancelGoal_Response__Sequence *)allocator.allocate(sizeof(action_msgs__srv__CancelGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = action_msgs__srv__CancelGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
action_msgs__srv__CancelGoal_Response__Sequence__destroy(action_msgs__srv__CancelGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    action_msgs__srv__CancelGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
action_msgs__srv__CancelGoal_Response__Sequence__are_equal(const action_msgs__srv__CancelGoal_Response__Sequence * lhs, const action_msgs__srv__CancelGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!action_msgs__srv__CancelGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
action_msgs__srv__CancelGoal_Response__Sequence__copy(
  const action_msgs__srv__CancelGoal_Response__Sequence * input,
  action_msgs__srv__CancelGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(action_msgs__srv__CancelGoal_Response);
    action_msgs__srv__CancelGoal_Response * data =
      (action_msgs__srv__CancelGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!action_msgs__srv__CancelGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          action_msgs__srv__CancelGoal_Response__fini(&data[i]);
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
    if (!action_msgs__srv__CancelGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
