// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unique_identifier_msgs:msg/UUID.idl
// generated code does not contain a copyright notice
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
unique_identifier_msgs__msg__UUID__init(unique_identifier_msgs__msg__UUID * msg)
{
  if (!msg) {
    return false;
  }
  // uuid
  return true;
}

void
unique_identifier_msgs__msg__UUID__fini(unique_identifier_msgs__msg__UUID * msg)
{
  if (!msg) {
    return;
  }
  // uuid
}

unique_identifier_msgs__msg__UUID *
unique_identifier_msgs__msg__UUID__create()
{
  unique_identifier_msgs__msg__UUID * msg = (unique_identifier_msgs__msg__UUID *)malloc(sizeof(unique_identifier_msgs__msg__UUID));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unique_identifier_msgs__msg__UUID));
  bool success = unique_identifier_msgs__msg__UUID__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
unique_identifier_msgs__msg__UUID__destroy(unique_identifier_msgs__msg__UUID * msg)
{
  if (msg) {
    unique_identifier_msgs__msg__UUID__fini(msg);
  }
  free(msg);
}


bool
unique_identifier_msgs__msg__UUID__Sequence__init(unique_identifier_msgs__msg__UUID__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  unique_identifier_msgs__msg__UUID * data = NULL;
  if (size) {
    data = (unique_identifier_msgs__msg__UUID *)calloc(size, sizeof(unique_identifier_msgs__msg__UUID));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unique_identifier_msgs__msg__UUID__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unique_identifier_msgs__msg__UUID__fini(&data[i - 1]);
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
unique_identifier_msgs__msg__UUID__Sequence__fini(unique_identifier_msgs__msg__UUID__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      unique_identifier_msgs__msg__UUID__fini(&array->data[i]);
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

unique_identifier_msgs__msg__UUID__Sequence *
unique_identifier_msgs__msg__UUID__Sequence__create(size_t size)
{
  unique_identifier_msgs__msg__UUID__Sequence * array = (unique_identifier_msgs__msg__UUID__Sequence *)malloc(sizeof(unique_identifier_msgs__msg__UUID__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = unique_identifier_msgs__msg__UUID__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
unique_identifier_msgs__msg__UUID__Sequence__destroy(unique_identifier_msgs__msg__UUID__Sequence * array)
{
  if (array) {
    unique_identifier_msgs__msg__UUID__Sequence__fini(array);
  }
  free(array);
}
