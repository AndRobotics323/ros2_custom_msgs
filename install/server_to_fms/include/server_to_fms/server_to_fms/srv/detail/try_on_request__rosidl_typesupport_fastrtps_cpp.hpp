// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from server_to_fms:srv/TryOnRequest.idl
// generated code does not contain a copyright notice

#ifndef SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "server_to_fms/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "server_to_fms/srv/detail/try_on_request__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace server_to_fms
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
cdr_serialize(
  const server_to_fms::srv::TryOnRequest_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  server_to_fms::srv::TryOnRequest_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
get_serialized_size(
  const server_to_fms::srv::TryOnRequest_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
max_serialized_size_TryOnRequest_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
cdr_serialize_key(
  const server_to_fms::srv::TryOnRequest_Request & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
get_serialized_size_key(
  const server_to_fms::srv::TryOnRequest_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
max_serialized_size_key_TryOnRequest_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace server_to_fms

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, server_to_fms, srv, TryOnRequest_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "server_to_fms/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace server_to_fms
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
cdr_serialize(
  const server_to_fms::srv::TryOnRequest_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  server_to_fms::srv::TryOnRequest_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
get_serialized_size(
  const server_to_fms::srv::TryOnRequest_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
max_serialized_size_TryOnRequest_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
cdr_serialize_key(
  const server_to_fms::srv::TryOnRequest_Response & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
get_serialized_size_key(
  const server_to_fms::srv::TryOnRequest_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
max_serialized_size_key_TryOnRequest_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace server_to_fms

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, server_to_fms, srv, TryOnRequest_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "server_to_fms/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace server_to_fms
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
cdr_serialize(
  const server_to_fms::srv::TryOnRequest_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  server_to_fms::srv::TryOnRequest_Event & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
get_serialized_size(
  const server_to_fms::srv::TryOnRequest_Event & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
max_serialized_size_TryOnRequest_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
cdr_serialize_key(
  const server_to_fms::srv::TryOnRequest_Event & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
get_serialized_size_key(
  const server_to_fms::srv::TryOnRequest_Event & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
max_serialized_size_key_TryOnRequest_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace server_to_fms

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, server_to_fms, srv, TryOnRequest_Event)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "server_to_fms/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_server_to_fms
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, server_to_fms, srv, TryOnRequest)();

#ifdef __cplusplus
}
#endif

#endif  // SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
