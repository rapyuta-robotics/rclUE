// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simulation_interfaces:msg/SimulatorFeatures.idl
// generated code does not contain a copyright notice
#include "simulation_interfaces/msg/detail/simulator_features__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `features`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `spawn_formats`
// Member `custom_info`
#include "rosidl_runtime_c/string_functions.h"

bool
simulation_interfaces__msg__SimulatorFeatures__init(simulation_interfaces__msg__SimulatorFeatures * msg)
{
  if (!msg) {
    return false;
  }
  // features
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->features, 0)) {
    simulation_interfaces__msg__SimulatorFeatures__fini(msg);
    return false;
  }
  // spawn_formats
  if (!rosidl_runtime_c__String__Sequence__init(&msg->spawn_formats, 0)) {
    simulation_interfaces__msg__SimulatorFeatures__fini(msg);
    return false;
  }
  // custom_info
  if (!rosidl_runtime_c__String__init(&msg->custom_info)) {
    simulation_interfaces__msg__SimulatorFeatures__fini(msg);
    return false;
  }
  return true;
}

void
simulation_interfaces__msg__SimulatorFeatures__fini(simulation_interfaces__msg__SimulatorFeatures * msg)
{
  if (!msg) {
    return;
  }
  // features
  rosidl_runtime_c__uint16__Sequence__fini(&msg->features);
  // spawn_formats
  rosidl_runtime_c__String__Sequence__fini(&msg->spawn_formats);
  // custom_info
  rosidl_runtime_c__String__fini(&msg->custom_info);
}

bool
simulation_interfaces__msg__SimulatorFeatures__are_equal(const simulation_interfaces__msg__SimulatorFeatures * lhs, const simulation_interfaces__msg__SimulatorFeatures * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // features
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->features), &(rhs->features)))
  {
    return false;
  }
  // spawn_formats
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->spawn_formats), &(rhs->spawn_formats)))
  {
    return false;
  }
  // custom_info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->custom_info), &(rhs->custom_info)))
  {
    return false;
  }
  return true;
}

bool
simulation_interfaces__msg__SimulatorFeatures__copy(
  const simulation_interfaces__msg__SimulatorFeatures * input,
  simulation_interfaces__msg__SimulatorFeatures * output)
{
  if (!input || !output) {
    return false;
  }
  // features
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->features), &(output->features)))
  {
    return false;
  }
  // spawn_formats
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->spawn_formats), &(output->spawn_formats)))
  {
    return false;
  }
  // custom_info
  if (!rosidl_runtime_c__String__copy(
      &(input->custom_info), &(output->custom_info)))
  {
    return false;
  }
  return true;
}

simulation_interfaces__msg__SimulatorFeatures *
simulation_interfaces__msg__SimulatorFeatures__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__SimulatorFeatures * msg = (simulation_interfaces__msg__SimulatorFeatures *)allocator.allocate(sizeof(simulation_interfaces__msg__SimulatorFeatures), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simulation_interfaces__msg__SimulatorFeatures));
  bool success = simulation_interfaces__msg__SimulatorFeatures__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simulation_interfaces__msg__SimulatorFeatures__destroy(simulation_interfaces__msg__SimulatorFeatures * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simulation_interfaces__msg__SimulatorFeatures__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simulation_interfaces__msg__SimulatorFeatures__Sequence__init(simulation_interfaces__msg__SimulatorFeatures__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__SimulatorFeatures * data = NULL;

  if (size) {
    data = (simulation_interfaces__msg__SimulatorFeatures *)allocator.zero_allocate(size, sizeof(simulation_interfaces__msg__SimulatorFeatures), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simulation_interfaces__msg__SimulatorFeatures__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simulation_interfaces__msg__SimulatorFeatures__fini(&data[i - 1]);
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
simulation_interfaces__msg__SimulatorFeatures__Sequence__fini(simulation_interfaces__msg__SimulatorFeatures__Sequence * array)
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
      simulation_interfaces__msg__SimulatorFeatures__fini(&array->data[i]);
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

simulation_interfaces__msg__SimulatorFeatures__Sequence *
simulation_interfaces__msg__SimulatorFeatures__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__SimulatorFeatures__Sequence * array = (simulation_interfaces__msg__SimulatorFeatures__Sequence *)allocator.allocate(sizeof(simulation_interfaces__msg__SimulatorFeatures__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simulation_interfaces__msg__SimulatorFeatures__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simulation_interfaces__msg__SimulatorFeatures__Sequence__destroy(simulation_interfaces__msg__SimulatorFeatures__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simulation_interfaces__msg__SimulatorFeatures__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simulation_interfaces__msg__SimulatorFeatures__Sequence__are_equal(const simulation_interfaces__msg__SimulatorFeatures__Sequence * lhs, const simulation_interfaces__msg__SimulatorFeatures__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simulation_interfaces__msg__SimulatorFeatures__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simulation_interfaces__msg__SimulatorFeatures__Sequence__copy(
  const simulation_interfaces__msg__SimulatorFeatures__Sequence * input,
  simulation_interfaces__msg__SimulatorFeatures__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simulation_interfaces__msg__SimulatorFeatures);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simulation_interfaces__msg__SimulatorFeatures * data =
      (simulation_interfaces__msg__SimulatorFeatures *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simulation_interfaces__msg__SimulatorFeatures__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simulation_interfaces__msg__SimulatorFeatures__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simulation_interfaces__msg__SimulatorFeatures__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
