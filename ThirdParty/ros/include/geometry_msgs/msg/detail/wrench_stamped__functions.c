// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geometry_msgs:msg/WrenchStamped.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/wrench_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `wrench`
#include "geometry_msgs/msg/detail/wrench__functions.h"

bool
geometry_msgs__msg__WrenchStamped__init(geometry_msgs__msg__WrenchStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    geometry_msgs__msg__WrenchStamped__fini(msg);
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__init(&msg->wrench)) {
    geometry_msgs__msg__WrenchStamped__fini(msg);
    return false;
  }
  return true;
}

void
geometry_msgs__msg__WrenchStamped__fini(geometry_msgs__msg__WrenchStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // wrench
  geometry_msgs__msg__Wrench__fini(&msg->wrench);
}

bool
geometry_msgs__msg__WrenchStamped__are_equal(const geometry_msgs__msg__WrenchStamped * lhs, const geometry_msgs__msg__WrenchStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__are_equal(
      &(lhs->wrench), &(rhs->wrench)))
  {
    return false;
  }
  return true;
}

bool
geometry_msgs__msg__WrenchStamped__copy(
  const geometry_msgs__msg__WrenchStamped * input,
  geometry_msgs__msg__WrenchStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__copy(
      &(input->wrench), &(output->wrench)))
  {
    return false;
  }
  return true;
}

geometry_msgs__msg__WrenchStamped *
geometry_msgs__msg__WrenchStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geometry_msgs__msg__WrenchStamped * msg = (geometry_msgs__msg__WrenchStamped *)allocator.allocate(sizeof(geometry_msgs__msg__WrenchStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__WrenchStamped));
  bool success = geometry_msgs__msg__WrenchStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__WrenchStamped__destroy(geometry_msgs__msg__WrenchStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    geometry_msgs__msg__WrenchStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
geometry_msgs__msg__WrenchStamped__Sequence__init(geometry_msgs__msg__WrenchStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geometry_msgs__msg__WrenchStamped * data = NULL;

  if (size) {
    data = (geometry_msgs__msg__WrenchStamped *)allocator.zero_allocate(size, sizeof(geometry_msgs__msg__WrenchStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__WrenchStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__WrenchStamped__fini(&data[i - 1]);
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
geometry_msgs__msg__WrenchStamped__Sequence__fini(geometry_msgs__msg__WrenchStamped__Sequence * array)
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
      geometry_msgs__msg__WrenchStamped__fini(&array->data[i]);
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

geometry_msgs__msg__WrenchStamped__Sequence *
geometry_msgs__msg__WrenchStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geometry_msgs__msg__WrenchStamped__Sequence * array = (geometry_msgs__msg__WrenchStamped__Sequence *)allocator.allocate(sizeof(geometry_msgs__msg__WrenchStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__WrenchStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__WrenchStamped__Sequence__destroy(geometry_msgs__msg__WrenchStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    geometry_msgs__msg__WrenchStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
geometry_msgs__msg__WrenchStamped__Sequence__are_equal(const geometry_msgs__msg__WrenchStamped__Sequence * lhs, const geometry_msgs__msg__WrenchStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!geometry_msgs__msg__WrenchStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
geometry_msgs__msg__WrenchStamped__Sequence__copy(
  const geometry_msgs__msg__WrenchStamped__Sequence * input,
  geometry_msgs__msg__WrenchStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(geometry_msgs__msg__WrenchStamped);
    geometry_msgs__msg__WrenchStamped * data =
      (geometry_msgs__msg__WrenchStamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!geometry_msgs__msg__WrenchStamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          geometry_msgs__msg__WrenchStamped__fini(&data[i]);
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
    if (!geometry_msgs__msg__WrenchStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
