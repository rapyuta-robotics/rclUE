// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav_msgs:srv/GetPlan.idl
// generated code does not contain a copyright notice
#include "nav_msgs/srv/detail/get_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `start`
// Member `goal`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
nav_msgs__srv__GetPlan_Request__init(nav_msgs__srv__GetPlan_Request * msg)
{
  if (!msg) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__PoseStamped__init(&msg->start)) {
    nav_msgs__srv__GetPlan_Request__fini(msg);
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PoseStamped__init(&msg->goal)) {
    nav_msgs__srv__GetPlan_Request__fini(msg);
    return false;
  }
  // tolerance
  return true;
}

void
nav_msgs__srv__GetPlan_Request__fini(nav_msgs__srv__GetPlan_Request * msg)
{
  if (!msg) {
    return;
  }
  // start
  geometry_msgs__msg__PoseStamped__fini(&msg->start);
  // goal
  geometry_msgs__msg__PoseStamped__fini(&msg->goal);
  // tolerance
}

nav_msgs__srv__GetPlan_Request *
nav_msgs__srv__GetPlan_Request__create()
{
  nav_msgs__srv__GetPlan_Request * msg = (nav_msgs__srv__GetPlan_Request *)malloc(sizeof(nav_msgs__srv__GetPlan_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__srv__GetPlan_Request));
  bool success = nav_msgs__srv__GetPlan_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav_msgs__srv__GetPlan_Request__destroy(nav_msgs__srv__GetPlan_Request * msg)
{
  if (msg) {
    nav_msgs__srv__GetPlan_Request__fini(msg);
  }
  free(msg);
}


bool
nav_msgs__srv__GetPlan_Request__Sequence__init(nav_msgs__srv__GetPlan_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav_msgs__srv__GetPlan_Request * data = NULL;
  if (size) {
    data = (nav_msgs__srv__GetPlan_Request *)calloc(size, sizeof(nav_msgs__srv__GetPlan_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__srv__GetPlan_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__srv__GetPlan_Request__fini(&data[i - 1]);
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
nav_msgs__srv__GetPlan_Request__Sequence__fini(nav_msgs__srv__GetPlan_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_msgs__srv__GetPlan_Request__fini(&array->data[i]);
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

nav_msgs__srv__GetPlan_Request__Sequence *
nav_msgs__srv__GetPlan_Request__Sequence__create(size_t size)
{
  nav_msgs__srv__GetPlan_Request__Sequence * array = (nav_msgs__srv__GetPlan_Request__Sequence *)malloc(sizeof(nav_msgs__srv__GetPlan_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__srv__GetPlan_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav_msgs__srv__GetPlan_Request__Sequence__destroy(nav_msgs__srv__GetPlan_Request__Sequence * array)
{
  if (array) {
    nav_msgs__srv__GetPlan_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `plan`
#include "nav_msgs/msg/detail/path__functions.h"

bool
nav_msgs__srv__GetPlan_Response__init(nav_msgs__srv__GetPlan_Response * msg)
{
  if (!msg) {
    return false;
  }
  // plan
  if (!nav_msgs__msg__Path__init(&msg->plan)) {
    nav_msgs__srv__GetPlan_Response__fini(msg);
    return false;
  }
  return true;
}

void
nav_msgs__srv__GetPlan_Response__fini(nav_msgs__srv__GetPlan_Response * msg)
{
  if (!msg) {
    return;
  }
  // plan
  nav_msgs__msg__Path__fini(&msg->plan);
}

nav_msgs__srv__GetPlan_Response *
nav_msgs__srv__GetPlan_Response__create()
{
  nav_msgs__srv__GetPlan_Response * msg = (nav_msgs__srv__GetPlan_Response *)malloc(sizeof(nav_msgs__srv__GetPlan_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__srv__GetPlan_Response));
  bool success = nav_msgs__srv__GetPlan_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav_msgs__srv__GetPlan_Response__destroy(nav_msgs__srv__GetPlan_Response * msg)
{
  if (msg) {
    nav_msgs__srv__GetPlan_Response__fini(msg);
  }
  free(msg);
}


bool
nav_msgs__srv__GetPlan_Response__Sequence__init(nav_msgs__srv__GetPlan_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav_msgs__srv__GetPlan_Response * data = NULL;
  if (size) {
    data = (nav_msgs__srv__GetPlan_Response *)calloc(size, sizeof(nav_msgs__srv__GetPlan_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__srv__GetPlan_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__srv__GetPlan_Response__fini(&data[i - 1]);
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
nav_msgs__srv__GetPlan_Response__Sequence__fini(nav_msgs__srv__GetPlan_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_msgs__srv__GetPlan_Response__fini(&array->data[i]);
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

nav_msgs__srv__GetPlan_Response__Sequence *
nav_msgs__srv__GetPlan_Response__Sequence__create(size_t size)
{
  nav_msgs__srv__GetPlan_Response__Sequence * array = (nav_msgs__srv__GetPlan_Response__Sequence *)malloc(sizeof(nav_msgs__srv__GetPlan_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__srv__GetPlan_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav_msgs__srv__GetPlan_Response__Sequence__destroy(nav_msgs__srv__GetPlan_Response__Sequence * array)
{
  if (array) {
    nav_msgs__srv__GetPlan_Response__Sequence__fini(array);
  }
  free(array);
}
