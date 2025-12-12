// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simulation_interfaces:srv/SetEntityState.idl
// generated code does not contain a copyright notice
#include "simulation_interfaces/srv/detail/set_entity_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `entity`
#include "rosidl_runtime_c/string_functions.h"
// Member `state`
#include "simulation_interfaces/msg/detail/entity_state__functions.h"

bool
simulation_interfaces__srv__SetEntityState_Request__init(simulation_interfaces__srv__SetEntityState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // entity
  if (!rosidl_runtime_c__String__init(&msg->entity)) {
    simulation_interfaces__srv__SetEntityState_Request__fini(msg);
    return false;
  }
  // state
  if (!simulation_interfaces__msg__EntityState__init(&msg->state)) {
    simulation_interfaces__srv__SetEntityState_Request__fini(msg);
    return false;
  }
  // set_pose
  // set_twist
  // set_acceleration
  return true;
}

void
simulation_interfaces__srv__SetEntityState_Request__fini(simulation_interfaces__srv__SetEntityState_Request * msg)
{
  if (!msg) {
    return;
  }
  // entity
  rosidl_runtime_c__String__fini(&msg->entity);
  // state
  simulation_interfaces__msg__EntityState__fini(&msg->state);
  // set_pose
  // set_twist
  // set_acceleration
}

bool
simulation_interfaces__srv__SetEntityState_Request__are_equal(const simulation_interfaces__srv__SetEntityState_Request * lhs, const simulation_interfaces__srv__SetEntityState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // entity
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->entity), &(rhs->entity)))
  {
    return false;
  }
  // state
  if (!simulation_interfaces__msg__EntityState__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // set_pose
  if (lhs->set_pose != rhs->set_pose) {
    return false;
  }
  // set_twist
  if (lhs->set_twist != rhs->set_twist) {
    return false;
  }
  // set_acceleration
  if (lhs->set_acceleration != rhs->set_acceleration) {
    return false;
  }
  return true;
}

bool
simulation_interfaces__srv__SetEntityState_Request__copy(
  const simulation_interfaces__srv__SetEntityState_Request * input,
  simulation_interfaces__srv__SetEntityState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // entity
  if (!rosidl_runtime_c__String__copy(
      &(input->entity), &(output->entity)))
  {
    return false;
  }
  // state
  if (!simulation_interfaces__msg__EntityState__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // set_pose
  output->set_pose = input->set_pose;
  // set_twist
  output->set_twist = input->set_twist;
  // set_acceleration
  output->set_acceleration = input->set_acceleration;
  return true;
}

simulation_interfaces__srv__SetEntityState_Request *
simulation_interfaces__srv__SetEntityState_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__SetEntityState_Request * msg = (simulation_interfaces__srv__SetEntityState_Request *)allocator.allocate(sizeof(simulation_interfaces__srv__SetEntityState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simulation_interfaces__srv__SetEntityState_Request));
  bool success = simulation_interfaces__srv__SetEntityState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simulation_interfaces__srv__SetEntityState_Request__destroy(simulation_interfaces__srv__SetEntityState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simulation_interfaces__srv__SetEntityState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simulation_interfaces__srv__SetEntityState_Request__Sequence__init(simulation_interfaces__srv__SetEntityState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__SetEntityState_Request * data = NULL;

  if (size) {
    data = (simulation_interfaces__srv__SetEntityState_Request *)allocator.zero_allocate(size, sizeof(simulation_interfaces__srv__SetEntityState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simulation_interfaces__srv__SetEntityState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simulation_interfaces__srv__SetEntityState_Request__fini(&data[i - 1]);
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
simulation_interfaces__srv__SetEntityState_Request__Sequence__fini(simulation_interfaces__srv__SetEntityState_Request__Sequence * array)
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
      simulation_interfaces__srv__SetEntityState_Request__fini(&array->data[i]);
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

simulation_interfaces__srv__SetEntityState_Request__Sequence *
simulation_interfaces__srv__SetEntityState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__SetEntityState_Request__Sequence * array = (simulation_interfaces__srv__SetEntityState_Request__Sequence *)allocator.allocate(sizeof(simulation_interfaces__srv__SetEntityState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simulation_interfaces__srv__SetEntityState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simulation_interfaces__srv__SetEntityState_Request__Sequence__destroy(simulation_interfaces__srv__SetEntityState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simulation_interfaces__srv__SetEntityState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simulation_interfaces__srv__SetEntityState_Request__Sequence__are_equal(const simulation_interfaces__srv__SetEntityState_Request__Sequence * lhs, const simulation_interfaces__srv__SetEntityState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simulation_interfaces__srv__SetEntityState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simulation_interfaces__srv__SetEntityState_Request__Sequence__copy(
  const simulation_interfaces__srv__SetEntityState_Request__Sequence * input,
  simulation_interfaces__srv__SetEntityState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simulation_interfaces__srv__SetEntityState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simulation_interfaces__srv__SetEntityState_Request * data =
      (simulation_interfaces__srv__SetEntityState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simulation_interfaces__srv__SetEntityState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simulation_interfaces__srv__SetEntityState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simulation_interfaces__srv__SetEntityState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
#include "simulation_interfaces/msg/detail/result__functions.h"

bool
simulation_interfaces__srv__SetEntityState_Response__init(simulation_interfaces__srv__SetEntityState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!simulation_interfaces__msg__Result__init(&msg->result)) {
    simulation_interfaces__srv__SetEntityState_Response__fini(msg);
    return false;
  }
  return true;
}

void
simulation_interfaces__srv__SetEntityState_Response__fini(simulation_interfaces__srv__SetEntityState_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  simulation_interfaces__msg__Result__fini(&msg->result);
}

bool
simulation_interfaces__srv__SetEntityState_Response__are_equal(const simulation_interfaces__srv__SetEntityState_Response * lhs, const simulation_interfaces__srv__SetEntityState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!simulation_interfaces__msg__Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
simulation_interfaces__srv__SetEntityState_Response__copy(
  const simulation_interfaces__srv__SetEntityState_Response * input,
  simulation_interfaces__srv__SetEntityState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!simulation_interfaces__msg__Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

simulation_interfaces__srv__SetEntityState_Response *
simulation_interfaces__srv__SetEntityState_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__SetEntityState_Response * msg = (simulation_interfaces__srv__SetEntityState_Response *)allocator.allocate(sizeof(simulation_interfaces__srv__SetEntityState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simulation_interfaces__srv__SetEntityState_Response));
  bool success = simulation_interfaces__srv__SetEntityState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simulation_interfaces__srv__SetEntityState_Response__destroy(simulation_interfaces__srv__SetEntityState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simulation_interfaces__srv__SetEntityState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simulation_interfaces__srv__SetEntityState_Response__Sequence__init(simulation_interfaces__srv__SetEntityState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__SetEntityState_Response * data = NULL;

  if (size) {
    data = (simulation_interfaces__srv__SetEntityState_Response *)allocator.zero_allocate(size, sizeof(simulation_interfaces__srv__SetEntityState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simulation_interfaces__srv__SetEntityState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simulation_interfaces__srv__SetEntityState_Response__fini(&data[i - 1]);
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
simulation_interfaces__srv__SetEntityState_Response__Sequence__fini(simulation_interfaces__srv__SetEntityState_Response__Sequence * array)
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
      simulation_interfaces__srv__SetEntityState_Response__fini(&array->data[i]);
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

simulation_interfaces__srv__SetEntityState_Response__Sequence *
simulation_interfaces__srv__SetEntityState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__SetEntityState_Response__Sequence * array = (simulation_interfaces__srv__SetEntityState_Response__Sequence *)allocator.allocate(sizeof(simulation_interfaces__srv__SetEntityState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simulation_interfaces__srv__SetEntityState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simulation_interfaces__srv__SetEntityState_Response__Sequence__destroy(simulation_interfaces__srv__SetEntityState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simulation_interfaces__srv__SetEntityState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simulation_interfaces__srv__SetEntityState_Response__Sequence__are_equal(const simulation_interfaces__srv__SetEntityState_Response__Sequence * lhs, const simulation_interfaces__srv__SetEntityState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simulation_interfaces__srv__SetEntityState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simulation_interfaces__srv__SetEntityState_Response__Sequence__copy(
  const simulation_interfaces__srv__SetEntityState_Response__Sequence * input,
  simulation_interfaces__srv__SetEntityState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simulation_interfaces__srv__SetEntityState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simulation_interfaces__srv__SetEntityState_Response * data =
      (simulation_interfaces__srv__SetEntityState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simulation_interfaces__srv__SetEntityState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simulation_interfaces__srv__SetEntityState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simulation_interfaces__srv__SetEntityState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
