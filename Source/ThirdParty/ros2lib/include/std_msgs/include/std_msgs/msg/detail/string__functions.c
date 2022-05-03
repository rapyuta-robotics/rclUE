// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from std_msgs:msg/String.idl
// generated code does not contain a copyright notice
#include "std_msgs/msg/detail/string__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
std_msgs__msg__String__init(std_msgs__msg__String * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    std_msgs__msg__String__fini(msg);
    return false;
  }
  return true;
}

void
std_msgs__msg__String__fini(std_msgs__msg__String * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

std_msgs__msg__String *
std_msgs__msg__String__create()
{
  std_msgs__msg__String * msg = (std_msgs__msg__String *)malloc(sizeof(std_msgs__msg__String));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_msgs__msg__String));
  bool success = std_msgs__msg__String__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
std_msgs__msg__String__destroy(std_msgs__msg__String * msg)
{
  if (msg) {
    std_msgs__msg__String__fini(msg);
  }
  free(msg);
}


bool
std_msgs__msg__String__Sequence__init(std_msgs__msg__String__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  std_msgs__msg__String * data = NULL;
  if (size) {
    data = (std_msgs__msg__String *)calloc(size, sizeof(std_msgs__msg__String));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_msgs__msg__String__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_msgs__msg__String__fini(&data[i - 1]);
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
std_msgs__msg__String__Sequence__fini(std_msgs__msg__String__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      std_msgs__msg__String__fini(&array->data[i]);
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

std_msgs__msg__String__Sequence *
std_msgs__msg__String__Sequence__create(size_t size)
{
  std_msgs__msg__String__Sequence * array = (std_msgs__msg__String__Sequence *)malloc(sizeof(std_msgs__msg__String__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = std_msgs__msg__String__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
std_msgs__msg__String__Sequence__destroy(std_msgs__msg__String__Sequence * array)
{
  if (array) {
    std_msgs__msg__String__Sequence__fini(array);
  }
  free(array);
}
