// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from visualization_msgs:srv/GetInteractiveMarkers.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/srv/detail/get_interactive_markers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
visualization_msgs__srv__GetInteractiveMarkers_Request__init(visualization_msgs__srv__GetInteractiveMarkers_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
visualization_msgs__srv__GetInteractiveMarkers_Request__fini(visualization_msgs__srv__GetInteractiveMarkers_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
visualization_msgs__srv__GetInteractiveMarkers_Request__are_equal(const visualization_msgs__srv__GetInteractiveMarkers_Request * lhs, const visualization_msgs__srv__GetInteractiveMarkers_Request * rhs)
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
visualization_msgs__srv__GetInteractiveMarkers_Request__copy(
  const visualization_msgs__srv__GetInteractiveMarkers_Request * input,
  visualization_msgs__srv__GetInteractiveMarkers_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

visualization_msgs__srv__GetInteractiveMarkers_Request *
visualization_msgs__srv__GetInteractiveMarkers_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visualization_msgs__srv__GetInteractiveMarkers_Request * msg = (visualization_msgs__srv__GetInteractiveMarkers_Request *)allocator.allocate(sizeof(visualization_msgs__srv__GetInteractiveMarkers_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visualization_msgs__srv__GetInteractiveMarkers_Request));
  bool success = visualization_msgs__srv__GetInteractiveMarkers_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
visualization_msgs__srv__GetInteractiveMarkers_Request__destroy(visualization_msgs__srv__GetInteractiveMarkers_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    visualization_msgs__srv__GetInteractiveMarkers_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__init(visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visualization_msgs__srv__GetInteractiveMarkers_Request * data = NULL;

  if (size) {
    data = (visualization_msgs__srv__GetInteractiveMarkers_Request *)allocator.zero_allocate(size, sizeof(visualization_msgs__srv__GetInteractiveMarkers_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visualization_msgs__srv__GetInteractiveMarkers_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visualization_msgs__srv__GetInteractiveMarkers_Request__fini(&data[i - 1]);
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
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__fini(visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * array)
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
      visualization_msgs__srv__GetInteractiveMarkers_Request__fini(&array->data[i]);
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

visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence *
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * array = (visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence *)allocator.allocate(sizeof(visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__destroy(visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__are_equal(const visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * lhs, const visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!visualization_msgs__srv__GetInteractiveMarkers_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence__copy(
  const visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * input,
  visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(visualization_msgs__srv__GetInteractiveMarkers_Request);
    visualization_msgs__srv__GetInteractiveMarkers_Request * data =
      (visualization_msgs__srv__GetInteractiveMarkers_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!visualization_msgs__srv__GetInteractiveMarkers_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          visualization_msgs__srv__GetInteractiveMarkers_Request__fini(&data[i]);
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
    if (!visualization_msgs__srv__GetInteractiveMarkers_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `markers`
#include "visualization_msgs/msg/detail/interactive_marker__functions.h"

bool
visualization_msgs__srv__GetInteractiveMarkers_Response__init(visualization_msgs__srv__GetInteractiveMarkers_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sequence_number
  // markers
  if (!visualization_msgs__msg__InteractiveMarker__Sequence__init(&msg->markers, 0)) {
    visualization_msgs__srv__GetInteractiveMarkers_Response__fini(msg);
    return false;
  }
  return true;
}

void
visualization_msgs__srv__GetInteractiveMarkers_Response__fini(visualization_msgs__srv__GetInteractiveMarkers_Response * msg)
{
  if (!msg) {
    return;
  }
  // sequence_number
  // markers
  visualization_msgs__msg__InteractiveMarker__Sequence__fini(&msg->markers);
}

bool
visualization_msgs__srv__GetInteractiveMarkers_Response__are_equal(const visualization_msgs__srv__GetInteractiveMarkers_Response * lhs, const visualization_msgs__srv__GetInteractiveMarkers_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sequence_number
  if (lhs->sequence_number != rhs->sequence_number) {
    return false;
  }
  // markers
  if (!visualization_msgs__msg__InteractiveMarker__Sequence__are_equal(
      &(lhs->markers), &(rhs->markers)))
  {
    return false;
  }
  return true;
}

bool
visualization_msgs__srv__GetInteractiveMarkers_Response__copy(
  const visualization_msgs__srv__GetInteractiveMarkers_Response * input,
  visualization_msgs__srv__GetInteractiveMarkers_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sequence_number
  output->sequence_number = input->sequence_number;
  // markers
  if (!visualization_msgs__msg__InteractiveMarker__Sequence__copy(
      &(input->markers), &(output->markers)))
  {
    return false;
  }
  return true;
}

visualization_msgs__srv__GetInteractiveMarkers_Response *
visualization_msgs__srv__GetInteractiveMarkers_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visualization_msgs__srv__GetInteractiveMarkers_Response * msg = (visualization_msgs__srv__GetInteractiveMarkers_Response *)allocator.allocate(sizeof(visualization_msgs__srv__GetInteractiveMarkers_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visualization_msgs__srv__GetInteractiveMarkers_Response));
  bool success = visualization_msgs__srv__GetInteractiveMarkers_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
visualization_msgs__srv__GetInteractiveMarkers_Response__destroy(visualization_msgs__srv__GetInteractiveMarkers_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    visualization_msgs__srv__GetInteractiveMarkers_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__init(visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visualization_msgs__srv__GetInteractiveMarkers_Response * data = NULL;

  if (size) {
    data = (visualization_msgs__srv__GetInteractiveMarkers_Response *)allocator.zero_allocate(size, sizeof(visualization_msgs__srv__GetInteractiveMarkers_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visualization_msgs__srv__GetInteractiveMarkers_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visualization_msgs__srv__GetInteractiveMarkers_Response__fini(&data[i - 1]);
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
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__fini(visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * array)
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
      visualization_msgs__srv__GetInteractiveMarkers_Response__fini(&array->data[i]);
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

visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence *
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * array = (visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence *)allocator.allocate(sizeof(visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__destroy(visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__are_equal(const visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * lhs, const visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!visualization_msgs__srv__GetInteractiveMarkers_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence__copy(
  const visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * input,
  visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(visualization_msgs__srv__GetInteractiveMarkers_Response);
    visualization_msgs__srv__GetInteractiveMarkers_Response * data =
      (visualization_msgs__srv__GetInteractiveMarkers_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!visualization_msgs__srv__GetInteractiveMarkers_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          visualization_msgs__srv__GetInteractiveMarkers_Response__fini(&data[i]);
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
    if (!visualization_msgs__srv__GetInteractiveMarkers_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
