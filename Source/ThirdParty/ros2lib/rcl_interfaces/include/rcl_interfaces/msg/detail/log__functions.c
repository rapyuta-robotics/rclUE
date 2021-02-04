// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rcl_interfaces:msg/Log.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/log__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `name`
// Member `msg`
// Member `file`
// Member `function`
#include "rosidl_runtime_c/string_functions.h"

bool
rcl_interfaces__msg__Log__init(rcl_interfaces__msg__Log * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    rcl_interfaces__msg__Log__fini(msg);
    return false;
  }
  // level
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rcl_interfaces__msg__Log__fini(msg);
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    rcl_interfaces__msg__Log__fini(msg);
    return false;
  }
  // file
  if (!rosidl_runtime_c__String__init(&msg->file)) {
    rcl_interfaces__msg__Log__fini(msg);
    return false;
  }
  // function
  if (!rosidl_runtime_c__String__init(&msg->function)) {
    rcl_interfaces__msg__Log__fini(msg);
    return false;
  }
  // line
  return true;
}

void
rcl_interfaces__msg__Log__fini(rcl_interfaces__msg__Log * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // level
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
  // file
  rosidl_runtime_c__String__fini(&msg->file);
  // function
  rosidl_runtime_c__String__fini(&msg->function);
  // line
}

rcl_interfaces__msg__Log *
rcl_interfaces__msg__Log__create()
{
  rcl_interfaces__msg__Log * msg = (rcl_interfaces__msg__Log *)malloc(sizeof(rcl_interfaces__msg__Log));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__msg__Log));
  bool success = rcl_interfaces__msg__Log__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__msg__Log__destroy(rcl_interfaces__msg__Log * msg)
{
  if (msg) {
    rcl_interfaces__msg__Log__fini(msg);
  }
  free(msg);
}


bool
rcl_interfaces__msg__Log__Sequence__init(rcl_interfaces__msg__Log__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcl_interfaces__msg__Log * data = NULL;
  if (size) {
    data = (rcl_interfaces__msg__Log *)calloc(size, sizeof(rcl_interfaces__msg__Log));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__msg__Log__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__msg__Log__fini(&data[i - 1]);
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
rcl_interfaces__msg__Log__Sequence__fini(rcl_interfaces__msg__Log__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__msg__Log__fini(&array->data[i]);
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

rcl_interfaces__msg__Log__Sequence *
rcl_interfaces__msg__Log__Sequence__create(size_t size)
{
  rcl_interfaces__msg__Log__Sequence * array = (rcl_interfaces__msg__Log__Sequence *)malloc(sizeof(rcl_interfaces__msg__Log__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__msg__Log__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__msg__Log__Sequence__destroy(rcl_interfaces__msg__Log__Sequence * array)
{
  if (array) {
    rcl_interfaces__msg__Log__Sequence__fini(array);
  }
  free(array);
}
