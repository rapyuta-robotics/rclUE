// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rcl_interfaces:srv/GetParameterTypes.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/srv/detail/get_parameter_types__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `names`
#include "rosidl_runtime_c/string_functions.h"

bool
rcl_interfaces__srv__GetParameterTypes_Request__init(rcl_interfaces__srv__GetParameterTypes_Request * msg)
{
  if (!msg) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->names, 0)) {
    rcl_interfaces__srv__GetParameterTypes_Request__fini(msg);
    return false;
  }
  return true;
}

void
rcl_interfaces__srv__GetParameterTypes_Request__fini(rcl_interfaces__srv__GetParameterTypes_Request * msg)
{
  if (!msg) {
    return;
  }
  // names
  rosidl_runtime_c__String__Sequence__fini(&msg->names);
}

rcl_interfaces__srv__GetParameterTypes_Request *
rcl_interfaces__srv__GetParameterTypes_Request__create()
{
  rcl_interfaces__srv__GetParameterTypes_Request * msg = (rcl_interfaces__srv__GetParameterTypes_Request *)malloc(sizeof(rcl_interfaces__srv__GetParameterTypes_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__srv__GetParameterTypes_Request));
  bool success = rcl_interfaces__srv__GetParameterTypes_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__srv__GetParameterTypes_Request__destroy(rcl_interfaces__srv__GetParameterTypes_Request * msg)
{
  if (msg) {
    rcl_interfaces__srv__GetParameterTypes_Request__fini(msg);
  }
  free(msg);
}


bool
rcl_interfaces__srv__GetParameterTypes_Request__Sequence__init(rcl_interfaces__srv__GetParameterTypes_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcl_interfaces__srv__GetParameterTypes_Request * data = NULL;
  if (size) {
    data = (rcl_interfaces__srv__GetParameterTypes_Request *)calloc(size, sizeof(rcl_interfaces__srv__GetParameterTypes_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__srv__GetParameterTypes_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__srv__GetParameterTypes_Request__fini(&data[i - 1]);
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
rcl_interfaces__srv__GetParameterTypes_Request__Sequence__fini(rcl_interfaces__srv__GetParameterTypes_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__srv__GetParameterTypes_Request__fini(&array->data[i]);
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

rcl_interfaces__srv__GetParameterTypes_Request__Sequence *
rcl_interfaces__srv__GetParameterTypes_Request__Sequence__create(size_t size)
{
  rcl_interfaces__srv__GetParameterTypes_Request__Sequence * array = (rcl_interfaces__srv__GetParameterTypes_Request__Sequence *)malloc(sizeof(rcl_interfaces__srv__GetParameterTypes_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__srv__GetParameterTypes_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__srv__GetParameterTypes_Request__Sequence__destroy(rcl_interfaces__srv__GetParameterTypes_Request__Sequence * array)
{
  if (array) {
    rcl_interfaces__srv__GetParameterTypes_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `types`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rcl_interfaces__srv__GetParameterTypes_Response__init(rcl_interfaces__srv__GetParameterTypes_Response * msg)
{
  if (!msg) {
    return false;
  }
  // types
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->types, 0)) {
    rcl_interfaces__srv__GetParameterTypes_Response__fini(msg);
    return false;
  }
  return true;
}

void
rcl_interfaces__srv__GetParameterTypes_Response__fini(rcl_interfaces__srv__GetParameterTypes_Response * msg)
{
  if (!msg) {
    return;
  }
  // types
  rosidl_runtime_c__uint8__Sequence__fini(&msg->types);
}

rcl_interfaces__srv__GetParameterTypes_Response *
rcl_interfaces__srv__GetParameterTypes_Response__create()
{
  rcl_interfaces__srv__GetParameterTypes_Response * msg = (rcl_interfaces__srv__GetParameterTypes_Response *)malloc(sizeof(rcl_interfaces__srv__GetParameterTypes_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__srv__GetParameterTypes_Response));
  bool success = rcl_interfaces__srv__GetParameterTypes_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__srv__GetParameterTypes_Response__destroy(rcl_interfaces__srv__GetParameterTypes_Response * msg)
{
  if (msg) {
    rcl_interfaces__srv__GetParameterTypes_Response__fini(msg);
  }
  free(msg);
}


bool
rcl_interfaces__srv__GetParameterTypes_Response__Sequence__init(rcl_interfaces__srv__GetParameterTypes_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcl_interfaces__srv__GetParameterTypes_Response * data = NULL;
  if (size) {
    data = (rcl_interfaces__srv__GetParameterTypes_Response *)calloc(size, sizeof(rcl_interfaces__srv__GetParameterTypes_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__srv__GetParameterTypes_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__srv__GetParameterTypes_Response__fini(&data[i - 1]);
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
rcl_interfaces__srv__GetParameterTypes_Response__Sequence__fini(rcl_interfaces__srv__GetParameterTypes_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__srv__GetParameterTypes_Response__fini(&array->data[i]);
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

rcl_interfaces__srv__GetParameterTypes_Response__Sequence *
rcl_interfaces__srv__GetParameterTypes_Response__Sequence__create(size_t size)
{
  rcl_interfaces__srv__GetParameterTypes_Response__Sequence * array = (rcl_interfaces__srv__GetParameterTypes_Response__Sequence *)malloc(sizeof(rcl_interfaces__srv__GetParameterTypes_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__srv__GetParameterTypes_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__srv__GetParameterTypes_Response__Sequence__destroy(rcl_interfaces__srv__GetParameterTypes_Response__Sequence * array)
{
  if (array) {
    rcl_interfaces__srv__GetParameterTypes_Response__Sequence__fini(array);
  }
  free(array);
}
