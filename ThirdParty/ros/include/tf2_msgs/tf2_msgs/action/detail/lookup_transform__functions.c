// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tf2_msgs:action/LookupTransform.idl
// generated code does not contain a copyright notice
#include "tf2_msgs/action/detail/lookup_transform__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_frame`
// Member `source_frame`
// Member `fixed_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `source_time`
// Member `target_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `timeout`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
tf2_msgs__action__LookupTransform_Goal__init(tf2_msgs__action__LookupTransform_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_frame
  if (!rosidl_runtime_c__String__init(&msg->target_frame)) {
    tf2_msgs__action__LookupTransform_Goal__fini(msg);
    return false;
  }
  // source_frame
  if (!rosidl_runtime_c__String__init(&msg->source_frame)) {
    tf2_msgs__action__LookupTransform_Goal__fini(msg);
    return false;
  }
  // source_time
  if (!builtin_interfaces__msg__Time__init(&msg->source_time)) {
    tf2_msgs__action__LookupTransform_Goal__fini(msg);
    return false;
  }
  // timeout
  if (!builtin_interfaces__msg__Duration__init(&msg->timeout)) {
    tf2_msgs__action__LookupTransform_Goal__fini(msg);
    return false;
  }
  // target_time
  if (!builtin_interfaces__msg__Time__init(&msg->target_time)) {
    tf2_msgs__action__LookupTransform_Goal__fini(msg);
    return false;
  }
  // fixed_frame
  if (!rosidl_runtime_c__String__init(&msg->fixed_frame)) {
    tf2_msgs__action__LookupTransform_Goal__fini(msg);
    return false;
  }
  // advanced
  return true;
}

void
tf2_msgs__action__LookupTransform_Goal__fini(tf2_msgs__action__LookupTransform_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_frame
  rosidl_runtime_c__String__fini(&msg->target_frame);
  // source_frame
  rosidl_runtime_c__String__fini(&msg->source_frame);
  // source_time
  builtin_interfaces__msg__Time__fini(&msg->source_time);
  // timeout
  builtin_interfaces__msg__Duration__fini(&msg->timeout);
  // target_time
  builtin_interfaces__msg__Time__fini(&msg->target_time);
  // fixed_frame
  rosidl_runtime_c__String__fini(&msg->fixed_frame);
  // advanced
}

bool
tf2_msgs__action__LookupTransform_Goal__are_equal(const tf2_msgs__action__LookupTransform_Goal * lhs, const tf2_msgs__action__LookupTransform_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_frame), &(rhs->target_frame)))
  {
    return false;
  }
  // source_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source_frame), &(rhs->source_frame)))
  {
    return false;
  }
  // source_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->source_time), &(rhs->source_time)))
  {
    return false;
  }
  // timeout
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->timeout), &(rhs->timeout)))
  {
    return false;
  }
  // target_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->target_time), &(rhs->target_time)))
  {
    return false;
  }
  // fixed_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fixed_frame), &(rhs->fixed_frame)))
  {
    return false;
  }
  // advanced
  if (lhs->advanced != rhs->advanced) {
    return false;
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_Goal__copy(
  const tf2_msgs__action__LookupTransform_Goal * input,
  tf2_msgs__action__LookupTransform_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->target_frame), &(output->target_frame)))
  {
    return false;
  }
  // source_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->source_frame), &(output->source_frame)))
  {
    return false;
  }
  // source_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->source_time), &(output->source_time)))
  {
    return false;
  }
  // timeout
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->timeout), &(output->timeout)))
  {
    return false;
  }
  // target_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->target_time), &(output->target_time)))
  {
    return false;
  }
  // fixed_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->fixed_frame), &(output->fixed_frame)))
  {
    return false;
  }
  // advanced
  output->advanced = input->advanced;
  return true;
}

tf2_msgs__action__LookupTransform_Goal *
tf2_msgs__action__LookupTransform_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_Goal * msg = (tf2_msgs__action__LookupTransform_Goal *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_Goal));
  bool success = tf2_msgs__action__LookupTransform_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_Goal__destroy(tf2_msgs__action__LookupTransform_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_msgs__action__LookupTransform_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_msgs__action__LookupTransform_Goal__Sequence__init(tf2_msgs__action__LookupTransform_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_Goal * data = NULL;

  if (size) {
    data = (tf2_msgs__action__LookupTransform_Goal *)allocator.zero_allocate(size, sizeof(tf2_msgs__action__LookupTransform_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_Goal__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_Goal__Sequence__fini(tf2_msgs__action__LookupTransform_Goal__Sequence * array)
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
      tf2_msgs__action__LookupTransform_Goal__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_Goal__Sequence *
tf2_msgs__action__LookupTransform_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_Goal__Sequence * array = (tf2_msgs__action__LookupTransform_Goal__Sequence *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_Goal__Sequence__destroy(tf2_msgs__action__LookupTransform_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_msgs__action__LookupTransform_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_msgs__action__LookupTransform_Goal__Sequence__are_equal(const tf2_msgs__action__LookupTransform_Goal__Sequence * lhs, const tf2_msgs__action__LookupTransform_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_Goal__Sequence__copy(
  const tf2_msgs__action__LookupTransform_Goal__Sequence * input,
  tf2_msgs__action__LookupTransform_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_msgs__action__LookupTransform_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tf2_msgs__action__LookupTransform_Goal * data =
      (tf2_msgs__action__LookupTransform_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_msgs__action__LookupTransform_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tf2_msgs__action__LookupTransform_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `transform`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"
// Member `error`
#include "tf2_msgs/msg/detail/tf2_error__functions.h"

bool
tf2_msgs__action__LookupTransform_Result__init(tf2_msgs__action__LookupTransform_Result * msg)
{
  if (!msg) {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__TransformStamped__init(&msg->transform)) {
    tf2_msgs__action__LookupTransform_Result__fini(msg);
    return false;
  }
  // error
  if (!tf2_msgs__msg__TF2Error__init(&msg->error)) {
    tf2_msgs__action__LookupTransform_Result__fini(msg);
    return false;
  }
  return true;
}

void
tf2_msgs__action__LookupTransform_Result__fini(tf2_msgs__action__LookupTransform_Result * msg)
{
  if (!msg) {
    return;
  }
  // transform
  geometry_msgs__msg__TransformStamped__fini(&msg->transform);
  // error
  tf2_msgs__msg__TF2Error__fini(&msg->error);
}

bool
tf2_msgs__action__LookupTransform_Result__are_equal(const tf2_msgs__action__LookupTransform_Result * lhs, const tf2_msgs__action__LookupTransform_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__TransformStamped__are_equal(
      &(lhs->transform), &(rhs->transform)))
  {
    return false;
  }
  // error
  if (!tf2_msgs__msg__TF2Error__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_Result__copy(
  const tf2_msgs__action__LookupTransform_Result * input,
  tf2_msgs__action__LookupTransform_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__TransformStamped__copy(
      &(input->transform), &(output->transform)))
  {
    return false;
  }
  // error
  if (!tf2_msgs__msg__TF2Error__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  return true;
}

tf2_msgs__action__LookupTransform_Result *
tf2_msgs__action__LookupTransform_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_Result * msg = (tf2_msgs__action__LookupTransform_Result *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_Result));
  bool success = tf2_msgs__action__LookupTransform_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_Result__destroy(tf2_msgs__action__LookupTransform_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_msgs__action__LookupTransform_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_msgs__action__LookupTransform_Result__Sequence__init(tf2_msgs__action__LookupTransform_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_Result * data = NULL;

  if (size) {
    data = (tf2_msgs__action__LookupTransform_Result *)allocator.zero_allocate(size, sizeof(tf2_msgs__action__LookupTransform_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_Result__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_Result__Sequence__fini(tf2_msgs__action__LookupTransform_Result__Sequence * array)
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
      tf2_msgs__action__LookupTransform_Result__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_Result__Sequence *
tf2_msgs__action__LookupTransform_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_Result__Sequence * array = (tf2_msgs__action__LookupTransform_Result__Sequence *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_Result__Sequence__destroy(tf2_msgs__action__LookupTransform_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_msgs__action__LookupTransform_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_msgs__action__LookupTransform_Result__Sequence__are_equal(const tf2_msgs__action__LookupTransform_Result__Sequence * lhs, const tf2_msgs__action__LookupTransform_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_Result__Sequence__copy(
  const tf2_msgs__action__LookupTransform_Result__Sequence * input,
  tf2_msgs__action__LookupTransform_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_msgs__action__LookupTransform_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tf2_msgs__action__LookupTransform_Result * data =
      (tf2_msgs__action__LookupTransform_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_msgs__action__LookupTransform_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tf2_msgs__action__LookupTransform_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tf2_msgs__action__LookupTransform_Feedback__init(tf2_msgs__action__LookupTransform_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
tf2_msgs__action__LookupTransform_Feedback__fini(tf2_msgs__action__LookupTransform_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
tf2_msgs__action__LookupTransform_Feedback__are_equal(const tf2_msgs__action__LookupTransform_Feedback * lhs, const tf2_msgs__action__LookupTransform_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_Feedback__copy(
  const tf2_msgs__action__LookupTransform_Feedback * input,
  tf2_msgs__action__LookupTransform_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

tf2_msgs__action__LookupTransform_Feedback *
tf2_msgs__action__LookupTransform_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_Feedback * msg = (tf2_msgs__action__LookupTransform_Feedback *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_Feedback));
  bool success = tf2_msgs__action__LookupTransform_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_Feedback__destroy(tf2_msgs__action__LookupTransform_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_msgs__action__LookupTransform_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_msgs__action__LookupTransform_Feedback__Sequence__init(tf2_msgs__action__LookupTransform_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_Feedback * data = NULL;

  if (size) {
    data = (tf2_msgs__action__LookupTransform_Feedback *)allocator.zero_allocate(size, sizeof(tf2_msgs__action__LookupTransform_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_Feedback__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_Feedback__Sequence__fini(tf2_msgs__action__LookupTransform_Feedback__Sequence * array)
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
      tf2_msgs__action__LookupTransform_Feedback__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_Feedback__Sequence *
tf2_msgs__action__LookupTransform_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_Feedback__Sequence * array = (tf2_msgs__action__LookupTransform_Feedback__Sequence *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_Feedback__Sequence__destroy(tf2_msgs__action__LookupTransform_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_msgs__action__LookupTransform_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_msgs__action__LookupTransform_Feedback__Sequence__are_equal(const tf2_msgs__action__LookupTransform_Feedback__Sequence * lhs, const tf2_msgs__action__LookupTransform_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_Feedback__Sequence__copy(
  const tf2_msgs__action__LookupTransform_Feedback__Sequence * input,
  tf2_msgs__action__LookupTransform_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_msgs__action__LookupTransform_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tf2_msgs__action__LookupTransform_Feedback * data =
      (tf2_msgs__action__LookupTransform_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_msgs__action__LookupTransform_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tf2_msgs__action__LookupTransform_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "tf2_msgs/action/detail/lookup_transform__functions.h"

bool
tf2_msgs__action__LookupTransform_SendGoal_Request__init(tf2_msgs__action__LookupTransform_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tf2_msgs__action__LookupTransform_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!tf2_msgs__action__LookupTransform_Goal__init(&msg->goal)) {
    tf2_msgs__action__LookupTransform_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
tf2_msgs__action__LookupTransform_SendGoal_Request__fini(tf2_msgs__action__LookupTransform_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  tf2_msgs__action__LookupTransform_Goal__fini(&msg->goal);
}

bool
tf2_msgs__action__LookupTransform_SendGoal_Request__are_equal(const tf2_msgs__action__LookupTransform_SendGoal_Request * lhs, const tf2_msgs__action__LookupTransform_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!tf2_msgs__action__LookupTransform_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_SendGoal_Request__copy(
  const tf2_msgs__action__LookupTransform_SendGoal_Request * input,
  tf2_msgs__action__LookupTransform_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!tf2_msgs__action__LookupTransform_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

tf2_msgs__action__LookupTransform_SendGoal_Request *
tf2_msgs__action__LookupTransform_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_SendGoal_Request * msg = (tf2_msgs__action__LookupTransform_SendGoal_Request *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_SendGoal_Request));
  bool success = tf2_msgs__action__LookupTransform_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_SendGoal_Request__destroy(tf2_msgs__action__LookupTransform_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_msgs__action__LookupTransform_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__init(tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_SendGoal_Request * data = NULL;

  if (size) {
    data = (tf2_msgs__action__LookupTransform_SendGoal_Request *)allocator.zero_allocate(size, sizeof(tf2_msgs__action__LookupTransform_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_SendGoal_Request__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__fini(tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence * array)
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
      tf2_msgs__action__LookupTransform_SendGoal_Request__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence *
tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence * array = (tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__destroy(tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__are_equal(const tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence * lhs, const tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__copy(
  const tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence * input,
  tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_msgs__action__LookupTransform_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tf2_msgs__action__LookupTransform_SendGoal_Request * data =
      (tf2_msgs__action__LookupTransform_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_msgs__action__LookupTransform_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tf2_msgs__action__LookupTransform_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
// already included above
// #include "builtin_interfaces/msg/detail/time__functions.h"

bool
tf2_msgs__action__LookupTransform_SendGoal_Response__init(tf2_msgs__action__LookupTransform_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tf2_msgs__action__LookupTransform_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
tf2_msgs__action__LookupTransform_SendGoal_Response__fini(tf2_msgs__action__LookupTransform_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
tf2_msgs__action__LookupTransform_SendGoal_Response__are_equal(const tf2_msgs__action__LookupTransform_SendGoal_Response * lhs, const tf2_msgs__action__LookupTransform_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_SendGoal_Response__copy(
  const tf2_msgs__action__LookupTransform_SendGoal_Response * input,
  tf2_msgs__action__LookupTransform_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

tf2_msgs__action__LookupTransform_SendGoal_Response *
tf2_msgs__action__LookupTransform_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_SendGoal_Response * msg = (tf2_msgs__action__LookupTransform_SendGoal_Response *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_SendGoal_Response));
  bool success = tf2_msgs__action__LookupTransform_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_SendGoal_Response__destroy(tf2_msgs__action__LookupTransform_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_msgs__action__LookupTransform_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__init(tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_SendGoal_Response * data = NULL;

  if (size) {
    data = (tf2_msgs__action__LookupTransform_SendGoal_Response *)allocator.zero_allocate(size, sizeof(tf2_msgs__action__LookupTransform_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_SendGoal_Response__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__fini(tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence * array)
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
      tf2_msgs__action__LookupTransform_SendGoal_Response__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence *
tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence * array = (tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__destroy(tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__are_equal(const tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence * lhs, const tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__copy(
  const tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence * input,
  tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_msgs__action__LookupTransform_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tf2_msgs__action__LookupTransform_SendGoal_Response * data =
      (tf2_msgs__action__LookupTransform_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_msgs__action__LookupTransform_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tf2_msgs__action__LookupTransform_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
tf2_msgs__action__LookupTransform_GetResult_Request__init(tf2_msgs__action__LookupTransform_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tf2_msgs__action__LookupTransform_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
tf2_msgs__action__LookupTransform_GetResult_Request__fini(tf2_msgs__action__LookupTransform_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
tf2_msgs__action__LookupTransform_GetResult_Request__are_equal(const tf2_msgs__action__LookupTransform_GetResult_Request * lhs, const tf2_msgs__action__LookupTransform_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_GetResult_Request__copy(
  const tf2_msgs__action__LookupTransform_GetResult_Request * input,
  tf2_msgs__action__LookupTransform_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

tf2_msgs__action__LookupTransform_GetResult_Request *
tf2_msgs__action__LookupTransform_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_GetResult_Request * msg = (tf2_msgs__action__LookupTransform_GetResult_Request *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_GetResult_Request));
  bool success = tf2_msgs__action__LookupTransform_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_GetResult_Request__destroy(tf2_msgs__action__LookupTransform_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_msgs__action__LookupTransform_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__init(tf2_msgs__action__LookupTransform_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_GetResult_Request * data = NULL;

  if (size) {
    data = (tf2_msgs__action__LookupTransform_GetResult_Request *)allocator.zero_allocate(size, sizeof(tf2_msgs__action__LookupTransform_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_GetResult_Request__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__fini(tf2_msgs__action__LookupTransform_GetResult_Request__Sequence * array)
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
      tf2_msgs__action__LookupTransform_GetResult_Request__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_GetResult_Request__Sequence *
tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_GetResult_Request__Sequence * array = (tf2_msgs__action__LookupTransform_GetResult_Request__Sequence *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__destroy(tf2_msgs__action__LookupTransform_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__are_equal(const tf2_msgs__action__LookupTransform_GetResult_Request__Sequence * lhs, const tf2_msgs__action__LookupTransform_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__copy(
  const tf2_msgs__action__LookupTransform_GetResult_Request__Sequence * input,
  tf2_msgs__action__LookupTransform_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_msgs__action__LookupTransform_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tf2_msgs__action__LookupTransform_GetResult_Request * data =
      (tf2_msgs__action__LookupTransform_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_msgs__action__LookupTransform_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tf2_msgs__action__LookupTransform_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "tf2_msgs/action/detail/lookup_transform__functions.h"

bool
tf2_msgs__action__LookupTransform_GetResult_Response__init(tf2_msgs__action__LookupTransform_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!tf2_msgs__action__LookupTransform_Result__init(&msg->result)) {
    tf2_msgs__action__LookupTransform_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
tf2_msgs__action__LookupTransform_GetResult_Response__fini(tf2_msgs__action__LookupTransform_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  tf2_msgs__action__LookupTransform_Result__fini(&msg->result);
}

bool
tf2_msgs__action__LookupTransform_GetResult_Response__are_equal(const tf2_msgs__action__LookupTransform_GetResult_Response * lhs, const tf2_msgs__action__LookupTransform_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!tf2_msgs__action__LookupTransform_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_GetResult_Response__copy(
  const tf2_msgs__action__LookupTransform_GetResult_Response * input,
  tf2_msgs__action__LookupTransform_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!tf2_msgs__action__LookupTransform_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

tf2_msgs__action__LookupTransform_GetResult_Response *
tf2_msgs__action__LookupTransform_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_GetResult_Response * msg = (tf2_msgs__action__LookupTransform_GetResult_Response *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_GetResult_Response));
  bool success = tf2_msgs__action__LookupTransform_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_GetResult_Response__destroy(tf2_msgs__action__LookupTransform_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_msgs__action__LookupTransform_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__init(tf2_msgs__action__LookupTransform_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_GetResult_Response * data = NULL;

  if (size) {
    data = (tf2_msgs__action__LookupTransform_GetResult_Response *)allocator.zero_allocate(size, sizeof(tf2_msgs__action__LookupTransform_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_GetResult_Response__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__fini(tf2_msgs__action__LookupTransform_GetResult_Response__Sequence * array)
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
      tf2_msgs__action__LookupTransform_GetResult_Response__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_GetResult_Response__Sequence *
tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_GetResult_Response__Sequence * array = (tf2_msgs__action__LookupTransform_GetResult_Response__Sequence *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__destroy(tf2_msgs__action__LookupTransform_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__are_equal(const tf2_msgs__action__LookupTransform_GetResult_Response__Sequence * lhs, const tf2_msgs__action__LookupTransform_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__copy(
  const tf2_msgs__action__LookupTransform_GetResult_Response__Sequence * input,
  tf2_msgs__action__LookupTransform_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_msgs__action__LookupTransform_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tf2_msgs__action__LookupTransform_GetResult_Response * data =
      (tf2_msgs__action__LookupTransform_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_msgs__action__LookupTransform_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tf2_msgs__action__LookupTransform_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "tf2_msgs/action/detail/lookup_transform__functions.h"

bool
tf2_msgs__action__LookupTransform_FeedbackMessage__init(tf2_msgs__action__LookupTransform_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tf2_msgs__action__LookupTransform_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!tf2_msgs__action__LookupTransform_Feedback__init(&msg->feedback)) {
    tf2_msgs__action__LookupTransform_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
tf2_msgs__action__LookupTransform_FeedbackMessage__fini(tf2_msgs__action__LookupTransform_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  tf2_msgs__action__LookupTransform_Feedback__fini(&msg->feedback);
}

bool
tf2_msgs__action__LookupTransform_FeedbackMessage__are_equal(const tf2_msgs__action__LookupTransform_FeedbackMessage * lhs, const tf2_msgs__action__LookupTransform_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tf2_msgs__action__LookupTransform_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_FeedbackMessage__copy(
  const tf2_msgs__action__LookupTransform_FeedbackMessage * input,
  tf2_msgs__action__LookupTransform_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tf2_msgs__action__LookupTransform_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

tf2_msgs__action__LookupTransform_FeedbackMessage *
tf2_msgs__action__LookupTransform_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_FeedbackMessage * msg = (tf2_msgs__action__LookupTransform_FeedbackMessage *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_FeedbackMessage));
  bool success = tf2_msgs__action__LookupTransform_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_FeedbackMessage__destroy(tf2_msgs__action__LookupTransform_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tf2_msgs__action__LookupTransform_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__init(tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_FeedbackMessage * data = NULL;

  if (size) {
    data = (tf2_msgs__action__LookupTransform_FeedbackMessage *)allocator.zero_allocate(size, sizeof(tf2_msgs__action__LookupTransform_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_FeedbackMessage__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__fini(tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence * array)
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
      tf2_msgs__action__LookupTransform_FeedbackMessage__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence *
tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence * array = (tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence *)allocator.allocate(sizeof(tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__destroy(tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__are_equal(const tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence * lhs, const tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__copy(
  const tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence * input,
  tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tf2_msgs__action__LookupTransform_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tf2_msgs__action__LookupTransform_FeedbackMessage * data =
      (tf2_msgs__action__LookupTransform_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tf2_msgs__action__LookupTransform_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tf2_msgs__action__LookupTransform_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tf2_msgs__action__LookupTransform_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
