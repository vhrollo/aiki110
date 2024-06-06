// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_sign:srv/CarBrytertilstand.idl
// generated code does not contain a copyright notice

#ifndef CAR_SIGN__SRV__DETAIL__CAR_BRYTERTILSTAND__BUILDER_HPP_
#define CAR_SIGN__SRV__DETAIL__CAR_BRYTERTILSTAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "car_sign/srv/detail/car_brytertilstand__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace car_sign
{

namespace srv
{

namespace builder
{

class Init_CarBrytertilstand_Request_bryter_id
{
public:
  Init_CarBrytertilstand_Request_bryter_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::car_sign::srv::CarBrytertilstand_Request bryter_id(::car_sign::srv::CarBrytertilstand_Request::_bryter_id_type arg)
  {
    msg_.bryter_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_sign::srv::CarBrytertilstand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_sign::srv::CarBrytertilstand_Request>()
{
  return car_sign::srv::builder::Init_CarBrytertilstand_Request_bryter_id();
}

}  // namespace car_sign


namespace car_sign
{

namespace srv
{

namespace builder
{

class Init_CarBrytertilstand_Response_bryter_tilstand
{
public:
  Init_CarBrytertilstand_Response_bryter_tilstand()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::car_sign::srv::CarBrytertilstand_Response bryter_tilstand(::car_sign::srv::CarBrytertilstand_Response::_bryter_tilstand_type arg)
  {
    msg_.bryter_tilstand = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_sign::srv::CarBrytertilstand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_sign::srv::CarBrytertilstand_Response>()
{
  return car_sign::srv::builder::Init_CarBrytertilstand_Response_bryter_tilstand();
}

}  // namespace car_sign

#endif  // CAR_SIGN__SRV__DETAIL__CAR_BRYTERTILSTAND__BUILDER_HPP_
