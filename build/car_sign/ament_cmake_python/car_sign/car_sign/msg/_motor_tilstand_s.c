// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from car_sign:msg/MotorTilstand.idl
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
#include "car_sign/msg/detail/motor_tilstand__struct.h"
#include "car_sign/msg/detail/motor_tilstand__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool car_sign__msg__motor_tilstand__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("car_sign.msg._motor_tilstand.MotorTilstand", full_classname_dest, 42) == 0);
  }
  car_sign__msg__MotorTilstand * ros_message = _ros_message;
  {  // instruks_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "instruks_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->instruks_id = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // left
    PyObject * field = PyObject_GetAttrString(_pymsg, "left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right
    PyObject * field = PyObject_GetAttrString(_pymsg, "right");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * car_sign__msg__motor_tilstand__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorTilstand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("car_sign.msg._motor_tilstand");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorTilstand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  car_sign__msg__MotorTilstand * ros_message = (car_sign__msg__MotorTilstand *)raw_ros_message;
  {  // instruks_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->instruks_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "instruks_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
