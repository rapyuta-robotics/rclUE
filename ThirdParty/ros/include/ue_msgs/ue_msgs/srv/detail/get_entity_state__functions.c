// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ue_msgs:srv/GetEntityState.idl
// generated code does not contain a copyright notice
#include "ue_msgs/srv/detail/get_entity_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
// Member `reference_frame`
#include "rosidl_runtime_c/string_functions.h"

bool
ue_msgs__srv__GetEntityState_Request__init(ue_msgs__srv__GetEntityState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ue_msgs__srv__GetEntityState_Request__fini(msg);
    return false;
  }
  // reference_frame
  if (!rosidl_runtime_c__String__init(&msg->reference_frame)) {
    ue_msgs__srv__GetEntityState_Request__fini(msg);
    return false;
  }
  return true;
}

void
ue_msgs__srv__GetEntityState_Request__fini(ue_msgs__srv__GetEntityState_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // reference_frame
  rosidl_runtime_c__String__fini(&msg->reference_frame);
}

bool
ue_msgs__srv__GetEntityState_Request__are_equal(const ue_msgs__srv__GetEntityState_Request * lhs, const ue_msgs__srv__GetEntityState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // reference_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reference_frame), &(rhs->reference_frame)))
  {
    return false;
  }
  return true;
}

bool
ue_msgs__srv__GetEntityState_Request__copy(
  const ue_msgs__srv__GetEntityState_Request * input,
  ue_msgs__srv__GetEntityState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // reference_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->reference_frame), &(output->reference_frame)))
  {
    return false;
  }
  return true;
}

ue_msgs__srv__GetEntityState_Request *
ue_msgs__srv__GetEntityState_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__GetEntityState_Request * msg = (ue_msgs__srv__GetEntityState_Request *)allocator.allocate(sizeof(ue_msgs__srv__GetEntityState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__srv__GetEntityState_Request));
  bool success = ue_msgs__srv__GetEntityState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ue_msgs__srv__GetEntityState_Request__destroy(ue_msgs__srv__GetEntityState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ue_msgs__srv__GetEntityState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ue_msgs__srv__GetEntityState_Request__Sequence__init(ue_msgs__srv__GetEntityState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__GetEntityState_Request * data = NULL;

  if (size) {
    data = (ue_msgs__srv__GetEntityState_Request *)allocator.zero_allocate(size, sizeof(ue_msgs__srv__GetEntityState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__srv__GetEntityState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__srv__GetEntityState_Request__fini(&data[i - 1]);
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
ue_msgs__srv__GetEntityState_Request__Sequence__fini(ue_msgs__srv__GetEntityState_Request__Sequence * array)
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
      ue_msgs__srv__GetEntityState_Request__fini(&array->data[i]);
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

ue_msgs__srv__GetEntityState_Request__Sequence *
ue_msgs__srv__GetEntityState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__GetEntityState_Request__Sequence * array = (ue_msgs__srv__GetEntityState_Request__Sequence *)allocator.allocate(sizeof(ue_msgs__srv__GetEntityState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__srv__GetEntityState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ue_msgs__srv__GetEntityState_Request__Sequence__destroy(ue_msgs__srv__GetEntityState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ue_msgs__srv__GetEntityState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ue_msgs__srv__GetEntityState_Request__Sequence__are_equal(const ue_msgs__srv__GetEntityState_Request__Sequence * lhs, const ue_msgs__srv__GetEntityState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ue_msgs__srv__GetEntityState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ue_msgs__srv__GetEntityState_Request__Sequence__copy(
  const ue_msgs__srv__GetEntityState_Request__Sequence * input,
  ue_msgs__srv__GetEntityState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ue_msgs__srv__GetEntityState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ue_msgs__srv__GetEntityState_Request * data =
      (ue_msgs__srv__GetEntityState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ue_msgs__srv__GetEntityState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ue_msgs__srv__GetEntityState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ue_msgs__srv__GetEntityState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
#include "ue_msgs/msg/detail/entity_state__functions.h"

bool
ue_msgs__srv__GetEntityState_Response__init(ue_msgs__srv__GetEntityState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!ue_msgs__msg__EntityState__init(&msg->state)) {
    ue_msgs__srv__GetEntityState_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
ue_msgs__srv__GetEntityState_Response__fini(ue_msgs__srv__GetEntityState_Response * msg)
{
  if (!msg) {
    return;
  }
  // state
  ue_msgs__msg__EntityState__fini(&msg->state);
  // success
}

bool
ue_msgs__srv__GetEntityState_Response__are_equal(const ue_msgs__srv__GetEntityState_Response * lhs, const ue_msgs__srv__GetEntityState_Response * rhs)
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
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
ue_msgs__srv__GetEntityState_Response__copy(
  const ue_msgs__srv__GetEntityState_Response * input,
  ue_msgs__srv__GetEntityState_Response * output)
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
  // success
  output->success = input->success;
  return true;
}

ue_msgs__srv__GetEntityState_Response *
ue_msgs__srv__GetEntityState_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__GetEntityState_Response * msg = (ue_msgs__srv__GetEntityState_Response *)allocator.allocate(sizeof(ue_msgs__srv__GetEntityState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__srv__GetEntityState_Response));
  bool success = ue_msgs__srv__GetEntityState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ue_msgs__srv__GetEntityState_Response__destroy(ue_msgs__srv__GetEntityState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ue_msgs__srv__GetEntityState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ue_msgs__srv__GetEntityState_Response__Sequence__init(ue_msgs__srv__GetEntityState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__GetEntityState_Response * data = NULL;

  if (size) {
    data = (ue_msgs__srv__GetEntityState_Response *)allocator.zero_allocate(size, sizeof(ue_msgs__srv__GetEntityState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__srv__GetEntityState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__srv__GetEntityState_Response__fini(&data[i - 1]);
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
ue_msgs__srv__GetEntityState_Response__Sequence__fini(ue_msgs__srv__GetEntityState_Response__Sequence * array)
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
      ue_msgs__srv__GetEntityState_Response__fini(&array->data[i]);
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

ue_msgs__srv__GetEntityState_Response__Sequence *
ue_msgs__srv__GetEntityState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__GetEntityState_Response__Sequence * array = (ue_msgs__srv__GetEntityState_Response__Sequence *)allocator.allocate(sizeof(ue_msgs__srv__GetEntityState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__srv__GetEntityState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ue_msgs__srv__GetEntityState_Response__Sequence__destroy(ue_msgs__srv__GetEntityState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ue_msgs__srv__GetEntityState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ue_msgs__srv__GetEntityState_Response__Sequence__are_equal(const ue_msgs__srv__GetEntityState_Response__Sequence * lhs, const ue_msgs__srv__GetEntityState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ue_msgs__srv__GetEntityState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ue_msgs__srv__GetEntityState_Response__Sequence__copy(
  const ue_msgs__srv__GetEntityState_Response__Sequence * input,
  ue_msgs__srv__GetEntityState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ue_msgs__srv__GetEntityState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ue_msgs__srv__GetEntityState_Response * data =
      (ue_msgs__srv__GetEntityState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ue_msgs__srv__GetEntityState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ue_msgs__srv__GetEntityState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ue_msgs__srv__GetEntityState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
