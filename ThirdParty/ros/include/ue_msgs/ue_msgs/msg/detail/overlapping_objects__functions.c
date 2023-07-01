// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ue_msgs:msg/OverlappingObjects.idl
// generated code does not contain a copyright notice
#include "ue_msgs/msg/detail/overlapping_objects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `actors`
// Member `components`
#include "rosidl_runtime_c/string_functions.h"

bool
ue_msgs__msg__OverlappingObjects__init(ue_msgs__msg__OverlappingObjects * msg)
{
  if (!msg) {
    return false;
  }
  // actors
  if (!rosidl_runtime_c__String__Sequence__init(&msg->actors, 0)) {
    ue_msgs__msg__OverlappingObjects__fini(msg);
    return false;
  }
  // components
  if (!rosidl_runtime_c__String__Sequence__init(&msg->components, 0)) {
    ue_msgs__msg__OverlappingObjects__fini(msg);
    return false;
  }
  return true;
}

void
ue_msgs__msg__OverlappingObjects__fini(ue_msgs__msg__OverlappingObjects * msg)
{
  if (!msg) {
    return;
  }
  // actors
  rosidl_runtime_c__String__Sequence__fini(&msg->actors);
  // components
  rosidl_runtime_c__String__Sequence__fini(&msg->components);
}

bool
ue_msgs__msg__OverlappingObjects__are_equal(const ue_msgs__msg__OverlappingObjects * lhs, const ue_msgs__msg__OverlappingObjects * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // actors
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->actors), &(rhs->actors)))
  {
    return false;
  }
  // components
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->components), &(rhs->components)))
  {
    return false;
  }
  return true;
}

bool
ue_msgs__msg__OverlappingObjects__copy(
  const ue_msgs__msg__OverlappingObjects * input,
  ue_msgs__msg__OverlappingObjects * output)
{
  if (!input || !output) {
    return false;
  }
  // actors
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->actors), &(output->actors)))
  {
    return false;
  }
  // components
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->components), &(output->components)))
  {
    return false;
  }
  return true;
}

ue_msgs__msg__OverlappingObjects *
ue_msgs__msg__OverlappingObjects__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__msg__OverlappingObjects * msg = (ue_msgs__msg__OverlappingObjects *)allocator.allocate(sizeof(ue_msgs__msg__OverlappingObjects), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__msg__OverlappingObjects));
  bool success = ue_msgs__msg__OverlappingObjects__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ue_msgs__msg__OverlappingObjects__destroy(ue_msgs__msg__OverlappingObjects * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ue_msgs__msg__OverlappingObjects__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ue_msgs__msg__OverlappingObjects__Sequence__init(ue_msgs__msg__OverlappingObjects__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__msg__OverlappingObjects * data = NULL;

  if (size) {
    data = (ue_msgs__msg__OverlappingObjects *)allocator.zero_allocate(size, sizeof(ue_msgs__msg__OverlappingObjects), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__msg__OverlappingObjects__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__msg__OverlappingObjects__fini(&data[i - 1]);
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
ue_msgs__msg__OverlappingObjects__Sequence__fini(ue_msgs__msg__OverlappingObjects__Sequence * array)
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
      ue_msgs__msg__OverlappingObjects__fini(&array->data[i]);
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

ue_msgs__msg__OverlappingObjects__Sequence *
ue_msgs__msg__OverlappingObjects__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__msg__OverlappingObjects__Sequence * array = (ue_msgs__msg__OverlappingObjects__Sequence *)allocator.allocate(sizeof(ue_msgs__msg__OverlappingObjects__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__msg__OverlappingObjects__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ue_msgs__msg__OverlappingObjects__Sequence__destroy(ue_msgs__msg__OverlappingObjects__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ue_msgs__msg__OverlappingObjects__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ue_msgs__msg__OverlappingObjects__Sequence__are_equal(const ue_msgs__msg__OverlappingObjects__Sequence * lhs, const ue_msgs__msg__OverlappingObjects__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ue_msgs__msg__OverlappingObjects__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ue_msgs__msg__OverlappingObjects__Sequence__copy(
  const ue_msgs__msg__OverlappingObjects__Sequence * input,
  ue_msgs__msg__OverlappingObjects__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ue_msgs__msg__OverlappingObjects);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ue_msgs__msg__OverlappingObjects * data =
      (ue_msgs__msg__OverlappingObjects *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ue_msgs__msg__OverlappingObjects__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ue_msgs__msg__OverlappingObjects__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ue_msgs__msg__OverlappingObjects__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
