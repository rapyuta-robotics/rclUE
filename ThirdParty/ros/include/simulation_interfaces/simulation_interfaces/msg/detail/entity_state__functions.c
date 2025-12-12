// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simulation_interfaces:msg/EntityState.idl
// generated code does not contain a copyright notice
#include "simulation_interfaces/msg/detail/entity_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `acceleration`
#include "geometry_msgs/msg/detail/accel__functions.h"

bool
simulation_interfaces__msg__EntityState__init(simulation_interfaces__msg__EntityState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    simulation_interfaces__msg__EntityState__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    simulation_interfaces__msg__EntityState__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    simulation_interfaces__msg__EntityState__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__init(&msg->acceleration)) {
    simulation_interfaces__msg__EntityState__fini(msg);
    return false;
  }
  return true;
}

void
simulation_interfaces__msg__EntityState__fini(simulation_interfaces__msg__EntityState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // acceleration
  geometry_msgs__msg__Accel__fini(&msg->acceleration);
}

bool
simulation_interfaces__msg__EntityState__are_equal(const simulation_interfaces__msg__EntityState * lhs, const simulation_interfaces__msg__EntityState * rhs)
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
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  return true;
}

bool
simulation_interfaces__msg__EntityState__copy(
  const simulation_interfaces__msg__EntityState * input,
  simulation_interfaces__msg__EntityState * output)
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
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  return true;
}

simulation_interfaces__msg__EntityState *
simulation_interfaces__msg__EntityState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__EntityState * msg = (simulation_interfaces__msg__EntityState *)allocator.allocate(sizeof(simulation_interfaces__msg__EntityState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simulation_interfaces__msg__EntityState));
  bool success = simulation_interfaces__msg__EntityState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simulation_interfaces__msg__EntityState__destroy(simulation_interfaces__msg__EntityState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simulation_interfaces__msg__EntityState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simulation_interfaces__msg__EntityState__Sequence__init(simulation_interfaces__msg__EntityState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__EntityState * data = NULL;

  if (size) {
    data = (simulation_interfaces__msg__EntityState *)allocator.zero_allocate(size, sizeof(simulation_interfaces__msg__EntityState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simulation_interfaces__msg__EntityState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simulation_interfaces__msg__EntityState__fini(&data[i - 1]);
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
simulation_interfaces__msg__EntityState__Sequence__fini(simulation_interfaces__msg__EntityState__Sequence * array)
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
      simulation_interfaces__msg__EntityState__fini(&array->data[i]);
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

simulation_interfaces__msg__EntityState__Sequence *
simulation_interfaces__msg__EntityState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__EntityState__Sequence * array = (simulation_interfaces__msg__EntityState__Sequence *)allocator.allocate(sizeof(simulation_interfaces__msg__EntityState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simulation_interfaces__msg__EntityState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simulation_interfaces__msg__EntityState__Sequence__destroy(simulation_interfaces__msg__EntityState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simulation_interfaces__msg__EntityState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simulation_interfaces__msg__EntityState__Sequence__are_equal(const simulation_interfaces__msg__EntityState__Sequence * lhs, const simulation_interfaces__msg__EntityState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simulation_interfaces__msg__EntityState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simulation_interfaces__msg__EntityState__Sequence__copy(
  const simulation_interfaces__msg__EntityState__Sequence * input,
  simulation_interfaces__msg__EntityState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simulation_interfaces__msg__EntityState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simulation_interfaces__msg__EntityState * data =
      (simulation_interfaces__msg__EntityState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simulation_interfaces__msg__EntityState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simulation_interfaces__msg__EntityState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simulation_interfaces__msg__EntityState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
