// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from server_to_fms:srv/TryOnRequest.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "server_to_fms/srv/detail/try_on_request__struct.h"
#include "server_to_fms/srv/detail/try_on_request__type_support.h"
#include "server_to_fms/srv/detail/try_on_request__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace server_to_fms
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TryOnRequest_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TryOnRequest_Request_type_support_ids_t;

static const _TryOnRequest_Request_type_support_ids_t _TryOnRequest_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TryOnRequest_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TryOnRequest_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TryOnRequest_Request_type_support_symbol_names_t _TryOnRequest_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, server_to_fms, srv, TryOnRequest_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest_Request)),
  }
};

typedef struct _TryOnRequest_Request_type_support_data_t
{
  void * data[2];
} _TryOnRequest_Request_type_support_data_t;

static _TryOnRequest_Request_type_support_data_t _TryOnRequest_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TryOnRequest_Request_message_typesupport_map = {
  2,
  "server_to_fms",
  &_TryOnRequest_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TryOnRequest_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TryOnRequest_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TryOnRequest_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TryOnRequest_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &server_to_fms__srv__TryOnRequest_Request__get_type_hash,
  &server_to_fms__srv__TryOnRequest_Request__get_type_description,
  &server_to_fms__srv__TryOnRequest_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace server_to_fms

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, server_to_fms, srv, TryOnRequest_Request)() {
  return &::server_to_fms::srv::rosidl_typesupport_c::TryOnRequest_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__struct.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__type_support.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace server_to_fms
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TryOnRequest_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TryOnRequest_Response_type_support_ids_t;

static const _TryOnRequest_Response_type_support_ids_t _TryOnRequest_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TryOnRequest_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TryOnRequest_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TryOnRequest_Response_type_support_symbol_names_t _TryOnRequest_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, server_to_fms, srv, TryOnRequest_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest_Response)),
  }
};

typedef struct _TryOnRequest_Response_type_support_data_t
{
  void * data[2];
} _TryOnRequest_Response_type_support_data_t;

static _TryOnRequest_Response_type_support_data_t _TryOnRequest_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TryOnRequest_Response_message_typesupport_map = {
  2,
  "server_to_fms",
  &_TryOnRequest_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TryOnRequest_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TryOnRequest_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TryOnRequest_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TryOnRequest_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &server_to_fms__srv__TryOnRequest_Response__get_type_hash,
  &server_to_fms__srv__TryOnRequest_Response__get_type_description,
  &server_to_fms__srv__TryOnRequest_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace server_to_fms

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, server_to_fms, srv, TryOnRequest_Response)() {
  return &::server_to_fms::srv::rosidl_typesupport_c::TryOnRequest_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__struct.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__type_support.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace server_to_fms
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TryOnRequest_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TryOnRequest_Event_type_support_ids_t;

static const _TryOnRequest_Event_type_support_ids_t _TryOnRequest_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TryOnRequest_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TryOnRequest_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TryOnRequest_Event_type_support_symbol_names_t _TryOnRequest_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, server_to_fms, srv, TryOnRequest_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest_Event)),
  }
};

typedef struct _TryOnRequest_Event_type_support_data_t
{
  void * data[2];
} _TryOnRequest_Event_type_support_data_t;

static _TryOnRequest_Event_type_support_data_t _TryOnRequest_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TryOnRequest_Event_message_typesupport_map = {
  2,
  "server_to_fms",
  &_TryOnRequest_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TryOnRequest_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TryOnRequest_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TryOnRequest_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TryOnRequest_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &server_to_fms__srv__TryOnRequest_Event__get_type_hash,
  &server_to_fms__srv__TryOnRequest_Event__get_type_description,
  &server_to_fms__srv__TryOnRequest_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace server_to_fms

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, server_to_fms, srv, TryOnRequest_Event)() {
  return &::server_to_fms::srv::rosidl_typesupport_c::TryOnRequest_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace server_to_fms
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _TryOnRequest_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TryOnRequest_type_support_ids_t;

static const _TryOnRequest_type_support_ids_t _TryOnRequest_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TryOnRequest_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TryOnRequest_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TryOnRequest_type_support_symbol_names_t _TryOnRequest_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, server_to_fms, srv, TryOnRequest)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest)),
  }
};

typedef struct _TryOnRequest_type_support_data_t
{
  void * data[2];
} _TryOnRequest_type_support_data_t;

static _TryOnRequest_type_support_data_t _TryOnRequest_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TryOnRequest_service_typesupport_map = {
  2,
  "server_to_fms",
  &_TryOnRequest_service_typesupport_ids.typesupport_identifier[0],
  &_TryOnRequest_service_typesupport_symbol_names.symbol_name[0],
  &_TryOnRequest_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TryOnRequest_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TryOnRequest_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &TryOnRequest_Request_message_type_support_handle,
  &TryOnRequest_Response_message_type_support_handle,
  &TryOnRequest_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    server_to_fms,
    srv,
    TryOnRequest
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    server_to_fms,
    srv,
    TryOnRequest
  ),
  &server_to_fms__srv__TryOnRequest__get_type_hash,
  &server_to_fms__srv__TryOnRequest__get_type_description,
  &server_to_fms__srv__TryOnRequest__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace server_to_fms

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, server_to_fms, srv, TryOnRequest)() {
  return &::server_to_fms::srv::rosidl_typesupport_c::TryOnRequest_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
