// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_sign:srv/CarBrytertilstand.idl
// generated code does not contain a copyright notice

#ifndef CAR_SIGN__SRV__DETAIL__CAR_BRYTERTILSTAND__STRUCT_H_
#define CAR_SIGN__SRV__DETAIL__CAR_BRYTERTILSTAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CarBrytertilstand in the package car_sign.
typedef struct car_sign__srv__CarBrytertilstand_Request
{
  int8_t bryter_id;
} car_sign__srv__CarBrytertilstand_Request;

// Struct for a sequence of car_sign__srv__CarBrytertilstand_Request.
typedef struct car_sign__srv__CarBrytertilstand_Request__Sequence
{
  car_sign__srv__CarBrytertilstand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_sign__srv__CarBrytertilstand_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CarBrytertilstand in the package car_sign.
typedef struct car_sign__srv__CarBrytertilstand_Response
{
  int8_t bryter_tilstand;
} car_sign__srv__CarBrytertilstand_Response;

// Struct for a sequence of car_sign__srv__CarBrytertilstand_Response.
typedef struct car_sign__srv__CarBrytertilstand_Response__Sequence
{
  car_sign__srv__CarBrytertilstand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_sign__srv__CarBrytertilstand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_SIGN__SRV__DETAIL__CAR_BRYTERTILSTAND__STRUCT_H_
