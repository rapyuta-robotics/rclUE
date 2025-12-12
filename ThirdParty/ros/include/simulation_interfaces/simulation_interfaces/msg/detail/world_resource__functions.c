// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simulation_interfaces:msg/WorldResource.idl
// generated code does not contain a copyright notice
#include "simulation_interfaces/msg/detail/world_resource__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `description`
// Member `tags`
#include "rosidl_runtime_c/string_functions.h"
// Member `world_resource`
#include "simulation_interfaces/msg/detail/resource__functions.h"

bool
simulation_interfaces__msg__WorldResource__init(simulation_interfaces__msg__WorldResource * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    simulation_interfaces__msg__WorldResource__fini(msg);
    return false;
  }
  // world_resource
  if (!simulation_interfaces__msg__Resource__init(&msg->world_resource)) {
    simulation_interfaces__msg__WorldResource__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    simulation_interfaces__msg__WorldResource__fini(msg);
    return false;
  }
  // tags
  if (!rosidl_runtime_c__String__Sequence__init(&msg->tags, 0)) {
    simulation_interfaces__msg__WorldResource__fini(msg);
    return false;
  }
  return true;
}

void
simulation_interfaces__msg__WorldResource__fini(simulation_interfaces__msg__WorldResource * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // world_resource
  simulation_interfaces__msg__Resource__fini(&msg->world_resource);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // tags
  rosidl_runtime_c__String__Sequence__fini(&msg->tags);
}

bool
simulation_interfaces__msg__WorldResource__are_equal(const simulation_interfaces__msg__WorldResource * lhs, const simulation_interfaces__msg__WorldResource * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // world_resource
  if (!simulation_interfaces__msg__Resource__are_equal(
      &(lhs->world_resource), &(rhs->world_resource)))
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
simulation_interfaces__msg__WorldResource__copy(
  const simulation_interfaces__msg__WorldResource * input,
  simulation_interfaces__msg__WorldResource * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // world_resource
  if (!simulation_interfaces__msg__Resource__copy(
      &(input->world_resource), &(output->world_resource)))
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

simulation_interfaces__msg__WorldResource *
simulation_interfaces__msg__WorldResource__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__WorldResource * msg = (simulation_interfaces__msg__WorldResource *)allocator.allocate(sizeof(simulation_interfaces__msg__WorldResource), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simulation_interfaces__msg__WorldResource));
  bool success = simulation_interfaces__msg__WorldResource__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simulation_interfaces__msg__WorldResource__destroy(simulation_interfaces__msg__WorldResource * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simulation_interfaces__msg__WorldResource__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simulation_interfaces__msg__WorldResource__Sequence__init(simulation_interfaces__msg__WorldResource__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__WorldResource * data = NULL;

  if (size) {
    data = (simulation_interfaces__msg__WorldResource *)allocator.zero_allocate(size, sizeof(simulation_interfaces__msg__WorldResource), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simulation_interfaces__msg__WorldResource__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simulation_interfaces__msg__WorldResource__fini(&data[i - 1]);
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
simulation_interfaces__msg__WorldResource__Sequence__fini(simulation_interfaces__msg__WorldResource__Sequence * array)
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
      simulation_interfaces__msg__WorldResource__fini(&array->data[i]);
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

simulation_interfaces__msg__WorldResource__Sequence *
simulation_interfaces__msg__WorldResource__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__msg__WorldResource__Sequence * array = (simulation_interfaces__msg__WorldResource__Sequence *)allocator.allocate(sizeof(simulation_interfaces__msg__WorldResource__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simulation_interfaces__msg__WorldResource__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simulation_interfaces__msg__WorldResource__Sequence__destroy(simulation_interfaces__msg__WorldResource__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simulation_interfaces__msg__WorldResource__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simulation_interfaces__msg__WorldResource__Sequence__are_equal(const simulation_interfaces__msg__WorldResource__Sequence * lhs, const simulation_interfaces__msg__WorldResource__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simulation_interfaces__msg__WorldResource__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simulation_interfaces__msg__WorldResource__Sequence__copy(
  const simulation_interfaces__msg__WorldResource__Sequence * input,
  simulation_interfaces__msg__WorldResource__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simulation_interfaces__msg__WorldResource);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simulation_interfaces__msg__WorldResource * data =
      (simulation_interfaces__msg__WorldResource *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simulation_interfaces__msg__WorldResource__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simulation_interfaces__msg__WorldResource__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simulation_interfaces__msg__WorldResource__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
