// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geometry_msgs:msg/TwistStamped.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/twist_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
geometry_msgs__msg__TwistStamped__init(geometry_msgs__msg__TwistStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    geometry_msgs__msg__TwistStamped__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    geometry_msgs__msg__TwistStamped__fini(msg);
    return false;
  }
  return true;
}

void
geometry_msgs__msg__TwistStamped__fini(geometry_msgs__msg__TwistStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
}

geometry_msgs__msg__TwistStamped *
geometry_msgs__msg__TwistStamped__create()
{
  geometry_msgs__msg__TwistStamped * msg = (geometry_msgs__msg__TwistStamped *)malloc(sizeof(geometry_msgs__msg__TwistStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__TwistStamped));
  bool success = geometry_msgs__msg__TwistStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__TwistStamped__destroy(geometry_msgs__msg__TwistStamped * msg)
{
  if (msg) {
    geometry_msgs__msg__TwistStamped__fini(msg);
  }
  free(msg);
}


bool
geometry_msgs__msg__TwistStamped__Sequence__init(geometry_msgs__msg__TwistStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  geometry_msgs__msg__TwistStamped * data = NULL;
  if (size) {
    data = (geometry_msgs__msg__TwistStamped *)calloc(size, sizeof(geometry_msgs__msg__TwistStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__TwistStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__TwistStamped__fini(&data[i - 1]);
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
geometry_msgs__msg__TwistStamped__Sequence__fini(geometry_msgs__msg__TwistStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geometry_msgs__msg__TwistStamped__fini(&array->data[i]);
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

geometry_msgs__msg__TwistStamped__Sequence *
geometry_msgs__msg__TwistStamped__Sequence__create(size_t size)
{
  geometry_msgs__msg__TwistStamped__Sequence * array = (geometry_msgs__msg__TwistStamped__Sequence *)malloc(sizeof(geometry_msgs__msg__TwistStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__TwistStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__TwistStamped__Sequence__destroy(geometry_msgs__msg__TwistStamped__Sequence * array)
{
  if (array) {
    geometry_msgs__msg__TwistStamped__Sequence__fini(array);
  }
  free(array);
}
