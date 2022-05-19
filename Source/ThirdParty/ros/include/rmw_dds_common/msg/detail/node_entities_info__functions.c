// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmw_dds_common:msg/NodeEntitiesInfo.idl
// generated code does not contain a copyright notice
#include "rmw_dds_common/msg/detail/node_entities_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `node_namespace`
// Member `node_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `reader_gid_seq`
// Member `writer_gid_seq`
#include "rmw_dds_common/msg/detail/gid__functions.h"

bool
rmw_dds_common__msg__NodeEntitiesInfo__init(rmw_dds_common__msg__NodeEntitiesInfo * msg)
{
  if (!msg) {
    return false;
  }
  // node_namespace
  if (!rosidl_runtime_c__String__init(&msg->node_namespace)) {
    rmw_dds_common__msg__NodeEntitiesInfo__fini(msg);
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    rmw_dds_common__msg__NodeEntitiesInfo__fini(msg);
    return false;
  }
  // reader_gid_seq
  if (!rmw_dds_common__msg__Gid__Sequence__init(&msg->reader_gid_seq, 0)) {
    rmw_dds_common__msg__NodeEntitiesInfo__fini(msg);
    return false;
  }
  // writer_gid_seq
  if (!rmw_dds_common__msg__Gid__Sequence__init(&msg->writer_gid_seq, 0)) {
    rmw_dds_common__msg__NodeEntitiesInfo__fini(msg);
    return false;
  }
  return true;
}

void
rmw_dds_common__msg__NodeEntitiesInfo__fini(rmw_dds_common__msg__NodeEntitiesInfo * msg)
{
  if (!msg) {
    return;
  }
  // node_namespace
  rosidl_runtime_c__String__fini(&msg->node_namespace);
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
  // reader_gid_seq
  rmw_dds_common__msg__Gid__Sequence__fini(&msg->reader_gid_seq);
  // writer_gid_seq
  rmw_dds_common__msg__Gid__Sequence__fini(&msg->writer_gid_seq);
}

bool
rmw_dds_common__msg__NodeEntitiesInfo__are_equal(const rmw_dds_common__msg__NodeEntitiesInfo * lhs, const rmw_dds_common__msg__NodeEntitiesInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_namespace
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_namespace), &(rhs->node_namespace)))
  {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_name), &(rhs->node_name)))
  {
    return false;
  }
  // reader_gid_seq
  if (!rmw_dds_common__msg__Gid__Sequence__are_equal(
      &(lhs->reader_gid_seq), &(rhs->reader_gid_seq)))
  {
    return false;
  }
  // writer_gid_seq
  if (!rmw_dds_common__msg__Gid__Sequence__are_equal(
      &(lhs->writer_gid_seq), &(rhs->writer_gid_seq)))
  {
    return false;
  }
  return true;
}

bool
rmw_dds_common__msg__NodeEntitiesInfo__copy(
  const rmw_dds_common__msg__NodeEntitiesInfo * input,
  rmw_dds_common__msg__NodeEntitiesInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // node_namespace
  if (!rosidl_runtime_c__String__copy(
      &(input->node_namespace), &(output->node_namespace)))
  {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__copy(
      &(input->node_name), &(output->node_name)))
  {
    return false;
  }
  // reader_gid_seq
  if (!rmw_dds_common__msg__Gid__Sequence__copy(
      &(input->reader_gid_seq), &(output->reader_gid_seq)))
  {
    return false;
  }
  // writer_gid_seq
  if (!rmw_dds_common__msg__Gid__Sequence__copy(
      &(input->writer_gid_seq), &(output->writer_gid_seq)))
  {
    return false;
  }
  return true;
}

rmw_dds_common__msg__NodeEntitiesInfo *
rmw_dds_common__msg__NodeEntitiesInfo__create()
{
  rmw_dds_common__msg__NodeEntitiesInfo * msg = (rmw_dds_common__msg__NodeEntitiesInfo *)malloc(sizeof(rmw_dds_common__msg__NodeEntitiesInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmw_dds_common__msg__NodeEntitiesInfo));
  bool success = rmw_dds_common__msg__NodeEntitiesInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rmw_dds_common__msg__NodeEntitiesInfo__destroy(rmw_dds_common__msg__NodeEntitiesInfo * msg)
{
  if (msg) {
    rmw_dds_common__msg__NodeEntitiesInfo__fini(msg);
  }
  free(msg);
}


bool
rmw_dds_common__msg__NodeEntitiesInfo__Sequence__init(rmw_dds_common__msg__NodeEntitiesInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rmw_dds_common__msg__NodeEntitiesInfo * data = NULL;
  if (size) {
    data = (rmw_dds_common__msg__NodeEntitiesInfo *)calloc(size, sizeof(rmw_dds_common__msg__NodeEntitiesInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmw_dds_common__msg__NodeEntitiesInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmw_dds_common__msg__NodeEntitiesInfo__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rmw_dds_common__msg__NodeEntitiesInfo__Sequence__fini(rmw_dds_common__msg__NodeEntitiesInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmw_dds_common__msg__NodeEntitiesInfo__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rmw_dds_common__msg__NodeEntitiesInfo__Sequence *
rmw_dds_common__msg__NodeEntitiesInfo__Sequence__create(size_t size)
{
  rmw_dds_common__msg__NodeEntitiesInfo__Sequence * array = (rmw_dds_common__msg__NodeEntitiesInfo__Sequence *)malloc(sizeof(rmw_dds_common__msg__NodeEntitiesInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rmw_dds_common__msg__NodeEntitiesInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rmw_dds_common__msg__NodeEntitiesInfo__Sequence__destroy(rmw_dds_common__msg__NodeEntitiesInfo__Sequence * array)
{
  if (array) {
    rmw_dds_common__msg__NodeEntitiesInfo__Sequence__fini(array);
  }
  free(array);
}

bool
rmw_dds_common__msg__NodeEntitiesInfo__Sequence__are_equal(const rmw_dds_common__msg__NodeEntitiesInfo__Sequence * lhs, const rmw_dds_common__msg__NodeEntitiesInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmw_dds_common__msg__NodeEntitiesInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmw_dds_common__msg__NodeEntitiesInfo__Sequence__copy(
  const rmw_dds_common__msg__NodeEntitiesInfo__Sequence * input,
  rmw_dds_common__msg__NodeEntitiesInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmw_dds_common__msg__NodeEntitiesInfo);
    rmw_dds_common__msg__NodeEntitiesInfo * data =
      (rmw_dds_common__msg__NodeEntitiesInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmw_dds_common__msg__NodeEntitiesInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rmw_dds_common__msg__NodeEntitiesInfo__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmw_dds_common__msg__NodeEntitiesInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
