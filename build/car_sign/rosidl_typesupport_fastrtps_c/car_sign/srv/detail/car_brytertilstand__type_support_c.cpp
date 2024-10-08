// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from car_sign:srv/CarBrytertilstand.idl
// generated code does not contain a copyright notice
#include "car_sign/srv/detail/car_brytertilstand__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "car_sign/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "car_sign/srv/detail/car_brytertilstand__struct.h"
#include "car_sign/srv/detail/car_brytertilstand__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CarBrytertilstand_Request__ros_msg_type = car_sign__srv__CarBrytertilstand_Request;

static bool _CarBrytertilstand_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarBrytertilstand_Request__ros_msg_type * ros_message = static_cast<const _CarBrytertilstand_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: bryter_id
  {
    cdr << ros_message->bryter_id;
  }

  return true;
}

static bool _CarBrytertilstand_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarBrytertilstand_Request__ros_msg_type * ros_message = static_cast<_CarBrytertilstand_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: bryter_id
  {
    cdr >> ros_message->bryter_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_sign
size_t get_serialized_size_car_sign__srv__CarBrytertilstand_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarBrytertilstand_Request__ros_msg_type * ros_message = static_cast<const _CarBrytertilstand_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bryter_id
  {
    size_t item_size = sizeof(ros_message->bryter_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CarBrytertilstand_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_car_sign__srv__CarBrytertilstand_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_sign
size_t max_serialized_size_car_sign__srv__CarBrytertilstand_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: bryter_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CarBrytertilstand_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_car_sign__srv__CarBrytertilstand_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CarBrytertilstand_Request = {
  "car_sign::srv",
  "CarBrytertilstand_Request",
  _CarBrytertilstand_Request__cdr_serialize,
  _CarBrytertilstand_Request__cdr_deserialize,
  _CarBrytertilstand_Request__get_serialized_size,
  _CarBrytertilstand_Request__max_serialized_size
};

static rosidl_message_type_support_t _CarBrytertilstand_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarBrytertilstand_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, car_sign, srv, CarBrytertilstand_Request)() {
  return &_CarBrytertilstand_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "car_sign/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "car_sign/srv/detail/car_brytertilstand__struct.h"
// already included above
// #include "car_sign/srv/detail/car_brytertilstand__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CarBrytertilstand_Response__ros_msg_type = car_sign__srv__CarBrytertilstand_Response;

static bool _CarBrytertilstand_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarBrytertilstand_Response__ros_msg_type * ros_message = static_cast<const _CarBrytertilstand_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: bryter_tilstand
  {
    cdr << ros_message->bryter_tilstand;
  }

  return true;
}

static bool _CarBrytertilstand_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarBrytertilstand_Response__ros_msg_type * ros_message = static_cast<_CarBrytertilstand_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: bryter_tilstand
  {
    cdr >> ros_message->bryter_tilstand;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_sign
size_t get_serialized_size_car_sign__srv__CarBrytertilstand_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarBrytertilstand_Response__ros_msg_type * ros_message = static_cast<const _CarBrytertilstand_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bryter_tilstand
  {
    size_t item_size = sizeof(ros_message->bryter_tilstand);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CarBrytertilstand_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_car_sign__srv__CarBrytertilstand_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_sign
size_t max_serialized_size_car_sign__srv__CarBrytertilstand_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: bryter_tilstand
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CarBrytertilstand_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_car_sign__srv__CarBrytertilstand_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CarBrytertilstand_Response = {
  "car_sign::srv",
  "CarBrytertilstand_Response",
  _CarBrytertilstand_Response__cdr_serialize,
  _CarBrytertilstand_Response__cdr_deserialize,
  _CarBrytertilstand_Response__get_serialized_size,
  _CarBrytertilstand_Response__max_serialized_size
};

static rosidl_message_type_support_t _CarBrytertilstand_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarBrytertilstand_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, car_sign, srv, CarBrytertilstand_Response)() {
  return &_CarBrytertilstand_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "car_sign/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "car_sign/srv/car_brytertilstand.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CarBrytertilstand__callbacks = {
  "car_sign::srv",
  "CarBrytertilstand",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, car_sign, srv, CarBrytertilstand_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, car_sign, srv, CarBrytertilstand_Response)(),
};

static rosidl_service_type_support_t CarBrytertilstand__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CarBrytertilstand__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, car_sign, srv, CarBrytertilstand)() {
  return &CarBrytertilstand__handle;
}

#if defined(__cplusplus)
}
#endif
