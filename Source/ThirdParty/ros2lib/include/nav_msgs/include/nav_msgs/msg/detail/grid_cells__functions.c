// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav_msgs:msg/GridCells.idl
// generated code does not contain a copyright notice
#include "nav_msgs/msg/detail/grid_cells__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `cells`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
nav_msgs__msg__GridCells__init(nav_msgs__msg__GridCells * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nav_msgs__msg__GridCells__fini(msg);
    return false;
  }
  // cell_width
  // cell_height
  // cells
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->cells, 0)) {
    nav_msgs__msg__GridCells__fini(msg);
    return false;
  }
  return true;
}

void
nav_msgs__msg__GridCells__fini(nav_msgs__msg__GridCells * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // cell_width
  // cell_height
  // cells
  geometry_msgs__msg__Point__Sequence__fini(&msg->cells);
}

nav_msgs__msg__GridCells *
nav_msgs__msg__GridCells__create()
{
  nav_msgs__msg__GridCells * msg = (nav_msgs__msg__GridCells *)malloc(sizeof(nav_msgs__msg__GridCells));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__msg__GridCells));
  bool success = nav_msgs__msg__GridCells__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav_msgs__msg__GridCells__destroy(nav_msgs__msg__GridCells * msg)
{
  if (msg) {
    nav_msgs__msg__GridCells__fini(msg);
  }
  free(msg);
}


bool
nav_msgs__msg__GridCells__Sequence__init(nav_msgs__msg__GridCells__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav_msgs__msg__GridCells * data = NULL;
  if (size) {
    data = (nav_msgs__msg__GridCells *)calloc(size, sizeof(nav_msgs__msg__GridCells));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__msg__GridCells__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__msg__GridCells__fini(&data[i - 1]);
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
nav_msgs__msg__GridCells__Sequence__fini(nav_msgs__msg__GridCells__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_msgs__msg__GridCells__fini(&array->data[i]);
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

nav_msgs__msg__GridCells__Sequence *
nav_msgs__msg__GridCells__Sequence__create(size_t size)
{
  nav_msgs__msg__GridCells__Sequence * array = (nav_msgs__msg__GridCells__Sequence *)malloc(sizeof(nav_msgs__msg__GridCells__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__msg__GridCells__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav_msgs__msg__GridCells__Sequence__destroy(nav_msgs__msg__GridCells__Sequence * array)
{
  if (array) {
    nav_msgs__msg__GridCells__Sequence__fini(array);
  }
  free(array);
}
