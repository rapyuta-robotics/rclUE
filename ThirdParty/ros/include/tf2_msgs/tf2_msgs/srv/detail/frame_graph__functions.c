// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tf2_msgs:srv/FrameGraph.idl
// generated code does not contain a copyright notice
#include "tf2_msgs/srv/detail/frame_graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
tf2_msgs__srv__FrameGraph_Request__init(tf2_msgs__srv__FrameGraph_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
tf2_msgs__srv__FrameGraph_Request__fini(tf2_msgs__srv__FrameGraph_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
tf2_msgs__srv__FrameGraph_Request__are_equal(const tf2_msgs__srv__FrameGraph_Request * lhs, const tf2_msgs__srv__FrameGraph_Request * rhs)
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
tf2_msgs__srv__FrameGraph_Request__copy(
  const tf2_msgs__srv__FrameGraph_Request * input,
  tf2_msgs__srv__FrameGraph_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

tf2_msgs__srv__FrameGraph_Request *
tf2_msgs__srv__FrameGraph_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__srv__FrameGraph_Request * msg = (tf2_msgs__srv__FrameGraph_Request *)allocator.allocate(sizeof(tf2_msgs__srv__FrameGraph_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__srv__FrameGraph_Request));
  bool success = tf2_msgs__srv__FrameGraph_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__srv__FrameGraph_Request__destroy(tf2_msgs__srv__FrameGraph_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_msgs__srv__FrameGraph_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_msgs__srv__FrameGraph_Request__Sequence__init(tf2_msgs__srv__FrameGraph_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__srv__FrameGraph_Request * data = NULL;

  if (size) {
    data = (tf2_msgs__srv__FrameGraph_Request *)allocator.zero_allocate(size, sizeof(tf2_msgs__srv__FrameGraph_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__srv__FrameGraph_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__srv__FrameGraph_Request__fini(&data[i - 1]);
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
tf2_msgs__srv__FrameGraph_Request__Sequence__fini(tf2_msgs__srv__FrameGraph_Request__Sequence * array)
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
      tf2_msgs__srv__FrameGraph_Request__fini(&array->data[i]);
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

tf2_msgs__srv__FrameGraph_Request__Sequence *
tf2_msgs__srv__FrameGraph_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__srv__FrameGraph_Request__Sequence * array = (tf2_msgs__srv__FrameGraph_Request__Sequence *)allocator.allocate(sizeof(tf2_msgs__srv__FrameGraph_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__srv__FrameGraph_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_msgs__srv__FrameGraph_Request__Sequence__destroy(tf2_msgs__srv__FrameGraph_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_msgs__srv__FrameGraph_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_msgs__srv__FrameGraph_Request__Sequence__are_equal(const tf2_msgs__srv__FrameGraph_Request__Sequence * lhs, const tf2_msgs__srv__FrameGraph_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_msgs__srv__FrameGraph_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_msgs__srv__FrameGraph_Request__Sequence__copy(
  const tf2_msgs__srv__FrameGraph_Request__Sequence * input,
  tf2_msgs__srv__FrameGraph_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_msgs__srv__FrameGraph_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tf2_msgs__srv__FrameGraph_Request * data =
      (tf2_msgs__srv__FrameGraph_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_msgs__srv__FrameGraph_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tf2_msgs__srv__FrameGraph_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tf2_msgs__srv__FrameGraph_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `frame_yaml`
#include "rosidl_runtime_c/string_functions.h"

bool
tf2_msgs__srv__FrameGraph_Response__init(tf2_msgs__srv__FrameGraph_Response * msg)
{
  if (!msg) {
    return false;
  }
  // frame_yaml
  if (!rosidl_runtime_c__String__init(&msg->frame_yaml)) {
    tf2_msgs__srv__FrameGraph_Response__fini(msg);
    return false;
  }
  return true;
}

void
tf2_msgs__srv__FrameGraph_Response__fini(tf2_msgs__srv__FrameGraph_Response * msg)
{
  if (!msg) {
    return;
  }
  // frame_yaml
  rosidl_runtime_c__String__fini(&msg->frame_yaml);
}

bool
tf2_msgs__srv__FrameGraph_Response__are_equal(const tf2_msgs__srv__FrameGraph_Response * lhs, const tf2_msgs__srv__FrameGraph_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame_yaml
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_yaml), &(rhs->frame_yaml)))
  {
    return false;
  }
  return true;
}

bool
tf2_msgs__srv__FrameGraph_Response__copy(
  const tf2_msgs__srv__FrameGraph_Response * input,
  tf2_msgs__srv__FrameGraph_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // frame_yaml
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_yaml), &(output->frame_yaml)))
  {
    return false;
  }
  return true;
}

tf2_msgs__srv__FrameGraph_Response *
tf2_msgs__srv__FrameGraph_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__srv__FrameGraph_Response * msg = (tf2_msgs__srv__FrameGraph_Response *)allocator.allocate(sizeof(tf2_msgs__srv__FrameGraph_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__srv__FrameGraph_Response));
  bool success = tf2_msgs__srv__FrameGraph_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__srv__FrameGraph_Response__destroy(tf2_msgs__srv__FrameGraph_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_msgs__srv__FrameGraph_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_msgs__srv__FrameGraph_Response__Sequence__init(tf2_msgs__srv__FrameGraph_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__srv__FrameGraph_Response * data = NULL;

  if (size) {
    data = (tf2_msgs__srv__FrameGraph_Response *)allocator.zero_allocate(size, sizeof(tf2_msgs__srv__FrameGraph_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__srv__FrameGraph_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__srv__FrameGraph_Response__fini(&data[i - 1]);
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
tf2_msgs__srv__FrameGraph_Response__Sequence__fini(tf2_msgs__srv__FrameGraph_Response__Sequence * array)
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
      tf2_msgs__srv__FrameGraph_Response__fini(&array->data[i]);
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

tf2_msgs__srv__FrameGraph_Response__Sequence *
tf2_msgs__srv__FrameGraph_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__srv__FrameGraph_Response__Sequence * array = (tf2_msgs__srv__FrameGraph_Response__Sequence *)allocator.allocate(sizeof(tf2_msgs__srv__FrameGraph_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__srv__FrameGraph_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_msgs__srv__FrameGraph_Response__Sequence__destroy(tf2_msgs__srv__FrameGraph_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_msgs__srv__FrameGraph_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_msgs__srv__FrameGraph_Response__Sequence__are_equal(const tf2_msgs__srv__FrameGraph_Response__Sequence * lhs, const tf2_msgs__srv__FrameGraph_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_msgs__srv__FrameGraph_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_msgs__srv__FrameGraph_Response__Sequence__copy(
  const tf2_msgs__srv__FrameGraph_Response__Sequence * input,
  tf2_msgs__srv__FrameGraph_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_msgs__srv__FrameGraph_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tf2_msgs__srv__FrameGraph_Response * data =
      (tf2_msgs__srv__FrameGraph_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_msgs__srv__FrameGraph_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tf2_msgs__srv__FrameGraph_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tf2_msgs__srv__FrameGraph_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
