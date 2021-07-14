// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosgraph_msgs:msg/Clock.idl
// generated code does not contain a copyright notice
#include "rosgraph_msgs/msg/detail/clock__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `clock`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rosgraph_msgs__msg__Clock__init(rosgraph_msgs__msg__Clock * msg)
{
  if (!msg) {
    return false;
  }
  // clock
  if (!builtin_interfaces__msg__Time__init(&msg->clock)) {
    rosgraph_msgs__msg__Clock__fini(msg);
    return false;
  }
  return true;
}

void
rosgraph_msgs__msg__Clock__fini(rosgraph_msgs__msg__Clock * msg)
{
  if (!msg) {
    return;
  }
  // clock
  builtin_interfaces__msg__Time__fini(&msg->clock);
}

rosgraph_msgs__msg__Clock *
rosgraph_msgs__msg__Clock__create()
{
  rosgraph_msgs__msg__Clock * msg = (rosgraph_msgs__msg__Clock *)malloc(sizeof(rosgraph_msgs__msg__Clock));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosgraph_msgs__msg__Clock));
  bool success = rosgraph_msgs__msg__Clock__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosgraph_msgs__msg__Clock__destroy(rosgraph_msgs__msg__Clock * msg)
{
  if (msg) {
    rosgraph_msgs__msg__Clock__fini(msg);
  }
  free(msg);
}


bool
rosgraph_msgs__msg__Clock__Sequence__init(rosgraph_msgs__msg__Clock__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosgraph_msgs__msg__Clock * data = NULL;
  if (size) {
    data = (rosgraph_msgs__msg__Clock *)calloc(size, sizeof(rosgraph_msgs__msg__Clock));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosgraph_msgs__msg__Clock__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosgraph_msgs__msg__Clock__fini(&data[i - 1]);
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
rosgraph_msgs__msg__Clock__Sequence__fini(rosgraph_msgs__msg__Clock__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosgraph_msgs__msg__Clock__fini(&array->data[i]);
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

rosgraph_msgs__msg__Clock__Sequence *
rosgraph_msgs__msg__Clock__Sequence__create(size_t size)
{
  rosgraph_msgs__msg__Clock__Sequence * array = (rosgraph_msgs__msg__Clock__Sequence *)malloc(sizeof(rosgraph_msgs__msg__Clock__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosgraph_msgs__msg__Clock__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosgraph_msgs__msg__Clock__Sequence__destroy(rosgraph_msgs__msg__Clock__Sequence * array)
{
  if (array) {
    rosgraph_msgs__msg__Clock__Sequence__fini(array);
  }
  free(array);
}
