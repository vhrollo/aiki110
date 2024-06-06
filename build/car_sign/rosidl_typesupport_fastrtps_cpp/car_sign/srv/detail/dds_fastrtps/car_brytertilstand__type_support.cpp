// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from car_sign:srv/CarBrytertilstand.idl
// generated code does not contain a copyright notice
#include "car_sign/srv/detail/car_brytertilstand__rosidl_typesupport_fastrtps_cpp.hpp"
#include "car_sign/srv/detail/car_brytertilstand__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace car_sign
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_sign
cdr_serialize(
  const car_sign::srv::CarBrytertilstand_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bryter_id
  cdr << ros_message.bryter_id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_sign
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  car_sign::srv::CarBrytertilstand_Request & ros_message)
{
  // Member: bryter_id
  cdr >> ros_message.bryter_id;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_sign
get_serialized_size(
  const car_sign::srv::CarBrytertilstand_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bryter_id
  {
    size_t item_size = sizeof(ros_message.bryter_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_sign
max_serialized_size_CarBrytertilstand_Request(
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


  // Member: bryter_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CarBrytertilstand_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const car_sign::srv::CarBrytertilstand_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CarBrytertilstand_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<car_sign::srv::CarBrytertilstand_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CarBrytertilstand_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const car_sign::srv::CarBrytertilstand_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CarBrytertilstand_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CarBrytertilstand_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CarBrytertilstand_Request__callbacks = {
  "car_sign::srv",
  "CarBrytertilstand_Request",
  _CarBrytertilstand_Request__cdr_serialize,
  _CarBrytertilstand_Request__cdr_deserialize,
  _CarBrytertilstand_Request__get_serialized_size,
  _CarBrytertilstand_Request__max_serialized_size
};

static rosidl_message_type_support_t _CarBrytertilstand_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CarBrytertilstand_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace car_sign

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_car_sign
const rosidl_message_type_support_t *
get_message_type_support_handle<car_sign::srv::CarBrytertilstand_Request>()
{
  return &car_sign::srv::typesupport_fastrtps_cpp::_CarBrytertilstand_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, car_sign, srv, CarBrytertilstand_Request)() {
  return &car_sign::srv::typesupport_fastrtps_cpp::_CarBrytertilstand_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace car_sign
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_sign
cdr_serialize(
  const car_sign::srv::CarBrytertilstand_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bryter_tilstand
  cdr << ros_message.bryter_tilstand;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_sign
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  car_sign::srv::CarBrytertilstand_Response & ros_message)
{
  // Member: bryter_tilstand
  cdr >> ros_message.bryter_tilstand;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_sign
get_serialized_size(
  const car_sign::srv::CarBrytertilstand_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bryter_tilstand
  {
    size_t item_size = sizeof(ros_message.bryter_tilstand);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_sign
max_serialized_size_CarBrytertilstand_Response(
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


  // Member: bryter_tilstand
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CarBrytertilstand_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const car_sign::srv::CarBrytertilstand_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CarBrytertilstand_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<car_sign::srv::CarBrytertilstand_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CarBrytertilstand_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const car_sign::srv::CarBrytertilstand_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CarBrytertilstand_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CarBrytertilstand_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CarBrytertilstand_Response__callbacks = {
  "car_sign::srv",
  "CarBrytertilstand_Response",
  _CarBrytertilstand_Response__cdr_serialize,
  _CarBrytertilstand_Response__cdr_deserialize,
  _CarBrytertilstand_Response__get_serialized_size,
  _CarBrytertilstand_Response__max_serialized_size
};

static rosidl_message_type_support_t _CarBrytertilstand_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CarBrytertilstand_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace car_sign

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_car_sign
const rosidl_message_type_support_t *
get_message_type_support_handle<car_sign::srv::CarBrytertilstand_Response>()
{
  return &car_sign::srv::typesupport_fastrtps_cpp::_CarBrytertilstand_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, car_sign, srv, CarBrytertilstand_Response)() {
  return &car_sign::srv::typesupport_fastrtps_cpp::_CarBrytertilstand_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace car_sign
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _CarBrytertilstand__callbacks = {
  "car_sign::srv",
  "CarBrytertilstand",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, car_sign, srv, CarBrytertilstand_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, car_sign, srv, CarBrytertilstand_Response)(),
};

static rosidl_service_type_support_t _CarBrytertilstand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CarBrytertilstand__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace car_sign

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_car_sign
const rosidl_service_type_support_t *
get_service_type_support_handle<car_sign::srv::CarBrytertilstand>()
{
  return &car_sign::srv::typesupport_fastrtps_cpp::_CarBrytertilstand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, car_sign, srv, CarBrytertilstand)() {
  return &car_sign::srv::typesupport_fastrtps_cpp::_CarBrytertilstand__handle;
}

#ifdef __cplusplus
}
#endif
