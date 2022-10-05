// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rcl_interfaces:srv/GetParameterTypes.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/srv/detail/get_parameter_types__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `names`
#include "rosidl_runtime_c/string_functions.h"

bool
rcl_interfaces__srv__GetParameterTypes_Request__init(rcl_interfaces__srv__GetParameterTypes_Request * msg)
{
  if (!msg) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->names, 0)) {
    rcl_interfaces__srv__GetParameterTypes_Request__fini(msg);
    return false;
  }
  return true;
}

void
rcl_interfaces__srv__GetParameterTypes_Request__fini(rcl_interfaces__srv__GetParameterTypes_Request * msg)
{
  if (!msg) {
    return;
  }
  // names
  rosidl_runtime_c__String__Sequence__fini(&msg->names);
}

bool
rcl_interfaces__srv__GetParameterTypes_Request__are_equal(const rcl_interfaces__srv__GetParameterTypes_Request * lhs, const rcl_interfaces__srv__GetParameterTypes_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->names), &(rhs->names)))
  {
    return false;
  }
  return true;
}

bool
rcl_interfaces__srv__GetParameterTypes_Request__copy(
  const rcl_interfaces__srv__GetParameterTypes_Request * input,
  rcl_interfaces__srv__GetParameterTypes_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->names), &(output->names)))
  {
    return false;
  }
  return true;
}

rcl_interfaces__srv__GetParameterTypes_Request *
rcl_interfaces__srv__GetParameterTypes_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__srv__GetParameterTypes_Request * msg = (rcl_interfaces__srv__GetParameterTypes_Request *)allocator.allocate(sizeof(rcl_interfaces__srv__GetParameterTypes_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__srv__GetParameterTypes_Request));
  bool success = rcl_interfaces__srv__GetParameterTypes_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__srv__GetParameterTypes_Request__destroy(rcl_interfaces__srv__GetParameterTypes_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rcl_interfaces__srv__GetParameterTypes_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rcl_interfaces__srv__GetParameterTypes_Request__Sequence__init(rcl_interfaces__srv__GetParameterTypes_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__srv__GetParameterTypes_Request * data = NULL;

  if (size) {
    data = (rcl_interfaces__srv__GetParameterTypes_Request *)allocator.zero_allocate(size, sizeof(rcl_interfaces__srv__GetParameterTypes_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__srv__GetParameterTypes_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__srv__GetParameterTypes_Request__fini(&data[i - 1]);
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
rcl_interfaces__srv__GetParameterTypes_Request__Sequence__fini(rcl_interfaces__srv__GetParameterTypes_Request__Sequence * array)
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
      rcl_interfaces__srv__GetParameterTypes_Request__fini(&array->data[i]);
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

rcl_interfaces__srv__GetParameterTypes_Request__Sequence *
rcl_interfaces__srv__GetParameterTypes_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__srv__GetParameterTypes_Request__Sequence * array = (rcl_interfaces__srv__GetParameterTypes_Request__Sequence *)allocator.allocate(sizeof(rcl_interfaces__srv__GetParameterTypes_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__srv__GetParameterTypes_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__srv__GetParameterTypes_Request__Sequence__destroy(rcl_interfaces__srv__GetParameterTypes_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rcl_interfaces__srv__GetParameterTypes_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rcl_interfaces__srv__GetParameterTypes_Request__Sequence__are_equal(const rcl_interfaces__srv__GetParameterTypes_Request__Sequence * lhs, const rcl_interfaces__srv__GetParameterTypes_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rcl_interfaces__srv__GetParameterTypes_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rcl_interfaces__srv__GetParameterTypes_Request__Sequence__copy(
  const rcl_interfaces__srv__GetParameterTypes_Request__Sequence * input,
  rcl_interfaces__srv__GetParameterTypes_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rcl_interfaces__srv__GetParameterTypes_Request);
    rcl_interfaces__srv__GetParameterTypes_Request * data =
      (rcl_interfaces__srv__GetParameterTypes_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rcl_interfaces__srv__GetParameterTypes_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rcl_interfaces__srv__GetParameterTypes_Request__fini(&data[i]);
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
    if (!rcl_interfaces__srv__GetParameterTypes_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `types`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rcl_interfaces__srv__GetParameterTypes_Response__init(rcl_interfaces__srv__GetParameterTypes_Response * msg)
{
  if (!msg) {
    return false;
  }
  // types
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->types, 0)) {
    rcl_interfaces__srv__GetParameterTypes_Response__fini(msg);
    return false;
  }
  return true;
}

void
rcl_interfaces__srv__GetParameterTypes_Response__fini(rcl_interfaces__srv__GetParameterTypes_Response * msg)
{
  if (!msg) {
    return;
  }
  // types
  rosidl_runtime_c__uint8__Sequence__fini(&msg->types);
}

bool
rcl_interfaces__srv__GetParameterTypes_Response__are_equal(const rcl_interfaces__srv__GetParameterTypes_Response * lhs, const rcl_interfaces__srv__GetParameterTypes_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // types
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->types), &(rhs->types)))
  {
    return false;
  }
  return true;
}

bool
rcl_interfaces__srv__GetParameterTypes_Response__copy(
  const rcl_interfaces__srv__GetParameterTypes_Response * input,
  rcl_interfaces__srv__GetParameterTypes_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // types
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->types), &(output->types)))
  {
    return false;
  }
  return true;
}

rcl_interfaces__srv__GetParameterTypes_Response *
rcl_interfaces__srv__GetParameterTypes_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__srv__GetParameterTypes_Response * msg = (rcl_interfaces__srv__GetParameterTypes_Response *)allocator.allocate(sizeof(rcl_interfaces__srv__GetParameterTypes_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__srv__GetParameterTypes_Response));
  bool success = rcl_interfaces__srv__GetParameterTypes_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__srv__GetParameterTypes_Response__destroy(rcl_interfaces__srv__GetParameterTypes_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rcl_interfaces__srv__GetParameterTypes_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rcl_interfaces__srv__GetParameterTypes_Response__Sequence__init(rcl_interfaces__srv__GetParameterTypes_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__srv__GetParameterTypes_Response * data = NULL;

  if (size) {
    data = (rcl_interfaces__srv__GetParameterTypes_Response *)allocator.zero_allocate(size, sizeof(rcl_interfaces__srv__GetParameterTypes_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__srv__GetParameterTypes_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__srv__GetParameterTypes_Response__fini(&data[i - 1]);
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
rcl_interfaces__srv__GetParameterTypes_Response__Sequence__fini(rcl_interfaces__srv__GetParameterTypes_Response__Sequence * array)
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
      rcl_interfaces__srv__GetParameterTypes_Response__fini(&array->data[i]);
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

rcl_interfaces__srv__GetParameterTypes_Response__Sequence *
rcl_interfaces__srv__GetParameterTypes_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rcl_interfaces__srv__GetParameterTypes_Response__Sequence * array = (rcl_interfaces__srv__GetParameterTypes_Response__Sequence *)allocator.allocate(sizeof(rcl_interfaces__srv__GetParameterTypes_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__srv__GetParameterTypes_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__srv__GetParameterTypes_Response__Sequence__destroy(rcl_interfaces__srv__GetParameterTypes_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rcl_interfaces__srv__GetParameterTypes_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rcl_interfaces__srv__GetParameterTypes_Response__Sequence__are_equal(const rcl_interfaces__srv__GetParameterTypes_Response__Sequence * lhs, const rcl_interfaces__srv__GetParameterTypes_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rcl_interfaces__srv__GetParameterTypes_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rcl_interfaces__srv__GetParameterTypes_Response__Sequence__copy(
  const rcl_interfaces__srv__GetParameterTypes_Response__Sequence * input,
  rcl_interfaces__srv__GetParameterTypes_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rcl_interfaces__srv__GetParameterTypes_Response);
    rcl_interfaces__srv__GetParameterTypes_Response * data =
      (rcl_interfaces__srv__GetParameterTypes_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rcl_interfaces__srv__GetParameterTypes_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rcl_interfaces__srv__GetParameterTypes_Response__fini(&data[i]);
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
    if (!rcl_interfaces__srv__GetParameterTypes_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
