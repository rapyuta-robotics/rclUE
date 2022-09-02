// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from diagnostic_msgs:msg/DiagnosticArray.idl
// generated code does not contain a copyright notice
#include "diagnostic_msgs/msg/detail/diagnostic_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `status`
#include "diagnostic_msgs/msg/detail/diagnostic_status__functions.h"

bool
diagnostic_msgs__msg__DiagnosticArray__init(diagnostic_msgs__msg__DiagnosticArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    diagnostic_msgs__msg__DiagnosticArray__fini(msg);
    return false;
  }
  // status
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->status, 0)) {
    diagnostic_msgs__msg__DiagnosticArray__fini(msg);
    return false;
  }
  return true;
}

void
diagnostic_msgs__msg__DiagnosticArray__fini(diagnostic_msgs__msg__DiagnosticArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->status);
}

bool
diagnostic_msgs__msg__DiagnosticArray__are_equal(const diagnostic_msgs__msg__DiagnosticArray * lhs, const diagnostic_msgs__msg__DiagnosticArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // status
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
diagnostic_msgs__msg__DiagnosticArray__copy(
  const diagnostic_msgs__msg__DiagnosticArray * input,
  diagnostic_msgs__msg__DiagnosticArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // status
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

diagnostic_msgs__msg__DiagnosticArray *
diagnostic_msgs__msg__DiagnosticArray__create()
{
  diagnostic_msgs__msg__DiagnosticArray * msg = (diagnostic_msgs__msg__DiagnosticArray *)malloc(sizeof(diagnostic_msgs__msg__DiagnosticArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(diagnostic_msgs__msg__DiagnosticArray));
  bool success = diagnostic_msgs__msg__DiagnosticArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
diagnostic_msgs__msg__DiagnosticArray__destroy(diagnostic_msgs__msg__DiagnosticArray * msg)
{
  if (msg) {
    diagnostic_msgs__msg__DiagnosticArray__fini(msg);
  }
  free(msg);
}


bool
diagnostic_msgs__msg__DiagnosticArray__Sequence__init(diagnostic_msgs__msg__DiagnosticArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  diagnostic_msgs__msg__DiagnosticArray * data = NULL;
  if (size) {
    data = (diagnostic_msgs__msg__DiagnosticArray *)calloc(size, sizeof(diagnostic_msgs__msg__DiagnosticArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = diagnostic_msgs__msg__DiagnosticArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        diagnostic_msgs__msg__DiagnosticArray__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
diagnostic_msgs__msg__DiagnosticArray__Sequence__fini(diagnostic_msgs__msg__DiagnosticArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      diagnostic_msgs__msg__DiagnosticArray__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

diagnostic_msgs__msg__DiagnosticArray__Sequence *
diagnostic_msgs__msg__DiagnosticArray__Sequence__create(size_t size)
{
  diagnostic_msgs__msg__DiagnosticArray__Sequence * array = (diagnostic_msgs__msg__DiagnosticArray__Sequence *)malloc(sizeof(diagnostic_msgs__msg__DiagnosticArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = diagnostic_msgs__msg__DiagnosticArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
diagnostic_msgs__msg__DiagnosticArray__Sequence__destroy(diagnostic_msgs__msg__DiagnosticArray__Sequence * array)
{
  if (array) {
    diagnostic_msgs__msg__DiagnosticArray__Sequence__fini(array);
  }
  free(array);
}

bool
diagnostic_msgs__msg__DiagnosticArray__Sequence__are_equal(const diagnostic_msgs__msg__DiagnosticArray__Sequence * lhs, const diagnostic_msgs__msg__DiagnosticArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!diagnostic_msgs__msg__DiagnosticArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
diagnostic_msgs__msg__DiagnosticArray__Sequence__copy(
  const diagnostic_msgs__msg__DiagnosticArray__Sequence * input,
  diagnostic_msgs__msg__DiagnosticArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(diagnostic_msgs__msg__DiagnosticArray);
    diagnostic_msgs__msg__DiagnosticArray * data =
      (diagnostic_msgs__msg__DiagnosticArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!diagnostic_msgs__msg__DiagnosticArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          diagnostic_msgs__msg__DiagnosticArray__fini(&data[i]);
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
    if (!diagnostic_msgs__msg__DiagnosticArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
