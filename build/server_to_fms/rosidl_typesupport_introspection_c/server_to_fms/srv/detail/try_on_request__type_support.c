// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from server_to_fms:srv/TryOnRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "server_to_fms/srv/detail/try_on_request__rosidl_typesupport_introspection_c.h"
#include "server_to_fms/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "server_to_fms/srv/detail/try_on_request__functions.h"
#include "server_to_fms/srv/detail/try_on_request__struct.h"


// Include directives for member types
// Member `customer_id`
// Member `shoe_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void server_to_fms__srv__TryOnRequest_Request__rosidl_typesupport_introspection_c__TryOnRequest_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  server_to_fms__srv__TryOnRequest_Request__init(message_memory);
}

void server_to_fms__srv__TryOnRequest_Request__rosidl_typesupport_introspection_c__TryOnRequest_Request_fini_function(void * message_memory)
{
  server_to_fms__srv__TryOnRequest_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember server_to_fms__srv__TryOnRequest_Request__rosidl_typesupport_introspection_c__TryOnRequest_Request_message_member_array[2] = {
  {
    "customer_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(server_to_fms__srv__TryOnRequest_Request, customer_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shoe_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(server_to_fms__srv__TryOnRequest_Request, shoe_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers server_to_fms__srv__TryOnRequest_Request__rosidl_typesupport_introspection_c__TryOnRequest_Request_message_members = {
  "server_to_fms__srv",  // message namespace
  "TryOnRequest_Request",  // message name
  2,  // number of fields
  sizeof(server_to_fms__srv__TryOnRequest_Request),
  false,  // has_any_key_member_
  server_to_fms__srv__TryOnRequest_Request__rosidl_typesupport_introspection_c__TryOnRequest_Request_message_member_array,  // message members
  server_to_fms__srv__TryOnRequest_Request__rosidl_typesupport_introspection_c__TryOnRequest_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  server_to_fms__srv__TryOnRequest_Request__rosidl_typesupport_introspection_c__TryOnRequest_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t server_to_fms__srv__TryOnRequest_Request__rosidl_typesupport_introspection_c__TryOnRequest_Request_message_type_support_handle = {
  0,
  &server_to_fms__srv__TryOnRequest_Request__rosidl_typesupport_introspection_c__TryOnRequest_Request_message_members,
  get_message_typesupport_handle_function,
  &server_to_fms__srv__TryOnRequest_Request__get_type_hash,
  &server_to_fms__srv__TryOnRequest_Request__get_type_description,
  &server_to_fms__srv__TryOnRequest_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_server_to_fms
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest_Request)() {
  if (!server_to_fms__srv__TryOnRequest_Request__rosidl_typesupport_introspection_c__TryOnRequest_Request_message_type_support_handle.typesupport_identifier) {
    server_to_fms__srv__TryOnRequest_Request__rosidl_typesupport_introspection_c__TryOnRequest_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &server_to_fms__srv__TryOnRequest_Request__rosidl_typesupport_introspection_c__TryOnRequest_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "server_to_fms/srv/detail/try_on_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "server_to_fms/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__functions.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void server_to_fms__srv__TryOnRequest_Response__rosidl_typesupport_introspection_c__TryOnRequest_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  server_to_fms__srv__TryOnRequest_Response__init(message_memory);
}

void server_to_fms__srv__TryOnRequest_Response__rosidl_typesupport_introspection_c__TryOnRequest_Response_fini_function(void * message_memory)
{
  server_to_fms__srv__TryOnRequest_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember server_to_fms__srv__TryOnRequest_Response__rosidl_typesupport_introspection_c__TryOnRequest_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(server_to_fms__srv__TryOnRequest_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimated_mins",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(server_to_fms__srv__TryOnRequest_Response, estimated_mins),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers server_to_fms__srv__TryOnRequest_Response__rosidl_typesupport_introspection_c__TryOnRequest_Response_message_members = {
  "server_to_fms__srv",  // message namespace
  "TryOnRequest_Response",  // message name
  2,  // number of fields
  sizeof(server_to_fms__srv__TryOnRequest_Response),
  false,  // has_any_key_member_
  server_to_fms__srv__TryOnRequest_Response__rosidl_typesupport_introspection_c__TryOnRequest_Response_message_member_array,  // message members
  server_to_fms__srv__TryOnRequest_Response__rosidl_typesupport_introspection_c__TryOnRequest_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  server_to_fms__srv__TryOnRequest_Response__rosidl_typesupport_introspection_c__TryOnRequest_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t server_to_fms__srv__TryOnRequest_Response__rosidl_typesupport_introspection_c__TryOnRequest_Response_message_type_support_handle = {
  0,
  &server_to_fms__srv__TryOnRequest_Response__rosidl_typesupport_introspection_c__TryOnRequest_Response_message_members,
  get_message_typesupport_handle_function,
  &server_to_fms__srv__TryOnRequest_Response__get_type_hash,
  &server_to_fms__srv__TryOnRequest_Response__get_type_description,
  &server_to_fms__srv__TryOnRequest_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_server_to_fms
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest_Response)() {
  if (!server_to_fms__srv__TryOnRequest_Response__rosidl_typesupport_introspection_c__TryOnRequest_Response_message_type_support_handle.typesupport_identifier) {
    server_to_fms__srv__TryOnRequest_Response__rosidl_typesupport_introspection_c__TryOnRequest_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &server_to_fms__srv__TryOnRequest_Response__rosidl_typesupport_introspection_c__TryOnRequest_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "server_to_fms/srv/detail/try_on_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "server_to_fms/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__functions.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "server_to_fms/srv/try_on_request.h"
// Member `request`
// Member `response`
// already included above
// #include "server_to_fms/srv/detail/try_on_request__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  server_to_fms__srv__TryOnRequest_Event__init(message_memory);
}

void server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_fini_function(void * message_memory)
{
  server_to_fms__srv__TryOnRequest_Event__fini(message_memory);
}

size_t server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__size_function__TryOnRequest_Event__request(
  const void * untyped_member)
{
  const server_to_fms__srv__TryOnRequest_Request__Sequence * member =
    (const server_to_fms__srv__TryOnRequest_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__get_const_function__TryOnRequest_Event__request(
  const void * untyped_member, size_t index)
{
  const server_to_fms__srv__TryOnRequest_Request__Sequence * member =
    (const server_to_fms__srv__TryOnRequest_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__get_function__TryOnRequest_Event__request(
  void * untyped_member, size_t index)
{
  server_to_fms__srv__TryOnRequest_Request__Sequence * member =
    (server_to_fms__srv__TryOnRequest_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__fetch_function__TryOnRequest_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const server_to_fms__srv__TryOnRequest_Request * item =
    ((const server_to_fms__srv__TryOnRequest_Request *)
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__get_const_function__TryOnRequest_Event__request(untyped_member, index));
  server_to_fms__srv__TryOnRequest_Request * value =
    (server_to_fms__srv__TryOnRequest_Request *)(untyped_value);
  *value = *item;
}

void server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__assign_function__TryOnRequest_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  server_to_fms__srv__TryOnRequest_Request * item =
    ((server_to_fms__srv__TryOnRequest_Request *)
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__get_function__TryOnRequest_Event__request(untyped_member, index));
  const server_to_fms__srv__TryOnRequest_Request * value =
    (const server_to_fms__srv__TryOnRequest_Request *)(untyped_value);
  *item = *value;
}

bool server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__resize_function__TryOnRequest_Event__request(
  void * untyped_member, size_t size)
{
  server_to_fms__srv__TryOnRequest_Request__Sequence * member =
    (server_to_fms__srv__TryOnRequest_Request__Sequence *)(untyped_member);
  server_to_fms__srv__TryOnRequest_Request__Sequence__fini(member);
  return server_to_fms__srv__TryOnRequest_Request__Sequence__init(member, size);
}

size_t server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__size_function__TryOnRequest_Event__response(
  const void * untyped_member)
{
  const server_to_fms__srv__TryOnRequest_Response__Sequence * member =
    (const server_to_fms__srv__TryOnRequest_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__get_const_function__TryOnRequest_Event__response(
  const void * untyped_member, size_t index)
{
  const server_to_fms__srv__TryOnRequest_Response__Sequence * member =
    (const server_to_fms__srv__TryOnRequest_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__get_function__TryOnRequest_Event__response(
  void * untyped_member, size_t index)
{
  server_to_fms__srv__TryOnRequest_Response__Sequence * member =
    (server_to_fms__srv__TryOnRequest_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__fetch_function__TryOnRequest_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const server_to_fms__srv__TryOnRequest_Response * item =
    ((const server_to_fms__srv__TryOnRequest_Response *)
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__get_const_function__TryOnRequest_Event__response(untyped_member, index));
  server_to_fms__srv__TryOnRequest_Response * value =
    (server_to_fms__srv__TryOnRequest_Response *)(untyped_value);
  *value = *item;
}

void server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__assign_function__TryOnRequest_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  server_to_fms__srv__TryOnRequest_Response * item =
    ((server_to_fms__srv__TryOnRequest_Response *)
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__get_function__TryOnRequest_Event__response(untyped_member, index));
  const server_to_fms__srv__TryOnRequest_Response * value =
    (const server_to_fms__srv__TryOnRequest_Response *)(untyped_value);
  *item = *value;
}

bool server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__resize_function__TryOnRequest_Event__response(
  void * untyped_member, size_t size)
{
  server_to_fms__srv__TryOnRequest_Response__Sequence * member =
    (server_to_fms__srv__TryOnRequest_Response__Sequence *)(untyped_member);
  server_to_fms__srv__TryOnRequest_Response__Sequence__fini(member);
  return server_to_fms__srv__TryOnRequest_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(server_to_fms__srv__TryOnRequest_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(server_to_fms__srv__TryOnRequest_Event, request),  // bytes offset in struct
    NULL,  // default value
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__size_function__TryOnRequest_Event__request,  // size() function pointer
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__get_const_function__TryOnRequest_Event__request,  // get_const(index) function pointer
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__get_function__TryOnRequest_Event__request,  // get(index) function pointer
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__fetch_function__TryOnRequest_Event__request,  // fetch(index, &value) function pointer
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__assign_function__TryOnRequest_Event__request,  // assign(index, value) function pointer
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__resize_function__TryOnRequest_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(server_to_fms__srv__TryOnRequest_Event, response),  // bytes offset in struct
    NULL,  // default value
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__size_function__TryOnRequest_Event__response,  // size() function pointer
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__get_const_function__TryOnRequest_Event__response,  // get_const(index) function pointer
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__get_function__TryOnRequest_Event__response,  // get(index) function pointer
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__fetch_function__TryOnRequest_Event__response,  // fetch(index, &value) function pointer
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__assign_function__TryOnRequest_Event__response,  // assign(index, value) function pointer
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__resize_function__TryOnRequest_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_message_members = {
  "server_to_fms__srv",  // message namespace
  "TryOnRequest_Event",  // message name
  3,  // number of fields
  sizeof(server_to_fms__srv__TryOnRequest_Event),
  false,  // has_any_key_member_
  server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_message_member_array,  // message members
  server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_message_type_support_handle = {
  0,
  &server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_message_members,
  get_message_typesupport_handle_function,
  &server_to_fms__srv__TryOnRequest_Event__get_type_hash,
  &server_to_fms__srv__TryOnRequest_Event__get_type_description,
  &server_to_fms__srv__TryOnRequest_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_server_to_fms
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest_Event)() {
  server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest_Request)();
  server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest_Response)();
  if (!server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_message_type_support_handle.typesupport_identifier) {
    server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "server_to_fms/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "server_to_fms/srv/detail/try_on_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers server_to_fms__srv__detail__try_on_request__rosidl_typesupport_introspection_c__TryOnRequest_service_members = {
  "server_to_fms__srv",  // service namespace
  "TryOnRequest",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // server_to_fms__srv__detail__try_on_request__rosidl_typesupport_introspection_c__TryOnRequest_Request_message_type_support_handle,
  NULL,  // response message
  // server_to_fms__srv__detail__try_on_request__rosidl_typesupport_introspection_c__TryOnRequest_Response_message_type_support_handle
  NULL  // event_message
  // server_to_fms__srv__detail__try_on_request__rosidl_typesupport_introspection_c__TryOnRequest_Response_message_type_support_handle
};


static rosidl_service_type_support_t server_to_fms__srv__detail__try_on_request__rosidl_typesupport_introspection_c__TryOnRequest_service_type_support_handle = {
  0,
  &server_to_fms__srv__detail__try_on_request__rosidl_typesupport_introspection_c__TryOnRequest_service_members,
  get_service_typesupport_handle_function,
  &server_to_fms__srv__TryOnRequest_Request__rosidl_typesupport_introspection_c__TryOnRequest_Request_message_type_support_handle,
  &server_to_fms__srv__TryOnRequest_Response__rosidl_typesupport_introspection_c__TryOnRequest_Response_message_type_support_handle,
  &server_to_fms__srv__TryOnRequest_Event__rosidl_typesupport_introspection_c__TryOnRequest_Event_message_type_support_handle,
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

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_server_to_fms
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest)(void) {
  if (!server_to_fms__srv__detail__try_on_request__rosidl_typesupport_introspection_c__TryOnRequest_service_type_support_handle.typesupport_identifier) {
    server_to_fms__srv__detail__try_on_request__rosidl_typesupport_introspection_c__TryOnRequest_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)server_to_fms__srv__detail__try_on_request__rosidl_typesupport_introspection_c__TryOnRequest_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, server_to_fms, srv, TryOnRequest_Event)()->data;
  }

  return &server_to_fms__srv__detail__try_on_request__rosidl_typesupport_introspection_c__TryOnRequest_service_type_support_handle;
}
