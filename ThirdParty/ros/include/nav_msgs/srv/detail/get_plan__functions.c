// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav_msgs:srv/GetPlan.idl
// generated code does not contain a copyright notice
#include "nav_msgs/srv/detail/get_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `start`
// Member `goal`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
nav_msgs__srv__GetPlan_Request__init(nav_msgs__srv__GetPlan_Request * msg)
{
  if (!msg) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__PoseStamped__init(&msg->start)) {
    nav_msgs__srv__GetPlan_Request__fini(msg);
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PoseStamped__init(&msg->goal)) {
    nav_msgs__srv__GetPlan_Request__fini(msg);
    return false;
  }
  // tolerance
  return true;
}

void
nav_msgs__srv__GetPlan_Request__fini(nav_msgs__srv__GetPlan_Request * msg)
{
  if (!msg) {
    return;
  }
  // start
  geometry_msgs__msg__PoseStamped__fini(&msg->start);
  // goal
  geometry_msgs__msg__PoseStamped__fini(&msg->goal);
  // tolerance
}

bool
nav_msgs__srv__GetPlan_Request__are_equal(const nav_msgs__srv__GetPlan_Request * lhs, const nav_msgs__srv__GetPlan_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  // tolerance
  if (lhs->tolerance != rhs->tolerance) {
    return false;
  }
  return true;
}

bool
nav_msgs__srv__GetPlan_Request__copy(
  const nav_msgs__srv__GetPlan_Request * input,
  nav_msgs__srv__GetPlan_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  // tolerance
  output->tolerance = input->tolerance;
  return true;
}

nav_msgs__srv__GetPlan_Request *
nav_msgs__srv__GetPlan_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__GetPlan_Request * msg = (nav_msgs__srv__GetPlan_Request *)allocator.allocate(sizeof(nav_msgs__srv__GetPlan_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__srv__GetPlan_Request));
  bool success = nav_msgs__srv__GetPlan_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav_msgs__srv__GetPlan_Request__destroy(nav_msgs__srv__GetPlan_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav_msgs__srv__GetPlan_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav_msgs__srv__GetPlan_Request__Sequence__init(nav_msgs__srv__GetPlan_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__GetPlan_Request * data = NULL;

  if (size) {
    data = (nav_msgs__srv__GetPlan_Request *)allocator.zero_allocate(size, sizeof(nav_msgs__srv__GetPlan_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__srv__GetPlan_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__srv__GetPlan_Request__fini(&data[i - 1]);
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
nav_msgs__srv__GetPlan_Request__Sequence__fini(nav_msgs__srv__GetPlan_Request__Sequence * array)
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
      nav_msgs__srv__GetPlan_Request__fini(&array->data[i]);
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

nav_msgs__srv__GetPlan_Request__Sequence *
nav_msgs__srv__GetPlan_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__GetPlan_Request__Sequence * array = (nav_msgs__srv__GetPlan_Request__Sequence *)allocator.allocate(sizeof(nav_msgs__srv__GetPlan_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__srv__GetPlan_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav_msgs__srv__GetPlan_Request__Sequence__destroy(nav_msgs__srv__GetPlan_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav_msgs__srv__GetPlan_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav_msgs__srv__GetPlan_Request__Sequence__are_equal(const nav_msgs__srv__GetPlan_Request__Sequence * lhs, const nav_msgs__srv__GetPlan_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav_msgs__srv__GetPlan_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav_msgs__srv__GetPlan_Request__Sequence__copy(
  const nav_msgs__srv__GetPlan_Request__Sequence * input,
  nav_msgs__srv__GetPlan_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav_msgs__srv__GetPlan_Request);
    nav_msgs__srv__GetPlan_Request * data =
      (nav_msgs__srv__GetPlan_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav_msgs__srv__GetPlan_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nav_msgs__srv__GetPlan_Request__fini(&data[i]);
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
    if (!nav_msgs__srv__GetPlan_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `plan`
#include "nav_msgs/msg/detail/path__functions.h"

bool
nav_msgs__srv__GetPlan_Response__init(nav_msgs__srv__GetPlan_Response * msg)
{
  if (!msg) {
    return false;
  }
  // plan
  if (!nav_msgs__msg__Path__init(&msg->plan)) {
    nav_msgs__srv__GetPlan_Response__fini(msg);
    return false;
  }
  return true;
}

void
nav_msgs__srv__GetPlan_Response__fini(nav_msgs__srv__GetPlan_Response * msg)
{
  if (!msg) {
    return;
  }
  // plan
  nav_msgs__msg__Path__fini(&msg->plan);
}

bool
nav_msgs__srv__GetPlan_Response__are_equal(const nav_msgs__srv__GetPlan_Response * lhs, const nav_msgs__srv__GetPlan_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // plan
  if (!nav_msgs__msg__Path__are_equal(
      &(lhs->plan), &(rhs->plan)))
  {
    return false;
  }
  return true;
}

bool
nav_msgs__srv__GetPlan_Response__copy(
  const nav_msgs__srv__GetPlan_Response * input,
  nav_msgs__srv__GetPlan_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // plan
  if (!nav_msgs__msg__Path__copy(
      &(input->plan), &(output->plan)))
  {
    return false;
  }
  return true;
}

nav_msgs__srv__GetPlan_Response *
nav_msgs__srv__GetPlan_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__GetPlan_Response * msg = (nav_msgs__srv__GetPlan_Response *)allocator.allocate(sizeof(nav_msgs__srv__GetPlan_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__srv__GetPlan_Response));
  bool success = nav_msgs__srv__GetPlan_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav_msgs__srv__GetPlan_Response__destroy(nav_msgs__srv__GetPlan_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav_msgs__srv__GetPlan_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav_msgs__srv__GetPlan_Response__Sequence__init(nav_msgs__srv__GetPlan_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__GetPlan_Response * data = NULL;

  if (size) {
    data = (nav_msgs__srv__GetPlan_Response *)allocator.zero_allocate(size, sizeof(nav_msgs__srv__GetPlan_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__srv__GetPlan_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__srv__GetPlan_Response__fini(&data[i - 1]);
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
nav_msgs__srv__GetPlan_Response__Sequence__fini(nav_msgs__srv__GetPlan_Response__Sequence * array)
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
      nav_msgs__srv__GetPlan_Response__fini(&array->data[i]);
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

nav_msgs__srv__GetPlan_Response__Sequence *
nav_msgs__srv__GetPlan_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__GetPlan_Response__Sequence * array = (nav_msgs__srv__GetPlan_Response__Sequence *)allocator.allocate(sizeof(nav_msgs__srv__GetPlan_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__srv__GetPlan_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav_msgs__srv__GetPlan_Response__Sequence__destroy(nav_msgs__srv__GetPlan_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav_msgs__srv__GetPlan_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav_msgs__srv__GetPlan_Response__Sequence__are_equal(const nav_msgs__srv__GetPlan_Response__Sequence * lhs, const nav_msgs__srv__GetPlan_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav_msgs__srv__GetPlan_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav_msgs__srv__GetPlan_Response__Sequence__copy(
  const nav_msgs__srv__GetPlan_Response__Sequence * input,
  nav_msgs__srv__GetPlan_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav_msgs__srv__GetPlan_Response);
    nav_msgs__srv__GetPlan_Response * data =
      (nav_msgs__srv__GetPlan_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav_msgs__srv__GetPlan_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nav_msgs__srv__GetPlan_Response__fini(&data[i]);
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
    if (!nav_msgs__srv__GetPlan_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
