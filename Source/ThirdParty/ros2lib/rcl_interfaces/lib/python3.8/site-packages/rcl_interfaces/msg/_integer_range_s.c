// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rcl_interfaces:msg/IntegerRange.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rcl_interfaces/msg/detail/integer_range__struct.h"
#include "rcl_interfaces/msg/detail/integer_range__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rcl_interfaces__msg__integer_range__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rcl_interfaces.msg._integer_range.IntegerRange", full_classname_dest, 46) == 0);
  }
  rcl_interfaces__msg__IntegerRange * ros_message = _ros_message;
  {  // from_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "from_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->from_value = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // to_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "to_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->to_value = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // step
    PyObject * field = PyObject_GetAttrString(_pymsg, "step");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->step = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rcl_interfaces__msg__integer_range__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IntegerRange */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.msg._integer_range");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IntegerRange");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rcl_interfaces__msg__IntegerRange * ros_message = (rcl_interfaces__msg__IntegerRange *)raw_ros_message;
  {  // from_value
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->from_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "from_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // to_value
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->to_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "to_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // step
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->step);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
