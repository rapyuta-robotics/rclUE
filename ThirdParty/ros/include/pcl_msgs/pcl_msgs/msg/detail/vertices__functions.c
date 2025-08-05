// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pcl_msgs:msg/Vertices.idl
// generated code does not contain a copyright notice
#include "pcl_msgs/msg/detail/vertices__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vertices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pcl_msgs__msg__Vertices__init(pcl_msgs__msg__Vertices * msg)
{
  if (!msg) {
    return false;
  }
  // vertices
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->vertices, 0)) {
    pcl_msgs__msg__Vertices__fini(msg);
    return false;
  }
  return true;
}

void
pcl_msgs__msg__Vertices__fini(pcl_msgs__msg__Vertices * msg)
{
  if (!msg) {
    return;
  }
  // vertices
  rosidl_runtime_c__uint32__Sequence__fini(&msg->vertices);
}

bool
pcl_msgs__msg__Vertices__are_equal(const pcl_msgs__msg__Vertices * lhs, const pcl_msgs__msg__Vertices * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vertices
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->vertices), &(rhs->vertices)))
  {
    return false;
  }
  return true;
}

bool
pcl_msgs__msg__Vertices__copy(
  const pcl_msgs__msg__Vertices * input,
  pcl_msgs__msg__Vertices * output)
{
  if (!input || !output) {
    return false;
  }
  // vertices
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->vertices), &(output->vertices)))
  {
    return false;
  }
  return true;
}

pcl_msgs__msg__Vertices *
pcl_msgs__msg__Vertices__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pcl_msgs__msg__Vertices * msg = (pcl_msgs__msg__Vertices *)allocator.allocate(sizeof(pcl_msgs__msg__Vertices), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pcl_msgs__msg__Vertices));
  bool success = pcl_msgs__msg__Vertices__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pcl_msgs__msg__Vertices__destroy(pcl_msgs__msg__Vertices * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pcl_msgs__msg__Vertices__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pcl_msgs__msg__Vertices__Sequence__init(pcl_msgs__msg__Vertices__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pcl_msgs__msg__Vertices * data = NULL;

  if (size) {
    data = (pcl_msgs__msg__Vertices *)allocator.zero_allocate(size, sizeof(pcl_msgs__msg__Vertices), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pcl_msgs__msg__Vertices__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pcl_msgs__msg__Vertices__fini(&data[i - 1]);
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
pcl_msgs__msg__Vertices__Sequence__fini(pcl_msgs__msg__Vertices__Sequence * array)
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
      pcl_msgs__msg__Vertices__fini(&array->data[i]);
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

pcl_msgs__msg__Vertices__Sequence *
pcl_msgs__msg__Vertices__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pcl_msgs__msg__Vertices__Sequence * array = (pcl_msgs__msg__Vertices__Sequence *)allocator.allocate(sizeof(pcl_msgs__msg__Vertices__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pcl_msgs__msg__Vertices__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pcl_msgs__msg__Vertices__Sequence__destroy(pcl_msgs__msg__Vertices__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pcl_msgs__msg__Vertices__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pcl_msgs__msg__Vertices__Sequence__are_equal(const pcl_msgs__msg__Vertices__Sequence * lhs, const pcl_msgs__msg__Vertices__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pcl_msgs__msg__Vertices__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pcl_msgs__msg__Vertices__Sequence__copy(
  const pcl_msgs__msg__Vertices__Sequence * input,
  pcl_msgs__msg__Vertices__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pcl_msgs__msg__Vertices);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pcl_msgs__msg__Vertices * data =
      (pcl_msgs__msg__Vertices *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pcl_msgs__msg__Vertices__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pcl_msgs__msg__Vertices__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pcl_msgs__msg__Vertices__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
