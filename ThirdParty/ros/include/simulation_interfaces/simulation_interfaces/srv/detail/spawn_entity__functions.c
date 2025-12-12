// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simulation_interfaces:srv/SpawnEntity.idl
// generated code does not contain a copyright notice
#include "simulation_interfaces/srv/detail/spawn_entity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
// Member `entity_namespace`
#include "rosidl_runtime_c/string_functions.h"
// Member `entity_resource`
#include "simulation_interfaces/msg/detail/resource__functions.h"
// Member `initial_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
simulation_interfaces__srv__SpawnEntity_Request__init(simulation_interfaces__srv__SpawnEntity_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    simulation_interfaces__srv__SpawnEntity_Request__fini(msg);
    return false;
  }
  // allow_renaming
  // entity_resource
  if (!simulation_interfaces__msg__Resource__init(&msg->entity_resource)) {
    simulation_interfaces__srv__SpawnEntity_Request__fini(msg);
    return false;
  }
  // entity_namespace
  if (!rosidl_runtime_c__String__init(&msg->entity_namespace)) {
    simulation_interfaces__srv__SpawnEntity_Request__fini(msg);
    return false;
  }
  // initial_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->initial_pose)) {
    simulation_interfaces__srv__SpawnEntity_Request__fini(msg);
    return false;
  }
  return true;
}

void
simulation_interfaces__srv__SpawnEntity_Request__fini(simulation_interfaces__srv__SpawnEntity_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // allow_renaming
  // entity_resource
  simulation_interfaces__msg__Resource__fini(&msg->entity_resource);
  // entity_namespace
  rosidl_runtime_c__String__fini(&msg->entity_namespace);
  // initial_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->initial_pose);
}

bool
simulation_interfaces__srv__SpawnEntity_Request__are_equal(const simulation_interfaces__srv__SpawnEntity_Request * lhs, const simulation_interfaces__srv__SpawnEntity_Request * rhs)
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
  // allow_renaming
  if (lhs->allow_renaming != rhs->allow_renaming) {
    return false;
  }
  // entity_resource
  if (!simulation_interfaces__msg__Resource__are_equal(
      &(lhs->entity_resource), &(rhs->entity_resource)))
  {
    return false;
  }
  // entity_namespace
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->entity_namespace), &(rhs->entity_namespace)))
  {
    return false;
  }
  // initial_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->initial_pose), &(rhs->initial_pose)))
  {
    return false;
  }
  return true;
}

bool
simulation_interfaces__srv__SpawnEntity_Request__copy(
  const simulation_interfaces__srv__SpawnEntity_Request * input,
  simulation_interfaces__srv__SpawnEntity_Request * output)
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
  // allow_renaming
  output->allow_renaming = input->allow_renaming;
  // entity_resource
  if (!simulation_interfaces__msg__Resource__copy(
      &(input->entity_resource), &(output->entity_resource)))
  {
    return false;
  }
  // entity_namespace
  if (!rosidl_runtime_c__String__copy(
      &(input->entity_namespace), &(output->entity_namespace)))
  {
    return false;
  }
  // initial_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->initial_pose), &(output->initial_pose)))
  {
    return false;
  }
  return true;
}

simulation_interfaces__srv__SpawnEntity_Request *
simulation_interfaces__srv__SpawnEntity_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__SpawnEntity_Request * msg = (simulation_interfaces__srv__SpawnEntity_Request *)allocator.allocate(sizeof(simulation_interfaces__srv__SpawnEntity_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simulation_interfaces__srv__SpawnEntity_Request));
  bool success = simulation_interfaces__srv__SpawnEntity_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simulation_interfaces__srv__SpawnEntity_Request__destroy(simulation_interfaces__srv__SpawnEntity_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simulation_interfaces__srv__SpawnEntity_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simulation_interfaces__srv__SpawnEntity_Request__Sequence__init(simulation_interfaces__srv__SpawnEntity_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__SpawnEntity_Request * data = NULL;

  if (size) {
    data = (simulation_interfaces__srv__SpawnEntity_Request *)allocator.zero_allocate(size, sizeof(simulation_interfaces__srv__SpawnEntity_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simulation_interfaces__srv__SpawnEntity_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simulation_interfaces__srv__SpawnEntity_Request__fini(&data[i - 1]);
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
simulation_interfaces__srv__SpawnEntity_Request__Sequence__fini(simulation_interfaces__srv__SpawnEntity_Request__Sequence * array)
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
      simulation_interfaces__srv__SpawnEntity_Request__fini(&array->data[i]);
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

simulation_interfaces__srv__SpawnEntity_Request__Sequence *
simulation_interfaces__srv__SpawnEntity_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__SpawnEntity_Request__Sequence * array = (simulation_interfaces__srv__SpawnEntity_Request__Sequence *)allocator.allocate(sizeof(simulation_interfaces__srv__SpawnEntity_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simulation_interfaces__srv__SpawnEntity_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simulation_interfaces__srv__SpawnEntity_Request__Sequence__destroy(simulation_interfaces__srv__SpawnEntity_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simulation_interfaces__srv__SpawnEntity_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simulation_interfaces__srv__SpawnEntity_Request__Sequence__are_equal(const simulation_interfaces__srv__SpawnEntity_Request__Sequence * lhs, const simulation_interfaces__srv__SpawnEntity_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simulation_interfaces__srv__SpawnEntity_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simulation_interfaces__srv__SpawnEntity_Request__Sequence__copy(
  const simulation_interfaces__srv__SpawnEntity_Request__Sequence * input,
  simulation_interfaces__srv__SpawnEntity_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simulation_interfaces__srv__SpawnEntity_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simulation_interfaces__srv__SpawnEntity_Request * data =
      (simulation_interfaces__srv__SpawnEntity_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simulation_interfaces__srv__SpawnEntity_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simulation_interfaces__srv__SpawnEntity_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simulation_interfaces__srv__SpawnEntity_Request__copy(
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
// Member `entity_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
simulation_interfaces__srv__SpawnEntity_Response__init(simulation_interfaces__srv__SpawnEntity_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!simulation_interfaces__msg__Result__init(&msg->result)) {
    simulation_interfaces__srv__SpawnEntity_Response__fini(msg);
    return false;
  }
  // entity_name
  if (!rosidl_runtime_c__String__init(&msg->entity_name)) {
    simulation_interfaces__srv__SpawnEntity_Response__fini(msg);
    return false;
  }
  return true;
}

void
simulation_interfaces__srv__SpawnEntity_Response__fini(simulation_interfaces__srv__SpawnEntity_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  simulation_interfaces__msg__Result__fini(&msg->result);
  // entity_name
  rosidl_runtime_c__String__fini(&msg->entity_name);
}

bool
simulation_interfaces__srv__SpawnEntity_Response__are_equal(const simulation_interfaces__srv__SpawnEntity_Response * lhs, const simulation_interfaces__srv__SpawnEntity_Response * rhs)
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
  // entity_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->entity_name), &(rhs->entity_name)))
  {
    return false;
  }
  return true;
}

bool
simulation_interfaces__srv__SpawnEntity_Response__copy(
  const simulation_interfaces__srv__SpawnEntity_Response * input,
  simulation_interfaces__srv__SpawnEntity_Response * output)
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
  // entity_name
  if (!rosidl_runtime_c__String__copy(
      &(input->entity_name), &(output->entity_name)))
  {
    return false;
  }
  return true;
}

simulation_interfaces__srv__SpawnEntity_Response *
simulation_interfaces__srv__SpawnEntity_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__SpawnEntity_Response * msg = (simulation_interfaces__srv__SpawnEntity_Response *)allocator.allocate(sizeof(simulation_interfaces__srv__SpawnEntity_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simulation_interfaces__srv__SpawnEntity_Response));
  bool success = simulation_interfaces__srv__SpawnEntity_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simulation_interfaces__srv__SpawnEntity_Response__destroy(simulation_interfaces__srv__SpawnEntity_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simulation_interfaces__srv__SpawnEntity_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simulation_interfaces__srv__SpawnEntity_Response__Sequence__init(simulation_interfaces__srv__SpawnEntity_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__SpawnEntity_Response * data = NULL;

  if (size) {
    data = (simulation_interfaces__srv__SpawnEntity_Response *)allocator.zero_allocate(size, sizeof(simulation_interfaces__srv__SpawnEntity_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simulation_interfaces__srv__SpawnEntity_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simulation_interfaces__srv__SpawnEntity_Response__fini(&data[i - 1]);
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
simulation_interfaces__srv__SpawnEntity_Response__Sequence__fini(simulation_interfaces__srv__SpawnEntity_Response__Sequence * array)
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
      simulation_interfaces__srv__SpawnEntity_Response__fini(&array->data[i]);
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

simulation_interfaces__srv__SpawnEntity_Response__Sequence *
simulation_interfaces__srv__SpawnEntity_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simulation_interfaces__srv__SpawnEntity_Response__Sequence * array = (simulation_interfaces__srv__SpawnEntity_Response__Sequence *)allocator.allocate(sizeof(simulation_interfaces__srv__SpawnEntity_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simulation_interfaces__srv__SpawnEntity_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simulation_interfaces__srv__SpawnEntity_Response__Sequence__destroy(simulation_interfaces__srv__SpawnEntity_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simulation_interfaces__srv__SpawnEntity_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simulation_interfaces__srv__SpawnEntity_Response__Sequence__are_equal(const simulation_interfaces__srv__SpawnEntity_Response__Sequence * lhs, const simulation_interfaces__srv__SpawnEntity_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simulation_interfaces__srv__SpawnEntity_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simulation_interfaces__srv__SpawnEntity_Response__Sequence__copy(
  const simulation_interfaces__srv__SpawnEntity_Response__Sequence * input,
  simulation_interfaces__srv__SpawnEntity_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simulation_interfaces__srv__SpawnEntity_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simulation_interfaces__srv__SpawnEntity_Response * data =
      (simulation_interfaces__srv__SpawnEntity_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simulation_interfaces__srv__SpawnEntity_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simulation_interfaces__srv__SpawnEntity_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simulation_interfaces__srv__SpawnEntity_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
