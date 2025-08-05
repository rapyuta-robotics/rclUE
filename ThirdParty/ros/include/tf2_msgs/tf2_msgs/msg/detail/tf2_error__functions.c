// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tf2_msgs:msg/TF2Error.idl
// generated code does not contain a copyright notice
#include "tf2_msgs/msg/detail/tf2_error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `error_string`
#include "rosidl_runtime_c/string_functions.h"

bool
tf2_msgs__msg__TF2Error__init(tf2_msgs__msg__TF2Error * msg)
{
  if (!msg) {
    return false;
  }
  // error
  // error_string
  if (!rosidl_runtime_c__String__init(&msg->error_string)) {
    tf2_msgs__msg__TF2Error__fini(msg);
    return false;
  }
  return true;
}

void
tf2_msgs__msg__TF2Error__fini(tf2_msgs__msg__TF2Error * msg)
{
  if (!msg) {
    return;
  }
  // error
  // error_string
  rosidl_runtime_c__String__fini(&msg->error_string);
}

bool
tf2_msgs__msg__TF2Error__are_equal(const tf2_msgs__msg__TF2Error * lhs, const tf2_msgs__msg__TF2Error * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // error_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_string), &(rhs->error_string)))
  {
    return false;
  }
  return true;
}

bool
tf2_msgs__msg__TF2Error__copy(
  const tf2_msgs__msg__TF2Error * input,
  tf2_msgs__msg__TF2Error * output)
{
  if (!input || !output) {
    return false;
  }
  // error
  output->error = input->error;
  // error_string
  if (!rosidl_runtime_c__String__copy(
      &(input->error_string), &(output->error_string)))
  {
    return false;
  }
  return true;
}

tf2_msgs__msg__TF2Error *
tf2_msgs__msg__TF2Error__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__msg__TF2Error * msg = (tf2_msgs__msg__TF2Error *)allocator.allocate(sizeof(tf2_msgs__msg__TF2Error), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__msg__TF2Error));
  bool success = tf2_msgs__msg__TF2Error__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__msg__TF2Error__destroy(tf2_msgs__msg__TF2Error * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_msgs__msg__TF2Error__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_msgs__msg__TF2Error__Sequence__init(tf2_msgs__msg__TF2Error__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__msg__TF2Error * data = NULL;

  if (size) {
    data = (tf2_msgs__msg__TF2Error *)allocator.zero_allocate(size, sizeof(tf2_msgs__msg__TF2Error), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__msg__TF2Error__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__msg__TF2Error__fini(&data[i - 1]);
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
tf2_msgs__msg__TF2Error__Sequence__fini(tf2_msgs__msg__TF2Error__Sequence * array)
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
      tf2_msgs__msg__TF2Error__fini(&array->data[i]);
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

tf2_msgs__msg__TF2Error__Sequence *
tf2_msgs__msg__TF2Error__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__msg__TF2Error__Sequence * array = (tf2_msgs__msg__TF2Error__Sequence *)allocator.allocate(sizeof(tf2_msgs__msg__TF2Error__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__msg__TF2Error__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_msgs__msg__TF2Error__Sequence__destroy(tf2_msgs__msg__TF2Error__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_msgs__msg__TF2Error__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_msgs__msg__TF2Error__Sequence__are_equal(const tf2_msgs__msg__TF2Error__Sequence * lhs, const tf2_msgs__msg__TF2Error__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_msgs__msg__TF2Error__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_msgs__msg__TF2Error__Sequence__copy(
  const tf2_msgs__msg__TF2Error__Sequence * input,
  tf2_msgs__msg__TF2Error__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_msgs__msg__TF2Error);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tf2_msgs__msg__TF2Error * data =
      (tf2_msgs__msg__TF2Error *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_msgs__msg__TF2Error__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tf2_msgs__msg__TF2Error__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tf2_msgs__msg__TF2Error__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
