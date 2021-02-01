// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rcl_interfaces:msg/IntraProcessMessage.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/intra_process_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rcl_interfaces__msg__IntraProcessMessage__init(rcl_interfaces__msg__IntraProcessMessage * msg)
{
  if (!msg) {
    return false;
  }
  // publisher_id
  // message_sequence
  return true;
}

void
rcl_interfaces__msg__IntraProcessMessage__fini(rcl_interfaces__msg__IntraProcessMessage * msg)
{
  if (!msg) {
    return;
  }
  // publisher_id
  // message_sequence
}

rcl_interfaces__msg__IntraProcessMessage *
rcl_interfaces__msg__IntraProcessMessage__create()
{
  rcl_interfaces__msg__IntraProcessMessage * msg = (rcl_interfaces__msg__IntraProcessMessage *)malloc(sizeof(rcl_interfaces__msg__IntraProcessMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__msg__IntraProcessMessage));
  bool success = rcl_interfaces__msg__IntraProcessMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__msg__IntraProcessMessage__destroy(rcl_interfaces__msg__IntraProcessMessage * msg)
{
  if (msg) {
    rcl_interfaces__msg__IntraProcessMessage__fini(msg);
  }
  free(msg);
}


bool
rcl_interfaces__msg__IntraProcessMessage__Sequence__init(rcl_interfaces__msg__IntraProcessMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcl_interfaces__msg__IntraProcessMessage * data = NULL;
  if (size) {
    data = (rcl_interfaces__msg__IntraProcessMessage *)calloc(size, sizeof(rcl_interfaces__msg__IntraProcessMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__msg__IntraProcessMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__msg__IntraProcessMessage__fini(&data[i - 1]);
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
rcl_interfaces__msg__IntraProcessMessage__Sequence__fini(rcl_interfaces__msg__IntraProcessMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__msg__IntraProcessMessage__fini(&array->data[i]);
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

rcl_interfaces__msg__IntraProcessMessage__Sequence *
rcl_interfaces__msg__IntraProcessMessage__Sequence__create(size_t size)
{
  rcl_interfaces__msg__IntraProcessMessage__Sequence * array = (rcl_interfaces__msg__IntraProcessMessage__Sequence *)malloc(sizeof(rcl_interfaces__msg__IntraProcessMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__msg__IntraProcessMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__msg__IntraProcessMessage__Sequence__destroy(rcl_interfaces__msg__IntraProcessMessage__Sequence * array)
{
  if (array) {
    rcl_interfaces__msg__IntraProcessMessage__Sequence__fini(array);
  }
  free(array);
}
