// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rcl_interfaces:msg/ParameterValue.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/parameter_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `string_value`
// Member `string_array_value`
#include "rosidl_runtime_c/string_functions.h"
// Member `byte_array_value`
// Member `bool_array_value`
// Member `integer_array_value`
// Member `double_array_value`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rcl_interfaces__msg__ParameterValue__init(rcl_interfaces__msg__ParameterValue * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // bool_value
  // integer_value
  // double_value
  // string_value
  if (!rosidl_runtime_c__String__init(&msg->string_value)) {
    rcl_interfaces__msg__ParameterValue__fini(msg);
    return false;
  }
  // byte_array_value
  if (!rosidl_runtime_c__octet__Sequence__init(&msg->byte_array_value, 0)) {
    rcl_interfaces__msg__ParameterValue__fini(msg);
    return false;
  }
  // bool_array_value
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->bool_array_value, 0)) {
    rcl_interfaces__msg__ParameterValue__fini(msg);
    return false;
  }
  // integer_array_value
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->integer_array_value, 0)) {
    rcl_interfaces__msg__ParameterValue__fini(msg);
    return false;
  }
  // double_array_value
  if (!rosidl_runtime_c__double__Sequence__init(&msg->double_array_value, 0)) {
    rcl_interfaces__msg__ParameterValue__fini(msg);
    return false;
  }
  // string_array_value
  if (!rosidl_runtime_c__String__Sequence__init(&msg->string_array_value, 0)) {
    rcl_interfaces__msg__ParameterValue__fini(msg);
    return false;
  }
  return true;
}

void
rcl_interfaces__msg__ParameterValue__fini(rcl_interfaces__msg__ParameterValue * msg)
{
  if (!msg) {
    return;
  }
  // type
  // bool_value
  // integer_value
  // double_value
  // string_value
  rosidl_runtime_c__String__fini(&msg->string_value);
  // byte_array_value
  rosidl_runtime_c__octet__Sequence__fini(&msg->byte_array_value);
  // bool_array_value
  rosidl_runtime_c__boolean__Sequence__fini(&msg->bool_array_value);
  // integer_array_value
  rosidl_runtime_c__int64__Sequence__fini(&msg->integer_array_value);
  // double_array_value
  rosidl_runtime_c__double__Sequence__fini(&msg->double_array_value);
  // string_array_value
  rosidl_runtime_c__String__Sequence__fini(&msg->string_array_value);
}

rcl_interfaces__msg__ParameterValue *
rcl_interfaces__msg__ParameterValue__create()
{
  rcl_interfaces__msg__ParameterValue * msg = (rcl_interfaces__msg__ParameterValue *)malloc(sizeof(rcl_interfaces__msg__ParameterValue));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__msg__ParameterValue));
  bool success = rcl_interfaces__msg__ParameterValue__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__msg__ParameterValue__destroy(rcl_interfaces__msg__ParameterValue * msg)
{
  if (msg) {
    rcl_interfaces__msg__ParameterValue__fini(msg);
  }
  free(msg);
}


bool
rcl_interfaces__msg__ParameterValue__Sequence__init(rcl_interfaces__msg__ParameterValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcl_interfaces__msg__ParameterValue * data = NULL;
  if (size) {
    data = (rcl_interfaces__msg__ParameterValue *)calloc(size, sizeof(rcl_interfaces__msg__ParameterValue));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__msg__ParameterValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__msg__ParameterValue__fini(&data[i - 1]);
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
rcl_interfaces__msg__ParameterValue__Sequence__fini(rcl_interfaces__msg__ParameterValue__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__msg__ParameterValue__fini(&array->data[i]);
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

rcl_interfaces__msg__ParameterValue__Sequence *
rcl_interfaces__msg__ParameterValue__Sequence__create(size_t size)
{
  rcl_interfaces__msg__ParameterValue__Sequence * array = (rcl_interfaces__msg__ParameterValue__Sequence *)malloc(sizeof(rcl_interfaces__msg__ParameterValue__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__msg__ParameterValue__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__msg__ParameterValue__Sequence__destroy(rcl_interfaces__msg__ParameterValue__Sequence * array)
{
  if (array) {
    rcl_interfaces__msg__ParameterValue__Sequence__fini(array);
  }
  free(array);
}
