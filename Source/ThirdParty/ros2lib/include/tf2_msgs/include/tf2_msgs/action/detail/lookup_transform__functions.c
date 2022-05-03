// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tf2_msgs:action/LookupTransform.idl
// generated code does not contain a copyright notice
#include "tf2_msgs/action/detail/lookup_transform__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `target_frame`
// Member `source_frame`
// Member `fixed_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `source_time`
// Member `target_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `timeout`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
tf2_msgs__action__LookupTransform_Goal__init(tf2_msgs__action__LookupTransform_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_frame
  if (!rosidl_runtime_c__String__init(&msg->target_frame)) {
    tf2_msgs__action__LookupTransform_Goal__fini(msg);
    return false;
  }
  // source_frame
  if (!rosidl_runtime_c__String__init(&msg->source_frame)) {
    tf2_msgs__action__LookupTransform_Goal__fini(msg);
    return false;
  }
  // source_time
  if (!builtin_interfaces__msg__Time__init(&msg->source_time)) {
    tf2_msgs__action__LookupTransform_Goal__fini(msg);
    return false;
  }
  // timeout
  if (!builtin_interfaces__msg__Duration__init(&msg->timeout)) {
    tf2_msgs__action__LookupTransform_Goal__fini(msg);
    return false;
  }
  // target_time
  if (!builtin_interfaces__msg__Time__init(&msg->target_time)) {
    tf2_msgs__action__LookupTransform_Goal__fini(msg);
    return false;
  }
  // fixed_frame
  if (!rosidl_runtime_c__String__init(&msg->fixed_frame)) {
    tf2_msgs__action__LookupTransform_Goal__fini(msg);
    return false;
  }
  // advanced
  return true;
}

void
tf2_msgs__action__LookupTransform_Goal__fini(tf2_msgs__action__LookupTransform_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_frame
  rosidl_runtime_c__String__fini(&msg->target_frame);
  // source_frame
  rosidl_runtime_c__String__fini(&msg->source_frame);
  // source_time
  builtin_interfaces__msg__Time__fini(&msg->source_time);
  // timeout
  builtin_interfaces__msg__Duration__fini(&msg->timeout);
  // target_time
  builtin_interfaces__msg__Time__fini(&msg->target_time);
  // fixed_frame
  rosidl_runtime_c__String__fini(&msg->fixed_frame);
  // advanced
}

tf2_msgs__action__LookupTransform_Goal *
tf2_msgs__action__LookupTransform_Goal__create()
{
  tf2_msgs__action__LookupTransform_Goal * msg = (tf2_msgs__action__LookupTransform_Goal *)malloc(sizeof(tf2_msgs__action__LookupTransform_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_Goal));
  bool success = tf2_msgs__action__LookupTransform_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_Goal__destroy(tf2_msgs__action__LookupTransform_Goal * msg)
{
  if (msg) {
    tf2_msgs__action__LookupTransform_Goal__fini(msg);
  }
  free(msg);
}


bool
tf2_msgs__action__LookupTransform_Goal__Sequence__init(tf2_msgs__action__LookupTransform_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tf2_msgs__action__LookupTransform_Goal * data = NULL;
  if (size) {
    data = (tf2_msgs__action__LookupTransform_Goal *)calloc(size, sizeof(tf2_msgs__action__LookupTransform_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_Goal__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_Goal__Sequence__fini(tf2_msgs__action__LookupTransform_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tf2_msgs__action__LookupTransform_Goal__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_Goal__Sequence *
tf2_msgs__action__LookupTransform_Goal__Sequence__create(size_t size)
{
  tf2_msgs__action__LookupTransform_Goal__Sequence * array = (tf2_msgs__action__LookupTransform_Goal__Sequence *)malloc(sizeof(tf2_msgs__action__LookupTransform_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_Goal__Sequence__destroy(tf2_msgs__action__LookupTransform_Goal__Sequence * array)
{
  if (array) {
    tf2_msgs__action__LookupTransform_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `transform`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"
// Member `error`
#include "tf2_msgs/msg/detail/tf2_error__functions.h"

bool
tf2_msgs__action__LookupTransform_Result__init(tf2_msgs__action__LookupTransform_Result * msg)
{
  if (!msg) {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__TransformStamped__init(&msg->transform)) {
    tf2_msgs__action__LookupTransform_Result__fini(msg);
    return false;
  }
  // error
  if (!tf2_msgs__msg__TF2Error__init(&msg->error)) {
    tf2_msgs__action__LookupTransform_Result__fini(msg);
    return false;
  }
  return true;
}

void
tf2_msgs__action__LookupTransform_Result__fini(tf2_msgs__action__LookupTransform_Result * msg)
{
  if (!msg) {
    return;
  }
  // transform
  geometry_msgs__msg__TransformStamped__fini(&msg->transform);
  // error
  tf2_msgs__msg__TF2Error__fini(&msg->error);
}

tf2_msgs__action__LookupTransform_Result *
tf2_msgs__action__LookupTransform_Result__create()
{
  tf2_msgs__action__LookupTransform_Result * msg = (tf2_msgs__action__LookupTransform_Result *)malloc(sizeof(tf2_msgs__action__LookupTransform_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_Result));
  bool success = tf2_msgs__action__LookupTransform_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_Result__destroy(tf2_msgs__action__LookupTransform_Result * msg)
{
  if (msg) {
    tf2_msgs__action__LookupTransform_Result__fini(msg);
  }
  free(msg);
}


bool
tf2_msgs__action__LookupTransform_Result__Sequence__init(tf2_msgs__action__LookupTransform_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tf2_msgs__action__LookupTransform_Result * data = NULL;
  if (size) {
    data = (tf2_msgs__action__LookupTransform_Result *)calloc(size, sizeof(tf2_msgs__action__LookupTransform_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_Result__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_Result__Sequence__fini(tf2_msgs__action__LookupTransform_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tf2_msgs__action__LookupTransform_Result__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_Result__Sequence *
tf2_msgs__action__LookupTransform_Result__Sequence__create(size_t size)
{
  tf2_msgs__action__LookupTransform_Result__Sequence * array = (tf2_msgs__action__LookupTransform_Result__Sequence *)malloc(sizeof(tf2_msgs__action__LookupTransform_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_Result__Sequence__destroy(tf2_msgs__action__LookupTransform_Result__Sequence * array)
{
  if (array) {
    tf2_msgs__action__LookupTransform_Result__Sequence__fini(array);
  }
  free(array);
}


bool
tf2_msgs__action__LookupTransform_Feedback__init(tf2_msgs__action__LookupTransform_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
tf2_msgs__action__LookupTransform_Feedback__fini(tf2_msgs__action__LookupTransform_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

tf2_msgs__action__LookupTransform_Feedback *
tf2_msgs__action__LookupTransform_Feedback__create()
{
  tf2_msgs__action__LookupTransform_Feedback * msg = (tf2_msgs__action__LookupTransform_Feedback *)malloc(sizeof(tf2_msgs__action__LookupTransform_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_Feedback));
  bool success = tf2_msgs__action__LookupTransform_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_Feedback__destroy(tf2_msgs__action__LookupTransform_Feedback * msg)
{
  if (msg) {
    tf2_msgs__action__LookupTransform_Feedback__fini(msg);
  }
  free(msg);
}


bool
tf2_msgs__action__LookupTransform_Feedback__Sequence__init(tf2_msgs__action__LookupTransform_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tf2_msgs__action__LookupTransform_Feedback * data = NULL;
  if (size) {
    data = (tf2_msgs__action__LookupTransform_Feedback *)calloc(size, sizeof(tf2_msgs__action__LookupTransform_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_Feedback__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_Feedback__Sequence__fini(tf2_msgs__action__LookupTransform_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tf2_msgs__action__LookupTransform_Feedback__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_Feedback__Sequence *
tf2_msgs__action__LookupTransform_Feedback__Sequence__create(size_t size)
{
  tf2_msgs__action__LookupTransform_Feedback__Sequence * array = (tf2_msgs__action__LookupTransform_Feedback__Sequence *)malloc(sizeof(tf2_msgs__action__LookupTransform_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_Feedback__Sequence__destroy(tf2_msgs__action__LookupTransform_Feedback__Sequence * array)
{
  if (array) {
    tf2_msgs__action__LookupTransform_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "tf2_msgs/action/detail/lookup_transform__functions.h"

bool
tf2_msgs__action__LookupTransform_SendGoal_Request__init(tf2_msgs__action__LookupTransform_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tf2_msgs__action__LookupTransform_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!tf2_msgs__action__LookupTransform_Goal__init(&msg->goal)) {
    tf2_msgs__action__LookupTransform_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
tf2_msgs__action__LookupTransform_SendGoal_Request__fini(tf2_msgs__action__LookupTransform_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  tf2_msgs__action__LookupTransform_Goal__fini(&msg->goal);
}

tf2_msgs__action__LookupTransform_SendGoal_Request *
tf2_msgs__action__LookupTransform_SendGoal_Request__create()
{
  tf2_msgs__action__LookupTransform_SendGoal_Request * msg = (tf2_msgs__action__LookupTransform_SendGoal_Request *)malloc(sizeof(tf2_msgs__action__LookupTransform_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_SendGoal_Request));
  bool success = tf2_msgs__action__LookupTransform_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_SendGoal_Request__destroy(tf2_msgs__action__LookupTransform_SendGoal_Request * msg)
{
  if (msg) {
    tf2_msgs__action__LookupTransform_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__init(tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tf2_msgs__action__LookupTransform_SendGoal_Request * data = NULL;
  if (size) {
    data = (tf2_msgs__action__LookupTransform_SendGoal_Request *)calloc(size, sizeof(tf2_msgs__action__LookupTransform_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_SendGoal_Request__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__fini(tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tf2_msgs__action__LookupTransform_SendGoal_Request__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence *
tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__create(size_t size)
{
  tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence * array = (tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence *)malloc(sizeof(tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__destroy(tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence * array)
{
  if (array) {
    tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
// already included above
// #include "builtin_interfaces/msg/detail/time__functions.h"

bool
tf2_msgs__action__LookupTransform_SendGoal_Response__init(tf2_msgs__action__LookupTransform_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tf2_msgs__action__LookupTransform_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
tf2_msgs__action__LookupTransform_SendGoal_Response__fini(tf2_msgs__action__LookupTransform_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

tf2_msgs__action__LookupTransform_SendGoal_Response *
tf2_msgs__action__LookupTransform_SendGoal_Response__create()
{
  tf2_msgs__action__LookupTransform_SendGoal_Response * msg = (tf2_msgs__action__LookupTransform_SendGoal_Response *)malloc(sizeof(tf2_msgs__action__LookupTransform_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_SendGoal_Response));
  bool success = tf2_msgs__action__LookupTransform_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_SendGoal_Response__destroy(tf2_msgs__action__LookupTransform_SendGoal_Response * msg)
{
  if (msg) {
    tf2_msgs__action__LookupTransform_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__init(tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tf2_msgs__action__LookupTransform_SendGoal_Response * data = NULL;
  if (size) {
    data = (tf2_msgs__action__LookupTransform_SendGoal_Response *)calloc(size, sizeof(tf2_msgs__action__LookupTransform_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_SendGoal_Response__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__fini(tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tf2_msgs__action__LookupTransform_SendGoal_Response__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence *
tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__create(size_t size)
{
  tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence * array = (tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence *)malloc(sizeof(tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__destroy(tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence * array)
{
  if (array) {
    tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
tf2_msgs__action__LookupTransform_GetResult_Request__init(tf2_msgs__action__LookupTransform_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tf2_msgs__action__LookupTransform_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
tf2_msgs__action__LookupTransform_GetResult_Request__fini(tf2_msgs__action__LookupTransform_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

tf2_msgs__action__LookupTransform_GetResult_Request *
tf2_msgs__action__LookupTransform_GetResult_Request__create()
{
  tf2_msgs__action__LookupTransform_GetResult_Request * msg = (tf2_msgs__action__LookupTransform_GetResult_Request *)malloc(sizeof(tf2_msgs__action__LookupTransform_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_GetResult_Request));
  bool success = tf2_msgs__action__LookupTransform_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_GetResult_Request__destroy(tf2_msgs__action__LookupTransform_GetResult_Request * msg)
{
  if (msg) {
    tf2_msgs__action__LookupTransform_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__init(tf2_msgs__action__LookupTransform_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tf2_msgs__action__LookupTransform_GetResult_Request * data = NULL;
  if (size) {
    data = (tf2_msgs__action__LookupTransform_GetResult_Request *)calloc(size, sizeof(tf2_msgs__action__LookupTransform_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_GetResult_Request__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__fini(tf2_msgs__action__LookupTransform_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tf2_msgs__action__LookupTransform_GetResult_Request__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_GetResult_Request__Sequence *
tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__create(size_t size)
{
  tf2_msgs__action__LookupTransform_GetResult_Request__Sequence * array = (tf2_msgs__action__LookupTransform_GetResult_Request__Sequence *)malloc(sizeof(tf2_msgs__action__LookupTransform_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__destroy(tf2_msgs__action__LookupTransform_GetResult_Request__Sequence * array)
{
  if (array) {
    tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "tf2_msgs/action/detail/lookup_transform__functions.h"

bool
tf2_msgs__action__LookupTransform_GetResult_Response__init(tf2_msgs__action__LookupTransform_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!tf2_msgs__action__LookupTransform_Result__init(&msg->result)) {
    tf2_msgs__action__LookupTransform_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
tf2_msgs__action__LookupTransform_GetResult_Response__fini(tf2_msgs__action__LookupTransform_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  tf2_msgs__action__LookupTransform_Result__fini(&msg->result);
}

tf2_msgs__action__LookupTransform_GetResult_Response *
tf2_msgs__action__LookupTransform_GetResult_Response__create()
{
  tf2_msgs__action__LookupTransform_GetResult_Response * msg = (tf2_msgs__action__LookupTransform_GetResult_Response *)malloc(sizeof(tf2_msgs__action__LookupTransform_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_GetResult_Response));
  bool success = tf2_msgs__action__LookupTransform_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_GetResult_Response__destroy(tf2_msgs__action__LookupTransform_GetResult_Response * msg)
{
  if (msg) {
    tf2_msgs__action__LookupTransform_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__init(tf2_msgs__action__LookupTransform_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tf2_msgs__action__LookupTransform_GetResult_Response * data = NULL;
  if (size) {
    data = (tf2_msgs__action__LookupTransform_GetResult_Response *)calloc(size, sizeof(tf2_msgs__action__LookupTransform_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_GetResult_Response__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__fini(tf2_msgs__action__LookupTransform_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tf2_msgs__action__LookupTransform_GetResult_Response__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_GetResult_Response__Sequence *
tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__create(size_t size)
{
  tf2_msgs__action__LookupTransform_GetResult_Response__Sequence * array = (tf2_msgs__action__LookupTransform_GetResult_Response__Sequence *)malloc(sizeof(tf2_msgs__action__LookupTransform_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__destroy(tf2_msgs__action__LookupTransform_GetResult_Response__Sequence * array)
{
  if (array) {
    tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "tf2_msgs/action/detail/lookup_transform__functions.h"

bool
tf2_msgs__action__LookupTransform_FeedbackMessage__init(tf2_msgs__action__LookupTransform_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tf2_msgs__action__LookupTransform_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!tf2_msgs__action__LookupTransform_Feedback__init(&msg->feedback)) {
    tf2_msgs__action__LookupTransform_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
tf2_msgs__action__LookupTransform_FeedbackMessage__fini(tf2_msgs__action__LookupTransform_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  tf2_msgs__action__LookupTransform_Feedback__fini(&msg->feedback);
}

tf2_msgs__action__LookupTransform_FeedbackMessage *
tf2_msgs__action__LookupTransform_FeedbackMessage__create()
{
  tf2_msgs__action__LookupTransform_FeedbackMessage * msg = (tf2_msgs__action__LookupTransform_FeedbackMessage *)malloc(sizeof(tf2_msgs__action__LookupTransform_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__action__LookupTransform_FeedbackMessage));
  bool success = tf2_msgs__action__LookupTransform_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__action__LookupTransform_FeedbackMessage__destroy(tf2_msgs__action__LookupTransform_FeedbackMessage * msg)
{
  if (msg) {
    tf2_msgs__action__LookupTransform_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__init(tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tf2_msgs__action__LookupTransform_FeedbackMessage * data = NULL;
  if (size) {
    data = (tf2_msgs__action__LookupTransform_FeedbackMessage *)calloc(size, sizeof(tf2_msgs__action__LookupTransform_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__action__LookupTransform_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__action__LookupTransform_FeedbackMessage__fini(&data[i - 1]);
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
tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__fini(tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tf2_msgs__action__LookupTransform_FeedbackMessage__fini(&array->data[i]);
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

tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence *
tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__create(size_t size)
{
  tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence * array = (tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence *)malloc(sizeof(tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__destroy(tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence * array)
{
  if (array) {
    tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
