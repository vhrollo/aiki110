// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_sign:srv/CarBrytertilstand.idl
// generated code does not contain a copyright notice

#ifndef CAR_SIGN__SRV__DETAIL__CAR_BRYTERTILSTAND__STRUCT_HPP_
#define CAR_SIGN__SRV__DETAIL__CAR_BRYTERTILSTAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__car_sign__srv__CarBrytertilstand_Request __attribute__((deprecated))
#else
# define DEPRECATED__car_sign__srv__CarBrytertilstand_Request __declspec(deprecated)
#endif

namespace car_sign
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CarBrytertilstand_Request_
{
  using Type = CarBrytertilstand_Request_<ContainerAllocator>;

  explicit CarBrytertilstand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bryter_id = 0;
    }
  }

  explicit CarBrytertilstand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bryter_id = 0;
    }
  }

  // field types and members
  using _bryter_id_type =
    int8_t;
  _bryter_id_type bryter_id;

  // setters for named parameter idiom
  Type & set__bryter_id(
    const int8_t & _arg)
  {
    this->bryter_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_sign::srv::CarBrytertilstand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_sign::srv::CarBrytertilstand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_sign::srv::CarBrytertilstand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_sign::srv::CarBrytertilstand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_sign::srv::CarBrytertilstand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_sign::srv::CarBrytertilstand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_sign::srv::CarBrytertilstand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_sign::srv::CarBrytertilstand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_sign::srv::CarBrytertilstand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_sign::srv::CarBrytertilstand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_sign__srv__CarBrytertilstand_Request
    std::shared_ptr<car_sign::srv::CarBrytertilstand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_sign__srv__CarBrytertilstand_Request
    std::shared_ptr<car_sign::srv::CarBrytertilstand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarBrytertilstand_Request_ & other) const
  {
    if (this->bryter_id != other.bryter_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarBrytertilstand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarBrytertilstand_Request_

// alias to use template instance with default allocator
using CarBrytertilstand_Request =
  car_sign::srv::CarBrytertilstand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace car_sign


#ifndef _WIN32
# define DEPRECATED__car_sign__srv__CarBrytertilstand_Response __attribute__((deprecated))
#else
# define DEPRECATED__car_sign__srv__CarBrytertilstand_Response __declspec(deprecated)
#endif

namespace car_sign
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CarBrytertilstand_Response_
{
  using Type = CarBrytertilstand_Response_<ContainerAllocator>;

  explicit CarBrytertilstand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bryter_tilstand = 0;
    }
  }

  explicit CarBrytertilstand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bryter_tilstand = 0;
    }
  }

  // field types and members
  using _bryter_tilstand_type =
    int8_t;
  _bryter_tilstand_type bryter_tilstand;

  // setters for named parameter idiom
  Type & set__bryter_tilstand(
    const int8_t & _arg)
  {
    this->bryter_tilstand = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_sign::srv::CarBrytertilstand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_sign::srv::CarBrytertilstand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_sign::srv::CarBrytertilstand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_sign::srv::CarBrytertilstand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_sign::srv::CarBrytertilstand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_sign::srv::CarBrytertilstand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_sign::srv::CarBrytertilstand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_sign::srv::CarBrytertilstand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_sign::srv::CarBrytertilstand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_sign::srv::CarBrytertilstand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_sign__srv__CarBrytertilstand_Response
    std::shared_ptr<car_sign::srv::CarBrytertilstand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_sign__srv__CarBrytertilstand_Response
    std::shared_ptr<car_sign::srv::CarBrytertilstand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarBrytertilstand_Response_ & other) const
  {
    if (this->bryter_tilstand != other.bryter_tilstand) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarBrytertilstand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarBrytertilstand_Response_

// alias to use template instance with default allocator
using CarBrytertilstand_Response =
  car_sign::srv::CarBrytertilstand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace car_sign

namespace car_sign
{

namespace srv
{

struct CarBrytertilstand
{
  using Request = car_sign::srv::CarBrytertilstand_Request;
  using Response = car_sign::srv::CarBrytertilstand_Response;
};

}  // namespace srv

}  // namespace car_sign

#endif  // CAR_SIGN__SRV__DETAIL__CAR_BRYTERTILSTAND__STRUCT_HPP_
