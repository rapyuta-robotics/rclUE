// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from example_interfaces:msg/WString.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/w_string__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/u16string_functions.h"

bool
example_interfaces__msg__WString__init(example_interfaces__msg__WString * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__U16String__init(&msg->data)) {
    example_interfaces__msg__WString__fini(msg);
    return false;
  }
  return true;
}

void
example_interfaces__msg__WString__fini(example_interfaces__msg__WString * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__U16String__fini(&msg->data);
}

bool
example_interfaces__msg__WString__are_equal(const example_interfaces__msg__WString * lhs, const example_interfaces__msg__WString * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__U16String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
example_interfaces__msg__WString__copy(
  const example_interfaces__msg__WString * input,
  example_interfaces__msg__WString * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__U16String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

example_interfaces__msg__WString *
example_interfaces__msg__WString__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_interfaces__msg__WString * msg = (example_interfaces__msg__WString *)allocator.allocate(sizeof(example_interfaces__msg__WString), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__msg__WString));
  bool success = example_interfaces__msg__WString__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_interfaces__msg__WString__destroy(example_interfaces__msg__WString * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_interfaces__msg__WString__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_interfaces__msg__WString__Sequence__init(example_interfaces__msg__WString__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_interfaces__msg__WString * data = NULL;

  if (size) {
    data = (example_interfaces__msg__WString *)allocator.zero_allocate(size, sizeof(example_interfaces__msg__WString), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__msg__WString__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__msg__WString__fini(&data[i - 1]);
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
example_interfaces__msg__WString__Sequence__fini(example_interfaces__msg__WString__Sequence * array)
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
      example_interfaces__msg__WString__fini(&array->data[i]);
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

example_interfaces__msg__WString__Sequence *
example_interfaces__msg__WString__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_interfaces__msg__WString__Sequence * array = (example_interfaces__msg__WString__Sequence *)allocator.allocate(sizeof(example_interfaces__msg__WString__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__msg__WString__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_interfaces__msg__WString__Sequence__destroy(example_interfaces__msg__WString__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_interfaces__msg__WString__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_interfaces__msg__WString__Sequence__are_equal(const example_interfaces__msg__WString__Sequence * lhs, const example_interfaces__msg__WString__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_interfaces__msg__WString__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_interfaces__msg__WString__Sequence__copy(
  const example_interfaces__msg__WString__Sequence * input,
  example_interfaces__msg__WString__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_interfaces__msg__WString);
    example_interfaces__msg__WString * data =
      (example_interfaces__msg__WString *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_interfaces__msg__WString__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          example_interfaces__msg__WString__fini(&data[i]);
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
    if (!example_interfaces__msg__WString__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
