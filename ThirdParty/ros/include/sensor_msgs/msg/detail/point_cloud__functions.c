// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:msg/PointCloud.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/point_cloud__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `points`
#include "geometry_msgs/msg/detail/point32__functions.h"
// Member `channels`
#include "sensor_msgs/msg/detail/channel_float32__functions.h"

bool
sensor_msgs__msg__PointCloud__init(sensor_msgs__msg__PointCloud * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sensor_msgs__msg__PointCloud__fini(msg);
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point32__Sequence__init(&msg->points, 0)) {
    sensor_msgs__msg__PointCloud__fini(msg);
    return false;
  }
  // channels
  if (!sensor_msgs__msg__ChannelFloat32__Sequence__init(&msg->channels, 0)) {
    sensor_msgs__msg__PointCloud__fini(msg);
    return false;
  }
  return true;
}

void
sensor_msgs__msg__PointCloud__fini(sensor_msgs__msg__PointCloud * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // points
  geometry_msgs__msg__Point32__Sequence__fini(&msg->points);
  // channels
  sensor_msgs__msg__ChannelFloat32__Sequence__fini(&msg->channels);
}

bool
sensor_msgs__msg__PointCloud__are_equal(const sensor_msgs__msg__PointCloud * lhs, const sensor_msgs__msg__PointCloud * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point32__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // channels
  if (!sensor_msgs__msg__ChannelFloat32__Sequence__are_equal(
      &(lhs->channels), &(rhs->channels)))
  {
    return false;
  }
  return true;
}

bool
sensor_msgs__msg__PointCloud__copy(
  const sensor_msgs__msg__PointCloud * input,
  sensor_msgs__msg__PointCloud * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point32__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // channels
  if (!sensor_msgs__msg__ChannelFloat32__Sequence__copy(
      &(input->channels), &(output->channels)))
  {
    return false;
  }
  return true;
}

sensor_msgs__msg__PointCloud *
sensor_msgs__msg__PointCloud__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_msgs__msg__PointCloud * msg = (sensor_msgs__msg__PointCloud *)allocator.allocate(sizeof(sensor_msgs__msg__PointCloud), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__PointCloud));
  bool success = sensor_msgs__msg__PointCloud__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__PointCloud__destroy(sensor_msgs__msg__PointCloud * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sensor_msgs__msg__PointCloud__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sensor_msgs__msg__PointCloud__Sequence__init(sensor_msgs__msg__PointCloud__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_msgs__msg__PointCloud * data = NULL;

  if (size) {
    data = (sensor_msgs__msg__PointCloud *)allocator.zero_allocate(size, sizeof(sensor_msgs__msg__PointCloud), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__PointCloud__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__PointCloud__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sensor_msgs__msg__PointCloud__Sequence__fini(sensor_msgs__msg__PointCloud__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__PointCloud__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sensor_msgs__msg__PointCloud__Sequence *
sensor_msgs__msg__PointCloud__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_msgs__msg__PointCloud__Sequence * array = (sensor_msgs__msg__PointCloud__Sequence *)allocator.allocate(sizeof(sensor_msgs__msg__PointCloud__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__PointCloud__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__PointCloud__Sequence__destroy(sensor_msgs__msg__PointCloud__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sensor_msgs__msg__PointCloud__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sensor_msgs__msg__PointCloud__Sequence__are_equal(const sensor_msgs__msg__PointCloud__Sequence * lhs, const sensor_msgs__msg__PointCloud__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensor_msgs__msg__PointCloud__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensor_msgs__msg__PointCloud__Sequence__copy(
  const sensor_msgs__msg__PointCloud__Sequence * input,
  sensor_msgs__msg__PointCloud__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sensor_msgs__msg__PointCloud);
    sensor_msgs__msg__PointCloud * data =
      (sensor_msgs__msg__PointCloud *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensor_msgs__msg__PointCloud__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          sensor_msgs__msg__PointCloud__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sensor_msgs__msg__PointCloud__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
