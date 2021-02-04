// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rcl_interfaces:msg/ParameterEventDescriptors.idl
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
#include "rcl_interfaces/msg/detail/parameter_event_descriptors__struct.h"
#include "rcl_interfaces/msg/detail/parameter_event_descriptors__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "rcl_interfaces/msg/detail/parameter_descriptor__functions.h"
// end nested array functions include
bool rcl_interfaces__msg__parameter_descriptor__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rcl_interfaces__msg__parameter_descriptor__convert_to_py(void * raw_ros_message);
bool rcl_interfaces__msg__parameter_descriptor__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rcl_interfaces__msg__parameter_descriptor__convert_to_py(void * raw_ros_message);
bool rcl_interfaces__msg__parameter_descriptor__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rcl_interfaces__msg__parameter_descriptor__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rcl_interfaces__msg__parameter_event_descriptors__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[74];
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
    assert(strncmp("rcl_interfaces.msg._parameter_event_descriptors.ParameterEventDescriptors", full_classname_dest, 73) == 0);
  }
  rcl_interfaces__msg__ParameterEventDescriptors * ros_message = _ros_message;
  {  // new_parameters
    PyObject * field = PyObject_GetAttrString(_pymsg, "new_parameters");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'new_parameters'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rcl_interfaces__msg__ParameterDescriptor__Sequence__init(&(ros_message->new_parameters), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rcl_interfaces__msg__ParameterDescriptor__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rcl_interfaces__msg__ParameterDescriptor * dest = ros_message->new_parameters.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rcl_interfaces__msg__parameter_descriptor__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // changed_parameters
    PyObject * field = PyObject_GetAttrString(_pymsg, "changed_parameters");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'changed_parameters'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rcl_interfaces__msg__ParameterDescriptor__Sequence__init(&(ros_message->changed_parameters), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rcl_interfaces__msg__ParameterDescriptor__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rcl_interfaces__msg__ParameterDescriptor * dest = ros_message->changed_parameters.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rcl_interfaces__msg__parameter_descriptor__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // deleted_parameters
    PyObject * field = PyObject_GetAttrString(_pymsg, "deleted_parameters");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'deleted_parameters'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rcl_interfaces__msg__ParameterDescriptor__Sequence__init(&(ros_message->deleted_parameters), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rcl_interfaces__msg__ParameterDescriptor__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rcl_interfaces__msg__ParameterDescriptor * dest = ros_message->deleted_parameters.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rcl_interfaces__msg__parameter_descriptor__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rcl_interfaces__msg__parameter_event_descriptors__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ParameterEventDescriptors */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.msg._parameter_event_descriptors");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ParameterEventDescriptors");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rcl_interfaces__msg__ParameterEventDescriptors * ros_message = (rcl_interfaces__msg__ParameterEventDescriptors *)raw_ros_message;
  {  // new_parameters
    PyObject * field = NULL;
    size_t size = ros_message->new_parameters.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rcl_interfaces__msg__ParameterDescriptor * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->new_parameters.data[i]);
      PyObject * pyitem = rcl_interfaces__msg__parameter_descriptor__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "new_parameters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // changed_parameters
    PyObject * field = NULL;
    size_t size = ros_message->changed_parameters.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rcl_interfaces__msg__ParameterDescriptor * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->changed_parameters.data[i]);
      PyObject * pyitem = rcl_interfaces__msg__parameter_descriptor__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "changed_parameters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // deleted_parameters
    PyObject * field = NULL;
    size_t size = ros_message->deleted_parameters.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rcl_interfaces__msg__ParameterDescriptor * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->deleted_parameters.data[i]);
      PyObject * pyitem = rcl_interfaces__msg__parameter_descriptor__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "deleted_parameters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
