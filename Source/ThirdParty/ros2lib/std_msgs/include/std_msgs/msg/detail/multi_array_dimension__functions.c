// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from std_msgs:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice
#include "std_msgs/msg/detail/multi_array_dimension__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"

bool
std_msgs__msg__MultiArrayDimension__init(std_msgs__msg__MultiArrayDimension * msg)
{
  if (!msg) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    std_msgs__msg__MultiArrayDimension__fini(msg);
    return false;
  }
  // size
  // stride
  return true;
}

void
std_msgs__msg__MultiArrayDimension__fini(std_msgs__msg__MultiArrayDimension * msg)
{
  if (!msg) {
    return;
  }
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // size
  // stride
}

std_msgs__msg__MultiArrayDimension *
std_msgs__msg__MultiArrayDimension__create()
{
  std_msgs__msg__MultiArrayDimension * msg = (std_msgs__msg__MultiArrayDimension *)malloc(sizeof(std_msgs__msg__MultiArrayDimension));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_msgs__msg__MultiArrayDimension));
  bool success = std_msgs__msg__MultiArrayDimension__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
std_msgs__msg__MultiArrayDimension__destroy(std_msgs__msg__MultiArrayDimension * msg)
{
  if (msg) {
    std_msgs__msg__MultiArrayDimension__fini(msg);
  }
  free(msg);
}


bool
std_msgs__msg__MultiArrayDimension__Sequence__init(std_msgs__msg__MultiArrayDimension__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  std_msgs__msg__MultiArrayDimension * data = NULL;
  if (size) {
    data = (std_msgs__msg__MultiArrayDimension *)calloc(size, sizeof(std_msgs__msg__MultiArrayDimension));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_msgs__msg__MultiArrayDimension__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_msgs__msg__MultiArrayDimension__fini(&data[i - 1]);
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
std_msgs__msg__MultiArrayDimension__Sequence__fini(std_msgs__msg__MultiArrayDimension__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      std_msgs__msg__MultiArrayDimension__fini(&array->data[i]);
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

std_msgs__msg__MultiArrayDimension__Sequence *
std_msgs__msg__MultiArrayDimension__Sequence__create(size_t size)
{
  std_msgs__msg__MultiArrayDimension__Sequence * array = (std_msgs__msg__MultiArrayDimension__Sequence *)malloc(sizeof(std_msgs__msg__MultiArrayDimension__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = std_msgs__msg__MultiArrayDimension__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
std_msgs__msg__MultiArrayDimension__Sequence__destroy(std_msgs__msg__MultiArrayDimension__Sequence * array)
{
  if (array) {
    std_msgs__msg__MultiArrayDimension__Sequence__fini(array);
  }
  free(array);
}
