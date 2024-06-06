// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from car_sign:msg/MotorTilstand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "car_sign/msg/detail/motor_tilstand__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace car_sign
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorTilstand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) car_sign::msg::MotorTilstand(_init);
}

void MotorTilstand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<car_sign::msg::MotorTilstand *>(message_memory);
  typed_message->~MotorTilstand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorTilstand_message_member_array[3] = {
  {
    "instruks_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_sign::msg::MotorTilstand, instruks_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_sign::msg::MotorTilstand, left),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_sign::msg::MotorTilstand, right),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorTilstand_message_members = {
  "car_sign::msg",  // message namespace
  "MotorTilstand",  // message name
  3,  // number of fields
  sizeof(car_sign::msg::MotorTilstand),
  MotorTilstand_message_member_array,  // message members
  MotorTilstand_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorTilstand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorTilstand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorTilstand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace car_sign


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<car_sign::msg::MotorTilstand>()
{
  return &::car_sign::msg::rosidl_typesupport_introspection_cpp::MotorTilstand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, car_sign, msg, MotorTilstand)() {
  return &::car_sign::msg::rosidl_typesupport_introspection_cpp::MotorTilstand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
