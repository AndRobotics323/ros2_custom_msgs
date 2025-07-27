// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from server_to_fms:srv/TryOnRequest.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "server_to_fms/srv/detail/try_on_request__functions.h"
#include "server_to_fms/srv/detail/try_on_request__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace server_to_fms
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TryOnRequest_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TryOnRequest_Request_type_support_ids_t;

static const _TryOnRequest_Request_type_support_ids_t _TryOnRequest_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, server_to_fms, srv, TryOnRequest_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, server_to_fms, srv, TryOnRequest_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TryOnRequest_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &server_to_fms__srv__TryOnRequest_Request__get_type_hash,
  &server_to_fms__srv__TryOnRequest_Request__get_type_description,
  &server_to_fms__srv__TryOnRequest_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace server_to_fms

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<server_to_fms::srv::TryOnRequest_Request>()
{
  return &::server_to_fms::srv::rosidl_typesupport_cpp::TryOnRequest_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, server_to_fms, srv, TryOnRequest_Request)() {
  return get_message_type_support_handle<server_to_fms::srv::TryOnRequest_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__functions.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace server_to_fms
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TryOnRequest_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TryOnRequest_Response_type_support_ids_t;

static const _TryOnRequest_Response_type_support_ids_t _TryOnRequest_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, server_to_fms, srv, TryOnRequest_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, server_to_fms, srv, TryOnRequest_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TryOnRequest_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &server_to_fms__srv__TryOnRequest_Response__get_type_hash,
  &server_to_fms__srv__TryOnRequest_Response__get_type_description,
  &server_to_fms__srv__TryOnRequest_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace server_to_fms

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<server_to_fms::srv::TryOnRequest_Response>()
{
  return &::server_to_fms::srv::rosidl_typesupport_cpp::TryOnRequest_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, server_to_fms, srv, TryOnRequest_Response)() {
  return get_message_type_support_handle<server_to_fms::srv::TryOnRequest_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__functions.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace server_to_fms
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TryOnRequest_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TryOnRequest_Event_type_support_ids_t;

static const _TryOnRequest_Event_type_support_ids_t _TryOnRequest_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, server_to_fms, srv, TryOnRequest_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, server_to_fms, srv, TryOnRequest_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TryOnRequest_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &server_to_fms__srv__TryOnRequest_Event__get_type_hash,
  &server_to_fms__srv__TryOnRequest_Event__get_type_description,
  &server_to_fms__srv__TryOnRequest_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace server_to_fms

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<server_to_fms::srv::TryOnRequest_Event>()
{
  return &::server_to_fms::srv::rosidl_typesupport_cpp::TryOnRequest_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, server_to_fms, srv, TryOnRequest_Event)() {
  return get_message_type_support_handle<server_to_fms::srv::TryOnRequest_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace server_to_fms
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TryOnRequest_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TryOnRequest_type_support_ids_t;

static const _TryOnRequest_type_support_ids_t _TryOnRequest_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, server_to_fms, srv, TryOnRequest)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, server_to_fms, srv, TryOnRequest)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TryOnRequest_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<server_to_fms::srv::TryOnRequest_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<server_to_fms::srv::TryOnRequest_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<server_to_fms::srv::TryOnRequest_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<server_to_fms::srv::TryOnRequest>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<server_to_fms::srv::TryOnRequest>,
  &server_to_fms__srv__TryOnRequest__get_type_hash,
  &server_to_fms__srv__TryOnRequest__get_type_description,
  &server_to_fms__srv__TryOnRequest__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace server_to_fms

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<server_to_fms::srv::TryOnRequest>()
{
  return &::server_to_fms::srv::rosidl_typesupport_cpp::TryOnRequest_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, server_to_fms, srv, TryOnRequest)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<server_to_fms::srv::TryOnRequest>();
}

#ifdef __cplusplus
}
#endif
