// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from std_msgs:msg/UInt8MultiArray.idl
// generated code does not contain a copyright notice
#include "std_msgs/msg/detail/u_int8_multi_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `layout`
#include "std_msgs/msg/detail/multi_array_layout__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
std_msgs__msg__UInt8MultiArray__init(std_msgs__msg__UInt8MultiArray * msg)
{
  if (!msg) {
    return false;
  }
  // layout
  if (!std_msgs__msg__MultiArrayLayout__init(&msg->layout)) {
    std_msgs__msg__UInt8MultiArray__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    std_msgs__msg__UInt8MultiArray__fini(msg);
    return false;
  }
  return true;
}

void
std_msgs__msg__UInt8MultiArray__fini(std_msgs__msg__UInt8MultiArray * msg)
{
  if (!msg) {
    return;
  }
  // layout
  std_msgs__msg__MultiArrayLayout__fini(&msg->layout);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

std_msgs__msg__UInt8MultiArray *
std_msgs__msg__UInt8MultiArray__create()
{
  std_msgs__msg__UInt8MultiArray * msg = (std_msgs__msg__UInt8MultiArray *)malloc(sizeof(std_msgs__msg__UInt8MultiArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_msgs__msg__UInt8MultiArray));
  bool success = std_msgs__msg__UInt8MultiArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
std_msgs__msg__UInt8MultiArray__destroy(std_msgs__msg__UInt8MultiArray * msg)
{
  if (msg) {
    std_msgs__msg__UInt8MultiArray__fini(msg);
  }
  free(msg);
}


bool
std_msgs__msg__UInt8MultiArray__Sequence__init(std_msgs__msg__UInt8MultiArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  std_msgs__msg__UInt8MultiArray * data = NULL;
  if (size) {
    data = (std_msgs__msg__UInt8MultiArray *)calloc(size, sizeof(std_msgs__msg__UInt8MultiArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_msgs__msg__UInt8MultiArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_msgs__msg__UInt8MultiArray__fini(&data[i - 1]);
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
std_msgs__msg__UInt8MultiArray__Sequence__fini(std_msgs__msg__UInt8MultiArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      std_msgs__msg__UInt8MultiArray__fini(&array->data[i]);
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

std_msgs__msg__UInt8MultiArray__Sequence *
std_msgs__msg__UInt8MultiArray__Sequence__create(size_t size)
{
  std_msgs__msg__UInt8MultiArray__Sequence * array = (std_msgs__msg__UInt8MultiArray__Sequence *)malloc(sizeof(std_msgs__msg__UInt8MultiArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = std_msgs__msg__UInt8MultiArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
std_msgs__msg__UInt8MultiArray__Sequence__destroy(std_msgs__msg__UInt8MultiArray__Sequence * array)
{
  if (array) {
    std_msgs__msg__UInt8MultiArray__Sequence__fini(array);
  }
  free(array);
}
