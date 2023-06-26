// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ue_msgs:msg/OverlapEvent.idl
// generated code does not contain a copyright notice
#include "ue_msgs/msg/detail/overlap_event__functions.h"

#include "rcutils/allocator.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `self_name`
// Member `other_actor_name`
// Member `other_component_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `hit_result`
#include "ue_msgs/msg/detail/hit_result__functions.h"

bool ue_msgs__msg__OverlapEvent__init(ue_msgs__msg__OverlapEvent* msg)
{
    if (!msg)
    {
        return false;
    }
    // begin
    // self_name
    if (!rosidl_runtime_c__String__init(&msg->self_name))
    {
        ue_msgs__msg__OverlapEvent__fini(msg);
        return false;
    }
    // other_actor_name
    if (!rosidl_runtime_c__String__init(&msg->other_actor_name))
    {
        ue_msgs__msg__OverlapEvent__fini(msg);
        return false;
    }
    // other_component_name
    if (!rosidl_runtime_c__String__init(&msg->other_component_name))
    {
        ue_msgs__msg__OverlapEvent__fini(msg);
        return false;
    }
    // other_body_index
    // from_sweep
    // hit_result
    if (!ue_msgs__msg__HitResult__init(&msg->hit_result))
    {
        ue_msgs__msg__OverlapEvent__fini(msg);
        return false;
    }
    return true;
}

void ue_msgs__msg__OverlapEvent__fini(ue_msgs__msg__OverlapEvent* msg)
{
    if (!msg)
    {
        return;
    }
    // begin
    // self_name
    rosidl_runtime_c__String__fini(&msg->self_name);
    // other_actor_name
    rosidl_runtime_c__String__fini(&msg->other_actor_name);
    // other_component_name
    rosidl_runtime_c__String__fini(&msg->other_component_name);
    // other_body_index
    // from_sweep
    // hit_result
    ue_msgs__msg__HitResult__fini(&msg->hit_result);
}

bool ue_msgs__msg__OverlapEvent__are_equal(const ue_msgs__msg__OverlapEvent* lhs, const ue_msgs__msg__OverlapEvent* rhs)
{
    if (!lhs || !rhs)
    {
        return false;
    }
    // begin
    if (lhs->begin != rhs->begin)
    {
        return false;
    }
    // self_name
    if (!rosidl_runtime_c__String__are_equal(&(lhs->self_name), &(rhs->self_name)))
    {
        return false;
    }
    // other_actor_name
    if (!rosidl_runtime_c__String__are_equal(&(lhs->other_actor_name), &(rhs->other_actor_name)))
    {
        return false;
    }
    // other_component_name
    if (!rosidl_runtime_c__String__are_equal(&(lhs->other_component_name), &(rhs->other_component_name)))
    {
        return false;
    }
    // other_body_index
    if (lhs->other_body_index != rhs->other_body_index)
    {
        return false;
    }
    // from_sweep
    if (lhs->from_sweep != rhs->from_sweep)
    {
        return false;
    }
    // hit_result
    if (!ue_msgs__msg__HitResult__are_equal(&(lhs->hit_result), &(rhs->hit_result)))
    {
        return false;
    }
    return true;
}

bool ue_msgs__msg__OverlapEvent__copy(const ue_msgs__msg__OverlapEvent* input, ue_msgs__msg__OverlapEvent* output)
{
    if (!input || !output)
    {
        return false;
    }
    // begin
    output->begin = input->begin;
    // self_name
    if (!rosidl_runtime_c__String__copy(&(input->self_name), &(output->self_name)))
    {
        return false;
    }
    // other_actor_name
    if (!rosidl_runtime_c__String__copy(&(input->other_actor_name), &(output->other_actor_name)))
    {
        return false;
    }
    // other_component_name
    if (!rosidl_runtime_c__String__copy(&(input->other_component_name), &(output->other_component_name)))
    {
        return false;
    }
    // other_body_index
    output->other_body_index = input->other_body_index;
    // from_sweep
    output->from_sweep = input->from_sweep;
    // hit_result
    if (!ue_msgs__msg__HitResult__copy(&(input->hit_result), &(output->hit_result)))
    {
        return false;
    }
    return true;
}

ue_msgs__msg__OverlapEvent* ue_msgs__msg__OverlapEvent__create()
{
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ue_msgs__msg__OverlapEvent* msg =
        (ue_msgs__msg__OverlapEvent*)allocator.allocate(sizeof(ue_msgs__msg__OverlapEvent), allocator.state);
    if (!msg)
    {
        return NULL;
    }
    memset(msg, 0, sizeof(ue_msgs__msg__OverlapEvent));
    bool success = ue_msgs__msg__OverlapEvent__init(msg);
    if (!success)
    {
        allocator.deallocate(msg, allocator.state);
        return NULL;
    }
    return msg;
}

void ue_msgs__msg__OverlapEvent__destroy(ue_msgs__msg__OverlapEvent* msg)
{
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    if (msg)
    {
        ue_msgs__msg__OverlapEvent__fini(msg);
    }
    allocator.deallocate(msg, allocator.state);
}

bool ue_msgs__msg__OverlapEvent__Sequence__init(ue_msgs__msg__OverlapEvent__Sequence* array, size_t size)
{
    if (!array)
    {
        return false;
    }
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ue_msgs__msg__OverlapEvent* data = NULL;

    if (size)
    {
        data = (ue_msgs__msg__OverlapEvent*)allocator.zero_allocate(size, sizeof(ue_msgs__msg__OverlapEvent), allocator.state);
        if (!data)
        {
            return false;
        }
        // initialize all array elements
        size_t i;
        for (i = 0; i < size; ++i)
        {
            bool success = ue_msgs__msg__OverlapEvent__init(&data[i]);
            if (!success)
            {
                break;
            }
        }
        if (i < size)
        {
            // if initialization failed finalize the already initialized array elements
            for (; i > 0; --i)
            {
                ue_msgs__msg__OverlapEvent__fini(&data[i - 1]);
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

void ue_msgs__msg__OverlapEvent__Sequence__fini(ue_msgs__msg__OverlapEvent__Sequence* array)
{
    if (!array)
    {
        return;
    }
    rcutils_allocator_t allocator = rcutils_get_default_allocator();

    if (array->data)
    {
        // ensure that data and capacity values are consistent
        assert(array->capacity > 0);
        // finalize all array elements
        for (size_t i = 0; i < array->capacity; ++i)
        {
            ue_msgs__msg__OverlapEvent__fini(&array->data[i]);
        }
        allocator.deallocate(array->data, allocator.state);
        array->data = NULL;
        array->size = 0;
        array->capacity = 0;
    }
    else
    {
        // ensure that data, size, and capacity values are consistent
        assert(0 == array->size);
        assert(0 == array->capacity);
    }
}

ue_msgs__msg__OverlapEvent__Sequence* ue_msgs__msg__OverlapEvent__Sequence__create(size_t size)
{
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ue_msgs__msg__OverlapEvent__Sequence* array =
        (ue_msgs__msg__OverlapEvent__Sequence*)allocator.allocate(sizeof(ue_msgs__msg__OverlapEvent__Sequence), allocator.state);
    if (!array)
    {
        return NULL;
    }
    bool success = ue_msgs__msg__OverlapEvent__Sequence__init(array, size);
    if (!success)
    {
        allocator.deallocate(array, allocator.state);
        return NULL;
    }
    return array;
}

void ue_msgs__msg__OverlapEvent__Sequence__destroy(ue_msgs__msg__OverlapEvent__Sequence* array)
{
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    if (array)
    {
        ue_msgs__msg__OverlapEvent__Sequence__fini(array);
    }
    allocator.deallocate(array, allocator.state);
}

bool ue_msgs__msg__OverlapEvent__Sequence__are_equal(const ue_msgs__msg__OverlapEvent__Sequence* lhs,
                                                     const ue_msgs__msg__OverlapEvent__Sequence* rhs)
{
    if (!lhs || !rhs)
    {
        return false;
    }
    if (lhs->size != rhs->size)
    {
        return false;
    }
    for (size_t i = 0; i < lhs->size; ++i)
    {
        if (!ue_msgs__msg__OverlapEvent__are_equal(&(lhs->data[i]), &(rhs->data[i])))
        {
            return false;
        }
    }
    return true;
}

bool ue_msgs__msg__OverlapEvent__Sequence__copy(const ue_msgs__msg__OverlapEvent__Sequence* input,
                                                ue_msgs__msg__OverlapEvent__Sequence* output)
{
    if (!input || !output)
    {
        return false;
    }
    if (output->capacity < input->size)
    {
        const size_t allocation_size = input->size * sizeof(ue_msgs__msg__OverlapEvent);
        ue_msgs__msg__OverlapEvent* data = (ue_msgs__msg__OverlapEvent*)realloc(output->data, allocation_size);
        if (!data)
        {
            return false;
        }
        for (size_t i = output->capacity; i < input->size; ++i)
        {
            if (!ue_msgs__msg__OverlapEvent__init(&data[i]))
            {
                /* free currently allocated and return false */
                for (; i-- > output->capacity;)
                {
                    ue_msgs__msg__OverlapEvent__fini(&data[i]);
                }
                free(data);
                return false;
            }
        }
        output->data = data;
        output->capacity = input->size;
    }
    output->size = input->size;
    for (size_t i = 0; i < input->size; ++i)
    {
        if (!ue_msgs__msg__OverlapEvent__copy(&(input->data[i]), &(output->data[i])))
        {
            return false;
        }
    }
    return true;
}
