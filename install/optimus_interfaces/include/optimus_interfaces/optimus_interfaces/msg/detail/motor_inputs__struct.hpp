// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from optimus_interfaces:msg/MotorInputs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "optimus_interfaces/msg/motor_inputs.hpp"


#ifndef OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_INPUTS__STRUCT_HPP_
#define OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_INPUTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__optimus_interfaces__msg__MotorInputs __attribute__((deprecated))
#else
# define DEPRECATED__optimus_interfaces__msg__MotorInputs __declspec(deprecated)
#endif

namespace optimus_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorInputs_
{
  using Type = MotorInputs_<ContainerAllocator>;

  explicit MotorInputs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_motor = 0ll;
      this->right_motor = 0ll;
    }
  }

  explicit MotorInputs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_motor = 0ll;
      this->right_motor = 0ll;
    }
  }

  // field types and members
  using _left_motor_type =
    int64_t;
  _left_motor_type left_motor;
  using _right_motor_type =
    int64_t;
  _right_motor_type right_motor;

  // setters for named parameter idiom
  Type & set__left_motor(
    const int64_t & _arg)
  {
    this->left_motor = _arg;
    return *this;
  }
  Type & set__right_motor(
    const int64_t & _arg)
  {
    this->right_motor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    optimus_interfaces::msg::MotorInputs_<ContainerAllocator> *;
  using ConstRawPtr =
    const optimus_interfaces::msg::MotorInputs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<optimus_interfaces::msg::MotorInputs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<optimus_interfaces::msg::MotorInputs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::msg::MotorInputs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::msg::MotorInputs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      optimus_interfaces::msg::MotorInputs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<optimus_interfaces::msg::MotorInputs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<optimus_interfaces::msg::MotorInputs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<optimus_interfaces::msg::MotorInputs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__optimus_interfaces__msg__MotorInputs
    std::shared_ptr<optimus_interfaces::msg::MotorInputs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__optimus_interfaces__msg__MotorInputs
    std::shared_ptr<optimus_interfaces::msg::MotorInputs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorInputs_ & other) const
  {
    if (this->left_motor != other.left_motor) {
      return false;
    }
    if (this->right_motor != other.right_motor) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorInputs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorInputs_

// alias to use template instance with default allocator
using MotorInputs =
  optimus_interfaces::msg::MotorInputs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace optimus_interfaces

#endif  // OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_INPUTS__STRUCT_HPP_
