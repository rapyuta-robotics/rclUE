// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simulation_interfaces:msg/EntityInfo.idl
// generated code does not contain a copyright notice
#include "simulation_interfaces/msg/detail/entity_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `category`
#include "simulation_interfaces/msg/detail/entity_category__functions.h"
// Member `description`
// Member `tags`
#include "rosidl_runtime_c/string_functions.h"

bool
simulation_interfaces__msg__EntityInfo__init(simulation_interfaces__msg__EntityInfo * msg)
{
  if (!msg) {
    return false;
  }
  // category
  if (!simulation_interfaces__msg__EntityCategory__init(&msg->category)) {
    simulation_interfaces__msg__EntityInfo__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    simulation_interfaces__msg__EntityInfo__fini(msg);
    return false;
  }
  // tags
  if (!rosidl_runtime_c__String__Sequence__init(&msg->tags, 0)) {
    simulation_interfaces__msg__EntityInfo__fini(msg);
    return false;
  }
  return true;
}

void
simulation_interfaces__msg__EntityInfo__fini(simulation_interfaces__msg__EntityInfo * msg)
{
  if (!msg) {
    return;
  }
  // category
  simulation_interfaces__msg__EntityCategory__fini(&msg->category);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // tags
  rosidl_runtime_c__String__Sequence__fini(&msg->tags);
}

bool
simulation_interfaces__msg__EntityInfo__are_equal(const simulation_interfaces__msg__EntityInfo * lhs, const simulation_interfaces__msg__EntityInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // category
  if (!simulation_interfaces__msg__EntityCategory__are_equal(
      &(lhs->category), &(rhs->category)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
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
simulation_interfaces__msg__EntityInfo__copy(
  const simulation_interfaces__msg__EntityInfo * input,
  simulation_interfaces__msg__EntityInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // category
  if (!simulation_interfaces__msg__EntityCategory__copy(
      &(input->category), &(output->category)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
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

simulation_interfaces__msg__EntityInfo *
simulation_interfaces__msg__EntityInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__EntityInfo * msg = (simulation_interfaces__msg__EntityInfo *)allocator.allocate(sizeof(simulation_interfaces__msg__EntityInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simulation_interfaces__msg__EntityInfo));
  bool success = simulation_interfaces__msg__EntityInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simulation_interfaces__msg__EntityInfo__destroy(simulation_interfaces__msg__EntityInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simulation_interfaces__msg__EntityInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simulation_interfaces__msg__EntityInfo__Sequence__init(simulation_interfaces__msg__EntityInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__EntityInfo * data = NULL;

  if (size) {
    data = (simulation_interfaces__msg__EntityInfo *)allocator.zero_allocate(size, sizeof(simulation_interfaces__msg__EntityInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simulation_interfaces__msg__EntityInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simulation_interfaces__msg__EntityInfo__fini(&data[i - 1]);
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
simulation_interfaces__msg__EntityInfo__Sequence__fini(simulation_interfaces__msg__EntityInfo__Sequence * array)
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
      simulation_interfaces__msg__EntityInfo__fini(&array->data[i]);
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

simulation_interfaces__msg__EntityInfo__Sequence *
simulation_interfaces__msg__EntityInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__EntityInfo__Sequence * array = (simulation_interfaces__msg__EntityInfo__Sequence *)allocator.allocate(sizeof(simulation_interfaces__msg__EntityInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simulation_interfaces__msg__EntityInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simulation_interfaces__msg__EntityInfo__Sequence__destroy(simulation_interfaces__msg__EntityInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simulation_interfaces__msg__EntityInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simulation_interfaces__msg__EntityInfo__Sequence__are_equal(const simulation_interfaces__msg__EntityInfo__Sequence * lhs, const simulation_interfaces__msg__EntityInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simulation_interfaces__msg__EntityInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simulation_interfaces__msg__EntityInfo__Sequence__copy(
  const simulation_interfaces__msg__EntityInfo__Sequence * input,
  simulation_interfaces__msg__EntityInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simulation_interfaces__msg__EntityInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simulation_interfaces__msg__EntityInfo * data =
      (simulation_interfaces__msg__EntityInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simulation_interfaces__msg__EntityInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simulation_interfaces__msg__EntityInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simulation_interfaces__msg__EntityInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
