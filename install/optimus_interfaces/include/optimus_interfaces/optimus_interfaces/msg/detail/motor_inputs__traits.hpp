// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from optimus_interfaces:msg/MotorInputs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "optimus_interfaces/msg/motor_inputs.hpp"


#ifndef OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_INPUTS__TRAITS_HPP_
#define OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_INPUTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "optimus_interfaces/msg/detail/motor_inputs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace optimus_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorInputs & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_motor
  {
    out << "left_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor, out);
    out << ", ";
  }

  // member: right_motor
  {
    out << "right_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorInputs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor, out);
    out << "\n";
  }

  // member: right_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorInputs & msg, bool use_flow_style = false)
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

}  // namespace optimus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use optimus_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const optimus_interfaces::msg::MotorInputs & msg,
  std::ostream & out, size_t indentation = 0)
{
  optimus_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use optimus_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const optimus_interfaces::msg::MotorInputs & msg)
{
  return optimus_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<optimus_interfaces::msg::MotorInputs>()
{
  return "optimus_interfaces::msg::MotorInputs";
}

template<>
inline const char * name<optimus_interfaces::msg::MotorInputs>()
{
  return "optimus_interfaces/msg/MotorInputs";
}

template<>
struct has_fixed_size<optimus_interfaces::msg::MotorInputs>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<optimus_interfaces::msg::MotorInputs>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<optimus_interfaces::msg::MotorInputs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_INPUTS__TRAITS_HPP_
