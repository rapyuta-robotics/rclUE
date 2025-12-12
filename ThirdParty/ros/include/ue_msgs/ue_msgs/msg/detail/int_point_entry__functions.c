// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ue_msgs:msg/IntPointEntry.idl
// generated code does not contain a copyright notice
#include "ue_msgs/msg/detail/int_point_entry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `value`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
ue_msgs__msg__IntPointEntry__init(ue_msgs__msg__IntPointEntry * msg)
{
  if (!msg) {
    return false;
  }
  // key
  // value
  if (!geometry_msgs__msg__Point__init(&msg->value)) {
    ue_msgs__msg__IntPointEntry__fini(msg);
    return false;
  }
  return true;
}

void
ue_msgs__msg__IntPointEntry__fini(ue_msgs__msg__IntPointEntry * msg)
{
  if (!msg) {
    return;
  }
  // key
  // value
  geometry_msgs__msg__Point__fini(&msg->value);
}

bool
ue_msgs__msg__IntPointEntry__are_equal(const ue_msgs__msg__IntPointEntry * lhs, const ue_msgs__msg__IntPointEntry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key
  if (lhs->key != rhs->key) {
    return false;
  }
  // value
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
ue_msgs__msg__IntPointEntry__copy(
  const ue_msgs__msg__IntPointEntry * input,
  ue_msgs__msg__IntPointEntry * output)
{
  if (!input || !output) {
    return false;
  }
  // key
  output->key = input->key;
  // value
  if (!geometry_msgs__msg__Point__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

ue_msgs__msg__IntPointEntry *
ue_msgs__msg__IntPointEntry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__msg__IntPointEntry * msg = (ue_msgs__msg__IntPointEntry *)allocator.allocate(sizeof(ue_msgs__msg__IntPointEntry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__msg__IntPointEntry));
  bool success = ue_msgs__msg__IntPointEntry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ue_msgs__msg__IntPointEntry__destroy(ue_msgs__msg__IntPointEntry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ue_msgs__msg__IntPointEntry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ue_msgs__msg__IntPointEntry__Sequence__init(ue_msgs__msg__IntPointEntry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__msg__IntPointEntry * data = NULL;

  if (size) {
    data = (ue_msgs__msg__IntPointEntry *)allocator.zero_allocate(size, sizeof(ue_msgs__msg__IntPointEntry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__msg__IntPointEntry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__msg__IntPointEntry__fini(&data[i - 1]);
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
ue_msgs__msg__IntPointEntry__Sequence__fini(ue_msgs__msg__IntPointEntry__Sequence * array)
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
      ue_msgs__msg__IntPointEntry__fini(&array->data[i]);
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

ue_msgs__msg__IntPointEntry__Sequence *
ue_msgs__msg__IntPointEntry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__msg__IntPointEntry__Sequence * array = (ue_msgs__msg__IntPointEntry__Sequence *)allocator.allocate(sizeof(ue_msgs__msg__IntPointEntry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__msg__IntPointEntry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ue_msgs__msg__IntPointEntry__Sequence__destroy(ue_msgs__msg__IntPointEntry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ue_msgs__msg__IntPointEntry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ue_msgs__msg__IntPointEntry__Sequence__are_equal(const ue_msgs__msg__IntPointEntry__Sequence * lhs, const ue_msgs__msg__IntPointEntry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ue_msgs__msg__IntPointEntry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ue_msgs__msg__IntPointEntry__Sequence__copy(
  const ue_msgs__msg__IntPointEntry__Sequence * input,
  ue_msgs__msg__IntPointEntry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ue_msgs__msg__IntPointEntry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ue_msgs__msg__IntPointEntry * data =
      (ue_msgs__msg__IntPointEntry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ue_msgs__msg__IntPointEntry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ue_msgs__msg__IntPointEntry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ue_msgs__msg__IntPointEntry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
