// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tf2_msgs:msg/TFMessage.idl
// generated code does not contain a copyright notice
#include "tf2_msgs/msg/detail/tf_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `transforms`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"

bool
tf2_msgs__msg__TFMessage__init(tf2_msgs__msg__TFMessage * msg)
{
  if (!msg) {
    return false;
  }
  // transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__init(&msg->transforms, 0)) {
    tf2_msgs__msg__TFMessage__fini(msg);
    return false;
  }
  return true;
}

void
tf2_msgs__msg__TFMessage__fini(tf2_msgs__msg__TFMessage * msg)
{
  if (!msg) {
    return;
  }
  // transforms
  geometry_msgs__msg__TransformStamped__Sequence__fini(&msg->transforms);
}

tf2_msgs__msg__TFMessage *
tf2_msgs__msg__TFMessage__create()
{
  tf2_msgs__msg__TFMessage * msg = (tf2_msgs__msg__TFMessage *)malloc(sizeof(tf2_msgs__msg__TFMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__msg__TFMessage));
  bool success = tf2_msgs__msg__TFMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__msg__TFMessage__destroy(tf2_msgs__msg__TFMessage * msg)
{
  if (msg) {
    tf2_msgs__msg__TFMessage__fini(msg);
  }
  free(msg);
}


bool
tf2_msgs__msg__TFMessage__Sequence__init(tf2_msgs__msg__TFMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tf2_msgs__msg__TFMessage * data = NULL;
  if (size) {
    data = (tf2_msgs__msg__TFMessage *)calloc(size, sizeof(tf2_msgs__msg__TFMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__msg__TFMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__msg__TFMessage__fini(&data[i - 1]);
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
tf2_msgs__msg__TFMessage__Sequence__fini(tf2_msgs__msg__TFMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tf2_msgs__msg__TFMessage__fini(&array->data[i]);
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

tf2_msgs__msg__TFMessage__Sequence *
tf2_msgs__msg__TFMessage__Sequence__create(size_t size)
{
  tf2_msgs__msg__TFMessage__Sequence * array = (tf2_msgs__msg__TFMessage__Sequence *)malloc(sizeof(tf2_msgs__msg__TFMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__msg__TFMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tf2_msgs__msg__TFMessage__Sequence__destroy(tf2_msgs__msg__TFMessage__Sequence * array)
{
  if (array) {
    tf2_msgs__msg__TFMessage__Sequence__fini(array);
  }
  free(array);
}
