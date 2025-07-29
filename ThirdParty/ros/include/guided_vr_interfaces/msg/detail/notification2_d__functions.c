// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from guided_vr_interfaces:msg/Notification2D.idl
// generated code does not contain a copyright notice
#include "guided_vr_interfaces/msg/detail/notification2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `source`
#include "std_msgs/msg/detail/string__functions.h"
// Member `level`
#include "std_msgs/msg/detail/u_int8__functions.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `polygon`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
guided_vr_interfaces__msg__Notification2D__init(guided_vr_interfaces__msg__Notification2D * msg)
{
  if (!msg) {
    return false;
  }
  // source
  if (!std_msgs__msg__String__init(&msg->source)) {
    guided_vr_interfaces__msg__Notification2D__fini(msg);
    return false;
  }
  // level
  if (!std_msgs__msg__UInt8__init(&msg->level)) {
    guided_vr_interfaces__msg__Notification2D__fini(msg);
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    guided_vr_interfaces__msg__Notification2D__fini(msg);
    return false;
  }
  // id
  // polygon
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->polygon, 0)) {
    guided_vr_interfaces__msg__Notification2D__fini(msg);
    return false;
  }
  return true;
}

void
guided_vr_interfaces__msg__Notification2D__fini(guided_vr_interfaces__msg__Notification2D * msg)
{
  if (!msg) {
    return;
  }
  // source
  std_msgs__msg__String__fini(&msg->source);
  // level
  std_msgs__msg__UInt8__fini(&msg->level);
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // id
  // polygon
  geometry_msgs__msg__Point__Sequence__fini(&msg->polygon);
}

bool
guided_vr_interfaces__msg__Notification2D__are_equal(const guided_vr_interfaces__msg__Notification2D * lhs, const guided_vr_interfaces__msg__Notification2D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // source
  if (!std_msgs__msg__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // level
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->level), &(rhs->level)))
  {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // polygon
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->polygon), &(rhs->polygon)))
  {
    return false;
  }
  return true;
}

bool
guided_vr_interfaces__msg__Notification2D__copy(
  const guided_vr_interfaces__msg__Notification2D * input,
  guided_vr_interfaces__msg__Notification2D * output)
{
  if (!input || !output) {
    return false;
  }
  // source
  if (!std_msgs__msg__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // level
  if (!std_msgs__msg__UInt8__copy(
      &(input->level), &(output->level)))
  {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // polygon
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->polygon), &(output->polygon)))
  {
    return false;
  }
  return true;
}

guided_vr_interfaces__msg__Notification2D *
guided_vr_interfaces__msg__Notification2D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guided_vr_interfaces__msg__Notification2D * msg = (guided_vr_interfaces__msg__Notification2D *)allocator.allocate(sizeof(guided_vr_interfaces__msg__Notification2D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(guided_vr_interfaces__msg__Notification2D));
  bool success = guided_vr_interfaces__msg__Notification2D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
guided_vr_interfaces__msg__Notification2D__destroy(guided_vr_interfaces__msg__Notification2D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    guided_vr_interfaces__msg__Notification2D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
guided_vr_interfaces__msg__Notification2D__Sequence__init(guided_vr_interfaces__msg__Notification2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guided_vr_interfaces__msg__Notification2D * data = NULL;

  if (size) {
    data = (guided_vr_interfaces__msg__Notification2D *)allocator.zero_allocate(size, sizeof(guided_vr_interfaces__msg__Notification2D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = guided_vr_interfaces__msg__Notification2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        guided_vr_interfaces__msg__Notification2D__fini(&data[i - 1]);
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
guided_vr_interfaces__msg__Notification2D__Sequence__fini(guided_vr_interfaces__msg__Notification2D__Sequence * array)
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
      guided_vr_interfaces__msg__Notification2D__fini(&array->data[i]);
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

guided_vr_interfaces__msg__Notification2D__Sequence *
guided_vr_interfaces__msg__Notification2D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  guided_vr_interfaces__msg__Notification2D__Sequence * array = (guided_vr_interfaces__msg__Notification2D__Sequence *)allocator.allocate(sizeof(guided_vr_interfaces__msg__Notification2D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = guided_vr_interfaces__msg__Notification2D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
guided_vr_interfaces__msg__Notification2D__Sequence__destroy(guided_vr_interfaces__msg__Notification2D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    guided_vr_interfaces__msg__Notification2D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
guided_vr_interfaces__msg__Notification2D__Sequence__are_equal(const guided_vr_interfaces__msg__Notification2D__Sequence * lhs, const guided_vr_interfaces__msg__Notification2D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!guided_vr_interfaces__msg__Notification2D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
guided_vr_interfaces__msg__Notification2D__Sequence__copy(
  const guided_vr_interfaces__msg__Notification2D__Sequence * input,
  guided_vr_interfaces__msg__Notification2D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(guided_vr_interfaces__msg__Notification2D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    guided_vr_interfaces__msg__Notification2D * data =
      (guided_vr_interfaces__msg__Notification2D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!guided_vr_interfaces__msg__Notification2D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          guided_vr_interfaces__msg__Notification2D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!guided_vr_interfaces__msg__Notification2D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
