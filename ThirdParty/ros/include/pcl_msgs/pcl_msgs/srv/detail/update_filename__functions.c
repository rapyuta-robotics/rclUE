// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pcl_msgs:srv/UpdateFilename.idl
// generated code does not contain a copyright notice
#include "pcl_msgs/srv/detail/update_filename__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `filename`
#include "rosidl_runtime_c/string_functions.h"

bool
pcl_msgs__srv__UpdateFilename_Request__init(pcl_msgs__srv__UpdateFilename_Request * msg)
{
  if (!msg) {
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__init(&msg->filename)) {
    pcl_msgs__srv__UpdateFilename_Request__fini(msg);
    return false;
  }
  return true;
}

void
pcl_msgs__srv__UpdateFilename_Request__fini(pcl_msgs__srv__UpdateFilename_Request * msg)
{
  if (!msg) {
    return;
  }
  // filename
  rosidl_runtime_c__String__fini(&msg->filename);
}

bool
pcl_msgs__srv__UpdateFilename_Request__are_equal(const pcl_msgs__srv__UpdateFilename_Request * lhs, const pcl_msgs__srv__UpdateFilename_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->filename), &(rhs->filename)))
  {
    return false;
  }
  return true;
}

bool
pcl_msgs__srv__UpdateFilename_Request__copy(
  const pcl_msgs__srv__UpdateFilename_Request * input,
  pcl_msgs__srv__UpdateFilename_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__copy(
      &(input->filename), &(output->filename)))
  {
    return false;
  }
  return true;
}

pcl_msgs__srv__UpdateFilename_Request *
pcl_msgs__srv__UpdateFilename_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pcl_msgs__srv__UpdateFilename_Request * msg = (pcl_msgs__srv__UpdateFilename_Request *)allocator.allocate(sizeof(pcl_msgs__srv__UpdateFilename_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pcl_msgs__srv__UpdateFilename_Request));
  bool success = pcl_msgs__srv__UpdateFilename_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pcl_msgs__srv__UpdateFilename_Request__destroy(pcl_msgs__srv__UpdateFilename_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pcl_msgs__srv__UpdateFilename_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pcl_msgs__srv__UpdateFilename_Request__Sequence__init(pcl_msgs__srv__UpdateFilename_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pcl_msgs__srv__UpdateFilename_Request * data = NULL;

  if (size) {
    data = (pcl_msgs__srv__UpdateFilename_Request *)allocator.zero_allocate(size, sizeof(pcl_msgs__srv__UpdateFilename_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pcl_msgs__srv__UpdateFilename_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pcl_msgs__srv__UpdateFilename_Request__fini(&data[i - 1]);
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
pcl_msgs__srv__UpdateFilename_Request__Sequence__fini(pcl_msgs__srv__UpdateFilename_Request__Sequence * array)
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
      pcl_msgs__srv__UpdateFilename_Request__fini(&array->data[i]);
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

pcl_msgs__srv__UpdateFilename_Request__Sequence *
pcl_msgs__srv__UpdateFilename_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pcl_msgs__srv__UpdateFilename_Request__Sequence * array = (pcl_msgs__srv__UpdateFilename_Request__Sequence *)allocator.allocate(sizeof(pcl_msgs__srv__UpdateFilename_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pcl_msgs__srv__UpdateFilename_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pcl_msgs__srv__UpdateFilename_Request__Sequence__destroy(pcl_msgs__srv__UpdateFilename_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pcl_msgs__srv__UpdateFilename_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pcl_msgs__srv__UpdateFilename_Request__Sequence__are_equal(const pcl_msgs__srv__UpdateFilename_Request__Sequence * lhs, const pcl_msgs__srv__UpdateFilename_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pcl_msgs__srv__UpdateFilename_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pcl_msgs__srv__UpdateFilename_Request__Sequence__copy(
  const pcl_msgs__srv__UpdateFilename_Request__Sequence * input,
  pcl_msgs__srv__UpdateFilename_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pcl_msgs__srv__UpdateFilename_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pcl_msgs__srv__UpdateFilename_Request * data =
      (pcl_msgs__srv__UpdateFilename_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pcl_msgs__srv__UpdateFilename_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pcl_msgs__srv__UpdateFilename_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pcl_msgs__srv__UpdateFilename_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
pcl_msgs__srv__UpdateFilename_Response__init(pcl_msgs__srv__UpdateFilename_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
pcl_msgs__srv__UpdateFilename_Response__fini(pcl_msgs__srv__UpdateFilename_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
pcl_msgs__srv__UpdateFilename_Response__are_equal(const pcl_msgs__srv__UpdateFilename_Response * lhs, const pcl_msgs__srv__UpdateFilename_Response * rhs)
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
pcl_msgs__srv__UpdateFilename_Response__copy(
  const pcl_msgs__srv__UpdateFilename_Response * input,
  pcl_msgs__srv__UpdateFilename_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

pcl_msgs__srv__UpdateFilename_Response *
pcl_msgs__srv__UpdateFilename_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pcl_msgs__srv__UpdateFilename_Response * msg = (pcl_msgs__srv__UpdateFilename_Response *)allocator.allocate(sizeof(pcl_msgs__srv__UpdateFilename_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pcl_msgs__srv__UpdateFilename_Response));
  bool success = pcl_msgs__srv__UpdateFilename_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pcl_msgs__srv__UpdateFilename_Response__destroy(pcl_msgs__srv__UpdateFilename_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pcl_msgs__srv__UpdateFilename_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pcl_msgs__srv__UpdateFilename_Response__Sequence__init(pcl_msgs__srv__UpdateFilename_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pcl_msgs__srv__UpdateFilename_Response * data = NULL;

  if (size) {
    data = (pcl_msgs__srv__UpdateFilename_Response *)allocator.zero_allocate(size, sizeof(pcl_msgs__srv__UpdateFilename_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pcl_msgs__srv__UpdateFilename_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pcl_msgs__srv__UpdateFilename_Response__fini(&data[i - 1]);
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
pcl_msgs__srv__UpdateFilename_Response__Sequence__fini(pcl_msgs__srv__UpdateFilename_Response__Sequence * array)
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
      pcl_msgs__srv__UpdateFilename_Response__fini(&array->data[i]);
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

pcl_msgs__srv__UpdateFilename_Response__Sequence *
pcl_msgs__srv__UpdateFilename_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pcl_msgs__srv__UpdateFilename_Response__Sequence * array = (pcl_msgs__srv__UpdateFilename_Response__Sequence *)allocator.allocate(sizeof(pcl_msgs__srv__UpdateFilename_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pcl_msgs__srv__UpdateFilename_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pcl_msgs__srv__UpdateFilename_Response__Sequence__destroy(pcl_msgs__srv__UpdateFilename_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pcl_msgs__srv__UpdateFilename_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pcl_msgs__srv__UpdateFilename_Response__Sequence__are_equal(const pcl_msgs__srv__UpdateFilename_Response__Sequence * lhs, const pcl_msgs__srv__UpdateFilename_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pcl_msgs__srv__UpdateFilename_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pcl_msgs__srv__UpdateFilename_Response__Sequence__copy(
  const pcl_msgs__srv__UpdateFilename_Response__Sequence * input,
  pcl_msgs__srv__UpdateFilename_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pcl_msgs__srv__UpdateFilename_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pcl_msgs__srv__UpdateFilename_Response * data =
      (pcl_msgs__srv__UpdateFilename_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pcl_msgs__srv__UpdateFilename_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pcl_msgs__srv__UpdateFilename_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pcl_msgs__srv__UpdateFilename_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
