// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simulation_interfaces:srv/GetAvailableWorlds.idl
// generated code does not contain a copyright notice
#include "simulation_interfaces/srv/detail/get_available_worlds__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `additional_sources`
#include "rosidl_runtime_c/string_functions.h"
// Member `filter`
#include "simulation_interfaces/msg/detail/tags_filter__functions.h"

bool
simulation_interfaces__srv__GetAvailableWorlds_Request__init(simulation_interfaces__srv__GetAvailableWorlds_Request * msg)
{
  if (!msg) {
    return false;
  }
  // additional_sources
  if (!rosidl_runtime_c__String__Sequence__init(&msg->additional_sources, 0)) {
    simulation_interfaces__srv__GetAvailableWorlds_Request__fini(msg);
    return false;
  }
  // filter
  if (!simulation_interfaces__msg__TagsFilter__init(&msg->filter)) {
    simulation_interfaces__srv__GetAvailableWorlds_Request__fini(msg);
    return false;
  }
  // offline_only
  // continue_on_error
  return true;
}

void
simulation_interfaces__srv__GetAvailableWorlds_Request__fini(simulation_interfaces__srv__GetAvailableWorlds_Request * msg)
{
  if (!msg) {
    return;
  }
  // additional_sources
  rosidl_runtime_c__String__Sequence__fini(&msg->additional_sources);
  // filter
  simulation_interfaces__msg__TagsFilter__fini(&msg->filter);
  // offline_only
  // continue_on_error
}

bool
simulation_interfaces__srv__GetAvailableWorlds_Request__are_equal(const simulation_interfaces__srv__GetAvailableWorlds_Request * lhs, const simulation_interfaces__srv__GetAvailableWorlds_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // additional_sources
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->additional_sources), &(rhs->additional_sources)))
  {
    return false;
  }
  // filter
  if (!simulation_interfaces__msg__TagsFilter__are_equal(
      &(lhs->filter), &(rhs->filter)))
  {
    return false;
  }
  // offline_only
  if (lhs->offline_only != rhs->offline_only) {
    return false;
  }
  // continue_on_error
  if (lhs->continue_on_error != rhs->continue_on_error) {
    return false;
  }
  return true;
}

bool
simulation_interfaces__srv__GetAvailableWorlds_Request__copy(
  const simulation_interfaces__srv__GetAvailableWorlds_Request * input,
  simulation_interfaces__srv__GetAvailableWorlds_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // additional_sources
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->additional_sources), &(output->additional_sources)))
  {
    return false;
  }
  // filter
  if (!simulation_interfaces__msg__TagsFilter__copy(
      &(input->filter), &(output->filter)))
  {
    return false;
  }
  // offline_only
  output->offline_only = input->offline_only;
  // continue_on_error
  output->continue_on_error = input->continue_on_error;
  return true;
}

simulation_interfaces__srv__GetAvailableWorlds_Request *
simulation_interfaces__srv__GetAvailableWorlds_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__GetAvailableWorlds_Request * msg = (simulation_interfaces__srv__GetAvailableWorlds_Request *)allocator.allocate(sizeof(simulation_interfaces__srv__GetAvailableWorlds_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simulation_interfaces__srv__GetAvailableWorlds_Request));
  bool success = simulation_interfaces__srv__GetAvailableWorlds_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simulation_interfaces__srv__GetAvailableWorlds_Request__destroy(simulation_interfaces__srv__GetAvailableWorlds_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simulation_interfaces__srv__GetAvailableWorlds_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__init(simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__GetAvailableWorlds_Request * data = NULL;

  if (size) {
    data = (simulation_interfaces__srv__GetAvailableWorlds_Request *)allocator.zero_allocate(size, sizeof(simulation_interfaces__srv__GetAvailableWorlds_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simulation_interfaces__srv__GetAvailableWorlds_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simulation_interfaces__srv__GetAvailableWorlds_Request__fini(&data[i - 1]);
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
simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__fini(simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence * array)
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
      simulation_interfaces__srv__GetAvailableWorlds_Request__fini(&array->data[i]);
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

simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence *
simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence * array = (simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence *)allocator.allocate(sizeof(simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__destroy(simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__are_equal(const simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence * lhs, const simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simulation_interfaces__srv__GetAvailableWorlds_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__copy(
  const simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence * input,
  simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simulation_interfaces__srv__GetAvailableWorlds_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simulation_interfaces__srv__GetAvailableWorlds_Request * data =
      (simulation_interfaces__srv__GetAvailableWorlds_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simulation_interfaces__srv__GetAvailableWorlds_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simulation_interfaces__srv__GetAvailableWorlds_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simulation_interfaces__srv__GetAvailableWorlds_Request__copy(
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
// Member `worlds`
#include "simulation_interfaces/msg/detail/world_resource__functions.h"

bool
simulation_interfaces__srv__GetAvailableWorlds_Response__init(simulation_interfaces__srv__GetAvailableWorlds_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!simulation_interfaces__msg__Result__init(&msg->result)) {
    simulation_interfaces__srv__GetAvailableWorlds_Response__fini(msg);
    return false;
  }
  // worlds
  if (!simulation_interfaces__msg__WorldResource__Sequence__init(&msg->worlds, 0)) {
    simulation_interfaces__srv__GetAvailableWorlds_Response__fini(msg);
    return false;
  }
  return true;
}

void
simulation_interfaces__srv__GetAvailableWorlds_Response__fini(simulation_interfaces__srv__GetAvailableWorlds_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  simulation_interfaces__msg__Result__fini(&msg->result);
  // worlds
  simulation_interfaces__msg__WorldResource__Sequence__fini(&msg->worlds);
}

bool
simulation_interfaces__srv__GetAvailableWorlds_Response__are_equal(const simulation_interfaces__srv__GetAvailableWorlds_Response * lhs, const simulation_interfaces__srv__GetAvailableWorlds_Response * rhs)
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
  // worlds
  if (!simulation_interfaces__msg__WorldResource__Sequence__are_equal(
      &(lhs->worlds), &(rhs->worlds)))
  {
    return false;
  }
  return true;
}

bool
simulation_interfaces__srv__GetAvailableWorlds_Response__copy(
  const simulation_interfaces__srv__GetAvailableWorlds_Response * input,
  simulation_interfaces__srv__GetAvailableWorlds_Response * output)
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
  // worlds
  if (!simulation_interfaces__msg__WorldResource__Sequence__copy(
      &(input->worlds), &(output->worlds)))
  {
    return false;
  }
  return true;
}

simulation_interfaces__srv__GetAvailableWorlds_Response *
simulation_interfaces__srv__GetAvailableWorlds_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__GetAvailableWorlds_Response * msg = (simulation_interfaces__srv__GetAvailableWorlds_Response *)allocator.allocate(sizeof(simulation_interfaces__srv__GetAvailableWorlds_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simulation_interfaces__srv__GetAvailableWorlds_Response));
  bool success = simulation_interfaces__srv__GetAvailableWorlds_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simulation_interfaces__srv__GetAvailableWorlds_Response__destroy(simulation_interfaces__srv__GetAvailableWorlds_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simulation_interfaces__srv__GetAvailableWorlds_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__init(simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__GetAvailableWorlds_Response * data = NULL;

  if (size) {
    data = (simulation_interfaces__srv__GetAvailableWorlds_Response *)allocator.zero_allocate(size, sizeof(simulation_interfaces__srv__GetAvailableWorlds_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simulation_interfaces__srv__GetAvailableWorlds_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simulation_interfaces__srv__GetAvailableWorlds_Response__fini(&data[i - 1]);
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
simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__fini(simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence * array)
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
      simulation_interfaces__srv__GetAvailableWorlds_Response__fini(&array->data[i]);
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

simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence *
simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence * array = (simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence *)allocator.allocate(sizeof(simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__destroy(simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__are_equal(const simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence * lhs, const simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simulation_interfaces__srv__GetAvailableWorlds_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__copy(
  const simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence * input,
  simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simulation_interfaces__srv__GetAvailableWorlds_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simulation_interfaces__srv__GetAvailableWorlds_Response * data =
      (simulation_interfaces__srv__GetAvailableWorlds_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simulation_interfaces__srv__GetAvailableWorlds_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simulation_interfaces__srv__GetAvailableWorlds_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simulation_interfaces__srv__GetAvailableWorlds_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "simulation_interfaces/srv/detail/get_available_worlds__functions.h"

bool
simulation_interfaces__srv__GetAvailableWorlds_Event__init(simulation_interfaces__srv__GetAvailableWorlds_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    simulation_interfaces__srv__GetAvailableWorlds_Event__fini(msg);
    return false;
  }
  // request
  if (!simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__init(&msg->request, 0)) {
    simulation_interfaces__srv__GetAvailableWorlds_Event__fini(msg);
    return false;
  }
  // response
  if (!simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__init(&msg->response, 0)) {
    simulation_interfaces__srv__GetAvailableWorlds_Event__fini(msg);
    return false;
  }
  return true;
}

void
simulation_interfaces__srv__GetAvailableWorlds_Event__fini(simulation_interfaces__srv__GetAvailableWorlds_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__fini(&msg->request);
  // response
  simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__fini(&msg->response);
}

bool
simulation_interfaces__srv__GetAvailableWorlds_Event__are_equal(const simulation_interfaces__srv__GetAvailableWorlds_Event * lhs, const simulation_interfaces__srv__GetAvailableWorlds_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
simulation_interfaces__srv__GetAvailableWorlds_Event__copy(
  const simulation_interfaces__srv__GetAvailableWorlds_Event * input,
  simulation_interfaces__srv__GetAvailableWorlds_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!simulation_interfaces__srv__GetAvailableWorlds_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!simulation_interfaces__srv__GetAvailableWorlds_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

simulation_interfaces__srv__GetAvailableWorlds_Event *
simulation_interfaces__srv__GetAvailableWorlds_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__GetAvailableWorlds_Event * msg = (simulation_interfaces__srv__GetAvailableWorlds_Event *)allocator.allocate(sizeof(simulation_interfaces__srv__GetAvailableWorlds_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simulation_interfaces__srv__GetAvailableWorlds_Event));
  bool success = simulation_interfaces__srv__GetAvailableWorlds_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simulation_interfaces__srv__GetAvailableWorlds_Event__destroy(simulation_interfaces__srv__GetAvailableWorlds_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simulation_interfaces__srv__GetAvailableWorlds_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence__init(simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__GetAvailableWorlds_Event * data = NULL;

  if (size) {
    data = (simulation_interfaces__srv__GetAvailableWorlds_Event *)allocator.zero_allocate(size, sizeof(simulation_interfaces__srv__GetAvailableWorlds_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simulation_interfaces__srv__GetAvailableWorlds_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simulation_interfaces__srv__GetAvailableWorlds_Event__fini(&data[i - 1]);
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
simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence__fini(simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence * array)
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
      simulation_interfaces__srv__GetAvailableWorlds_Event__fini(&array->data[i]);
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

simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence *
simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence * array = (simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence *)allocator.allocate(sizeof(simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence__destroy(simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence__are_equal(const simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence * lhs, const simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simulation_interfaces__srv__GetAvailableWorlds_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence__copy(
  const simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence * input,
  simulation_interfaces__srv__GetAvailableWorlds_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simulation_interfaces__srv__GetAvailableWorlds_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simulation_interfaces__srv__GetAvailableWorlds_Event * data =
      (simulation_interfaces__srv__GetAvailableWorlds_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simulation_interfaces__srv__GetAvailableWorlds_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simulation_interfaces__srv__GetAvailableWorlds_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simulation_interfaces__srv__GetAvailableWorlds_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
