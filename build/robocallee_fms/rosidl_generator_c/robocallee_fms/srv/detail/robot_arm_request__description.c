// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robocallee_fms:srv/RobotArmRequest.idl
// generated code does not contain a copyright notice

#include "robocallee_fms/srv/detail/robot_arm_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
const rosidl_type_hash_t *
robocallee_fms__srv__RobotArmRequest__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x66, 0x0b, 0xee, 0xa5, 0x13, 0xb4, 0x93, 0x14,
      0xd9, 0xc6, 0x23, 0x53, 0x08, 0xb2, 0xca, 0x69,
      0xb9, 0xb9, 0xfa, 0x64, 0x7d, 0x8b, 0x98, 0x51,
      0x03, 0xc3, 0xba, 0x7b, 0x4a, 0x4b, 0xc3, 0x48,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
const rosidl_type_hash_t *
robocallee_fms__srv__RobotArmRequest_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfd, 0x1a, 0xea, 0xe8, 0xab, 0xfc, 0xa0, 0x53,
      0xcf, 0xb0, 0x3a, 0x96, 0x34, 0x8f, 0x6f, 0x5e,
      0xaa, 0x0c, 0x6c, 0x22, 0x63, 0xf9, 0xba, 0x2e,
      0xc2, 0x8d, 0x5c, 0x70, 0x7c, 0x90, 0xb1, 0x62,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
const rosidl_type_hash_t *
robocallee_fms__srv__RobotArmRequest_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe2, 0x96, 0x8c, 0xa6, 0x99, 0xdc, 0x99, 0x5e,
      0x46, 0xdb, 0x54, 0x22, 0x1a, 0xab, 0x89, 0x45,
      0x5e, 0x15, 0xac, 0xf1, 0x54, 0x86, 0xc9, 0xbf,
      0x14, 0x25, 0x32, 0xa0, 0x88, 0xc4, 0xb0, 0xb4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
const rosidl_type_hash_t *
robocallee_fms__srv__RobotArmRequest_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x66, 0xce, 0x98, 0xed, 0x83, 0xe7, 0x8a, 0xf5,
      0xe0, 0x18, 0x4f, 0x01, 0x7f, 0x24, 0x84, 0xf2,
      0x4e, 0x10, 0x57, 0x0c, 0xa0, 0x4d, 0x0f, 0x00,
      0x1a, 0xa2, 0x9a, 0x25, 0xc7, 0xa1, 0xd5, 0x28,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

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

static char robocallee_fms__srv__RobotArmRequest__TYPE_NAME[] = "robocallee_fms/srv/RobotArmRequest";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char robocallee_fms__srv__RobotArmRequest_Event__TYPE_NAME[] = "robocallee_fms/srv/RobotArmRequest_Event";
static char robocallee_fms__srv__RobotArmRequest_Request__TYPE_NAME[] = "robocallee_fms/srv/RobotArmRequest_Request";
static char robocallee_fms__srv__RobotArmRequest_Response__TYPE_NAME[] = "robocallee_fms/srv/RobotArmRequest_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char robocallee_fms__srv__RobotArmRequest__FIELD_NAME__request_message[] = "request_message";
static char robocallee_fms__srv__RobotArmRequest__FIELD_NAME__response_message[] = "response_message";
static char robocallee_fms__srv__RobotArmRequest__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field robocallee_fms__srv__RobotArmRequest__FIELDS[] = {
  {
    {robocallee_fms__srv__RobotArmRequest__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robocallee_fms__srv__RobotArmRequest_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robocallee_fms__srv__RobotArmRequest_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robocallee_fms__srv__RobotArmRequest_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robocallee_fms__srv__RobotArmRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robocallee_fms__srv__RobotArmRequest__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robocallee_fms__srv__RobotArmRequest__TYPE_NAME, 34, 34},
      {robocallee_fms__srv__RobotArmRequest__FIELDS, 3, 3},
    },
    {robocallee_fms__srv__RobotArmRequest__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = robocallee_fms__srv__RobotArmRequest_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = robocallee_fms__srv__RobotArmRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = robocallee_fms__srv__RobotArmRequest_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robocallee_fms__srv__RobotArmRequest_Request__FIELD_NAME__robot_id[] = "robot_id";
static char robocallee_fms__srv__RobotArmRequest_Request__FIELD_NAME__action[] = "action";
static char robocallee_fms__srv__RobotArmRequest_Request__FIELD_NAME__shelf_num[] = "shelf_num";

static rosidl_runtime_c__type_description__Field robocallee_fms__srv__RobotArmRequest_Request__FIELDS[] = {
  {
    {robocallee_fms__srv__RobotArmRequest_Request__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest_Request__FIELD_NAME__action, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest_Request__FIELD_NAME__shelf_num, 9, 9},
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
robocallee_fms__srv__RobotArmRequest_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robocallee_fms__srv__RobotArmRequest_Request__TYPE_NAME, 42, 42},
      {robocallee_fms__srv__RobotArmRequest_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robocallee_fms__srv__RobotArmRequest_Response__FIELD_NAME__action[] = "action";
static char robocallee_fms__srv__RobotArmRequest_Response__FIELD_NAME__shelf_num[] = "shelf_num";
static char robocallee_fms__srv__RobotArmRequest_Response__FIELD_NAME__model[] = "model";
static char robocallee_fms__srv__RobotArmRequest_Response__FIELD_NAME__size[] = "size";
static char robocallee_fms__srv__RobotArmRequest_Response__FIELD_NAME__color[] = "color";
static char robocallee_fms__srv__RobotArmRequest_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field robocallee_fms__srv__RobotArmRequest_Response__FIELDS[] = {
  {
    {robocallee_fms__srv__RobotArmRequest_Response__FIELD_NAME__action, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest_Response__FIELD_NAME__shelf_num, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest_Response__FIELD_NAME__model, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest_Response__FIELD_NAME__size, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest_Response__FIELD_NAME__color, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robocallee_fms__srv__RobotArmRequest_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robocallee_fms__srv__RobotArmRequest_Response__TYPE_NAME, 43, 43},
      {robocallee_fms__srv__RobotArmRequest_Response__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robocallee_fms__srv__RobotArmRequest_Event__FIELD_NAME__info[] = "info";
static char robocallee_fms__srv__RobotArmRequest_Event__FIELD_NAME__request[] = "request";
static char robocallee_fms__srv__RobotArmRequest_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field robocallee_fms__srv__RobotArmRequest_Event__FIELDS[] = {
  {
    {robocallee_fms__srv__RobotArmRequest_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robocallee_fms__srv__RobotArmRequest_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robocallee_fms__srv__RobotArmRequest_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robocallee_fms__srv__RobotArmRequest_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__srv__RobotArmRequest_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robocallee_fms__srv__RobotArmRequest_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robocallee_fms__srv__RobotArmRequest_Event__TYPE_NAME, 40, 40},
      {robocallee_fms__srv__RobotArmRequest_Event__FIELDS, 3, 3},
    },
    {robocallee_fms__srv__RobotArmRequest_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = robocallee_fms__srv__RobotArmRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = robocallee_fms__srv__RobotArmRequest_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 robot_id\n"
  "string action\n"
  "int32 shelf_num\n"
  "---\n"
  "string action\n"
  "int32 shelf_num\n"
  "string model\n"
  "int32 size\n"
  "string color\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robocallee_fms__srv__RobotArmRequest__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robocallee_fms__srv__RobotArmRequest__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 128, 128},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robocallee_fms__srv__RobotArmRequest_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robocallee_fms__srv__RobotArmRequest_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robocallee_fms__srv__RobotArmRequest_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robocallee_fms__srv__RobotArmRequest_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robocallee_fms__srv__RobotArmRequest_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robocallee_fms__srv__RobotArmRequest_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robocallee_fms__srv__RobotArmRequest__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robocallee_fms__srv__RobotArmRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robocallee_fms__srv__RobotArmRequest_Event__get_individual_type_description_source(NULL);
    sources[3] = *robocallee_fms__srv__RobotArmRequest_Request__get_individual_type_description_source(NULL);
    sources[4] = *robocallee_fms__srv__RobotArmRequest_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robocallee_fms__srv__RobotArmRequest_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robocallee_fms__srv__RobotArmRequest_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robocallee_fms__srv__RobotArmRequest_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robocallee_fms__srv__RobotArmRequest_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robocallee_fms__srv__RobotArmRequest_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robocallee_fms__srv__RobotArmRequest_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robocallee_fms__srv__RobotArmRequest_Request__get_individual_type_description_source(NULL);
    sources[3] = *robocallee_fms__srv__RobotArmRequest_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
