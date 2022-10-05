// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ue_msgs:srv/SetEntityState.idl
// generated code does not contain a copyright notice
#include "ue_msgs/srv/detail/set_entity_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `state`
#include "ue_msgs/msg/detail/entity_state__functions.h"

bool
ue_msgs__srv__SetEntityState_Request__init(ue_msgs__srv__SetEntityState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!ue_msgs__msg__EntityState__init(&msg->state)) {
    ue_msgs__srv__SetEntityState_Request__fini(msg);
    return false;
  }
  return true;
}

void
ue_msgs__srv__SetEntityState_Request__fini(ue_msgs__srv__SetEntityState_Request * msg)
{
  if (!msg) {
    return;
  }
  // state
  ue_msgs__msg__EntityState__fini(&msg->state);
}

bool
ue_msgs__srv__SetEntityState_Request__are_equal(const ue_msgs__srv__SetEntityState_Request * lhs, const ue_msgs__srv__SetEntityState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!ue_msgs__msg__EntityState__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
ue_msgs__srv__SetEntityState_Request__copy(
  const ue_msgs__srv__SetEntityState_Request * input,
  ue_msgs__srv__SetEntityState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!ue_msgs__msg__EntityState__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

ue_msgs__srv__SetEntityState_Request *
ue_msgs__srv__SetEntityState_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SetEntityState_Request * msg = (ue_msgs__srv__SetEntityState_Request *)allocator.allocate(sizeof(ue_msgs__srv__SetEntityState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__srv__SetEntityState_Request));
  bool success = ue_msgs__srv__SetEntityState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ue_msgs__srv__SetEntityState_Request__destroy(ue_msgs__srv__SetEntityState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ue_msgs__srv__SetEntityState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ue_msgs__srv__SetEntityState_Request__Sequence__init(ue_msgs__srv__SetEntityState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SetEntityState_Request * data = NULL;

  if (size) {
    data = (ue_msgs__srv__SetEntityState_Request *)allocator.zero_allocate(size, sizeof(ue_msgs__srv__SetEntityState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__srv__SetEntityState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__srv__SetEntityState_Request__fini(&data[i - 1]);
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
ue_msgs__srv__SetEntityState_Request__Sequence__fini(ue_msgs__srv__SetEntityState_Request__Sequence * array)
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
      ue_msgs__srv__SetEntityState_Request__fini(&array->data[i]);
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

ue_msgs__srv__SetEntityState_Request__Sequence *
ue_msgs__srv__SetEntityState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SetEntityState_Request__Sequence * array = (ue_msgs__srv__SetEntityState_Request__Sequence *)allocator.allocate(sizeof(ue_msgs__srv__SetEntityState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__srv__SetEntityState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ue_msgs__srv__SetEntityState_Request__Sequence__destroy(ue_msgs__srv__SetEntityState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ue_msgs__srv__SetEntityState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ue_msgs__srv__SetEntityState_Request__Sequence__are_equal(const ue_msgs__srv__SetEntityState_Request__Sequence * lhs, const ue_msgs__srv__SetEntityState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ue_msgs__srv__SetEntityState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ue_msgs__srv__SetEntityState_Request__Sequence__copy(
  const ue_msgs__srv__SetEntityState_Request__Sequence * input,
  ue_msgs__srv__SetEntityState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ue_msgs__srv__SetEntityState_Request);
    ue_msgs__srv__SetEntityState_Request * data =
      (ue_msgs__srv__SetEntityState_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ue_msgs__srv__SetEntityState_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ue_msgs__srv__SetEntityState_Request__fini(&data[i]);
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
    if (!ue_msgs__srv__SetEntityState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ue_msgs__srv__SetEntityState_Response__init(ue_msgs__srv__SetEntityState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
ue_msgs__srv__SetEntityState_Response__fini(ue_msgs__srv__SetEntityState_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
ue_msgs__srv__SetEntityState_Response__are_equal(const ue_msgs__srv__SetEntityState_Response * lhs, const ue_msgs__srv__SetEntityState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
ue_msgs__srv__SetEntityState_Response__copy(
  const ue_msgs__srv__SetEntityState_Response * input,
  ue_msgs__srv__SetEntityState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

ue_msgs__srv__SetEntityState_Response *
ue_msgs__srv__SetEntityState_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SetEntityState_Response * msg = (ue_msgs__srv__SetEntityState_Response *)allocator.allocate(sizeof(ue_msgs__srv__SetEntityState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__srv__SetEntityState_Response));
  bool success = ue_msgs__srv__SetEntityState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ue_msgs__srv__SetEntityState_Response__destroy(ue_msgs__srv__SetEntityState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ue_msgs__srv__SetEntityState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ue_msgs__srv__SetEntityState_Response__Sequence__init(ue_msgs__srv__SetEntityState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SetEntityState_Response * data = NULL;

  if (size) {
    data = (ue_msgs__srv__SetEntityState_Response *)allocator.zero_allocate(size, sizeof(ue_msgs__srv__SetEntityState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__srv__SetEntityState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__srv__SetEntityState_Response__fini(&data[i - 1]);
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
ue_msgs__srv__SetEntityState_Response__Sequence__fini(ue_msgs__srv__SetEntityState_Response__Sequence * array)
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
      ue_msgs__srv__SetEntityState_Response__fini(&array->data[i]);
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

ue_msgs__srv__SetEntityState_Response__Sequence *
ue_msgs__srv__SetEntityState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SetEntityState_Response__Sequence * array = (ue_msgs__srv__SetEntityState_Response__Sequence *)allocator.allocate(sizeof(ue_msgs__srv__SetEntityState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__srv__SetEntityState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ue_msgs__srv__SetEntityState_Response__Sequence__destroy(ue_msgs__srv__SetEntityState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ue_msgs__srv__SetEntityState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ue_msgs__srv__SetEntityState_Response__Sequence__are_equal(const ue_msgs__srv__SetEntityState_Response__Sequence * lhs, const ue_msgs__srv__SetEntityState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ue_msgs__srv__SetEntityState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ue_msgs__srv__SetEntityState_Response__Sequence__copy(
  const ue_msgs__srv__SetEntityState_Response__Sequence * input,
  ue_msgs__srv__SetEntityState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ue_msgs__srv__SetEntityState_Response);
    ue_msgs__srv__SetEntityState_Response * data =
      (ue_msgs__srv__SetEntityState_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ue_msgs__srv__SetEntityState_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ue_msgs__srv__SetEntityState_Response__fini(&data[i]);
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
    if (!ue_msgs__srv__SetEntityState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
