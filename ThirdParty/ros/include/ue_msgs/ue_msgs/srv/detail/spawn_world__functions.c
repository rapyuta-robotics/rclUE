// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ue_msgs:srv/SpawnWorld.idl
// generated code does not contain a copyright notice
#include "ue_msgs/srv/detail/spawn_world__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `world_model`
// Member `world_instance_name`
// Member `json_parameters`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
ue_msgs__srv__SpawnWorld_Request__init(ue_msgs__srv__SpawnWorld_Request * msg)
{
  if (!msg) {
    return false;
  }
  // world_model
  if (!rosidl_runtime_c__String__init(&msg->world_model)) {
    ue_msgs__srv__SpawnWorld_Request__fini(msg);
    return false;
  }
  // world_instance_name
  if (!rosidl_runtime_c__String__init(&msg->world_instance_name)) {
    ue_msgs__srv__SpawnWorld_Request__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    ue_msgs__srv__SpawnWorld_Request__fini(msg);
    return false;
  }
  // json_parameters
  if (!rosidl_runtime_c__String__init(&msg->json_parameters)) {
    ue_msgs__srv__SpawnWorld_Request__fini(msg);
    return false;
  }
  return true;
}

void
ue_msgs__srv__SpawnWorld_Request__fini(ue_msgs__srv__SpawnWorld_Request * msg)
{
  if (!msg) {
    return;
  }
  // world_model
  rosidl_runtime_c__String__fini(&msg->world_model);
  // world_instance_name
  rosidl_runtime_c__String__fini(&msg->world_instance_name);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // json_parameters
  rosidl_runtime_c__String__fini(&msg->json_parameters);
}

bool
ue_msgs__srv__SpawnWorld_Request__are_equal(const ue_msgs__srv__SpawnWorld_Request * lhs, const ue_msgs__srv__SpawnWorld_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // world_model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->world_model), &(rhs->world_model)))
  {
    return false;
  }
  // world_instance_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->world_instance_name), &(rhs->world_instance_name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // json_parameters
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->json_parameters), &(rhs->json_parameters)))
  {
    return false;
  }
  return true;
}

bool
ue_msgs__srv__SpawnWorld_Request__copy(
  const ue_msgs__srv__SpawnWorld_Request * input,
  ue_msgs__srv__SpawnWorld_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // world_model
  if (!rosidl_runtime_c__String__copy(
      &(input->world_model), &(output->world_model)))
  {
    return false;
  }
  // world_instance_name
  if (!rosidl_runtime_c__String__copy(
      &(input->world_instance_name), &(output->world_instance_name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // json_parameters
  if (!rosidl_runtime_c__String__copy(
      &(input->json_parameters), &(output->json_parameters)))
  {
    return false;
  }
  return true;
}

ue_msgs__srv__SpawnWorld_Request *
ue_msgs__srv__SpawnWorld_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SpawnWorld_Request * msg = (ue_msgs__srv__SpawnWorld_Request *)allocator.allocate(sizeof(ue_msgs__srv__SpawnWorld_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__srv__SpawnWorld_Request));
  bool success = ue_msgs__srv__SpawnWorld_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ue_msgs__srv__SpawnWorld_Request__destroy(ue_msgs__srv__SpawnWorld_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ue_msgs__srv__SpawnWorld_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ue_msgs__srv__SpawnWorld_Request__Sequence__init(ue_msgs__srv__SpawnWorld_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SpawnWorld_Request * data = NULL;

  if (size) {
    data = (ue_msgs__srv__SpawnWorld_Request *)allocator.zero_allocate(size, sizeof(ue_msgs__srv__SpawnWorld_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__srv__SpawnWorld_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__srv__SpawnWorld_Request__fini(&data[i - 1]);
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
ue_msgs__srv__SpawnWorld_Request__Sequence__fini(ue_msgs__srv__SpawnWorld_Request__Sequence * array)
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
      ue_msgs__srv__SpawnWorld_Request__fini(&array->data[i]);
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

ue_msgs__srv__SpawnWorld_Request__Sequence *
ue_msgs__srv__SpawnWorld_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SpawnWorld_Request__Sequence * array = (ue_msgs__srv__SpawnWorld_Request__Sequence *)allocator.allocate(sizeof(ue_msgs__srv__SpawnWorld_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__srv__SpawnWorld_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ue_msgs__srv__SpawnWorld_Request__Sequence__destroy(ue_msgs__srv__SpawnWorld_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ue_msgs__srv__SpawnWorld_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ue_msgs__srv__SpawnWorld_Request__Sequence__are_equal(const ue_msgs__srv__SpawnWorld_Request__Sequence * lhs, const ue_msgs__srv__SpawnWorld_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ue_msgs__srv__SpawnWorld_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ue_msgs__srv__SpawnWorld_Request__Sequence__copy(
  const ue_msgs__srv__SpawnWorld_Request__Sequence * input,
  ue_msgs__srv__SpawnWorld_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ue_msgs__srv__SpawnWorld_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ue_msgs__srv__SpawnWorld_Request * data =
      (ue_msgs__srv__SpawnWorld_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ue_msgs__srv__SpawnWorld_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ue_msgs__srv__SpawnWorld_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ue_msgs__srv__SpawnWorld_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ue_msgs__srv__SpawnWorld_Response__init(ue_msgs__srv__SpawnWorld_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status_message
  if (!rosidl_runtime_c__String__init(&msg->status_message)) {
    ue_msgs__srv__SpawnWorld_Response__fini(msg);
    return false;
  }
  return true;
}

void
ue_msgs__srv__SpawnWorld_Response__fini(ue_msgs__srv__SpawnWorld_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status_message
  rosidl_runtime_c__String__fini(&msg->status_message);
}

bool
ue_msgs__srv__SpawnWorld_Response__are_equal(const ue_msgs__srv__SpawnWorld_Response * lhs, const ue_msgs__srv__SpawnWorld_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // status_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_message), &(rhs->status_message)))
  {
    return false;
  }
  return true;
}

bool
ue_msgs__srv__SpawnWorld_Response__copy(
  const ue_msgs__srv__SpawnWorld_Response * input,
  ue_msgs__srv__SpawnWorld_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // status_message
  if (!rosidl_runtime_c__String__copy(
      &(input->status_message), &(output->status_message)))
  {
    return false;
  }
  return true;
}

ue_msgs__srv__SpawnWorld_Response *
ue_msgs__srv__SpawnWorld_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SpawnWorld_Response * msg = (ue_msgs__srv__SpawnWorld_Response *)allocator.allocate(sizeof(ue_msgs__srv__SpawnWorld_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__srv__SpawnWorld_Response));
  bool success = ue_msgs__srv__SpawnWorld_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ue_msgs__srv__SpawnWorld_Response__destroy(ue_msgs__srv__SpawnWorld_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ue_msgs__srv__SpawnWorld_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ue_msgs__srv__SpawnWorld_Response__Sequence__init(ue_msgs__srv__SpawnWorld_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SpawnWorld_Response * data = NULL;

  if (size) {
    data = (ue_msgs__srv__SpawnWorld_Response *)allocator.zero_allocate(size, sizeof(ue_msgs__srv__SpawnWorld_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__srv__SpawnWorld_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__srv__SpawnWorld_Response__fini(&data[i - 1]);
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
ue_msgs__srv__SpawnWorld_Response__Sequence__fini(ue_msgs__srv__SpawnWorld_Response__Sequence * array)
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
      ue_msgs__srv__SpawnWorld_Response__fini(&array->data[i]);
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

ue_msgs__srv__SpawnWorld_Response__Sequence *
ue_msgs__srv__SpawnWorld_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SpawnWorld_Response__Sequence * array = (ue_msgs__srv__SpawnWorld_Response__Sequence *)allocator.allocate(sizeof(ue_msgs__srv__SpawnWorld_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__srv__SpawnWorld_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ue_msgs__srv__SpawnWorld_Response__Sequence__destroy(ue_msgs__srv__SpawnWorld_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ue_msgs__srv__SpawnWorld_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ue_msgs__srv__SpawnWorld_Response__Sequence__are_equal(const ue_msgs__srv__SpawnWorld_Response__Sequence * lhs, const ue_msgs__srv__SpawnWorld_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ue_msgs__srv__SpawnWorld_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ue_msgs__srv__SpawnWorld_Response__Sequence__copy(
  const ue_msgs__srv__SpawnWorld_Response__Sequence * input,
  ue_msgs__srv__SpawnWorld_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ue_msgs__srv__SpawnWorld_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ue_msgs__srv__SpawnWorld_Response * data =
      (ue_msgs__srv__SpawnWorld_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ue_msgs__srv__SpawnWorld_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ue_msgs__srv__SpawnWorld_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ue_msgs__srv__SpawnWorld_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
