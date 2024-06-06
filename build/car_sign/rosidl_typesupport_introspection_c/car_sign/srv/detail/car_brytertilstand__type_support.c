// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from car_sign:srv/CarBrytertilstand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "car_sign/srv/detail/car_brytertilstand__rosidl_typesupport_introspection_c.h"
#include "car_sign/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "car_sign/srv/detail/car_brytertilstand__functions.h"
#include "car_sign/srv/detail/car_brytertilstand__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void car_sign__srv__CarBrytertilstand_Request__rosidl_typesupport_introspection_c__CarBrytertilstand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  car_sign__srv__CarBrytertilstand_Request__init(message_memory);
}

void car_sign__srv__CarBrytertilstand_Request__rosidl_typesupport_introspection_c__CarBrytertilstand_Request_fini_function(void * message_memory)
{
  car_sign__srv__CarBrytertilstand_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember car_sign__srv__CarBrytertilstand_Request__rosidl_typesupport_introspection_c__CarBrytertilstand_Request_message_member_array[1] = {
  {
    "bryter_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_sign__srv__CarBrytertilstand_Request, bryter_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers car_sign__srv__CarBrytertilstand_Request__rosidl_typesupport_introspection_c__CarBrytertilstand_Request_message_members = {
  "car_sign__srv",  // message namespace
  "CarBrytertilstand_Request",  // message name
  1,  // number of fields
  sizeof(car_sign__srv__CarBrytertilstand_Request),
  car_sign__srv__CarBrytertilstand_Request__rosidl_typesupport_introspection_c__CarBrytertilstand_Request_message_member_array,  // message members
  car_sign__srv__CarBrytertilstand_Request__rosidl_typesupport_introspection_c__CarBrytertilstand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  car_sign__srv__CarBrytertilstand_Request__rosidl_typesupport_introspection_c__CarBrytertilstand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t car_sign__srv__CarBrytertilstand_Request__rosidl_typesupport_introspection_c__CarBrytertilstand_Request_message_type_support_handle = {
  0,
  &car_sign__srv__CarBrytertilstand_Request__rosidl_typesupport_introspection_c__CarBrytertilstand_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_sign
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_sign, srv, CarBrytertilstand_Request)() {
  if (!car_sign__srv__CarBrytertilstand_Request__rosidl_typesupport_introspection_c__CarBrytertilstand_Request_message_type_support_handle.typesupport_identifier) {
    car_sign__srv__CarBrytertilstand_Request__rosidl_typesupport_introspection_c__CarBrytertilstand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &car_sign__srv__CarBrytertilstand_Request__rosidl_typesupport_introspection_c__CarBrytertilstand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "car_sign/srv/detail/car_brytertilstand__rosidl_typesupport_introspection_c.h"
// already included above
// #include "car_sign/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "car_sign/srv/detail/car_brytertilstand__functions.h"
// already included above
// #include "car_sign/srv/detail/car_brytertilstand__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void car_sign__srv__CarBrytertilstand_Response__rosidl_typesupport_introspection_c__CarBrytertilstand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  car_sign__srv__CarBrytertilstand_Response__init(message_memory);
}

void car_sign__srv__CarBrytertilstand_Response__rosidl_typesupport_introspection_c__CarBrytertilstand_Response_fini_function(void * message_memory)
{
  car_sign__srv__CarBrytertilstand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember car_sign__srv__CarBrytertilstand_Response__rosidl_typesupport_introspection_c__CarBrytertilstand_Response_message_member_array[1] = {
  {
    "bryter_tilstand",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_sign__srv__CarBrytertilstand_Response, bryter_tilstand),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers car_sign__srv__CarBrytertilstand_Response__rosidl_typesupport_introspection_c__CarBrytertilstand_Response_message_members = {
  "car_sign__srv",  // message namespace
  "CarBrytertilstand_Response",  // message name
  1,  // number of fields
  sizeof(car_sign__srv__CarBrytertilstand_Response),
  car_sign__srv__CarBrytertilstand_Response__rosidl_typesupport_introspection_c__CarBrytertilstand_Response_message_member_array,  // message members
  car_sign__srv__CarBrytertilstand_Response__rosidl_typesupport_introspection_c__CarBrytertilstand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  car_sign__srv__CarBrytertilstand_Response__rosidl_typesupport_introspection_c__CarBrytertilstand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t car_sign__srv__CarBrytertilstand_Response__rosidl_typesupport_introspection_c__CarBrytertilstand_Response_message_type_support_handle = {
  0,
  &car_sign__srv__CarBrytertilstand_Response__rosidl_typesupport_introspection_c__CarBrytertilstand_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_sign
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_sign, srv, CarBrytertilstand_Response)() {
  if (!car_sign__srv__CarBrytertilstand_Response__rosidl_typesupport_introspection_c__CarBrytertilstand_Response_message_type_support_handle.typesupport_identifier) {
    car_sign__srv__CarBrytertilstand_Response__rosidl_typesupport_introspection_c__CarBrytertilstand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &car_sign__srv__CarBrytertilstand_Response__rosidl_typesupport_introspection_c__CarBrytertilstand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "car_sign/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "car_sign/srv/detail/car_brytertilstand__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers car_sign__srv__detail__car_brytertilstand__rosidl_typesupport_introspection_c__CarBrytertilstand_service_members = {
  "car_sign__srv",  // service namespace
  "CarBrytertilstand",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // car_sign__srv__detail__car_brytertilstand__rosidl_typesupport_introspection_c__CarBrytertilstand_Request_message_type_support_handle,
  NULL  // response message
  // car_sign__srv__detail__car_brytertilstand__rosidl_typesupport_introspection_c__CarBrytertilstand_Response_message_type_support_handle
};

static rosidl_service_type_support_t car_sign__srv__detail__car_brytertilstand__rosidl_typesupport_introspection_c__CarBrytertilstand_service_type_support_handle = {
  0,
  &car_sign__srv__detail__car_brytertilstand__rosidl_typesupport_introspection_c__CarBrytertilstand_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_sign, srv, CarBrytertilstand_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_sign, srv, CarBrytertilstand_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_sign
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_sign, srv, CarBrytertilstand)() {
  if (!car_sign__srv__detail__car_brytertilstand__rosidl_typesupport_introspection_c__CarBrytertilstand_service_type_support_handle.typesupport_identifier) {
    car_sign__srv__detail__car_brytertilstand__rosidl_typesupport_introspection_c__CarBrytertilstand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)car_sign__srv__detail__car_brytertilstand__rosidl_typesupport_introspection_c__CarBrytertilstand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_sign, srv, CarBrytertilstand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_sign, srv, CarBrytertilstand_Response)()->data;
  }

  return &car_sign__srv__detail__car_brytertilstand__rosidl_typesupport_introspection_c__CarBrytertilstand_service_type_support_handle;
}
