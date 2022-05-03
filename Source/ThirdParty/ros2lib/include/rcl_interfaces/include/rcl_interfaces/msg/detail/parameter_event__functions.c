// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rcl_interfaces:msg/ParameterEvent.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/parameter_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `node`
#include "rosidl_runtime_c/string_functions.h"
// Member `new_parameters`
// Member `changed_parameters`
// Member `deleted_parameters`
#include "rcl_interfaces/msg/detail/parameter__functions.h"

bool
rcl_interfaces__msg__ParameterEvent__init(rcl_interfaces__msg__ParameterEvent * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    rcl_interfaces__msg__ParameterEvent__fini(msg);
    return false;
  }
  // node
  if (!rosidl_runtime_c__String__init(&msg->node)) {
    rcl_interfaces__msg__ParameterEvent__fini(msg);
    return false;
  }
  // new_parameters
  if (!rcl_interfaces__msg__Parameter__Sequence__init(&msg->new_parameters, 0)) {
    rcl_interfaces__msg__ParameterEvent__fini(msg);
    return false;
  }
  // changed_parameters
  if (!rcl_interfaces__msg__Parameter__Sequence__init(&msg->changed_parameters, 0)) {
    rcl_interfaces__msg__ParameterEvent__fini(msg);
    return false;
  }
  // deleted_parameters
  if (!rcl_interfaces__msg__Parameter__Sequence__init(&msg->deleted_parameters, 0)) {
    rcl_interfaces__msg__ParameterEvent__fini(msg);
    return false;
  }
  return true;
}

void
rcl_interfaces__msg__ParameterEvent__fini(rcl_interfaces__msg__ParameterEvent * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // node
  rosidl_runtime_c__String__fini(&msg->node);
  // new_parameters
  rcl_interfaces__msg__Parameter__Sequence__fini(&msg->new_parameters);
  // changed_parameters
  rcl_interfaces__msg__Parameter__Sequence__fini(&msg->changed_parameters);
  // deleted_parameters
  rcl_interfaces__msg__Parameter__Sequence__fini(&msg->deleted_parameters);
}

rcl_interfaces__msg__ParameterEvent *
rcl_interfaces__msg__ParameterEvent__create()
{
  rcl_interfaces__msg__ParameterEvent * msg = (rcl_interfaces__msg__ParameterEvent *)malloc(sizeof(rcl_interfaces__msg__ParameterEvent));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__msg__ParameterEvent));
  bool success = rcl_interfaces__msg__ParameterEvent__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__msg__ParameterEvent__destroy(rcl_interfaces__msg__ParameterEvent * msg)
{
  if (msg) {
    rcl_interfaces__msg__ParameterEvent__fini(msg);
  }
  free(msg);
}


bool
rcl_interfaces__msg__ParameterEvent__Sequence__init(rcl_interfaces__msg__ParameterEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcl_interfaces__msg__ParameterEvent * data = NULL;
  if (size) {
    data = (rcl_interfaces__msg__ParameterEvent *)calloc(size, sizeof(rcl_interfaces__msg__ParameterEvent));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__msg__ParameterEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__msg__ParameterEvent__fini(&data[i - 1]);
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
rcl_interfaces__msg__ParameterEvent__Sequence__fini(rcl_interfaces__msg__ParameterEvent__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__msg__ParameterEvent__fini(&array->data[i]);
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

rcl_interfaces__msg__ParameterEvent__Sequence *
rcl_interfaces__msg__ParameterEvent__Sequence__create(size_t size)
{
  rcl_interfaces__msg__ParameterEvent__Sequence * array = (rcl_interfaces__msg__ParameterEvent__Sequence *)malloc(sizeof(rcl_interfaces__msg__ParameterEvent__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__msg__ParameterEvent__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__msg__ParameterEvent__Sequence__destroy(rcl_interfaces__msg__ParameterEvent__Sequence * array)
{
  if (array) {
    rcl_interfaces__msg__ParameterEvent__Sequence__fini(array);
  }
  free(array);
}
