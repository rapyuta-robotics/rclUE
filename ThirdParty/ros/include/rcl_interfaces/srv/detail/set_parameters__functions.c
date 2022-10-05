// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rcl_interfaces:srv/SetParameters.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/srv/detail/set_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `parameters`
#include "rcl_interfaces/msg/detail/parameter__functions.h"

bool
rcl_interfaces__srv__SetParameters_Request__init(rcl_interfaces__srv__SetParameters_Request * msg)
{
  if (!msg) {
    return false;
  }
  // parameters
  if (!rcl_interfaces__msg__Parameter__Sequence__init(&msg->parameters, 0)) {
    rcl_interfaces__srv__SetParameters_Request__fini(msg);
    return false;
  }
  return true;
}

void
rcl_interfaces__srv__SetParameters_Request__fini(rcl_interfaces__srv__SetParameters_Request * msg)
{
  if (!msg) {
    return;
  }
  // parameters
  rcl_interfaces__msg__Parameter__Sequence__fini(&msg->parameters);
}

bool
rcl_interfaces__srv__SetParameters_Request__are_equal(const rcl_interfaces__srv__SetParameters_Request * lhs, const rcl_interfaces__srv__SetParameters_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // parameters
  if (!rcl_interfaces__msg__Parameter__Sequence__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  return true;
}

bool
rcl_interfaces__srv__SetParameters_Request__copy(
  const rcl_interfaces__srv__SetParameters_Request * input,
  rcl_interfaces__srv__SetParameters_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // parameters
  if (!rcl_interfaces__msg__Parameter__Sequence__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  return true;
}

rcl_interfaces__srv__SetParameters_Request *
rcl_interfaces__srv__SetParameters_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__srv__SetParameters_Request * msg = (rcl_interfaces__srv__SetParameters_Request *)allocator.allocate(sizeof(rcl_interfaces__srv__SetParameters_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__srv__SetParameters_Request));
  bool success = rcl_interfaces__srv__SetParameters_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__srv__SetParameters_Request__destroy(rcl_interfaces__srv__SetParameters_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rcl_interfaces__srv__SetParameters_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rcl_interfaces__srv__SetParameters_Request__Sequence__init(rcl_interfaces__srv__SetParameters_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__srv__SetParameters_Request * data = NULL;

  if (size) {
    data = (rcl_interfaces__srv__SetParameters_Request *)allocator.zero_allocate(size, sizeof(rcl_interfaces__srv__SetParameters_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__srv__SetParameters_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__srv__SetParameters_Request__fini(&data[i - 1]);
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
rcl_interfaces__srv__SetParameters_Request__Sequence__fini(rcl_interfaces__srv__SetParameters_Request__Sequence * array)
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
      rcl_interfaces__srv__SetParameters_Request__fini(&array->data[i]);
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

rcl_interfaces__srv__SetParameters_Request__Sequence *
rcl_interfaces__srv__SetParameters_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__srv__SetParameters_Request__Sequence * array = (rcl_interfaces__srv__SetParameters_Request__Sequence *)allocator.allocate(sizeof(rcl_interfaces__srv__SetParameters_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__srv__SetParameters_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__srv__SetParameters_Request__Sequence__destroy(rcl_interfaces__srv__SetParameters_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rcl_interfaces__srv__SetParameters_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rcl_interfaces__srv__SetParameters_Request__Sequence__are_equal(const rcl_interfaces__srv__SetParameters_Request__Sequence * lhs, const rcl_interfaces__srv__SetParameters_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rcl_interfaces__srv__SetParameters_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rcl_interfaces__srv__SetParameters_Request__Sequence__copy(
  const rcl_interfaces__srv__SetParameters_Request__Sequence * input,
  rcl_interfaces__srv__SetParameters_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rcl_interfaces__srv__SetParameters_Request);
    rcl_interfaces__srv__SetParameters_Request * data =
      (rcl_interfaces__srv__SetParameters_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rcl_interfaces__srv__SetParameters_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rcl_interfaces__srv__SetParameters_Request__fini(&data[i]);
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
    if (!rcl_interfaces__srv__SetParameters_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `results`
#include "rcl_interfaces/msg/detail/set_parameters_result__functions.h"

bool
rcl_interfaces__srv__SetParameters_Response__init(rcl_interfaces__srv__SetParameters_Response * msg)
{
  if (!msg) {
    return false;
  }
  // results
  if (!rcl_interfaces__msg__SetParametersResult__Sequence__init(&msg->results, 0)) {
    rcl_interfaces__srv__SetParameters_Response__fini(msg);
    return false;
  }
  return true;
}

void
rcl_interfaces__srv__SetParameters_Response__fini(rcl_interfaces__srv__SetParameters_Response * msg)
{
  if (!msg) {
    return;
  }
  // results
  rcl_interfaces__msg__SetParametersResult__Sequence__fini(&msg->results);
}

bool
rcl_interfaces__srv__SetParameters_Response__are_equal(const rcl_interfaces__srv__SetParameters_Response * lhs, const rcl_interfaces__srv__SetParameters_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // results
  if (!rcl_interfaces__msg__SetParametersResult__Sequence__are_equal(
      &(lhs->results), &(rhs->results)))
  {
    return false;
  }
  return true;
}

bool
rcl_interfaces__srv__SetParameters_Response__copy(
  const rcl_interfaces__srv__SetParameters_Response * input,
  rcl_interfaces__srv__SetParameters_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // results
  if (!rcl_interfaces__msg__SetParametersResult__Sequence__copy(
      &(input->results), &(output->results)))
  {
    return false;
  }
  return true;
}

rcl_interfaces__srv__SetParameters_Response *
rcl_interfaces__srv__SetParameters_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__srv__SetParameters_Response * msg = (rcl_interfaces__srv__SetParameters_Response *)allocator.allocate(sizeof(rcl_interfaces__srv__SetParameters_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__srv__SetParameters_Response));
  bool success = rcl_interfaces__srv__SetParameters_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__srv__SetParameters_Response__destroy(rcl_interfaces__srv__SetParameters_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rcl_interfaces__srv__SetParameters_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rcl_interfaces__srv__SetParameters_Response__Sequence__init(rcl_interfaces__srv__SetParameters_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__srv__SetParameters_Response * data = NULL;

  if (size) {
    data = (rcl_interfaces__srv__SetParameters_Response *)allocator.zero_allocate(size, sizeof(rcl_interfaces__srv__SetParameters_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__srv__SetParameters_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__srv__SetParameters_Response__fini(&data[i - 1]);
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
rcl_interfaces__srv__SetParameters_Response__Sequence__fini(rcl_interfaces__srv__SetParameters_Response__Sequence * array)
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
      rcl_interfaces__srv__SetParameters_Response__fini(&array->data[i]);
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

rcl_interfaces__srv__SetParameters_Response__Sequence *
rcl_interfaces__srv__SetParameters_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__srv__SetParameters_Response__Sequence * array = (rcl_interfaces__srv__SetParameters_Response__Sequence *)allocator.allocate(sizeof(rcl_interfaces__srv__SetParameters_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__srv__SetParameters_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__srv__SetParameters_Response__Sequence__destroy(rcl_interfaces__srv__SetParameters_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rcl_interfaces__srv__SetParameters_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rcl_interfaces__srv__SetParameters_Response__Sequence__are_equal(const rcl_interfaces__srv__SetParameters_Response__Sequence * lhs, const rcl_interfaces__srv__SetParameters_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rcl_interfaces__srv__SetParameters_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rcl_interfaces__srv__SetParameters_Response__Sequence__copy(
  const rcl_interfaces__srv__SetParameters_Response__Sequence * input,
  rcl_interfaces__srv__SetParameters_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rcl_interfaces__srv__SetParameters_Response);
    rcl_interfaces__srv__SetParameters_Response * data =
      (rcl_interfaces__srv__SetParameters_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rcl_interfaces__srv__SetParameters_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rcl_interfaces__srv__SetParameters_Response__fini(&data[i]);
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
    if (!rcl_interfaces__srv__SetParameters_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
