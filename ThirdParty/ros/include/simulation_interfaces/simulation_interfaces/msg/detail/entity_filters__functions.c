// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simulation_interfaces:msg/EntityFilters.idl
// generated code does not contain a copyright notice
#include "simulation_interfaces/msg/detail/entity_filters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `filter`
#include "rosidl_runtime_c/string_functions.h"
// Member `categories`
#include "simulation_interfaces/msg/detail/entity_category__functions.h"
// Member `tags`
#include "simulation_interfaces/msg/detail/tags_filter__functions.h"
// Member `bounds`
#include "simulation_interfaces/msg/detail/bounds__functions.h"

bool
simulation_interfaces__msg__EntityFilters__init(simulation_interfaces__msg__EntityFilters * msg)
{
  if (!msg) {
    return false;
  }
  // filter
  if (!rosidl_runtime_c__String__init(&msg->filter)) {
    simulation_interfaces__msg__EntityFilters__fini(msg);
    return false;
  }
  // categories
  if (!simulation_interfaces__msg__EntityCategory__Sequence__init(&msg->categories, 0)) {
    simulation_interfaces__msg__EntityFilters__fini(msg);
    return false;
  }
  // tags
  if (!simulation_interfaces__msg__TagsFilter__init(&msg->tags)) {
    simulation_interfaces__msg__EntityFilters__fini(msg);
    return false;
  }
  // bounds
  if (!simulation_interfaces__msg__Bounds__init(&msg->bounds)) {
    simulation_interfaces__msg__EntityFilters__fini(msg);
    return false;
  }
  return true;
}

void
simulation_interfaces__msg__EntityFilters__fini(simulation_interfaces__msg__EntityFilters * msg)
{
  if (!msg) {
    return;
  }
  // filter
  rosidl_runtime_c__String__fini(&msg->filter);
  // categories
  simulation_interfaces__msg__EntityCategory__Sequence__fini(&msg->categories);
  // tags
  simulation_interfaces__msg__TagsFilter__fini(&msg->tags);
  // bounds
  simulation_interfaces__msg__Bounds__fini(&msg->bounds);
}

bool
simulation_interfaces__msg__EntityFilters__are_equal(const simulation_interfaces__msg__EntityFilters * lhs, const simulation_interfaces__msg__EntityFilters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // filter
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->filter), &(rhs->filter)))
  {
    return false;
  }
  // categories
  if (!simulation_interfaces__msg__EntityCategory__Sequence__are_equal(
      &(lhs->categories), &(rhs->categories)))
  {
    return false;
  }
  // tags
  if (!simulation_interfaces__msg__TagsFilter__are_equal(
      &(lhs->tags), &(rhs->tags)))
  {
    return false;
  }
  // bounds
  if (!simulation_interfaces__msg__Bounds__are_equal(
      &(lhs->bounds), &(rhs->bounds)))
  {
    return false;
  }
  return true;
}

bool
simulation_interfaces__msg__EntityFilters__copy(
  const simulation_interfaces__msg__EntityFilters * input,
  simulation_interfaces__msg__EntityFilters * output)
{
  if (!input || !output) {
    return false;
  }
  // filter
  if (!rosidl_runtime_c__String__copy(
      &(input->filter), &(output->filter)))
  {
    return false;
  }
  // categories
  if (!simulation_interfaces__msg__EntityCategory__Sequence__copy(
      &(input->categories), &(output->categories)))
  {
    return false;
  }
  // tags
  if (!simulation_interfaces__msg__TagsFilter__copy(
      &(input->tags), &(output->tags)))
  {
    return false;
  }
  // bounds
  if (!simulation_interfaces__msg__Bounds__copy(
      &(input->bounds), &(output->bounds)))
  {
    return false;
  }
  return true;
}

simulation_interfaces__msg__EntityFilters *
simulation_interfaces__msg__EntityFilters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__EntityFilters * msg = (simulation_interfaces__msg__EntityFilters *)allocator.allocate(sizeof(simulation_interfaces__msg__EntityFilters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simulation_interfaces__msg__EntityFilters));
  bool success = simulation_interfaces__msg__EntityFilters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simulation_interfaces__msg__EntityFilters__destroy(simulation_interfaces__msg__EntityFilters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simulation_interfaces__msg__EntityFilters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simulation_interfaces__msg__EntityFilters__Sequence__init(simulation_interfaces__msg__EntityFilters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__EntityFilters * data = NULL;

  if (size) {
    data = (simulation_interfaces__msg__EntityFilters *)allocator.zero_allocate(size, sizeof(simulation_interfaces__msg__EntityFilters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simulation_interfaces__msg__EntityFilters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simulation_interfaces__msg__EntityFilters__fini(&data[i - 1]);
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
simulation_interfaces__msg__EntityFilters__Sequence__fini(simulation_interfaces__msg__EntityFilters__Sequence * array)
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
      simulation_interfaces__msg__EntityFilters__fini(&array->data[i]);
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

simulation_interfaces__msg__EntityFilters__Sequence *
simulation_interfaces__msg__EntityFilters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__EntityFilters__Sequence * array = (simulation_interfaces__msg__EntityFilters__Sequence *)allocator.allocate(sizeof(simulation_interfaces__msg__EntityFilters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simulation_interfaces__msg__EntityFilters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simulation_interfaces__msg__EntityFilters__Sequence__destroy(simulation_interfaces__msg__EntityFilters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simulation_interfaces__msg__EntityFilters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simulation_interfaces__msg__EntityFilters__Sequence__are_equal(const simulation_interfaces__msg__EntityFilters__Sequence * lhs, const simulation_interfaces__msg__EntityFilters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simulation_interfaces__msg__EntityFilters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simulation_interfaces__msg__EntityFilters__Sequence__copy(
  const simulation_interfaces__msg__EntityFilters__Sequence * input,
  simulation_interfaces__msg__EntityFilters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simulation_interfaces__msg__EntityFilters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simulation_interfaces__msg__EntityFilters * data =
      (simulation_interfaces__msg__EntityFilters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simulation_interfaces__msg__EntityFilters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simulation_interfaces__msg__EntityFilters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simulation_interfaces__msg__EntityFilters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
