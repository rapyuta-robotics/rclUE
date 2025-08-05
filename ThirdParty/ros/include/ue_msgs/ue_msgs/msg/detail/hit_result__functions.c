// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ue_msgs:msg/HitResult.idl
// generated code does not contain a copyright notice
#include "ue_msgs/msg/detail/hit_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `component_name`
// Member `actor_name`
// Member `bone_name`
// Member `my_bone_name`
// Member `physics_material_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `impact_normal`
// Member `normal`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `impact_point`
// Member `location`
// Member `trace_start`
// Member `trace_end`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
ue_msgs__msg__HitResult__init(ue_msgs__msg__HitResult * msg)
{
  if (!msg) {
    return false;
  }
  // blocking_hit
  // start_penetrating
  // component_name
  if (!rosidl_runtime_c__String__init(&msg->component_name)) {
    ue_msgs__msg__HitResult__fini(msg);
    return false;
  }
  // actor_name
  if (!rosidl_runtime_c__String__init(&msg->actor_name)) {
    ue_msgs__msg__HitResult__fini(msg);
    return false;
  }
  // distance
  // element_index
  // face_index
  // bone_name
  if (!rosidl_runtime_c__String__init(&msg->bone_name)) {
    ue_msgs__msg__HitResult__fini(msg);
    return false;
  }
  // item
  // my_bone_name
  if (!rosidl_runtime_c__String__init(&msg->my_bone_name)) {
    ue_msgs__msg__HitResult__fini(msg);
    return false;
  }
  // my_item
  // penetration_depth
  // physics_material_name
  if (!rosidl_runtime_c__String__init(&msg->physics_material_name)) {
    ue_msgs__msg__HitResult__fini(msg);
    return false;
  }
  // time
  // impact_normal
  if (!geometry_msgs__msg__Vector3__init(&msg->impact_normal)) {
    ue_msgs__msg__HitResult__fini(msg);
    return false;
  }
  // impact_point
  if (!geometry_msgs__msg__Point__init(&msg->impact_point)) {
    ue_msgs__msg__HitResult__fini(msg);
    return false;
  }
  // normal
  if (!geometry_msgs__msg__Vector3__init(&msg->normal)) {
    ue_msgs__msg__HitResult__fini(msg);
    return false;
  }
  // location
  if (!geometry_msgs__msg__Point__init(&msg->location)) {
    ue_msgs__msg__HitResult__fini(msg);
    return false;
  }
  // trace_start
  if (!geometry_msgs__msg__Point__init(&msg->trace_start)) {
    ue_msgs__msg__HitResult__fini(msg);
    return false;
  }
  // trace_end
  if (!geometry_msgs__msg__Point__init(&msg->trace_end)) {
    ue_msgs__msg__HitResult__fini(msg);
    return false;
  }
  return true;
}

void
ue_msgs__msg__HitResult__fini(ue_msgs__msg__HitResult * msg)
{
  if (!msg) {
    return;
  }
  // blocking_hit
  // start_penetrating
  // component_name
  rosidl_runtime_c__String__fini(&msg->component_name);
  // actor_name
  rosidl_runtime_c__String__fini(&msg->actor_name);
  // distance
  // element_index
  // face_index
  // bone_name
  rosidl_runtime_c__String__fini(&msg->bone_name);
  // item
  // my_bone_name
  rosidl_runtime_c__String__fini(&msg->my_bone_name);
  // my_item
  // penetration_depth
  // physics_material_name
  rosidl_runtime_c__String__fini(&msg->physics_material_name);
  // time
  // impact_normal
  geometry_msgs__msg__Vector3__fini(&msg->impact_normal);
  // impact_point
  geometry_msgs__msg__Point__fini(&msg->impact_point);
  // normal
  geometry_msgs__msg__Vector3__fini(&msg->normal);
  // location
  geometry_msgs__msg__Point__fini(&msg->location);
  // trace_start
  geometry_msgs__msg__Point__fini(&msg->trace_start);
  // trace_end
  geometry_msgs__msg__Point__fini(&msg->trace_end);
}

bool
ue_msgs__msg__HitResult__are_equal(const ue_msgs__msg__HitResult * lhs, const ue_msgs__msg__HitResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // blocking_hit
  if (lhs->blocking_hit != rhs->blocking_hit) {
    return false;
  }
  // start_penetrating
  if (lhs->start_penetrating != rhs->start_penetrating) {
    return false;
  }
  // component_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->component_name), &(rhs->component_name)))
  {
    return false;
  }
  // actor_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->actor_name), &(rhs->actor_name)))
  {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // element_index
  if (lhs->element_index != rhs->element_index) {
    return false;
  }
  // face_index
  if (lhs->face_index != rhs->face_index) {
    return false;
  }
  // bone_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bone_name), &(rhs->bone_name)))
  {
    return false;
  }
  // item
  if (lhs->item != rhs->item) {
    return false;
  }
  // my_bone_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->my_bone_name), &(rhs->my_bone_name)))
  {
    return false;
  }
  // my_item
  if (lhs->my_item != rhs->my_item) {
    return false;
  }
  // penetration_depth
  if (lhs->penetration_depth != rhs->penetration_depth) {
    return false;
  }
  // physics_material_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->physics_material_name), &(rhs->physics_material_name)))
  {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // impact_normal
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->impact_normal), &(rhs->impact_normal)))
  {
    return false;
  }
  // impact_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->impact_point), &(rhs->impact_point)))
  {
    return false;
  }
  // normal
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->normal), &(rhs->normal)))
  {
    return false;
  }
  // location
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  // trace_start
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->trace_start), &(rhs->trace_start)))
  {
    return false;
  }
  // trace_end
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->trace_end), &(rhs->trace_end)))
  {
    return false;
  }
  return true;
}

bool
ue_msgs__msg__HitResult__copy(
  const ue_msgs__msg__HitResult * input,
  ue_msgs__msg__HitResult * output)
{
  if (!input || !output) {
    return false;
  }
  // blocking_hit
  output->blocking_hit = input->blocking_hit;
  // start_penetrating
  output->start_penetrating = input->start_penetrating;
  // component_name
  if (!rosidl_runtime_c__String__copy(
      &(input->component_name), &(output->component_name)))
  {
    return false;
  }
  // actor_name
  if (!rosidl_runtime_c__String__copy(
      &(input->actor_name), &(output->actor_name)))
  {
    return false;
  }
  // distance
  output->distance = input->distance;
  // element_index
  output->element_index = input->element_index;
  // face_index
  output->face_index = input->face_index;
  // bone_name
  if (!rosidl_runtime_c__String__copy(
      &(input->bone_name), &(output->bone_name)))
  {
    return false;
  }
  // item
  output->item = input->item;
  // my_bone_name
  if (!rosidl_runtime_c__String__copy(
      &(input->my_bone_name), &(output->my_bone_name)))
  {
    return false;
  }
  // my_item
  output->my_item = input->my_item;
  // penetration_depth
  output->penetration_depth = input->penetration_depth;
  // physics_material_name
  if (!rosidl_runtime_c__String__copy(
      &(input->physics_material_name), &(output->physics_material_name)))
  {
    return false;
  }
  // time
  output->time = input->time;
  // impact_normal
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->impact_normal), &(output->impact_normal)))
  {
    return false;
  }
  // impact_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->impact_point), &(output->impact_point)))
  {
    return false;
  }
  // normal
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->normal), &(output->normal)))
  {
    return false;
  }
  // location
  if (!geometry_msgs__msg__Point__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  // trace_start
  if (!geometry_msgs__msg__Point__copy(
      &(input->trace_start), &(output->trace_start)))
  {
    return false;
  }
  // trace_end
  if (!geometry_msgs__msg__Point__copy(
      &(input->trace_end), &(output->trace_end)))
  {
    return false;
  }
  return true;
}

ue_msgs__msg__HitResult *
ue_msgs__msg__HitResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__msg__HitResult * msg = (ue_msgs__msg__HitResult *)allocator.allocate(sizeof(ue_msgs__msg__HitResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ue_msgs__msg__HitResult));
  bool success = ue_msgs__msg__HitResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ue_msgs__msg__HitResult__destroy(ue_msgs__msg__HitResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ue_msgs__msg__HitResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ue_msgs__msg__HitResult__Sequence__init(ue_msgs__msg__HitResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__msg__HitResult * data = NULL;

  if (size) {
    data = (ue_msgs__msg__HitResult *)allocator.zero_allocate(size, sizeof(ue_msgs__msg__HitResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ue_msgs__msg__HitResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ue_msgs__msg__HitResult__fini(&data[i - 1]);
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
ue_msgs__msg__HitResult__Sequence__fini(ue_msgs__msg__HitResult__Sequence * array)
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
      ue_msgs__msg__HitResult__fini(&array->data[i]);
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

ue_msgs__msg__HitResult__Sequence *
ue_msgs__msg__HitResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ue_msgs__msg__HitResult__Sequence * array = (ue_msgs__msg__HitResult__Sequence *)allocator.allocate(sizeof(ue_msgs__msg__HitResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ue_msgs__msg__HitResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ue_msgs__msg__HitResult__Sequence__destroy(ue_msgs__msg__HitResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ue_msgs__msg__HitResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ue_msgs__msg__HitResult__Sequence__are_equal(const ue_msgs__msg__HitResult__Sequence * lhs, const ue_msgs__msg__HitResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ue_msgs__msg__HitResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ue_msgs__msg__HitResult__Sequence__copy(
  const ue_msgs__msg__HitResult__Sequence * input,
  ue_msgs__msg__HitResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ue_msgs__msg__HitResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ue_msgs__msg__HitResult * data =
      (ue_msgs__msg__HitResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ue_msgs__msg__HitResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ue_msgs__msg__HitResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ue_msgs__msg__HitResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
