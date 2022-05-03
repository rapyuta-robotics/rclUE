// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ue4_interfaces:srv/AddInts.idl
// generated code does not contain a copyright notice
#include "ue4_interfaces/srv/detail/add_ints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
ue4_interfaces__srv__AddInts_Request__init(ue4_interfaces__srv__AddInts_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
ue4_interfaces__srv__AddInts_Request__fini(ue4_interfaces__srv__AddInts_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

ue4_interfaces__srv__AddInts_Request *
ue4_interfaces__srv__AddInts_Request__create()
{
  ue4_interfaces__srv__AddInts_Request * msg = (ue4_interfaces__srv__AddInts_Request *)malloc(sizeof(ue4_interfaces__srv__AddInts_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue4_interfaces__srv__AddInts_Request));
  bool success = ue4_interfaces__srv__AddInts_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ue4_interfaces__srv__AddInts_Request__destroy(ue4_interfaces__srv__AddInts_Request * msg)
{
  if (msg) {
    ue4_interfaces__srv__AddInts_Request__fini(msg);
  }
  free(msg);
}


bool
ue4_interfaces__srv__AddInts_Request__Sequence__init(ue4_interfaces__srv__AddInts_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ue4_interfaces__srv__AddInts_Request * data = NULL;
  if (size) {
    data = (ue4_interfaces__srv__AddInts_Request *)calloc(size, sizeof(ue4_interfaces__srv__AddInts_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue4_interfaces__srv__AddInts_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue4_interfaces__srv__AddInts_Request__fini(&data[i - 1]);
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
ue4_interfaces__srv__AddInts_Request__Sequence__fini(ue4_interfaces__srv__AddInts_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ue4_interfaces__srv__AddInts_Request__fini(&array->data[i]);
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

ue4_interfaces__srv__AddInts_Request__Sequence *
ue4_interfaces__srv__AddInts_Request__Sequence__create(size_t size)
{
  ue4_interfaces__srv__AddInts_Request__Sequence * array = (ue4_interfaces__srv__AddInts_Request__Sequence *)malloc(sizeof(ue4_interfaces__srv__AddInts_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ue4_interfaces__srv__AddInts_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ue4_interfaces__srv__AddInts_Request__Sequence__destroy(ue4_interfaces__srv__AddInts_Request__Sequence * array)
{
  if (array) {
    ue4_interfaces__srv__AddInts_Request__Sequence__fini(array);
  }
  free(array);
}


bool
ue4_interfaces__srv__AddInts_Response__init(ue4_interfaces__srv__AddInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
ue4_interfaces__srv__AddInts_Response__fini(ue4_interfaces__srv__AddInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

ue4_interfaces__srv__AddInts_Response *
ue4_interfaces__srv__AddInts_Response__create()
{
  ue4_interfaces__srv__AddInts_Response * msg = (ue4_interfaces__srv__AddInts_Response *)malloc(sizeof(ue4_interfaces__srv__AddInts_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue4_interfaces__srv__AddInts_Response));
  bool success = ue4_interfaces__srv__AddInts_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ue4_interfaces__srv__AddInts_Response__destroy(ue4_interfaces__srv__AddInts_Response * msg)
{
  if (msg) {
    ue4_interfaces__srv__AddInts_Response__fini(msg);
  }
  free(msg);
}


bool
ue4_interfaces__srv__AddInts_Response__Sequence__init(ue4_interfaces__srv__AddInts_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ue4_interfaces__srv__AddInts_Response * data = NULL;
  if (size) {
    data = (ue4_interfaces__srv__AddInts_Response *)calloc(size, sizeof(ue4_interfaces__srv__AddInts_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue4_interfaces__srv__AddInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue4_interfaces__srv__AddInts_Response__fini(&data[i - 1]);
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
ue4_interfaces__srv__AddInts_Response__Sequence__fini(ue4_interfaces__srv__AddInts_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ue4_interfaces__srv__AddInts_Response__fini(&array->data[i]);
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

ue4_interfaces__srv__AddInts_Response__Sequence *
ue4_interfaces__srv__AddInts_Response__Sequence__create(size_t size)
{
  ue4_interfaces__srv__AddInts_Response__Sequence * array = (ue4_interfaces__srv__AddInts_Response__Sequence *)malloc(sizeof(ue4_interfaces__srv__AddInts_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ue4_interfaces__srv__AddInts_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ue4_interfaces__srv__AddInts_Response__Sequence__destroy(ue4_interfaces__srv__AddInts_Response__Sequence * array)
{
  if (array) {
    ue4_interfaces__srv__AddInts_Response__Sequence__fini(array);
  }
  free(array);
}
