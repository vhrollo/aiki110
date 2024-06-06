// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_sign:msg/MotorTilstand.idl
// generated code does not contain a copyright notice

#ifndef CAR_SIGN__MSG__DETAIL__MOTOR_TILSTAND__STRUCT_HPP_
#define CAR_SIGN__MSG__DETAIL__MOTOR_TILSTAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__car_sign__msg__MotorTilstand __attribute__((deprecated))
#else
# define DEPRECATED__car_sign__msg__MotorTilstand __declspec(deprecated)
#endif

namespace car_sign
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorTilstand_
{
  using Type = MotorTilstand_<ContainerAllocator>;

  explicit MotorTilstand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->instruks_id = 0;
      this->left = 0;
      this->right = 0;
    }
  }

  explicit MotorTilstand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->instruks_id = 0;
      this->left = 0;
      this->right = 0;
    }
  }

  // field types and members
  using _instruks_id_type =
    int8_t;
  _instruks_id_type instruks_id;
  using _left_type =
    int8_t;
  _left_type left;
  using _right_type =
    int8_t;
  _right_type right;

  // setters for named parameter idiom
  Type & set__instruks_id(
    const int8_t & _arg)
  {
    this->instruks_id = _arg;
    return *this;
  }
  Type & set__left(
    const int8_t & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__right(
    const int8_t & _arg)
  {
    this->right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_sign::msg::MotorTilstand_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_sign::msg::MotorTilstand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_sign::msg::MotorTilstand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_sign::msg::MotorTilstand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_sign::msg::MotorTilstand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_sign::msg::MotorTilstand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_sign::msg::MotorTilstand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_sign::msg::MotorTilstand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_sign::msg::MotorTilstand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_sign::msg::MotorTilstand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_sign__msg__MotorTilstand
    std::shared_ptr<car_sign::msg::MotorTilstand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_sign__msg__MotorTilstand
    std::shared_ptr<car_sign::msg::MotorTilstand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorTilstand_ & other) const
  {
    if (this->instruks_id != other.instruks_id) {
      return false;
    }
    if (this->left != other.left) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorTilstand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorTilstand_

// alias to use template instance with default allocator
using MotorTilstand =
  car_sign::msg::MotorTilstand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_sign

#endif  // CAR_SIGN__MSG__DETAIL__MOTOR_TILSTAND__STRUCT_HPP_
