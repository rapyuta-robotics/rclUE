// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ue_msgs:srv/SpawnEntity.idl
// generated code does not contain a copyright notice
#include "ue_msgs/srv/detail/spawn_entity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `xml`
// Member `robot_namespace`
// Member `tags`
// Member `json_parameters`
#include "rosidl_runtime_c/string_functions.h"
// Member `state`
#include "ue_msgs/msg/detail/entity_state__functions.h"

bool
ue_msgs__srv__SpawnEntity_Request__init(ue_msgs__srv__SpawnEntity_Request * msg)
{
  if (!msg) {
    return false;
  }
  // xml
  if (!rosidl_runtime_c__String__init(&msg->xml)) {
    ue_msgs__srv__SpawnEntity_Request__fini(msg);
    return false;
  }
  // robot_namespace
  if (!rosidl_runtime_c__String__init(&msg->robot_namespace)) {
    ue_msgs__srv__SpawnEntity_Request__fini(msg);
    return false;
  }
  // state
  if (!ue_msgs__msg__EntityState__init(&msg->state)) {
    ue_msgs__srv__SpawnEntity_Request__fini(msg);
    return false;
  }
  // tags
  if (!rosidl_runtime_c__String__Sequence__init(&msg->tags, 0)) {
    ue_msgs__srv__SpawnEntity_Request__fini(msg);
    return false;
  }
  // json_parameters
  if (!rosidl_runtime_c__String__init(&msg->json_parameters)) {
    ue_msgs__srv__SpawnEntity_Request__fini(msg);
    return false;
  }
  return true;
}

void
ue_msgs__srv__SpawnEntity_Request__fini(ue_msgs__srv__SpawnEntity_Request * msg)
{
  if (!msg) {
    return;
  }
  // xml
  rosidl_runtime_c__String__fini(&msg->xml);
  // robot_namespace
  rosidl_runtime_c__String__fini(&msg->robot_namespace);
  // state
  ue_msgs__msg__EntityState__fini(&msg->state);
  // tags
  rosidl_runtime_c__String__Sequence__fini(&msg->tags);
  // json_parameters
  rosidl_runtime_c__String__fini(&msg->json_parameters);
}

bool
ue_msgs__srv__SpawnEntity_Request__are_equal(const ue_msgs__srv__SpawnEntity_Request * lhs, const ue_msgs__srv__SpawnEntity_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // xml
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->xml), &(rhs->xml)))
  {
    return false;
  }
  // robot_namespace
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_namespace), &(rhs->robot_namespace)))
  {
    return false;
  }
  // state
  if (!ue_msgs__msg__EntityState__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // tags
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->tags), &(rhs->tags)))
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
ue_msgs__srv__SpawnEntity_Request__copy(
  const ue_msgs__srv__SpawnEntity_Request * input,
  ue_msgs__srv__SpawnEntity_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // xml
  if (!rosidl_runtime_c__String__copy(
      &(input->xml), &(output->xml)))
  {
    return false;
  }
  // robot_namespace
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_namespace), &(output->robot_namespace)))
  {
    return false;
  }
  // state
  if (!ue_msgs__msg__EntityState__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // tags
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->tags), &(output->tags)))
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

ue_msgs__srv__SpawnEntity_Request *
ue_msgs__srv__SpawnEntity_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SpawnEntity_Request * msg = (ue_msgs__srv__SpawnEntity_Request *)allocator.allocate(sizeof(ue_msgs__srv__SpawnEntity_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__srv__SpawnEntity_Request));
  bool success = ue_msgs__srv__SpawnEntity_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ue_msgs__srv__SpawnEntity_Request__destroy(ue_msgs__srv__SpawnEntity_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ue_msgs__srv__SpawnEntity_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ue_msgs__srv__SpawnEntity_Request__Sequence__init(ue_msgs__srv__SpawnEntity_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SpawnEntity_Request * data = NULL;

  if (size) {
    data = (ue_msgs__srv__SpawnEntity_Request *)allocator.zero_allocate(size, sizeof(ue_msgs__srv__SpawnEntity_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__srv__SpawnEntity_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__srv__SpawnEntity_Request__fini(&data[i - 1]);
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
ue_msgs__srv__SpawnEntity_Request__Sequence__fini(ue_msgs__srv__SpawnEntity_Request__Sequence * array)
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
      ue_msgs__srv__SpawnEntity_Request__fini(&array->data[i]);
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

ue_msgs__srv__SpawnEntity_Request__Sequence *
ue_msgs__srv__SpawnEntity_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SpawnEntity_Request__Sequence * array = (ue_msgs__srv__SpawnEntity_Request__Sequence *)allocator.allocate(sizeof(ue_msgs__srv__SpawnEntity_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__srv__SpawnEntity_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ue_msgs__srv__SpawnEntity_Request__Sequence__destroy(ue_msgs__srv__SpawnEntity_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ue_msgs__srv__SpawnEntity_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ue_msgs__srv__SpawnEntity_Request__Sequence__are_equal(const ue_msgs__srv__SpawnEntity_Request__Sequence * lhs, const ue_msgs__srv__SpawnEntity_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ue_msgs__srv__SpawnEntity_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ue_msgs__srv__SpawnEntity_Request__Sequence__copy(
  const ue_msgs__srv__SpawnEntity_Request__Sequence * input,
  ue_msgs__srv__SpawnEntity_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ue_msgs__srv__SpawnEntity_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ue_msgs__srv__SpawnEntity_Request * data =
      (ue_msgs__srv__SpawnEntity_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ue_msgs__srv__SpawnEntity_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ue_msgs__srv__SpawnEntity_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ue_msgs__srv__SpawnEntity_Request__copy(
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
ue_msgs__srv__SpawnEntity_Response__init(ue_msgs__srv__SpawnEntity_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status_message
  if (!rosidl_runtime_c__String__init(&msg->status_message)) {
    ue_msgs__srv__SpawnEntity_Response__fini(msg);
    return false;
  }
  return true;
}

void
ue_msgs__srv__SpawnEntity_Response__fini(ue_msgs__srv__SpawnEntity_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status_message
  rosidl_runtime_c__String__fini(&msg->status_message);
}

bool
ue_msgs__srv__SpawnEntity_Response__are_equal(const ue_msgs__srv__SpawnEntity_Response * lhs, const ue_msgs__srv__SpawnEntity_Response * rhs)
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
ue_msgs__srv__SpawnEntity_Response__copy(
  const ue_msgs__srv__SpawnEntity_Response * input,
  ue_msgs__srv__SpawnEntity_Response * output)
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

ue_msgs__srv__SpawnEntity_Response *
ue_msgs__srv__SpawnEntity_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SpawnEntity_Response * msg = (ue_msgs__srv__SpawnEntity_Response *)allocator.allocate(sizeof(ue_msgs__srv__SpawnEntity_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__srv__SpawnEntity_Response));
  bool success = ue_msgs__srv__SpawnEntity_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ue_msgs__srv__SpawnEntity_Response__destroy(ue_msgs__srv__SpawnEntity_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ue_msgs__srv__SpawnEntity_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ue_msgs__srv__SpawnEntity_Response__Sequence__init(ue_msgs__srv__SpawnEntity_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SpawnEntity_Response * data = NULL;

  if (size) {
    data = (ue_msgs__srv__SpawnEntity_Response *)allocator.zero_allocate(size, sizeof(ue_msgs__srv__SpawnEntity_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__srv__SpawnEntity_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__srv__SpawnEntity_Response__fini(&data[i - 1]);
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
ue_msgs__srv__SpawnEntity_Response__Sequence__fini(ue_msgs__srv__SpawnEntity_Response__Sequence * array)
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
      ue_msgs__srv__SpawnEntity_Response__fini(&array->data[i]);
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

ue_msgs__srv__SpawnEntity_Response__Sequence *
ue_msgs__srv__SpawnEntity_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__srv__SpawnEntity_Response__Sequence * array = (ue_msgs__srv__SpawnEntity_Response__Sequence *)allocator.allocate(sizeof(ue_msgs__srv__SpawnEntity_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__srv__SpawnEntity_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ue_msgs__srv__SpawnEntity_Response__Sequence__destroy(ue_msgs__srv__SpawnEntity_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ue_msgs__srv__SpawnEntity_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ue_msgs__srv__SpawnEntity_Response__Sequence__are_equal(const ue_msgs__srv__SpawnEntity_Response__Sequence * lhs, const ue_msgs__srv__SpawnEntity_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ue_msgs__srv__SpawnEntity_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ue_msgs__srv__SpawnEntity_Response__Sequence__copy(
  const ue_msgs__srv__SpawnEntity_Response__Sequence * input,
  ue_msgs__srv__SpawnEntity_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ue_msgs__srv__SpawnEntity_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ue_msgs__srv__SpawnEntity_Response * data =
      (ue_msgs__srv__SpawnEntity_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ue_msgs__srv__SpawnEntity_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ue_msgs__srv__SpawnEntity_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ue_msgs__srv__SpawnEntity_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
