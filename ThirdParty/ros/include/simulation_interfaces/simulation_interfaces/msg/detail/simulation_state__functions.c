// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simulation_interfaces:msg/SimulationState.idl
// generated code does not contain a copyright notice
#include "simulation_interfaces/msg/detail/simulation_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
simulation_interfaces__msg__SimulationState__init(simulation_interfaces__msg__SimulationState * msg)
{
  if (!msg) {
    return false;
  }
  // state
  return true;
}

void
simulation_interfaces__msg__SimulationState__fini(simulation_interfaces__msg__SimulationState * msg)
{
  if (!msg) {
    return;
  }
  // state
}

bool
simulation_interfaces__msg__SimulationState__are_equal(const simulation_interfaces__msg__SimulationState * lhs, const simulation_interfaces__msg__SimulationState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
simulation_interfaces__msg__SimulationState__copy(
  const simulation_interfaces__msg__SimulationState * input,
  simulation_interfaces__msg__SimulationState * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  return true;
}

simulation_interfaces__msg__SimulationState *
simulation_interfaces__msg__SimulationState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__SimulationState * msg = (simulation_interfaces__msg__SimulationState *)allocator.allocate(sizeof(simulation_interfaces__msg__SimulationState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simulation_interfaces__msg__SimulationState));
  bool success = simulation_interfaces__msg__SimulationState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simulation_interfaces__msg__SimulationState__destroy(simulation_interfaces__msg__SimulationState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simulation_interfaces__msg__SimulationState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simulation_interfaces__msg__SimulationState__Sequence__init(simulation_interfaces__msg__SimulationState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__SimulationState * data = NULL;

  if (size) {
    data = (simulation_interfaces__msg__SimulationState *)allocator.zero_allocate(size, sizeof(simulation_interfaces__msg__SimulationState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simulation_interfaces__msg__SimulationState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simulation_interfaces__msg__SimulationState__fini(&data[i - 1]);
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
simulation_interfaces__msg__SimulationState__Sequence__fini(simulation_interfaces__msg__SimulationState__Sequence * array)
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
      simulation_interfaces__msg__SimulationState__fini(&array->data[i]);
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

simulation_interfaces__msg__SimulationState__Sequence *
simulation_interfaces__msg__SimulationState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__SimulationState__Sequence * array = (simulation_interfaces__msg__SimulationState__Sequence *)allocator.allocate(sizeof(simulation_interfaces__msg__SimulationState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simulation_interfaces__msg__SimulationState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simulation_interfaces__msg__SimulationState__Sequence__destroy(simulation_interfaces__msg__SimulationState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simulation_interfaces__msg__SimulationState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simulation_interfaces__msg__SimulationState__Sequence__are_equal(const simulation_interfaces__msg__SimulationState__Sequence * lhs, const simulation_interfaces__msg__SimulationState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simulation_interfaces__msg__SimulationState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simulation_interfaces__msg__SimulationState__Sequence__copy(
  const simulation_interfaces__msg__SimulationState__Sequence * input,
  simulation_interfaces__msg__SimulationState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simulation_interfaces__msg__SimulationState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simulation_interfaces__msg__SimulationState * data =
      (simulation_interfaces__msg__SimulationState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simulation_interfaces__msg__SimulationState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simulation_interfaces__msg__SimulationState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simulation_interfaces__msg__SimulationState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
