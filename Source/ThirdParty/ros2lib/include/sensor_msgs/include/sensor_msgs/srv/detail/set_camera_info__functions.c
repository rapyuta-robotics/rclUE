// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:srv/SetCameraInfo.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/srv/detail/set_camera_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `camera_info`
#include "sensor_msgs/msg/detail/camera_info__functions.h"

bool
sensor_msgs__srv__SetCameraInfo_Request__init(sensor_msgs__srv__SetCameraInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // camera_info
  if (!sensor_msgs__msg__CameraInfo__init(&msg->camera_info)) {
    sensor_msgs__srv__SetCameraInfo_Request__fini(msg);
    return false;
  }
  return true;
}

void
sensor_msgs__srv__SetCameraInfo_Request__fini(sensor_msgs__srv__SetCameraInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // camera_info
  sensor_msgs__msg__CameraInfo__fini(&msg->camera_info);
}

sensor_msgs__srv__SetCameraInfo_Request *
sensor_msgs__srv__SetCameraInfo_Request__create()
{
  sensor_msgs__srv__SetCameraInfo_Request * msg = (sensor_msgs__srv__SetCameraInfo_Request *)malloc(sizeof(sensor_msgs__srv__SetCameraInfo_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__srv__SetCameraInfo_Request));
  bool success = sensor_msgs__srv__SetCameraInfo_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__srv__SetCameraInfo_Request__destroy(sensor_msgs__srv__SetCameraInfo_Request * msg)
{
  if (msg) {
    sensor_msgs__srv__SetCameraInfo_Request__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__srv__SetCameraInfo_Request__Sequence__init(sensor_msgs__srv__SetCameraInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__srv__SetCameraInfo_Request * data = NULL;
  if (size) {
    data = (sensor_msgs__srv__SetCameraInfo_Request *)calloc(size, sizeof(sensor_msgs__srv__SetCameraInfo_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__srv__SetCameraInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__srv__SetCameraInfo_Request__fini(&data[i - 1]);
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
sensor_msgs__srv__SetCameraInfo_Request__Sequence__fini(sensor_msgs__srv__SetCameraInfo_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__srv__SetCameraInfo_Request__fini(&array->data[i]);
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

sensor_msgs__srv__SetCameraInfo_Request__Sequence *
sensor_msgs__srv__SetCameraInfo_Request__Sequence__create(size_t size)
{
  sensor_msgs__srv__SetCameraInfo_Request__Sequence * array = (sensor_msgs__srv__SetCameraInfo_Request__Sequence *)malloc(sizeof(sensor_msgs__srv__SetCameraInfo_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__srv__SetCameraInfo_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__srv__SetCameraInfo_Request__Sequence__destroy(sensor_msgs__srv__SetCameraInfo_Request__Sequence * array)
{
  if (array) {
    sensor_msgs__srv__SetCameraInfo_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `status_message`
#include "rosidl_runtime_c/string_functions.h"

bool
sensor_msgs__srv__SetCameraInfo_Response__init(sensor_msgs__srv__SetCameraInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status_message
  if (!rosidl_runtime_c__String__init(&msg->status_message)) {
    sensor_msgs__srv__SetCameraInfo_Response__fini(msg);
    return false;
  }
  return true;
}

void
sensor_msgs__srv__SetCameraInfo_Response__fini(sensor_msgs__srv__SetCameraInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status_message
  rosidl_runtime_c__String__fini(&msg->status_message);
}

sensor_msgs__srv__SetCameraInfo_Response *
sensor_msgs__srv__SetCameraInfo_Response__create()
{
  sensor_msgs__srv__SetCameraInfo_Response * msg = (sensor_msgs__srv__SetCameraInfo_Response *)malloc(sizeof(sensor_msgs__srv__SetCameraInfo_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__srv__SetCameraInfo_Response));
  bool success = sensor_msgs__srv__SetCameraInfo_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__srv__SetCameraInfo_Response__destroy(sensor_msgs__srv__SetCameraInfo_Response * msg)
{
  if (msg) {
    sensor_msgs__srv__SetCameraInfo_Response__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__srv__SetCameraInfo_Response__Sequence__init(sensor_msgs__srv__SetCameraInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__srv__SetCameraInfo_Response * data = NULL;
  if (size) {
    data = (sensor_msgs__srv__SetCameraInfo_Response *)calloc(size, sizeof(sensor_msgs__srv__SetCameraInfo_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__srv__SetCameraInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__srv__SetCameraInfo_Response__fini(&data[i - 1]);
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
sensor_msgs__srv__SetCameraInfo_Response__Sequence__fini(sensor_msgs__srv__SetCameraInfo_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__srv__SetCameraInfo_Response__fini(&array->data[i]);
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

sensor_msgs__srv__SetCameraInfo_Response__Sequence *
sensor_msgs__srv__SetCameraInfo_Response__Sequence__create(size_t size)
{
  sensor_msgs__srv__SetCameraInfo_Response__Sequence * array = (sensor_msgs__srv__SetCameraInfo_Response__Sequence *)malloc(sizeof(sensor_msgs__srv__SetCameraInfo_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__srv__SetCameraInfo_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__srv__SetCameraInfo_Response__Sequence__destroy(sensor_msgs__srv__SetCameraInfo_Response__Sequence * array)
{
  if (array) {
    sensor_msgs__srv__SetCameraInfo_Response__Sequence__fini(array);
  }
  free(array);
}
