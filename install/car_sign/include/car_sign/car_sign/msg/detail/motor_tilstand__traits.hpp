// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_sign:msg/MotorTilstand.idl
// generated code does not contain a copyright notice

#ifndef CAR_SIGN__MSG__DETAIL__MOTOR_TILSTAND__TRAITS_HPP_
#define CAR_SIGN__MSG__DETAIL__MOTOR_TILSTAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "car_sign/msg/detail/motor_tilstand__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace car_sign
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorTilstand & msg,
  std::ostream & out)
{
  out << "{";
  // member: instruks_id
  {
    out << "instruks_id: ";
    rosidl_generator_traits::value_to_yaml(msg.instruks_id, out);
    out << ", ";
  }

  // member: left
  {
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << ", ";
  }

  // member: right
  {
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorTilstand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: instruks_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instruks_id: ";
    rosidl_generator_traits::value_to_yaml(msg.instruks_id, out);
    out << "\n";
  }

  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << "\n";
  }

  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorTilstand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace car_sign

namespace rosidl_generator_traits
{

[[deprecated("use car_sign::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const car_sign::msg::MotorTilstand & msg,
  std::ostream & out, size_t indentation = 0)
{
  car_sign::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use car_sign::msg::to_yaml() instead")]]
inline std::string to_yaml(const car_sign::msg::MotorTilstand & msg)
{
  return car_sign::msg::to_yaml(msg);
}

template<>
inline const char * data_type<car_sign::msg::MotorTilstand>()
{
  return "car_sign::msg::MotorTilstand";
}

template<>
inline const char * name<car_sign::msg::MotorTilstand>()
{
  return "car_sign/msg/MotorTilstand";
}

template<>
struct has_fixed_size<car_sign::msg::MotorTilstand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_sign::msg::MotorTilstand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_sign::msg::MotorTilstand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_SIGN__MSG__DETAIL__MOTOR_TILSTAND__TRAITS_HPP_
