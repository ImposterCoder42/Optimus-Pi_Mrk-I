// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from optimus_interfaces:msg/MotorInputs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "optimus_interfaces/msg/motor_inputs.h"


#ifndef OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_INPUTS__STRUCT_H_
#define OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_INPUTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorInputs in the package optimus_interfaces.
typedef struct optimus_interfaces__msg__MotorInputs
{
  int64_t left_motor;
  int64_t right_motor;
} optimus_interfaces__msg__MotorInputs;

// Struct for a sequence of optimus_interfaces__msg__MotorInputs.
typedef struct optimus_interfaces__msg__MotorInputs__Sequence
{
  optimus_interfaces__msg__MotorInputs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} optimus_interfaces__msg__MotorInputs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPTIMUS_INTERFACES__MSG__DETAIL__MOTOR_INPUTS__STRUCT_H_
