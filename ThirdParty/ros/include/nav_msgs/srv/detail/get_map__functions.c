// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav_msgs:srv/GetMap.idl
// generated code does not contain a copyright notice
#include "nav_msgs/srv/detail/get_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
nav_msgs__srv__GetMap_Request__init(nav_msgs__srv__GetMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
nav_msgs__srv__GetMap_Request__fini(nav_msgs__srv__GetMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
nav_msgs__srv__GetMap_Request__are_equal(const nav_msgs__srv__GetMap_Request * lhs, const nav_msgs__srv__GetMap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
nav_msgs__srv__GetMap_Request__copy(
  const nav_msgs__srv__GetMap_Request * input,
  nav_msgs__srv__GetMap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

nav_msgs__srv__GetMap_Request *
nav_msgs__srv__GetMap_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__GetMap_Request * msg = (nav_msgs__srv__GetMap_Request *)allocator.allocate(sizeof(nav_msgs__srv__GetMap_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__srv__GetMap_Request));
  bool success = nav_msgs__srv__GetMap_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav_msgs__srv__GetMap_Request__destroy(nav_msgs__srv__GetMap_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav_msgs__srv__GetMap_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav_msgs__srv__GetMap_Request__Sequence__init(nav_msgs__srv__GetMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__GetMap_Request * data = NULL;

  if (size) {
    data = (nav_msgs__srv__GetMap_Request *)allocator.zero_allocate(size, sizeof(nav_msgs__srv__GetMap_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__srv__GetMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__srv__GetMap_Request__fini(&data[i - 1]);
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
nav_msgs__srv__GetMap_Request__Sequence__fini(nav_msgs__srv__GetMap_Request__Sequence * array)
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
      nav_msgs__srv__GetMap_Request__fini(&array->data[i]);
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

nav_msgs__srv__GetMap_Request__Sequence *
nav_msgs__srv__GetMap_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__GetMap_Request__Sequence * array = (nav_msgs__srv__GetMap_Request__Sequence *)allocator.allocate(sizeof(nav_msgs__srv__GetMap_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__srv__GetMap_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav_msgs__srv__GetMap_Request__Sequence__destroy(nav_msgs__srv__GetMap_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav_msgs__srv__GetMap_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav_msgs__srv__GetMap_Request__Sequence__are_equal(const nav_msgs__srv__GetMap_Request__Sequence * lhs, const nav_msgs__srv__GetMap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav_msgs__srv__GetMap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav_msgs__srv__GetMap_Request__Sequence__copy(
  const nav_msgs__srv__GetMap_Request__Sequence * input,
  nav_msgs__srv__GetMap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav_msgs__srv__GetMap_Request);
    nav_msgs__srv__GetMap_Request * data =
      (nav_msgs__srv__GetMap_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav_msgs__srv__GetMap_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nav_msgs__srv__GetMap_Request__fini(&data[i]);
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
    if (!nav_msgs__srv__GetMap_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `map`
#include "nav_msgs/msg/detail/occupancy_grid__functions.h"

bool
nav_msgs__srv__GetMap_Response__init(nav_msgs__srv__GetMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // map
  if (!nav_msgs__msg__OccupancyGrid__init(&msg->map)) {
    nav_msgs__srv__GetMap_Response__fini(msg);
    return false;
  }
  return true;
}

void
nav_msgs__srv__GetMap_Response__fini(nav_msgs__srv__GetMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // map
  nav_msgs__msg__OccupancyGrid__fini(&msg->map);
}

bool
nav_msgs__srv__GetMap_Response__are_equal(const nav_msgs__srv__GetMap_Response * lhs, const nav_msgs__srv__GetMap_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map
  if (!nav_msgs__msg__OccupancyGrid__are_equal(
      &(lhs->map), &(rhs->map)))
  {
    return false;
  }
  return true;
}

bool
nav_msgs__srv__GetMap_Response__copy(
  const nav_msgs__srv__GetMap_Response * input,
  nav_msgs__srv__GetMap_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // map
  if (!nav_msgs__msg__OccupancyGrid__copy(
      &(input->map), &(output->map)))
  {
    return false;
  }
  return true;
}

nav_msgs__srv__GetMap_Response *
nav_msgs__srv__GetMap_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__GetMap_Response * msg = (nav_msgs__srv__GetMap_Response *)allocator.allocate(sizeof(nav_msgs__srv__GetMap_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__srv__GetMap_Response));
  bool success = nav_msgs__srv__GetMap_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav_msgs__srv__GetMap_Response__destroy(nav_msgs__srv__GetMap_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav_msgs__srv__GetMap_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav_msgs__srv__GetMap_Response__Sequence__init(nav_msgs__srv__GetMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__GetMap_Response * data = NULL;

  if (size) {
    data = (nav_msgs__srv__GetMap_Response *)allocator.zero_allocate(size, sizeof(nav_msgs__srv__GetMap_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__srv__GetMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__srv__GetMap_Response__fini(&data[i - 1]);
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
nav_msgs__srv__GetMap_Response__Sequence__fini(nav_msgs__srv__GetMap_Response__Sequence * array)
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
      nav_msgs__srv__GetMap_Response__fini(&array->data[i]);
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

nav_msgs__srv__GetMap_Response__Sequence *
nav_msgs__srv__GetMap_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_msgs__srv__GetMap_Response__Sequence * array = (nav_msgs__srv__GetMap_Response__Sequence *)allocator.allocate(sizeof(nav_msgs__srv__GetMap_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__srv__GetMap_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav_msgs__srv__GetMap_Response__Sequence__destroy(nav_msgs__srv__GetMap_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav_msgs__srv__GetMap_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav_msgs__srv__GetMap_Response__Sequence__are_equal(const nav_msgs__srv__GetMap_Response__Sequence * lhs, const nav_msgs__srv__GetMap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav_msgs__srv__GetMap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav_msgs__srv__GetMap_Response__Sequence__copy(
  const nav_msgs__srv__GetMap_Response__Sequence * input,
  nav_msgs__srv__GetMap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav_msgs__srv__GetMap_Response);
    nav_msgs__srv__GetMap_Response * data =
      (nav_msgs__srv__GetMap_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav_msgs__srv__GetMap_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nav_msgs__srv__GetMap_Response__fini(&data[i]);
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
    if (!nav_msgs__srv__GetMap_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
