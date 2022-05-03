// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/battery_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `cell_voltage`
// Member `cell_temperature`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `location`
// Member `serial_number`
#include "rosidl_runtime_c/string_functions.h"

bool
sensor_msgs__msg__BatteryState__init(sensor_msgs__msg__BatteryState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sensor_msgs__msg__BatteryState__fini(msg);
    return false;
  }
  // voltage
  // temperature
  // current
  // charge
  // capacity
  // design_capacity
  // percentage
  // power_supply_status
  // power_supply_health
  // power_supply_technology
  // present
  // cell_voltage
  if (!rosidl_runtime_c__float__Sequence__init(&msg->cell_voltage, 0)) {
    sensor_msgs__msg__BatteryState__fini(msg);
    return false;
  }
  // cell_temperature
  if (!rosidl_runtime_c__float__Sequence__init(&msg->cell_temperature, 0)) {
    sensor_msgs__msg__BatteryState__fini(msg);
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__init(&msg->location)) {
    sensor_msgs__msg__BatteryState__fini(msg);
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__init(&msg->serial_number)) {
    sensor_msgs__msg__BatteryState__fini(msg);
    return false;
  }
  return true;
}

void
sensor_msgs__msg__BatteryState__fini(sensor_msgs__msg__BatteryState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // voltage
  // temperature
  // current
  // charge
  // capacity
  // design_capacity
  // percentage
  // power_supply_status
  // power_supply_health
  // power_supply_technology
  // present
  // cell_voltage
  rosidl_runtime_c__float__Sequence__fini(&msg->cell_voltage);
  // cell_temperature
  rosidl_runtime_c__float__Sequence__fini(&msg->cell_temperature);
  // location
  rosidl_runtime_c__String__fini(&msg->location);
  // serial_number
  rosidl_runtime_c__String__fini(&msg->serial_number);
}

sensor_msgs__msg__BatteryState *
sensor_msgs__msg__BatteryState__create()
{
  sensor_msgs__msg__BatteryState * msg = (sensor_msgs__msg__BatteryState *)malloc(sizeof(sensor_msgs__msg__BatteryState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__BatteryState));
  bool success = sensor_msgs__msg__BatteryState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__BatteryState__destroy(sensor_msgs__msg__BatteryState * msg)
{
  if (msg) {
    sensor_msgs__msg__BatteryState__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__BatteryState__Sequence__init(sensor_msgs__msg__BatteryState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__BatteryState * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__BatteryState *)calloc(size, sizeof(sensor_msgs__msg__BatteryState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__BatteryState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__BatteryState__fini(&data[i - 1]);
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
sensor_msgs__msg__BatteryState__Sequence__fini(sensor_msgs__msg__BatteryState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__BatteryState__fini(&array->data[i]);
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

sensor_msgs__msg__BatteryState__Sequence *
sensor_msgs__msg__BatteryState__Sequence__create(size_t size)
{
  sensor_msgs__msg__BatteryState__Sequence * array = (sensor_msgs__msg__BatteryState__Sequence *)malloc(sizeof(sensor_msgs__msg__BatteryState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__BatteryState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__BatteryState__Sequence__destroy(sensor_msgs__msg__BatteryState__Sequence * array)
{
  if (array) {
    sensor_msgs__msg__BatteryState__Sequence__fini(array);
  }
  free(array);
}
