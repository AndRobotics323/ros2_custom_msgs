// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from server_to_fms:srv/TryOnRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "server_to_fms/srv/try_on_request.h"


#ifndef SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__TYPE_SUPPORT_H_
#define SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "server_to_fms/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_server_to_fms
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  server_to_fms,
  srv,
  TryOnRequest_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_server_to_fms
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  server_to_fms,
  srv,
  TryOnRequest_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_server_to_fms
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  server_to_fms,
  srv,
  TryOnRequest_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_server_to_fms
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  server_to_fms,
  srv,
  TryOnRequest
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_server_to_fms
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  server_to_fms,
  srv,
  TryOnRequest
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_server_to_fms
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  server_to_fms,
  srv,
  TryOnRequest
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__TYPE_SUPPORT_H_
