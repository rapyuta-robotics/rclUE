// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pcl_msgs:msg/PointIndices.idl
// generated code does not contain a copyright notice
#include "pcl_msgs/msg/detail/point_indices__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pcl_msgs__msg__PointIndices__init(pcl_msgs__msg__PointIndices * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pcl_msgs__msg__PointIndices__fini(msg);
    return false;
  }
  // indices
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->indices, 0)) {
    pcl_msgs__msg__PointIndices__fini(msg);
    return false;
  }
  return true;
}

void
pcl_msgs__msg__PointIndices__fini(pcl_msgs__msg__PointIndices * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // indices
  rosidl_runtime_c__int32__Sequence__fini(&msg->indices);
}

bool
pcl_msgs__msg__PointIndices__are_equal(const pcl_msgs__msg__PointIndices * lhs, const pcl_msgs__msg__PointIndices * rhs)
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
  // indices
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->indices), &(rhs->indices)))
  {
    return false;
  }
  return true;
}

bool
pcl_msgs__msg__PointIndices__copy(
  const pcl_msgs__msg__PointIndices * input,
  pcl_msgs__msg__PointIndices * output)
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
  // indices
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->indices), &(output->indices)))
  {
    return false;
  }
  return true;
}

pcl_msgs__msg__PointIndices *
pcl_msgs__msg__PointIndices__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pcl_msgs__msg__PointIndices * msg = (pcl_msgs__msg__PointIndices *)allocator.allocate(sizeof(pcl_msgs__msg__PointIndices), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pcl_msgs__msg__PointIndices));
  bool success = pcl_msgs__msg__PointIndices__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pcl_msgs__msg__PointIndices__destroy(pcl_msgs__msg__PointIndices * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pcl_msgs__msg__PointIndices__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pcl_msgs__msg__PointIndices__Sequence__init(pcl_msgs__msg__PointIndices__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pcl_msgs__msg__PointIndices * data = NULL;

  if (size) {
    data = (pcl_msgs__msg__PointIndices *)allocator.zero_allocate(size, sizeof(pcl_msgs__msg__PointIndices), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pcl_msgs__msg__PointIndices__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pcl_msgs__msg__PointIndices__fini(&data[i - 1]);
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
pcl_msgs__msg__PointIndices__Sequence__fini(pcl_msgs__msg__PointIndices__Sequence * array)
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
      pcl_msgs__msg__PointIndices__fini(&array->data[i]);
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

pcl_msgs__msg__PointIndices__Sequence *
pcl_msgs__msg__PointIndices__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pcl_msgs__msg__PointIndices__Sequence * array = (pcl_msgs__msg__PointIndices__Sequence *)allocator.allocate(sizeof(pcl_msgs__msg__PointIndices__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pcl_msgs__msg__PointIndices__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pcl_msgs__msg__PointIndices__Sequence__destroy(pcl_msgs__msg__PointIndices__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pcl_msgs__msg__PointIndices__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pcl_msgs__msg__PointIndices__Sequence__are_equal(const pcl_msgs__msg__PointIndices__Sequence * lhs, const pcl_msgs__msg__PointIndices__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pcl_msgs__msg__PointIndices__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pcl_msgs__msg__PointIndices__Sequence__copy(
  const pcl_msgs__msg__PointIndices__Sequence * input,
  pcl_msgs__msg__PointIndices__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pcl_msgs__msg__PointIndices);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pcl_msgs__msg__PointIndices * data =
      (pcl_msgs__msg__PointIndices *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pcl_msgs__msg__PointIndices__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pcl_msgs__msg__PointIndices__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pcl_msgs__msg__PointIndices__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
