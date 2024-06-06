// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_sign:srv/CarBrytertilstand.idl
// generated code does not contain a copyright notice

#ifndef CAR_SIGN__SRV__DETAIL__CAR_BRYTERTILSTAND__TRAITS_HPP_
#define CAR_SIGN__SRV__DETAIL__CAR_BRYTERTILSTAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "car_sign/srv/detail/car_brytertilstand__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace car_sign
{

namespace srv
{

inline void to_flow_style_yaml(
  const CarBrytertilstand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: bryter_id
  {
    out << "bryter_id: ";
    rosidl_generator_traits::value_to_yaml(msg.bryter_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarBrytertilstand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bryter_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bryter_id: ";
    rosidl_generator_traits::value_to_yaml(msg.bryter_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarBrytertilstand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace car_sign

namespace rosidl_generator_traits
{

[[deprecated("use car_sign::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const car_sign::srv::CarBrytertilstand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  car_sign::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use car_sign::srv::to_yaml() instead")]]
inline std::string to_yaml(const car_sign::srv::CarBrytertilstand_Request & msg)
{
  return car_sign::srv::to_yaml(msg);
}

template<>
inline const char * data_type<car_sign::srv::CarBrytertilstand_Request>()
{
  return "car_sign::srv::CarBrytertilstand_Request";
}

template<>
inline const char * name<car_sign::srv::CarBrytertilstand_Request>()
{
  return "car_sign/srv/CarBrytertilstand_Request";
}

template<>
struct has_fixed_size<car_sign::srv::CarBrytertilstand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_sign::srv::CarBrytertilstand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_sign::srv::CarBrytertilstand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace car_sign
{

namespace srv
{

inline void to_flow_style_yaml(
  const CarBrytertilstand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: bryter_tilstand
  {
    out << "bryter_tilstand: ";
    rosidl_generator_traits::value_to_yaml(msg.bryter_tilstand, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarBrytertilstand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bryter_tilstand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bryter_tilstand: ";
    rosidl_generator_traits::value_to_yaml(msg.bryter_tilstand, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarBrytertilstand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace car_sign

namespace rosidl_generator_traits
{

[[deprecated("use car_sign::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const car_sign::srv::CarBrytertilstand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  car_sign::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use car_sign::srv::to_yaml() instead")]]
inline std::string to_yaml(const car_sign::srv::CarBrytertilstand_Response & msg)
{
  return car_sign::srv::to_yaml(msg);
}

template<>
inline const char * data_type<car_sign::srv::CarBrytertilstand_Response>()
{
  return "car_sign::srv::CarBrytertilstand_Response";
}

template<>
inline const char * name<car_sign::srv::CarBrytertilstand_Response>()
{
  return "car_sign/srv/CarBrytertilstand_Response";
}

template<>
struct has_fixed_size<car_sign::srv::CarBrytertilstand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_sign::srv::CarBrytertilstand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_sign::srv::CarBrytertilstand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<car_sign::srv::CarBrytertilstand>()
{
  return "car_sign::srv::CarBrytertilstand";
}

template<>
inline const char * name<car_sign::srv::CarBrytertilstand>()
{
  return "car_sign/srv/CarBrytertilstand";
}

template<>
struct has_fixed_size<car_sign::srv::CarBrytertilstand>
  : std::integral_constant<
    bool,
    has_fixed_size<car_sign::srv::CarBrytertilstand_Request>::value &&
    has_fixed_size<car_sign::srv::CarBrytertilstand_Response>::value
  >
{
};

template<>
struct has_bounded_size<car_sign::srv::CarBrytertilstand>
  : std::integral_constant<
    bool,
    has_bounded_size<car_sign::srv::CarBrytertilstand_Request>::value &&
    has_bounded_size<car_sign::srv::CarBrytertilstand_Response>::value
  >
{
};

template<>
struct is_service<car_sign::srv::CarBrytertilstand>
  : std::true_type
{
};

template<>
struct is_service_request<car_sign::srv::CarBrytertilstand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<car_sign::srv::CarBrytertilstand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAR_SIGN__SRV__DETAIL__CAR_BRYTERTILSTAND__TRAITS_HPP_
