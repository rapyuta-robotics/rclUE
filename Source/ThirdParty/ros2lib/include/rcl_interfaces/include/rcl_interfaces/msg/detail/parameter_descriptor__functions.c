// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rcl_interfaces:msg/ParameterDescriptor.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/parameter_descriptor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `description`
// Member `additional_constraints`
#include "rosidl_runtime_c/string_functions.h"
// Member `floating_point_range`
#include "rcl_interfaces/msg/detail/floating_point_range__functions.h"
// Member `integer_range`
#include "rcl_interfaces/msg/detail/integer_range__functions.h"

bool
rcl_interfaces__msg__ParameterDescriptor__init(rcl_interfaces__msg__ParameterDescriptor * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rcl_interfaces__msg__ParameterDescriptor__fini(msg);
    return false;
  }
  // type
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    rcl_interfaces__msg__ParameterDescriptor__fini(msg);
    return false;
  }
  // additional_constraints
  if (!rosidl_runtime_c__String__init(&msg->additional_constraints)) {
    rcl_interfaces__msg__ParameterDescriptor__fini(msg);
    return false;
  }
  // read_only
  msg->read_only = false;
  // floating_point_range
  if (!rcl_interfaces__msg__FloatingPointRange__Sequence__init(&msg->floating_point_range, 0)) {
    rcl_interfaces__msg__ParameterDescriptor__fini(msg);
    return false;
  }
  // integer_range
  if (!rcl_interfaces__msg__IntegerRange__Sequence__init(&msg->integer_range, 0)) {
    rcl_interfaces__msg__ParameterDescriptor__fini(msg);
    return false;
  }
  return true;
}

void
rcl_interfaces__msg__ParameterDescriptor__fini(rcl_interfaces__msg__ParameterDescriptor * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // additional_constraints
  rosidl_runtime_c__String__fini(&msg->additional_constraints);
  // read_only
  // floating_point_range
  rcl_interfaces__msg__FloatingPointRange__Sequence__fini(&msg->floating_point_range);
  // integer_range
  rcl_interfaces__msg__IntegerRange__Sequence__fini(&msg->integer_range);
}

rcl_interfaces__msg__ParameterDescriptor *
rcl_interfaces__msg__ParameterDescriptor__create()
{
  rcl_interfaces__msg__ParameterDescriptor * msg = (rcl_interfaces__msg__ParameterDescriptor *)malloc(sizeof(rcl_interfaces__msg__ParameterDescriptor));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__msg__ParameterDescriptor));
  bool success = rcl_interfaces__msg__ParameterDescriptor__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__msg__ParameterDescriptor__destroy(rcl_interfaces__msg__ParameterDescriptor * msg)
{
  if (msg) {
    rcl_interfaces__msg__ParameterDescriptor__fini(msg);
  }
  free(msg);
}


bool
rcl_interfaces__msg__ParameterDescriptor__Sequence__init(rcl_interfaces__msg__ParameterDescriptor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcl_interfaces__msg__ParameterDescriptor * data = NULL;
  if (size) {
    data = (rcl_interfaces__msg__ParameterDescriptor *)calloc(size, sizeof(rcl_interfaces__msg__ParameterDescriptor));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__msg__ParameterDescriptor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__msg__ParameterDescriptor__fini(&data[i - 1]);
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
rcl_interfaces__msg__ParameterDescriptor__Sequence__fini(rcl_interfaces__msg__ParameterDescriptor__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__msg__ParameterDescriptor__fini(&array->data[i]);
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

rcl_interfaces__msg__ParameterDescriptor__Sequence *
rcl_interfaces__msg__ParameterDescriptor__Sequence__create(size_t size)
{
  rcl_interfaces__msg__ParameterDescriptor__Sequence * array = (rcl_interfaces__msg__ParameterDescriptor__Sequence *)malloc(sizeof(rcl_interfaces__msg__ParameterDescriptor__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__msg__ParameterDescriptor__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__msg__ParameterDescriptor__Sequence__destroy(rcl_interfaces__msg__ParameterDescriptor__Sequence * array)
{
  if (array) {
    rcl_interfaces__msg__ParameterDescriptor__Sequence__fini(array);
  }
  free(array);
}
