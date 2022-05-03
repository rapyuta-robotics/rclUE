// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav_msgs:srv/SetMap.idl
// generated code does not contain a copyright notice
#include "nav_msgs/srv/detail/set_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `map`
#include "nav_msgs/msg/detail/occupancy_grid__functions.h"
// Member `initial_pose`
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__functions.h"

bool
nav_msgs__srv__SetMap_Request__init(nav_msgs__srv__SetMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // map
  if (!nav_msgs__msg__OccupancyGrid__init(&msg->map)) {
    nav_msgs__srv__SetMap_Request__fini(msg);
    return false;
  }
  // initial_pose
  if (!geometry_msgs__msg__PoseWithCovarianceStamped__init(&msg->initial_pose)) {
    nav_msgs__srv__SetMap_Request__fini(msg);
    return false;
  }
  return true;
}

void
nav_msgs__srv__SetMap_Request__fini(nav_msgs__srv__SetMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // map
  nav_msgs__msg__OccupancyGrid__fini(&msg->map);
  // initial_pose
  geometry_msgs__msg__PoseWithCovarianceStamped__fini(&msg->initial_pose);
}

nav_msgs__srv__SetMap_Request *
nav_msgs__srv__SetMap_Request__create()
{
  nav_msgs__srv__SetMap_Request * msg = (nav_msgs__srv__SetMap_Request *)malloc(sizeof(nav_msgs__srv__SetMap_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__srv__SetMap_Request));
  bool success = nav_msgs__srv__SetMap_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav_msgs__srv__SetMap_Request__destroy(nav_msgs__srv__SetMap_Request * msg)
{
  if (msg) {
    nav_msgs__srv__SetMap_Request__fini(msg);
  }
  free(msg);
}


bool
nav_msgs__srv__SetMap_Request__Sequence__init(nav_msgs__srv__SetMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav_msgs__srv__SetMap_Request * data = NULL;
  if (size) {
    data = (nav_msgs__srv__SetMap_Request *)calloc(size, sizeof(nav_msgs__srv__SetMap_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__srv__SetMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__srv__SetMap_Request__fini(&data[i - 1]);
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
nav_msgs__srv__SetMap_Request__Sequence__fini(nav_msgs__srv__SetMap_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_msgs__srv__SetMap_Request__fini(&array->data[i]);
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

nav_msgs__srv__SetMap_Request__Sequence *
nav_msgs__srv__SetMap_Request__Sequence__create(size_t size)
{
  nav_msgs__srv__SetMap_Request__Sequence * array = (nav_msgs__srv__SetMap_Request__Sequence *)malloc(sizeof(nav_msgs__srv__SetMap_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__srv__SetMap_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav_msgs__srv__SetMap_Request__Sequence__destroy(nav_msgs__srv__SetMap_Request__Sequence * array)
{
  if (array) {
    nav_msgs__srv__SetMap_Request__Sequence__fini(array);
  }
  free(array);
}


bool
nav_msgs__srv__SetMap_Response__init(nav_msgs__srv__SetMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
nav_msgs__srv__SetMap_Response__fini(nav_msgs__srv__SetMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

nav_msgs__srv__SetMap_Response *
nav_msgs__srv__SetMap_Response__create()
{
  nav_msgs__srv__SetMap_Response * msg = (nav_msgs__srv__SetMap_Response *)malloc(sizeof(nav_msgs__srv__SetMap_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__srv__SetMap_Response));
  bool success = nav_msgs__srv__SetMap_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav_msgs__srv__SetMap_Response__destroy(nav_msgs__srv__SetMap_Response * msg)
{
  if (msg) {
    nav_msgs__srv__SetMap_Response__fini(msg);
  }
  free(msg);
}


bool
nav_msgs__srv__SetMap_Response__Sequence__init(nav_msgs__srv__SetMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav_msgs__srv__SetMap_Response * data = NULL;
  if (size) {
    data = (nav_msgs__srv__SetMap_Response *)calloc(size, sizeof(nav_msgs__srv__SetMap_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__srv__SetMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__srv__SetMap_Response__fini(&data[i - 1]);
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
nav_msgs__srv__SetMap_Response__Sequence__fini(nav_msgs__srv__SetMap_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_msgs__srv__SetMap_Response__fini(&array->data[i]);
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

nav_msgs__srv__SetMap_Response__Sequence *
nav_msgs__srv__SetMap_Response__Sequence__create(size_t size)
{
  nav_msgs__srv__SetMap_Response__Sequence * array = (nav_msgs__srv__SetMap_Response__Sequence *)malloc(sizeof(nav_msgs__srv__SetMap_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__srv__SetMap_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav_msgs__srv__SetMap_Response__Sequence__destroy(nav_msgs__srv__SetMap_Response__Sequence * array)
{
  if (array) {
    nav_msgs__srv__SetMap_Response__Sequence__fini(array);
  }
  free(array);
}
