// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmw_dds_common:msg/Gid.idl
// generated code does not contain a copyright notice
#include "rmw_dds_common/msg/detail/gid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rmw_dds_common__msg__Gid__init(rmw_dds_common__msg__Gid * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
rmw_dds_common__msg__Gid__fini(rmw_dds_common__msg__Gid * msg)
{
  if (!msg) {
    return;
  }
  // data
}

bool
rmw_dds_common__msg__Gid__are_equal(const rmw_dds_common__msg__Gid * lhs, const rmw_dds_common__msg__Gid * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  for (size_t i = 0; i < 24; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  return true;
}

bool
rmw_dds_common__msg__Gid__copy(
  const rmw_dds_common__msg__Gid * input,
  rmw_dds_common__msg__Gid * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  for (size_t i = 0; i < 24; ++i) {
    output->data[i] = input->data[i];
  }
  return true;
}

rmw_dds_common__msg__Gid *
rmw_dds_common__msg__Gid__create()
{
  rmw_dds_common__msg__Gid * msg = (rmw_dds_common__msg__Gid *)malloc(sizeof(rmw_dds_common__msg__Gid));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmw_dds_common__msg__Gid));
  bool success = rmw_dds_common__msg__Gid__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmw_dds_common__msg__Gid__destroy(rmw_dds_common__msg__Gid * msg)
{
  if (msg) {
    rmw_dds_common__msg__Gid__fini(msg);
  }
  free(msg);
}


bool
rmw_dds_common__msg__Gid__Sequence__init(rmw_dds_common__msg__Gid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmw_dds_common__msg__Gid * data = NULL;
  if (size) {
    data = (rmw_dds_common__msg__Gid *)calloc(size, sizeof(rmw_dds_common__msg__Gid));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmw_dds_common__msg__Gid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmw_dds_common__msg__Gid__fini(&data[i - 1]);
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
rmw_dds_common__msg__Gid__Sequence__fini(rmw_dds_common__msg__Gid__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmw_dds_common__msg__Gid__fini(&array->data[i]);
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

rmw_dds_common__msg__Gid__Sequence *
rmw_dds_common__msg__Gid__Sequence__create(size_t size)
{
  rmw_dds_common__msg__Gid__Sequence * array = (rmw_dds_common__msg__Gid__Sequence *)malloc(sizeof(rmw_dds_common__msg__Gid__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmw_dds_common__msg__Gid__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmw_dds_common__msg__Gid__Sequence__destroy(rmw_dds_common__msg__Gid__Sequence * array)
{
  if (array) {
    rmw_dds_common__msg__Gid__Sequence__fini(array);
  }
  free(array);
}

bool
rmw_dds_common__msg__Gid__Sequence__are_equal(const rmw_dds_common__msg__Gid__Sequence * lhs, const rmw_dds_common__msg__Gid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmw_dds_common__msg__Gid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmw_dds_common__msg__Gid__Sequence__copy(
  const rmw_dds_common__msg__Gid__Sequence * input,
  rmw_dds_common__msg__Gid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmw_dds_common__msg__Gid);
    rmw_dds_common__msg__Gid * data =
      (rmw_dds_common__msg__Gid *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmw_dds_common__msg__Gid__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rmw_dds_common__msg__Gid__fini(&data[i]);
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
    if (!rmw_dds_common__msg__Gid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
