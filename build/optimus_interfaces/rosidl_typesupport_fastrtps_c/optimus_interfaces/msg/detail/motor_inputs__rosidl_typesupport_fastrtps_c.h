// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from optimus_interfaces:msg/MotorInputs.idl
// generated code does not contain a copyright notice
#ifndef OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_INPUTS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_INPUTS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "optimus_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "optimus_interfaces/msg/detail/motor_inputs__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_optimus_interfaces
bool cdr_serialize_optimus_interfaces__msg__MotorInputs(
  const optimus_interfaces__msg__MotorInputs * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_optimus_interfaces
bool cdr_deserialize_optimus_interfaces__msg__MotorInputs(
  eprosima::fastcdr::Cdr &,
  optimus_interfaces__msg__MotorInputs * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_optimus_interfaces
size_t get_serialized_size_optimus_interfaces__msg__MotorInputs(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_optimus_interfaces
size_t max_serialized_size_optimus_interfaces__msg__MotorInputs(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_optimus_interfaces
bool cdr_serialize_key_optimus_interfaces__msg__MotorInputs(
  const optimus_interfaces__msg__MotorInputs * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_optimus_interfaces
size_t get_serialized_size_key_optimus_interfaces__msg__MotorInputs(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_optimus_interfaces
size_t max_serialized_size_key_optimus_interfaces__msg__MotorInputs(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_optimus_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, optimus_interfaces, msg, MotorInputs)();

#ifdef __cplusplus
}
#endif

#endif  // OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_INPUTS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
