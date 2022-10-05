// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from std_srvs:srv/Empty.idl
// generated code does not contain a copyright notice
#include "std_srvs/srv/detail/empty__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
std_srvs__srv__Empty_Request__init(std_srvs__srv__Empty_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
std_srvs__srv__Empty_Request__fini(std_srvs__srv__Empty_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
std_srvs__srv__Empty_Request__are_equal(const std_srvs__srv__Empty_Request * lhs, const std_srvs__srv__Empty_Request * rhs)
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
std_srvs__srv__Empty_Request__copy(
  const std_srvs__srv__Empty_Request * input,
  std_srvs__srv__Empty_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

std_srvs__srv__Empty_Request *
std_srvs__srv__Empty_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  std_srvs__srv__Empty_Request * msg = (std_srvs__srv__Empty_Request *)allocator.allocate(sizeof(std_srvs__srv__Empty_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_srvs__srv__Empty_Request));
  bool success = std_srvs__srv__Empty_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
std_srvs__srv__Empty_Request__destroy(std_srvs__srv__Empty_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    std_srvs__srv__Empty_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
std_srvs__srv__Empty_Request__Sequence__init(std_srvs__srv__Empty_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  std_srvs__srv__Empty_Request * data = NULL;

  if (size) {
    data = (std_srvs__srv__Empty_Request *)allocator.zero_allocate(size, sizeof(std_srvs__srv__Empty_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_srvs__srv__Empty_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_srvs__srv__Empty_Request__fini(&data[i - 1]);
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
std_srvs__srv__Empty_Request__Sequence__fini(std_srvs__srv__Empty_Request__Sequence * array)
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
      std_srvs__srv__Empty_Request__fini(&array->data[i]);
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

std_srvs__srv__Empty_Request__Sequence *
std_srvs__srv__Empty_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  std_srvs__srv__Empty_Request__Sequence * array = (std_srvs__srv__Empty_Request__Sequence *)allocator.allocate(sizeof(std_srvs__srv__Empty_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = std_srvs__srv__Empty_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
std_srvs__srv__Empty_Request__Sequence__destroy(std_srvs__srv__Empty_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    std_srvs__srv__Empty_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
std_srvs__srv__Empty_Request__Sequence__are_equal(const std_srvs__srv__Empty_Request__Sequence * lhs, const std_srvs__srv__Empty_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!std_srvs__srv__Empty_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
std_srvs__srv__Empty_Request__Sequence__copy(
  const std_srvs__srv__Empty_Request__Sequence * input,
  std_srvs__srv__Empty_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(std_srvs__srv__Empty_Request);
    std_srvs__srv__Empty_Request * data =
      (std_srvs__srv__Empty_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!std_srvs__srv__Empty_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          std_srvs__srv__Empty_Request__fini(&data[i]);
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
    if (!std_srvs__srv__Empty_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
std_srvs__srv__Empty_Response__init(std_srvs__srv__Empty_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
std_srvs__srv__Empty_Response__fini(std_srvs__srv__Empty_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
std_srvs__srv__Empty_Response__are_equal(const std_srvs__srv__Empty_Response * lhs, const std_srvs__srv__Empty_Response * rhs)
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
std_srvs__srv__Empty_Response__copy(
  const std_srvs__srv__Empty_Response * input,
  std_srvs__srv__Empty_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

std_srvs__srv__Empty_Response *
std_srvs__srv__Empty_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  std_srvs__srv__Empty_Response * msg = (std_srvs__srv__Empty_Response *)allocator.allocate(sizeof(std_srvs__srv__Empty_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_srvs__srv__Empty_Response));
  bool success = std_srvs__srv__Empty_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
std_srvs__srv__Empty_Response__destroy(std_srvs__srv__Empty_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    std_srvs__srv__Empty_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
std_srvs__srv__Empty_Response__Sequence__init(std_srvs__srv__Empty_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  std_srvs__srv__Empty_Response * data = NULL;

  if (size) {
    data = (std_srvs__srv__Empty_Response *)allocator.zero_allocate(size, sizeof(std_srvs__srv__Empty_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_srvs__srv__Empty_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_srvs__srv__Empty_Response__fini(&data[i - 1]);
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
std_srvs__srv__Empty_Response__Sequence__fini(std_srvs__srv__Empty_Response__Sequence * array)
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
      std_srvs__srv__Empty_Response__fini(&array->data[i]);
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

std_srvs__srv__Empty_Response__Sequence *
std_srvs__srv__Empty_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  std_srvs__srv__Empty_Response__Sequence * array = (std_srvs__srv__Empty_Response__Sequence *)allocator.allocate(sizeof(std_srvs__srv__Empty_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = std_srvs__srv__Empty_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
std_srvs__srv__Empty_Response__Sequence__destroy(std_srvs__srv__Empty_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    std_srvs__srv__Empty_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
std_srvs__srv__Empty_Response__Sequence__are_equal(const std_srvs__srv__Empty_Response__Sequence * lhs, const std_srvs__srv__Empty_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!std_srvs__srv__Empty_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
std_srvs__srv__Empty_Response__Sequence__copy(
  const std_srvs__srv__Empty_Response__Sequence * input,
  std_srvs__srv__Empty_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(std_srvs__srv__Empty_Response);
    std_srvs__srv__Empty_Response * data =
      (std_srvs__srv__Empty_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!std_srvs__srv__Empty_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          std_srvs__srv__Empty_Response__fini(&data[i]);
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
    if (!std_srvs__srv__Empty_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
