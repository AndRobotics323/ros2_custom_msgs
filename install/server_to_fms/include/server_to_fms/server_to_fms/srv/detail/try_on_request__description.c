// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from server_to_fms:srv/TryOnRequest.idl
// generated code does not contain a copyright notice

#include "server_to_fms/srv/detail/try_on_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_server_to_fms
const rosidl_type_hash_t *
server_to_fms__srv__TryOnRequest__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf3, 0x96, 0xfa, 0x0b, 0x4f, 0xe8, 0xed, 0x04,
      0x93, 0x6d, 0xcb, 0xc8, 0xc0, 0xb4, 0x4f, 0x18,
      0x74, 0x96, 0x07, 0x9b, 0x1d, 0x9f, 0xdd, 0x28,
      0x4f, 0x0d, 0xbd, 0xcc, 0x7a, 0x43, 0x2f, 0x02,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_server_to_fms
const rosidl_type_hash_t *
server_to_fms__srv__TryOnRequest_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8a, 0x69, 0x4e, 0x57, 0x70, 0x1f, 0x2a, 0xfc,
      0xc0, 0x74, 0x7c, 0x4d, 0xc7, 0xa6, 0x3d, 0xc9,
      0x54, 0x84, 0x8b, 0x1f, 0xb9, 0x37, 0xde, 0x67,
      0x01, 0x18, 0x47, 0x0d, 0xfc, 0x35, 0xf4, 0xc2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_server_to_fms
const rosidl_type_hash_t *
server_to_fms__srv__TryOnRequest_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0x8e, 0x43, 0x81, 0x45, 0x1c, 0x2f, 0x3a,
      0xb9, 0xf9, 0xd9, 0x2a, 0xe8, 0xf5, 0x06, 0xf4,
      0xb8, 0xae, 0x61, 0x61, 0x12, 0x95, 0x2e, 0xb4,
      0x66, 0xbb, 0xe6, 0xbb, 0x6b, 0xbe, 0x44, 0xad,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_server_to_fms
const rosidl_type_hash_t *
server_to_fms__srv__TryOnRequest_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0x8f, 0x19, 0x76, 0x65, 0xb0, 0xb0, 0x29,
      0x02, 0xde, 0xfb, 0xdf, 0x14, 0x7e, 0xc6, 0x2f,
      0x0a, 0xb6, 0x40, 0x5d, 0x28, 0x26, 0xce, 0x11,
      0x8b, 0xc9, 0xfd, 0xcc, 0x7e, 0xc2, 0xd4, 0xaf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char server_to_fms__srv__TryOnRequest__TYPE_NAME[] = "server_to_fms/srv/TryOnRequest";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char server_to_fms__srv__TryOnRequest_Event__TYPE_NAME[] = "server_to_fms/srv/TryOnRequest_Event";
static char server_to_fms__srv__TryOnRequest_Request__TYPE_NAME[] = "server_to_fms/srv/TryOnRequest_Request";
static char server_to_fms__srv__TryOnRequest_Response__TYPE_NAME[] = "server_to_fms/srv/TryOnRequest_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char server_to_fms__srv__TryOnRequest__FIELD_NAME__request_message[] = "request_message";
static char server_to_fms__srv__TryOnRequest__FIELD_NAME__response_message[] = "response_message";
static char server_to_fms__srv__TryOnRequest__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field server_to_fms__srv__TryOnRequest__FIELDS[] = {
  {
    {server_to_fms__srv__TryOnRequest__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {server_to_fms__srv__TryOnRequest_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {server_to_fms__srv__TryOnRequest__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {server_to_fms__srv__TryOnRequest_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {server_to_fms__srv__TryOnRequest__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {server_to_fms__srv__TryOnRequest_Event__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription server_to_fms__srv__TryOnRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {server_to_fms__srv__TryOnRequest_Event__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {server_to_fms__srv__TryOnRequest_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {server_to_fms__srv__TryOnRequest_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
server_to_fms__srv__TryOnRequest__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {server_to_fms__srv__TryOnRequest__TYPE_NAME, 30, 30},
      {server_to_fms__srv__TryOnRequest__FIELDS, 3, 3},
    },
    {server_to_fms__srv__TryOnRequest__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = server_to_fms__srv__TryOnRequest_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = server_to_fms__srv__TryOnRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = server_to_fms__srv__TryOnRequest_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char server_to_fms__srv__TryOnRequest_Request__FIELD_NAME__whether_customer[] = "whether_customer";
static char server_to_fms__srv__TryOnRequest_Request__FIELD_NAME__customer_id[] = "customer_id";
static char server_to_fms__srv__TryOnRequest_Request__FIELD_NAME__try_on_location[] = "try_on_location";
static char server_to_fms__srv__TryOnRequest_Request__FIELD_NAME__shoe_name[] = "shoe_name";

static rosidl_runtime_c__type_description__Field server_to_fms__srv__TryOnRequest_Request__FIELDS[] = {
  {
    {server_to_fms__srv__TryOnRequest_Request__FIELD_NAME__whether_customer, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {server_to_fms__srv__TryOnRequest_Request__FIELD_NAME__customer_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {server_to_fms__srv__TryOnRequest_Request__FIELD_NAME__try_on_location, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {server_to_fms__srv__TryOnRequest_Request__FIELD_NAME__shoe_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
server_to_fms__srv__TryOnRequest_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {server_to_fms__srv__TryOnRequest_Request__TYPE_NAME, 38, 38},
      {server_to_fms__srv__TryOnRequest_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char server_to_fms__srv__TryOnRequest_Response__FIELD_NAME__success[] = "success";
static char server_to_fms__srv__TryOnRequest_Response__FIELD_NAME__estimated_mins[] = "estimated_mins";

static rosidl_runtime_c__type_description__Field server_to_fms__srv__TryOnRequest_Response__FIELDS[] = {
  {
    {server_to_fms__srv__TryOnRequest_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {server_to_fms__srv__TryOnRequest_Response__FIELD_NAME__estimated_mins, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
server_to_fms__srv__TryOnRequest_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {server_to_fms__srv__TryOnRequest_Response__TYPE_NAME, 39, 39},
      {server_to_fms__srv__TryOnRequest_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char server_to_fms__srv__TryOnRequest_Event__FIELD_NAME__info[] = "info";
static char server_to_fms__srv__TryOnRequest_Event__FIELD_NAME__request[] = "request";
static char server_to_fms__srv__TryOnRequest_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field server_to_fms__srv__TryOnRequest_Event__FIELDS[] = {
  {
    {server_to_fms__srv__TryOnRequest_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {server_to_fms__srv__TryOnRequest_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {server_to_fms__srv__TryOnRequest_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {server_to_fms__srv__TryOnRequest_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {server_to_fms__srv__TryOnRequest_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription server_to_fms__srv__TryOnRequest_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {server_to_fms__srv__TryOnRequest_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {server_to_fms__srv__TryOnRequest_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
server_to_fms__srv__TryOnRequest_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {server_to_fms__srv__TryOnRequest_Event__TYPE_NAME, 36, 36},
      {server_to_fms__srv__TryOnRequest_Event__FIELDS, 3, 3},
    },
    {server_to_fms__srv__TryOnRequest_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = server_to_fms__srv__TryOnRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = server_to_fms__srv__TryOnRequest_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool whether_customer \n"
  "int32 customer_id\n"
  "int32 try_on_location\n"
  "string shoe_name\n"
  "---\n"
  "bool success\n"
  "int32 estimated_mins";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
server_to_fms__srv__TryOnRequest__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {server_to_fms__srv__TryOnRequest__TYPE_NAME, 30, 30},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 118, 118},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
server_to_fms__srv__TryOnRequest_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {server_to_fms__srv__TryOnRequest_Request__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
server_to_fms__srv__TryOnRequest_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {server_to_fms__srv__TryOnRequest_Response__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
server_to_fms__srv__TryOnRequest_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {server_to_fms__srv__TryOnRequest_Event__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
server_to_fms__srv__TryOnRequest__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *server_to_fms__srv__TryOnRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *server_to_fms__srv__TryOnRequest_Event__get_individual_type_description_source(NULL);
    sources[3] = *server_to_fms__srv__TryOnRequest_Request__get_individual_type_description_source(NULL);
    sources[4] = *server_to_fms__srv__TryOnRequest_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
server_to_fms__srv__TryOnRequest_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *server_to_fms__srv__TryOnRequest_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
server_to_fms__srv__TryOnRequest_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *server_to_fms__srv__TryOnRequest_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
server_to_fms__srv__TryOnRequest_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *server_to_fms__srv__TryOnRequest_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *server_to_fms__srv__TryOnRequest_Request__get_individual_type_description_source(NULL);
    sources[3] = *server_to_fms__srv__TryOnRequest_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
