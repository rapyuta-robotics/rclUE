// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geometry_msgs:msg/TwistWithCovarianceStamped.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/twist_with_covariance_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"

bool
geometry_msgs__msg__TwistWithCovarianceStamped__init(geometry_msgs__msg__TwistWithCovarianceStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    geometry_msgs__msg__TwistWithCovarianceStamped__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->twist)) {
    geometry_msgs__msg__TwistWithCovarianceStamped__fini(msg);
    return false;
  }
  return true;
}

void
geometry_msgs__msg__TwistWithCovarianceStamped__fini(geometry_msgs__msg__TwistWithCovarianceStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // twist
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->twist);
}

bool
geometry_msgs__msg__TwistWithCovarianceStamped__are_equal(const geometry_msgs__msg__TwistWithCovarianceStamped * lhs, const geometry_msgs__msg__TwistWithCovarianceStamped * rhs)
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
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  return true;
}

bool
geometry_msgs__msg__TwistWithCovarianceStamped__copy(
  const geometry_msgs__msg__TwistWithCovarianceStamped * input,
  geometry_msgs__msg__TwistWithCovarianceStamped * output)
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
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  return true;
}

geometry_msgs__msg__TwistWithCovarianceStamped *
geometry_msgs__msg__TwistWithCovarianceStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geometry_msgs__msg__TwistWithCovarianceStamped * msg = (geometry_msgs__msg__TwistWithCovarianceStamped *)allocator.allocate(sizeof(geometry_msgs__msg__TwistWithCovarianceStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__TwistWithCovarianceStamped));
  bool success = geometry_msgs__msg__TwistWithCovarianceStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__TwistWithCovarianceStamped__destroy(geometry_msgs__msg__TwistWithCovarianceStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    geometry_msgs__msg__TwistWithCovarianceStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
geometry_msgs__msg__TwistWithCovarianceStamped__Sequence__init(geometry_msgs__msg__TwistWithCovarianceStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geometry_msgs__msg__TwistWithCovarianceStamped * data = NULL;

  if (size) {
    data = (geometry_msgs__msg__TwistWithCovarianceStamped *)allocator.zero_allocate(size, sizeof(geometry_msgs__msg__TwistWithCovarianceStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__TwistWithCovarianceStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__TwistWithCovarianceStamped__fini(&data[i - 1]);
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
geometry_msgs__msg__TwistWithCovarianceStamped__Sequence__fini(geometry_msgs__msg__TwistWithCovarianceStamped__Sequence * array)
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
      geometry_msgs__msg__TwistWithCovarianceStamped__fini(&array->data[i]);
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

geometry_msgs__msg__TwistWithCovarianceStamped__Sequence *
geometry_msgs__msg__TwistWithCovarianceStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geometry_msgs__msg__TwistWithCovarianceStamped__Sequence * array = (geometry_msgs__msg__TwistWithCovarianceStamped__Sequence *)allocator.allocate(sizeof(geometry_msgs__msg__TwistWithCovarianceStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__TwistWithCovarianceStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__TwistWithCovarianceStamped__Sequence__destroy(geometry_msgs__msg__TwistWithCovarianceStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    geometry_msgs__msg__TwistWithCovarianceStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
geometry_msgs__msg__TwistWithCovarianceStamped__Sequence__are_equal(const geometry_msgs__msg__TwistWithCovarianceStamped__Sequence * lhs, const geometry_msgs__msg__TwistWithCovarianceStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!geometry_msgs__msg__TwistWithCovarianceStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
geometry_msgs__msg__TwistWithCovarianceStamped__Sequence__copy(
  const geometry_msgs__msg__TwistWithCovarianceStamped__Sequence * input,
  geometry_msgs__msg__TwistWithCovarianceStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(geometry_msgs__msg__TwistWithCovarianceStamped);
    geometry_msgs__msg__TwistWithCovarianceStamped * data =
      (geometry_msgs__msg__TwistWithCovarianceStamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!geometry_msgs__msg__TwistWithCovarianceStamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          geometry_msgs__msg__TwistWithCovarianceStamped__fini(&data[i]);
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
    if (!geometry_msgs__msg__TwistWithCovarianceStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
