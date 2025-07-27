// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from server_to_fms:srv/TryOnRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "server_to_fms/srv/try_on_request.h"


#ifndef SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__STRUCT_H_
#define SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'customer_id'
// Member 'shoe_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TryOnRequest in the package server_to_fms.
typedef struct server_to_fms__srv__TryOnRequest_Request
{
  rosidl_runtime_c__String customer_id;
  rosidl_runtime_c__String shoe_name;
} server_to_fms__srv__TryOnRequest_Request;

// Struct for a sequence of server_to_fms__srv__TryOnRequest_Request.
typedef struct server_to_fms__srv__TryOnRequest_Request__Sequence
{
  server_to_fms__srv__TryOnRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} server_to_fms__srv__TryOnRequest_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/TryOnRequest in the package server_to_fms.
typedef struct server_to_fms__srv__TryOnRequest_Response
{
  bool success;
  int32_t estimated_mins;
} server_to_fms__srv__TryOnRequest_Response;

// Struct for a sequence of server_to_fms__srv__TryOnRequest_Response.
typedef struct server_to_fms__srv__TryOnRequest_Response__Sequence
{
  server_to_fms__srv__TryOnRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} server_to_fms__srv__TryOnRequest_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  server_to_fms__srv__TryOnRequest_Event__request__MAX_SIZE = 1
};
// response
enum
{
  server_to_fms__srv__TryOnRequest_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/TryOnRequest in the package server_to_fms.
typedef struct server_to_fms__srv__TryOnRequest_Event
{
  service_msgs__msg__ServiceEventInfo info;
  server_to_fms__srv__TryOnRequest_Request__Sequence request;
  server_to_fms__srv__TryOnRequest_Response__Sequence response;
} server_to_fms__srv__TryOnRequest_Event;

// Struct for a sequence of server_to_fms__srv__TryOnRequest_Event.
typedef struct server_to_fms__srv__TryOnRequest_Event__Sequence
{
  server_to_fms__srv__TryOnRequest_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} server_to_fms__srv__TryOnRequest_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__STRUCT_H_
