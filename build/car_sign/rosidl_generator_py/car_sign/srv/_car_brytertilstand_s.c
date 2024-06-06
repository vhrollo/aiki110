// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from car_sign:srv/CarBrytertilstand.idl
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
#include "car_sign/srv/detail/car_brytertilstand__struct.h"
#include "car_sign/srv/detail/car_brytertilstand__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool car_sign__srv__car_brytertilstand__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("car_sign.srv._car_brytertilstand.CarBrytertilstand_Request", full_classname_dest, 58) == 0);
  }
  car_sign__srv__CarBrytertilstand_Request * ros_message = _ros_message;
  {  // bryter_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "bryter_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bryter_id = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * car_sign__srv__car_brytertilstand__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CarBrytertilstand_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("car_sign.srv._car_brytertilstand");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CarBrytertilstand_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  car_sign__srv__CarBrytertilstand_Request * ros_message = (car_sign__srv__CarBrytertilstand_Request *)raw_ros_message;
  {  // bryter_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bryter_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bryter_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "car_sign/srv/detail/car_brytertilstand__struct.h"
// already included above
// #include "car_sign/srv/detail/car_brytertilstand__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool car_sign__srv__car_brytertilstand__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("car_sign.srv._car_brytertilstand.CarBrytertilstand_Response", full_classname_dest, 59) == 0);
  }
  car_sign__srv__CarBrytertilstand_Response * ros_message = _ros_message;
  {  // bryter_tilstand
    PyObject * field = PyObject_GetAttrString(_pymsg, "bryter_tilstand");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bryter_tilstand = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * car_sign__srv__car_brytertilstand__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CarBrytertilstand_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("car_sign.srv._car_brytertilstand");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CarBrytertilstand_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  car_sign__srv__CarBrytertilstand_Response * ros_message = (car_sign__srv__CarBrytertilstand_Response *)raw_ros_message;
  {  // bryter_tilstand
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bryter_tilstand);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bryter_tilstand", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
