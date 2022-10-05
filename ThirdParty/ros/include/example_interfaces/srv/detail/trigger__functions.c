// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from example_interfaces:srv/Trigger.idl
// generated code does not contain a copyright notice
#include "example_interfaces/srv/detail/trigger__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
example_interfaces__srv__Trigger_Request__init(example_interfaces__srv__Trigger_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
example_interfaces__srv__Trigger_Request__fini(example_interfaces__srv__Trigger_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
example_interfaces__srv__Trigger_Request__are_equal(const example_interfaces__srv__Trigger_Request * lhs, const example_interfaces__srv__Trigger_Request * rhs)
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
example_interfaces__srv__Trigger_Request__copy(
  const example_interfaces__srv__Trigger_Request * input,
  example_interfaces__srv__Trigger_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

example_interfaces__srv__Trigger_Request *
example_interfaces__srv__Trigger_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_interfaces__srv__Trigger_Request * msg = (example_interfaces__srv__Trigger_Request *)allocator.allocate(sizeof(example_interfaces__srv__Trigger_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__srv__Trigger_Request));
  bool success = example_interfaces__srv__Trigger_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_interfaces__srv__Trigger_Request__destroy(example_interfaces__srv__Trigger_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_interfaces__srv__Trigger_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_interfaces__srv__Trigger_Request__Sequence__init(example_interfaces__srv__Trigger_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_interfaces__srv__Trigger_Request * data = NULL;

  if (size) {
    data = (example_interfaces__srv__Trigger_Request *)allocator.zero_allocate(size, sizeof(example_interfaces__srv__Trigger_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__srv__Trigger_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__srv__Trigger_Request__fini(&data[i - 1]);
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
example_interfaces__srv__Trigger_Request__Sequence__fini(example_interfaces__srv__Trigger_Request__Sequence * array)
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
      example_interfaces__srv__Trigger_Request__fini(&array->data[i]);
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

example_interfaces__srv__Trigger_Request__Sequence *
example_interfaces__srv__Trigger_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_interfaces__srv__Trigger_Request__Sequence * array = (example_interfaces__srv__Trigger_Request__Sequence *)allocator.allocate(sizeof(example_interfaces__srv__Trigger_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__srv__Trigger_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_interfaces__srv__Trigger_Request__Sequence__destroy(example_interfaces__srv__Trigger_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_interfaces__srv__Trigger_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_interfaces__srv__Trigger_Request__Sequence__are_equal(const example_interfaces__srv__Trigger_Request__Sequence * lhs, const example_interfaces__srv__Trigger_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_interfaces__srv__Trigger_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_interfaces__srv__Trigger_Request__Sequence__copy(
  const example_interfaces__srv__Trigger_Request__Sequence * input,
  example_interfaces__srv__Trigger_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_interfaces__srv__Trigger_Request);
    example_interfaces__srv__Trigger_Request * data =
      (example_interfaces__srv__Trigger_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_interfaces__srv__Trigger_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_interfaces__srv__Trigger_Request__fini(&data[i]);
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
    if (!example_interfaces__srv__Trigger_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
example_interfaces__srv__Trigger_Response__init(example_interfaces__srv__Trigger_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    example_interfaces__srv__Trigger_Response__fini(msg);
    return false;
  }
  return true;
}

void
example_interfaces__srv__Trigger_Response__fini(example_interfaces__srv__Trigger_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
example_interfaces__srv__Trigger_Response__are_equal(const example_interfaces__srv__Trigger_Response * lhs, const example_interfaces__srv__Trigger_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
example_interfaces__srv__Trigger_Response__copy(
  const example_interfaces__srv__Trigger_Response * input,
  example_interfaces__srv__Trigger_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

example_interfaces__srv__Trigger_Response *
example_interfaces__srv__Trigger_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_interfaces__srv__Trigger_Response * msg = (example_interfaces__srv__Trigger_Response *)allocator.allocate(sizeof(example_interfaces__srv__Trigger_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__srv__Trigger_Response));
  bool success = example_interfaces__srv__Trigger_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_interfaces__srv__Trigger_Response__destroy(example_interfaces__srv__Trigger_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_interfaces__srv__Trigger_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_interfaces__srv__Trigger_Response__Sequence__init(example_interfaces__srv__Trigger_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_interfaces__srv__Trigger_Response * data = NULL;

  if (size) {
    data = (example_interfaces__srv__Trigger_Response *)allocator.zero_allocate(size, sizeof(example_interfaces__srv__Trigger_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__srv__Trigger_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__srv__Trigger_Response__fini(&data[i - 1]);
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
example_interfaces__srv__Trigger_Response__Sequence__fini(example_interfaces__srv__Trigger_Response__Sequence * array)
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
      example_interfaces__srv__Trigger_Response__fini(&array->data[i]);
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

example_interfaces__srv__Trigger_Response__Sequence *
example_interfaces__srv__Trigger_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_interfaces__srv__Trigger_Response__Sequence * array = (example_interfaces__srv__Trigger_Response__Sequence *)allocator.allocate(sizeof(example_interfaces__srv__Trigger_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__srv__Trigger_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_interfaces__srv__Trigger_Response__Sequence__destroy(example_interfaces__srv__Trigger_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_interfaces__srv__Trigger_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_interfaces__srv__Trigger_Response__Sequence__are_equal(const example_interfaces__srv__Trigger_Response__Sequence * lhs, const example_interfaces__srv__Trigger_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_interfaces__srv__Trigger_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_interfaces__srv__Trigger_Response__Sequence__copy(
  const example_interfaces__srv__Trigger_Response__Sequence * input,
  example_interfaces__srv__Trigger_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_interfaces__srv__Trigger_Response);
    example_interfaces__srv__Trigger_Response * data =
      (example_interfaces__srv__Trigger_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_interfaces__srv__Trigger_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_interfaces__srv__Trigger_Response__fini(&data[i]);
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
    if (!example_interfaces__srv__Trigger_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
