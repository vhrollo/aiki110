// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_sign:msg/MotorTilstand.idl
// generated code does not contain a copyright notice

#ifndef CAR_SIGN__MSG__DETAIL__MOTOR_TILSTAND__BUILDER_HPP_
#define CAR_SIGN__MSG__DETAIL__MOTOR_TILSTAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "car_sign/msg/detail/motor_tilstand__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace car_sign
{

namespace msg
{

namespace builder
{

class Init_MotorTilstand_right
{
public:
  explicit Init_MotorTilstand_right(::car_sign::msg::MotorTilstand & msg)
  : msg_(msg)
  {}
  ::car_sign::msg::MotorTilstand right(::car_sign::msg::MotorTilstand::_right_type arg)
  {
    msg_.right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_sign::msg::MotorTilstand msg_;
};

class Init_MotorTilstand_left
{
public:
  explicit Init_MotorTilstand_left(::car_sign::msg::MotorTilstand & msg)
  : msg_(msg)
  {}
  Init_MotorTilstand_right left(::car_sign::msg::MotorTilstand::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_MotorTilstand_right(msg_);
  }

private:
  ::car_sign::msg::MotorTilstand msg_;
};

class Init_MotorTilstand_instruks_id
{
public:
  Init_MotorTilstand_instruks_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorTilstand_left instruks_id(::car_sign::msg::MotorTilstand::_instruks_id_type arg)
  {
    msg_.instruks_id = std::move(arg);
    return Init_MotorTilstand_left(msg_);
  }

private:
  ::car_sign::msg::MotorTilstand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_sign::msg::MotorTilstand>()
{
  return car_sign::msg::builder::Init_MotorTilstand_instruks_id();
}

}  // namespace car_sign

#endif  // CAR_SIGN__MSG__DETAIL__MOTOR_TILSTAND__BUILDER_HPP_
