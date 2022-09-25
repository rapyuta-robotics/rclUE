// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ue_msgs:srv/SpawnEntities.idl
// generated code does not contain a copyright notice
#include "ue_msgs/srv/detail/spawn_entities__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `type`
// Member `tags`
#include "rosidl_runtime_c/string_functions.h"
// Member `state`
#include "ue_msgs/msg/detail/entity_state__functions.h"

bool
ue_msgs__srv__SpawnEntities_Request__init(ue_msgs__srv__SpawnEntities_Request * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__Sequence__init(&msg->type, 0)) {
    ue_msgs__srv__SpawnEntities_Request__fini(msg);
    return false;
  }
  // state
  if (!ue_msgs__msg__EntityState__Sequence__init(&msg->state, 0)) {
    ue_msgs__srv__SpawnEntities_Request__fini(msg);
    return false;
  }
  // tags
  if (!rosidl_runtime_c__String__Sequence__init(&msg->tags, 0)) {
    ue_msgs__srv__SpawnEntities_Request__fini(msg);
    return false;
  }
  return true;
}

void
ue_msgs__srv__SpawnEntities_Request__fini(ue_msgs__srv__SpawnEntities_Request * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__Sequence__fini(&msg->type);
  // state
  ue_msgs__msg__EntityState__Sequence__fini(&msg->state);
  // tags
  rosidl_runtime_c__String__Sequence__fini(&msg->tags);
}

bool
ue_msgs__srv__SpawnEntities_Request__are_equal(const ue_msgs__srv__SpawnEntities_Request * lhs, const ue_msgs__srv__SpawnEntities_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // state
  if (!ue_msgs__msg__EntityState__Sequence__are_equal(
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
  return true;
}

bool
ue_msgs__srv__SpawnEntities_Request__copy(
  const ue_msgs__srv__SpawnEntities_Request * input,
  ue_msgs__srv__SpawnEntities_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // state
  if (!ue_msgs__msg__EntityState__Sequence__copy(
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
  return true;
}

ue_msgs__srv__SpawnEntities_Request *
ue_msgs__srv__SpawnEntities_Request__create()
{
  ue_msgs__srv__SpawnEntities_Request * msg = (ue_msgs__srv__SpawnEntities_Request *)malloc(sizeof(ue_msgs__srv__SpawnEntities_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__srv__SpawnEntities_Request));
  bool success = ue_msgs__srv__SpawnEntities_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ue_msgs__srv__SpawnEntities_Request__destroy(ue_msgs__srv__SpawnEntities_Request * msg)
{
  if (msg) {
    ue_msgs__srv__SpawnEntities_Request__fini(msg);
  }
  free(msg);
}


bool
ue_msgs__srv__SpawnEntities_Request__Sequence__init(ue_msgs__srv__SpawnEntities_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ue_msgs__srv__SpawnEntities_Request * data = NULL;
  if (size) {
    data = (ue_msgs__srv__SpawnEntities_Request *)calloc(size, sizeof(ue_msgs__srv__SpawnEntities_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__srv__SpawnEntities_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__srv__SpawnEntities_Request__fini(&data[i - 1]);
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
ue_msgs__srv__SpawnEntities_Request__Sequence__fini(ue_msgs__srv__SpawnEntities_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ue_msgs__srv__SpawnEntities_Request__fini(&array->data[i]);
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

ue_msgs__srv__SpawnEntities_Request__Sequence *
ue_msgs__srv__SpawnEntities_Request__Sequence__create(size_t size)
{
  ue_msgs__srv__SpawnEntities_Request__Sequence * array = (ue_msgs__srv__SpawnEntities_Request__Sequence *)malloc(sizeof(ue_msgs__srv__SpawnEntities_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__srv__SpawnEntities_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ue_msgs__srv__SpawnEntities_Request__Sequence__destroy(ue_msgs__srv__SpawnEntities_Request__Sequence * array)
{
  if (array) {
    ue_msgs__srv__SpawnEntities_Request__Sequence__fini(array);
  }
  free(array);
}

bool
ue_msgs__srv__SpawnEntities_Request__Sequence__are_equal(const ue_msgs__srv__SpawnEntities_Request__Sequence * lhs, const ue_msgs__srv__SpawnEntities_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ue_msgs__srv__SpawnEntities_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ue_msgs__srv__SpawnEntities_Request__Sequence__copy(
  const ue_msgs__srv__SpawnEntities_Request__Sequence * input,
  ue_msgs__srv__SpawnEntities_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ue_msgs__srv__SpawnEntities_Request);
    ue_msgs__srv__SpawnEntities_Request * data =
      (ue_msgs__srv__SpawnEntities_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ue_msgs__srv__SpawnEntities_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ue_msgs__srv__SpawnEntities_Request__fini(&data[i]);
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
    if (!ue_msgs__srv__SpawnEntities_Request__copy(
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
ue_msgs__srv__SpawnEntities_Response__init(ue_msgs__srv__SpawnEntities_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status_message
  if (!rosidl_runtime_c__String__init(&msg->status_message)) {
    ue_msgs__srv__SpawnEntities_Response__fini(msg);
    return false;
  }
  return true;
}

void
ue_msgs__srv__SpawnEntities_Response__fini(ue_msgs__srv__SpawnEntities_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status_message
  rosidl_runtime_c__String__fini(&msg->status_message);
}

bool
ue_msgs__srv__SpawnEntities_Response__are_equal(const ue_msgs__srv__SpawnEntities_Response * lhs, const ue_msgs__srv__SpawnEntities_Response * rhs)
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
ue_msgs__srv__SpawnEntities_Response__copy(
  const ue_msgs__srv__SpawnEntities_Response * input,
  ue_msgs__srv__SpawnEntities_Response * output)
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

ue_msgs__srv__SpawnEntities_Response *
ue_msgs__srv__SpawnEntities_Response__create()
{
  ue_msgs__srv__SpawnEntities_Response * msg = (ue_msgs__srv__SpawnEntities_Response *)malloc(sizeof(ue_msgs__srv__SpawnEntities_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__srv__SpawnEntities_Response));
  bool success = ue_msgs__srv__SpawnEntities_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ue_msgs__srv__SpawnEntities_Response__destroy(ue_msgs__srv__SpawnEntities_Response * msg)
{
  if (msg) {
    ue_msgs__srv__SpawnEntities_Response__fini(msg);
  }
  free(msg);
}


bool
ue_msgs__srv__SpawnEntities_Response__Sequence__init(ue_msgs__srv__SpawnEntities_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ue_msgs__srv__SpawnEntities_Response * data = NULL;
  if (size) {
    data = (ue_msgs__srv__SpawnEntities_Response *)calloc(size, sizeof(ue_msgs__srv__SpawnEntities_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__srv__SpawnEntities_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__srv__SpawnEntities_Response__fini(&data[i - 1]);
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
ue_msgs__srv__SpawnEntities_Response__Sequence__fini(ue_msgs__srv__SpawnEntities_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ue_msgs__srv__SpawnEntities_Response__fini(&array->data[i]);
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

ue_msgs__srv__SpawnEntities_Response__Sequence *
ue_msgs__srv__SpawnEntities_Response__Sequence__create(size_t size)
{
  ue_msgs__srv__SpawnEntities_Response__Sequence * array = (ue_msgs__srv__SpawnEntities_Response__Sequence *)malloc(sizeof(ue_msgs__srv__SpawnEntities_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__srv__SpawnEntities_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ue_msgs__srv__SpawnEntities_Response__Sequence__destroy(ue_msgs__srv__SpawnEntities_Response__Sequence * array)
{
  if (array) {
    ue_msgs__srv__SpawnEntities_Response__Sequence__fini(array);
  }
  free(array);
}

bool
ue_msgs__srv__SpawnEntities_Response__Sequence__are_equal(const ue_msgs__srv__SpawnEntities_Response__Sequence * lhs, const ue_msgs__srv__SpawnEntities_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ue_msgs__srv__SpawnEntities_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ue_msgs__srv__SpawnEntities_Response__Sequence__copy(
  const ue_msgs__srv__SpawnEntities_Response__Sequence * input,
  ue_msgs__srv__SpawnEntities_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ue_msgs__srv__SpawnEntities_Response);
    ue_msgs__srv__SpawnEntities_Response * data =
      (ue_msgs__srv__SpawnEntities_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ue_msgs__srv__SpawnEntities_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ue_msgs__srv__SpawnEntities_Response__fini(&data[i]);
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
    if (!ue_msgs__srv__SpawnEntities_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
