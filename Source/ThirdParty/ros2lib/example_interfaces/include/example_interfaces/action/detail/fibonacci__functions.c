// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from example_interfaces:action/Fibonacci.idl
// generated code does not contain a copyright notice
#include "example_interfaces/action/detail/fibonacci__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
example_interfaces__action__Fibonacci_Goal__init(example_interfaces__action__Fibonacci_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // order
  return true;
}

void
example_interfaces__action__Fibonacci_Goal__fini(example_interfaces__action__Fibonacci_Goal * msg)
{
  if (!msg) {
    return;
  }
  // order
}

example_interfaces__action__Fibonacci_Goal *
example_interfaces__action__Fibonacci_Goal__create()
{
  example_interfaces__action__Fibonacci_Goal * msg = (example_interfaces__action__Fibonacci_Goal *)malloc(sizeof(example_interfaces__action__Fibonacci_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__action__Fibonacci_Goal));
  bool success = example_interfaces__action__Fibonacci_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
example_interfaces__action__Fibonacci_Goal__destroy(example_interfaces__action__Fibonacci_Goal * msg)
{
  if (msg) {
    example_interfaces__action__Fibonacci_Goal__fini(msg);
  }
  free(msg);
}


bool
example_interfaces__action__Fibonacci_Goal__Sequence__init(example_interfaces__action__Fibonacci_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  example_interfaces__action__Fibonacci_Goal * data = NULL;
  if (size) {
    data = (example_interfaces__action__Fibonacci_Goal *)calloc(size, sizeof(example_interfaces__action__Fibonacci_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__action__Fibonacci_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__action__Fibonacci_Goal__fini(&data[i - 1]);
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
example_interfaces__action__Fibonacci_Goal__Sequence__fini(example_interfaces__action__Fibonacci_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      example_interfaces__action__Fibonacci_Goal__fini(&array->data[i]);
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

example_interfaces__action__Fibonacci_Goal__Sequence *
example_interfaces__action__Fibonacci_Goal__Sequence__create(size_t size)
{
  example_interfaces__action__Fibonacci_Goal__Sequence * array = (example_interfaces__action__Fibonacci_Goal__Sequence *)malloc(sizeof(example_interfaces__action__Fibonacci_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__action__Fibonacci_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
example_interfaces__action__Fibonacci_Goal__Sequence__destroy(example_interfaces__action__Fibonacci_Goal__Sequence * array)
{
  if (array) {
    example_interfaces__action__Fibonacci_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
example_interfaces__action__Fibonacci_Result__init(example_interfaces__action__Fibonacci_Result * msg)
{
  if (!msg) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->sequence, 0)) {
    example_interfaces__action__Fibonacci_Result__fini(msg);
    return false;
  }
  return true;
}

void
example_interfaces__action__Fibonacci_Result__fini(example_interfaces__action__Fibonacci_Result * msg)
{
  if (!msg) {
    return;
  }
  // sequence
  rosidl_runtime_c__int32__Sequence__fini(&msg->sequence);
}

example_interfaces__action__Fibonacci_Result *
example_interfaces__action__Fibonacci_Result__create()
{
  example_interfaces__action__Fibonacci_Result * msg = (example_interfaces__action__Fibonacci_Result *)malloc(sizeof(example_interfaces__action__Fibonacci_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__action__Fibonacci_Result));
  bool success = example_interfaces__action__Fibonacci_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
example_interfaces__action__Fibonacci_Result__destroy(example_interfaces__action__Fibonacci_Result * msg)
{
  if (msg) {
    example_interfaces__action__Fibonacci_Result__fini(msg);
  }
  free(msg);
}


bool
example_interfaces__action__Fibonacci_Result__Sequence__init(example_interfaces__action__Fibonacci_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  example_interfaces__action__Fibonacci_Result * data = NULL;
  if (size) {
    data = (example_interfaces__action__Fibonacci_Result *)calloc(size, sizeof(example_interfaces__action__Fibonacci_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__action__Fibonacci_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__action__Fibonacci_Result__fini(&data[i - 1]);
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
example_interfaces__action__Fibonacci_Result__Sequence__fini(example_interfaces__action__Fibonacci_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      example_interfaces__action__Fibonacci_Result__fini(&array->data[i]);
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

example_interfaces__action__Fibonacci_Result__Sequence *
example_interfaces__action__Fibonacci_Result__Sequence__create(size_t size)
{
  example_interfaces__action__Fibonacci_Result__Sequence * array = (example_interfaces__action__Fibonacci_Result__Sequence *)malloc(sizeof(example_interfaces__action__Fibonacci_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__action__Fibonacci_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
example_interfaces__action__Fibonacci_Result__Sequence__destroy(example_interfaces__action__Fibonacci_Result__Sequence * array)
{
  if (array) {
    example_interfaces__action__Fibonacci_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `sequence`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
example_interfaces__action__Fibonacci_Feedback__init(example_interfaces__action__Fibonacci_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->sequence, 0)) {
    example_interfaces__action__Fibonacci_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
example_interfaces__action__Fibonacci_Feedback__fini(example_interfaces__action__Fibonacci_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // sequence
  rosidl_runtime_c__int32__Sequence__fini(&msg->sequence);
}

example_interfaces__action__Fibonacci_Feedback *
example_interfaces__action__Fibonacci_Feedback__create()
{
  example_interfaces__action__Fibonacci_Feedback * msg = (example_interfaces__action__Fibonacci_Feedback *)malloc(sizeof(example_interfaces__action__Fibonacci_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__action__Fibonacci_Feedback));
  bool success = example_interfaces__action__Fibonacci_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
example_interfaces__action__Fibonacci_Feedback__destroy(example_interfaces__action__Fibonacci_Feedback * msg)
{
  if (msg) {
    example_interfaces__action__Fibonacci_Feedback__fini(msg);
  }
  free(msg);
}


bool
example_interfaces__action__Fibonacci_Feedback__Sequence__init(example_interfaces__action__Fibonacci_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  example_interfaces__action__Fibonacci_Feedback * data = NULL;
  if (size) {
    data = (example_interfaces__action__Fibonacci_Feedback *)calloc(size, sizeof(example_interfaces__action__Fibonacci_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__action__Fibonacci_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__action__Fibonacci_Feedback__fini(&data[i - 1]);
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
example_interfaces__action__Fibonacci_Feedback__Sequence__fini(example_interfaces__action__Fibonacci_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      example_interfaces__action__Fibonacci_Feedback__fini(&array->data[i]);
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

example_interfaces__action__Fibonacci_Feedback__Sequence *
example_interfaces__action__Fibonacci_Feedback__Sequence__create(size_t size)
{
  example_interfaces__action__Fibonacci_Feedback__Sequence * array = (example_interfaces__action__Fibonacci_Feedback__Sequence *)malloc(sizeof(example_interfaces__action__Fibonacci_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__action__Fibonacci_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
example_interfaces__action__Fibonacci_Feedback__Sequence__destroy(example_interfaces__action__Fibonacci_Feedback__Sequence * array)
{
  if (array) {
    example_interfaces__action__Fibonacci_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "example_interfaces/action/detail/fibonacci__functions.h"

bool
example_interfaces__action__Fibonacci_SendGoal_Request__init(example_interfaces__action__Fibonacci_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    example_interfaces__action__Fibonacci_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!example_interfaces__action__Fibonacci_Goal__init(&msg->goal)) {
    example_interfaces__action__Fibonacci_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
example_interfaces__action__Fibonacci_SendGoal_Request__fini(example_interfaces__action__Fibonacci_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  example_interfaces__action__Fibonacci_Goal__fini(&msg->goal);
}

example_interfaces__action__Fibonacci_SendGoal_Request *
example_interfaces__action__Fibonacci_SendGoal_Request__create()
{
  example_interfaces__action__Fibonacci_SendGoal_Request * msg = (example_interfaces__action__Fibonacci_SendGoal_Request *)malloc(sizeof(example_interfaces__action__Fibonacci_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__action__Fibonacci_SendGoal_Request));
  bool success = example_interfaces__action__Fibonacci_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
example_interfaces__action__Fibonacci_SendGoal_Request__destroy(example_interfaces__action__Fibonacci_SendGoal_Request * msg)
{
  if (msg) {
    example_interfaces__action__Fibonacci_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
example_interfaces__action__Fibonacci_SendGoal_Request__Sequence__init(example_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  example_interfaces__action__Fibonacci_SendGoal_Request * data = NULL;
  if (size) {
    data = (example_interfaces__action__Fibonacci_SendGoal_Request *)calloc(size, sizeof(example_interfaces__action__Fibonacci_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__action__Fibonacci_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__action__Fibonacci_SendGoal_Request__fini(&data[i - 1]);
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
example_interfaces__action__Fibonacci_SendGoal_Request__Sequence__fini(example_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      example_interfaces__action__Fibonacci_SendGoal_Request__fini(&array->data[i]);
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

example_interfaces__action__Fibonacci_SendGoal_Request__Sequence *
example_interfaces__action__Fibonacci_SendGoal_Request__Sequence__create(size_t size)
{
  example_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array = (example_interfaces__action__Fibonacci_SendGoal_Request__Sequence *)malloc(sizeof(example_interfaces__action__Fibonacci_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__action__Fibonacci_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
example_interfaces__action__Fibonacci_SendGoal_Request__Sequence__destroy(example_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array)
{
  if (array) {
    example_interfaces__action__Fibonacci_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
example_interfaces__action__Fibonacci_SendGoal_Response__init(example_interfaces__action__Fibonacci_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    example_interfaces__action__Fibonacci_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
example_interfaces__action__Fibonacci_SendGoal_Response__fini(example_interfaces__action__Fibonacci_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

example_interfaces__action__Fibonacci_SendGoal_Response *
example_interfaces__action__Fibonacci_SendGoal_Response__create()
{
  example_interfaces__action__Fibonacci_SendGoal_Response * msg = (example_interfaces__action__Fibonacci_SendGoal_Response *)malloc(sizeof(example_interfaces__action__Fibonacci_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__action__Fibonacci_SendGoal_Response));
  bool success = example_interfaces__action__Fibonacci_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
example_interfaces__action__Fibonacci_SendGoal_Response__destroy(example_interfaces__action__Fibonacci_SendGoal_Response * msg)
{
  if (msg) {
    example_interfaces__action__Fibonacci_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
example_interfaces__action__Fibonacci_SendGoal_Response__Sequence__init(example_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  example_interfaces__action__Fibonacci_SendGoal_Response * data = NULL;
  if (size) {
    data = (example_interfaces__action__Fibonacci_SendGoal_Response *)calloc(size, sizeof(example_interfaces__action__Fibonacci_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__action__Fibonacci_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__action__Fibonacci_SendGoal_Response__fini(&data[i - 1]);
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
example_interfaces__action__Fibonacci_SendGoal_Response__Sequence__fini(example_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      example_interfaces__action__Fibonacci_SendGoal_Response__fini(&array->data[i]);
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

example_interfaces__action__Fibonacci_SendGoal_Response__Sequence *
example_interfaces__action__Fibonacci_SendGoal_Response__Sequence__create(size_t size)
{
  example_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array = (example_interfaces__action__Fibonacci_SendGoal_Response__Sequence *)malloc(sizeof(example_interfaces__action__Fibonacci_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__action__Fibonacci_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
example_interfaces__action__Fibonacci_SendGoal_Response__Sequence__destroy(example_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array)
{
  if (array) {
    example_interfaces__action__Fibonacci_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
example_interfaces__action__Fibonacci_GetResult_Request__init(example_interfaces__action__Fibonacci_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    example_interfaces__action__Fibonacci_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
example_interfaces__action__Fibonacci_GetResult_Request__fini(example_interfaces__action__Fibonacci_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

example_interfaces__action__Fibonacci_GetResult_Request *
example_interfaces__action__Fibonacci_GetResult_Request__create()
{
  example_interfaces__action__Fibonacci_GetResult_Request * msg = (example_interfaces__action__Fibonacci_GetResult_Request *)malloc(sizeof(example_interfaces__action__Fibonacci_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__action__Fibonacci_GetResult_Request));
  bool success = example_interfaces__action__Fibonacci_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
example_interfaces__action__Fibonacci_GetResult_Request__destroy(example_interfaces__action__Fibonacci_GetResult_Request * msg)
{
  if (msg) {
    example_interfaces__action__Fibonacci_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
example_interfaces__action__Fibonacci_GetResult_Request__Sequence__init(example_interfaces__action__Fibonacci_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  example_interfaces__action__Fibonacci_GetResult_Request * data = NULL;
  if (size) {
    data = (example_interfaces__action__Fibonacci_GetResult_Request *)calloc(size, sizeof(example_interfaces__action__Fibonacci_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__action__Fibonacci_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__action__Fibonacci_GetResult_Request__fini(&data[i - 1]);
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
example_interfaces__action__Fibonacci_GetResult_Request__Sequence__fini(example_interfaces__action__Fibonacci_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      example_interfaces__action__Fibonacci_GetResult_Request__fini(&array->data[i]);
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

example_interfaces__action__Fibonacci_GetResult_Request__Sequence *
example_interfaces__action__Fibonacci_GetResult_Request__Sequence__create(size_t size)
{
  example_interfaces__action__Fibonacci_GetResult_Request__Sequence * array = (example_interfaces__action__Fibonacci_GetResult_Request__Sequence *)malloc(sizeof(example_interfaces__action__Fibonacci_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__action__Fibonacci_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
example_interfaces__action__Fibonacci_GetResult_Request__Sequence__destroy(example_interfaces__action__Fibonacci_GetResult_Request__Sequence * array)
{
  if (array) {
    example_interfaces__action__Fibonacci_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "example_interfaces/action/detail/fibonacci__functions.h"

bool
example_interfaces__action__Fibonacci_GetResult_Response__init(example_interfaces__action__Fibonacci_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!example_interfaces__action__Fibonacci_Result__init(&msg->result)) {
    example_interfaces__action__Fibonacci_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
example_interfaces__action__Fibonacci_GetResult_Response__fini(example_interfaces__action__Fibonacci_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  example_interfaces__action__Fibonacci_Result__fini(&msg->result);
}

example_interfaces__action__Fibonacci_GetResult_Response *
example_interfaces__action__Fibonacci_GetResult_Response__create()
{
  example_interfaces__action__Fibonacci_GetResult_Response * msg = (example_interfaces__action__Fibonacci_GetResult_Response *)malloc(sizeof(example_interfaces__action__Fibonacci_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__action__Fibonacci_GetResult_Response));
  bool success = example_interfaces__action__Fibonacci_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
example_interfaces__action__Fibonacci_GetResult_Response__destroy(example_interfaces__action__Fibonacci_GetResult_Response * msg)
{
  if (msg) {
    example_interfaces__action__Fibonacci_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
example_interfaces__action__Fibonacci_GetResult_Response__Sequence__init(example_interfaces__action__Fibonacci_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  example_interfaces__action__Fibonacci_GetResult_Response * data = NULL;
  if (size) {
    data = (example_interfaces__action__Fibonacci_GetResult_Response *)calloc(size, sizeof(example_interfaces__action__Fibonacci_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__action__Fibonacci_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__action__Fibonacci_GetResult_Response__fini(&data[i - 1]);
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
example_interfaces__action__Fibonacci_GetResult_Response__Sequence__fini(example_interfaces__action__Fibonacci_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      example_interfaces__action__Fibonacci_GetResult_Response__fini(&array->data[i]);
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

example_interfaces__action__Fibonacci_GetResult_Response__Sequence *
example_interfaces__action__Fibonacci_GetResult_Response__Sequence__create(size_t size)
{
  example_interfaces__action__Fibonacci_GetResult_Response__Sequence * array = (example_interfaces__action__Fibonacci_GetResult_Response__Sequence *)malloc(sizeof(example_interfaces__action__Fibonacci_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__action__Fibonacci_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
example_interfaces__action__Fibonacci_GetResult_Response__Sequence__destroy(example_interfaces__action__Fibonacci_GetResult_Response__Sequence * array)
{
  if (array) {
    example_interfaces__action__Fibonacci_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "example_interfaces/action/detail/fibonacci__functions.h"

bool
example_interfaces__action__Fibonacci_FeedbackMessage__init(example_interfaces__action__Fibonacci_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    example_interfaces__action__Fibonacci_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!example_interfaces__action__Fibonacci_Feedback__init(&msg->feedback)) {
    example_interfaces__action__Fibonacci_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
example_interfaces__action__Fibonacci_FeedbackMessage__fini(example_interfaces__action__Fibonacci_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  example_interfaces__action__Fibonacci_Feedback__fini(&msg->feedback);
}

example_interfaces__action__Fibonacci_FeedbackMessage *
example_interfaces__action__Fibonacci_FeedbackMessage__create()
{
  example_interfaces__action__Fibonacci_FeedbackMessage * msg = (example_interfaces__action__Fibonacci_FeedbackMessage *)malloc(sizeof(example_interfaces__action__Fibonacci_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__action__Fibonacci_FeedbackMessage));
  bool success = example_interfaces__action__Fibonacci_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
example_interfaces__action__Fibonacci_FeedbackMessage__destroy(example_interfaces__action__Fibonacci_FeedbackMessage * msg)
{
  if (msg) {
    example_interfaces__action__Fibonacci_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
example_interfaces__action__Fibonacci_FeedbackMessage__Sequence__init(example_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  example_interfaces__action__Fibonacci_FeedbackMessage * data = NULL;
  if (size) {
    data = (example_interfaces__action__Fibonacci_FeedbackMessage *)calloc(size, sizeof(example_interfaces__action__Fibonacci_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__action__Fibonacci_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__action__Fibonacci_FeedbackMessage__fini(&data[i - 1]);
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
example_interfaces__action__Fibonacci_FeedbackMessage__Sequence__fini(example_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      example_interfaces__action__Fibonacci_FeedbackMessage__fini(&array->data[i]);
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

example_interfaces__action__Fibonacci_FeedbackMessage__Sequence *
example_interfaces__action__Fibonacci_FeedbackMessage__Sequence__create(size_t size)
{
  example_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array = (example_interfaces__action__Fibonacci_FeedbackMessage__Sequence *)malloc(sizeof(example_interfaces__action__Fibonacci_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__action__Fibonacci_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
example_interfaces__action__Fibonacci_FeedbackMessage__Sequence__destroy(example_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array)
{
  if (array) {
    example_interfaces__action__Fibonacci_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
