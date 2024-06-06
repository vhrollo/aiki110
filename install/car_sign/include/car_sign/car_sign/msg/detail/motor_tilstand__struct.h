// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_sign:msg/MotorTilstand.idl
// generated code does not contain a copyright notice

#ifndef CAR_SIGN__MSG__DETAIL__MOTOR_TILSTAND__STRUCT_H_
#define CAR_SIGN__MSG__DETAIL__MOTOR_TILSTAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorTilstand in the package car_sign.
typedef struct car_sign__msg__MotorTilstand
{
  int8_t instruks_id;
  int8_t left;
  int8_t right;
} car_sign__msg__MotorTilstand;

// Struct for a sequence of car_sign__msg__MotorTilstand.
typedef struct car_sign__msg__MotorTilstand__Sequence
{
  car_sign__msg__MotorTilstand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_sign__msg__MotorTilstand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_SIGN__MSG__DETAIL__MOTOR_TILSTAND__STRUCT_H_
