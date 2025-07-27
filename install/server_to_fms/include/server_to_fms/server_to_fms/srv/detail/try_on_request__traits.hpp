// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from server_to_fms:srv/TryOnRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "server_to_fms/srv/try_on_request.hpp"


#ifndef SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__TRAITS_HPP_
#define SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "server_to_fms/srv/detail/try_on_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace server_to_fms
{

namespace srv
{

inline void to_flow_style_yaml(
  const TryOnRequest_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: customer_id
  {
    out << "customer_id: ";
    rosidl_generator_traits::value_to_yaml(msg.customer_id, out);
    out << ", ";
  }

  // member: shoe_name
  {
    out << "shoe_name: ";
    rosidl_generator_traits::value_to_yaml(msg.shoe_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TryOnRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: customer_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "customer_id: ";
    rosidl_generator_traits::value_to_yaml(msg.customer_id, out);
    out << "\n";
  }

  // member: shoe_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shoe_name: ";
    rosidl_generator_traits::value_to_yaml(msg.shoe_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TryOnRequest_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace server_to_fms

namespace rosidl_generator_traits
{

[[deprecated("use server_to_fms::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const server_to_fms::srv::TryOnRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  server_to_fms::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use server_to_fms::srv::to_yaml() instead")]]
inline std::string to_yaml(const server_to_fms::srv::TryOnRequest_Request & msg)
{
  return server_to_fms::srv::to_yaml(msg);
}

template<>
inline const char * data_type<server_to_fms::srv::TryOnRequest_Request>()
{
  return "server_to_fms::srv::TryOnRequest_Request";
}

template<>
inline const char * name<server_to_fms::srv::TryOnRequest_Request>()
{
  return "server_to_fms/srv/TryOnRequest_Request";
}

template<>
struct has_fixed_size<server_to_fms::srv::TryOnRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<server_to_fms::srv::TryOnRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<server_to_fms::srv::TryOnRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace server_to_fms
{

namespace srv
{

inline void to_flow_style_yaml(
  const TryOnRequest_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: estimated_mins
  {
    out << "estimated_mins: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_mins, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TryOnRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: estimated_mins
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_mins: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_mins, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TryOnRequest_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace server_to_fms

namespace rosidl_generator_traits
{

[[deprecated("use server_to_fms::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const server_to_fms::srv::TryOnRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  server_to_fms::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use server_to_fms::srv::to_yaml() instead")]]
inline std::string to_yaml(const server_to_fms::srv::TryOnRequest_Response & msg)
{
  return server_to_fms::srv::to_yaml(msg);
}

template<>
inline const char * data_type<server_to_fms::srv::TryOnRequest_Response>()
{
  return "server_to_fms::srv::TryOnRequest_Response";
}

template<>
inline const char * name<server_to_fms::srv::TryOnRequest_Response>()
{
  return "server_to_fms/srv/TryOnRequest_Response";
}

template<>
struct has_fixed_size<server_to_fms::srv::TryOnRequest_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<server_to_fms::srv::TryOnRequest_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<server_to_fms::srv::TryOnRequest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace server_to_fms
{

namespace srv
{

inline void to_flow_style_yaml(
  const TryOnRequest_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TryOnRequest_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TryOnRequest_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace server_to_fms

namespace rosidl_generator_traits
{

[[deprecated("use server_to_fms::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const server_to_fms::srv::TryOnRequest_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  server_to_fms::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use server_to_fms::srv::to_yaml() instead")]]
inline std::string to_yaml(const server_to_fms::srv::TryOnRequest_Event & msg)
{
  return server_to_fms::srv::to_yaml(msg);
}

template<>
inline const char * data_type<server_to_fms::srv::TryOnRequest_Event>()
{
  return "server_to_fms::srv::TryOnRequest_Event";
}

template<>
inline const char * name<server_to_fms::srv::TryOnRequest_Event>()
{
  return "server_to_fms/srv/TryOnRequest_Event";
}

template<>
struct has_fixed_size<server_to_fms::srv::TryOnRequest_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<server_to_fms::srv::TryOnRequest_Event>
  : std::integral_constant<bool, has_bounded_size<server_to_fms::srv::TryOnRequest_Request>::value && has_bounded_size<server_to_fms::srv::TryOnRequest_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<server_to_fms::srv::TryOnRequest_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<server_to_fms::srv::TryOnRequest>()
{
  return "server_to_fms::srv::TryOnRequest";
}

template<>
inline const char * name<server_to_fms::srv::TryOnRequest>()
{
  return "server_to_fms/srv/TryOnRequest";
}

template<>
struct has_fixed_size<server_to_fms::srv::TryOnRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<server_to_fms::srv::TryOnRequest_Request>::value &&
    has_fixed_size<server_to_fms::srv::TryOnRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<server_to_fms::srv::TryOnRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<server_to_fms::srv::TryOnRequest_Request>::value &&
    has_bounded_size<server_to_fms::srv::TryOnRequest_Response>::value
  >
{
};

template<>
struct is_service<server_to_fms::srv::TryOnRequest>
  : std::true_type
{
};

template<>
struct is_service_request<server_to_fms::srv::TryOnRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<server_to_fms::srv::TryOnRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__TRAITS_HPP_
