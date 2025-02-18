// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from optimus_interfaces:msg/MotorInputs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "optimus_interfaces/msg/motor_inputs.hpp"


#ifndef OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_INPUTS__BUILDER_HPP_
#define OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_INPUTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "optimus_interfaces/msg/detail/motor_inputs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace optimus_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorInputs_right_motor
{
public:
  explicit Init_MotorInputs_right_motor(::optimus_interfaces::msg::MotorInputs & msg)
  : msg_(msg)
  {}
  ::optimus_interfaces::msg::MotorInputs right_motor(::optimus_interfaces::msg::MotorInputs::_right_motor_type arg)
  {
    msg_.right_motor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::optimus_interfaces::msg::MotorInputs msg_;
};

class Init_MotorInputs_left_motor
{
public:
  Init_MotorInputs_left_motor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorInputs_right_motor left_motor(::optimus_interfaces::msg::MotorInputs::_left_motor_type arg)
  {
    msg_.left_motor = std::move(arg);
    return Init_MotorInputs_right_motor(msg_);
  }

private:
  ::optimus_interfaces::msg::MotorInputs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::optimus_interfaces::msg::MotorInputs>()
{
  return optimus_interfaces::msg::builder::Init_MotorInputs_left_motor();
}

}  // namespace optimus_interfaces

#endif  // OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_INPUTS__BUILDER_HPP_
