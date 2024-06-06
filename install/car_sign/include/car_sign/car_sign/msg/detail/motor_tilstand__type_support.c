// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from car_sign:msg/MotorTilstand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "car_sign/msg/detail/motor_tilstand__rosidl_typesupport_introspection_c.h"
#include "car_sign/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "car_sign/msg/detail/motor_tilstand__functions.h"
#include "car_sign/msg/detail/motor_tilstand__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void car_sign__msg__MotorTilstand__rosidl_typesupport_introspection_c__MotorTilstand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  car_sign__msg__MotorTilstand__init(message_memory);
}

void car_sign__msg__MotorTilstand__rosidl_typesupport_introspection_c__MotorTilstand_fini_function(void * message_memory)
{
  car_sign__msg__MotorTilstand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember car_sign__msg__MotorTilstand__rosidl_typesupport_introspection_c__MotorTilstand_message_member_array[3] = {
  {
    "instruks_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_sign__msg__MotorTilstand, instruks_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_sign__msg__MotorTilstand, left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_sign__msg__MotorTilstand, right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers car_sign__msg__MotorTilstand__rosidl_typesupport_introspection_c__MotorTilstand_message_members = {
  "car_sign__msg",  // message namespace
  "MotorTilstand",  // message name
  3,  // number of fields
  sizeof(car_sign__msg__MotorTilstand),
  car_sign__msg__MotorTilstand__rosidl_typesupport_introspection_c__MotorTilstand_message_member_array,  // message members
  car_sign__msg__MotorTilstand__rosidl_typesupport_introspection_c__MotorTilstand_init_function,  // function to initialize message memory (memory has to be allocated)
  car_sign__msg__MotorTilstand__rosidl_typesupport_introspection_c__MotorTilstand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t car_sign__msg__MotorTilstand__rosidl_typesupport_introspection_c__MotorTilstand_message_type_support_handle = {
  0,
  &car_sign__msg__MotorTilstand__rosidl_typesupport_introspection_c__MotorTilstand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_sign
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_sign, msg, MotorTilstand)() {
  if (!car_sign__msg__MotorTilstand__rosidl_typesupport_introspection_c__MotorTilstand_message_type_support_handle.typesupport_identifier) {
    car_sign__msg__MotorTilstand__rosidl_typesupport_introspection_c__MotorTilstand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &car_sign__msg__MotorTilstand__rosidl_typesupport_introspection_c__MotorTilstand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
