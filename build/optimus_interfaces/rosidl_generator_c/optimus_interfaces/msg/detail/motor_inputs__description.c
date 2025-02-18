// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from optimus_interfaces:msg/MotorInputs.idl
// generated code does not contain a copyright notice

#include "optimus_interfaces/msg/detail/motor_inputs__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_optimus_interfaces
const rosidl_type_hash_t *
optimus_interfaces__msg__MotorInputs__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0xb6, 0x2e, 0x78, 0x3f, 0x13, 0xff, 0x67,
      0x4f, 0x33, 0x69, 0x65, 0xea, 0x3c, 0x73, 0xf1,
      0x8e, 0x4b, 0x44, 0x50, 0x51, 0x80, 0xa3, 0xe6,
      0x14, 0xa0, 0x05, 0x2f, 0x12, 0x50, 0x34, 0xd8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char optimus_interfaces__msg__MotorInputs__TYPE_NAME[] = "optimus_interfaces/msg/MotorInputs";

// Define type names, field names, and default values
static char optimus_interfaces__msg__MotorInputs__FIELD_NAME__left_motor[] = "left_motor";
static char optimus_interfaces__msg__MotorInputs__FIELD_NAME__right_motor[] = "right_motor";

static rosidl_runtime_c__type_description__Field optimus_interfaces__msg__MotorInputs__FIELDS[] = {
  {
    {optimus_interfaces__msg__MotorInputs__FIELD_NAME__left_motor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {optimus_interfaces__msg__MotorInputs__FIELD_NAME__right_motor, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
optimus_interfaces__msg__MotorInputs__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {optimus_interfaces__msg__MotorInputs__TYPE_NAME, 34, 34},
      {optimus_interfaces__msg__MotorInputs__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 left_motor\n"
  "int64 right_motor";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
optimus_interfaces__msg__MotorInputs__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {optimus_interfaces__msg__MotorInputs__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 34, 34},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
optimus_interfaces__msg__MotorInputs__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *optimus_interfaces__msg__MotorInputs__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
