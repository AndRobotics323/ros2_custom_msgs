// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from server_to_fms:srv/TryOnRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "server_to_fms/srv/try_on_request.hpp"


#ifndef SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__BUILDER_HPP_
#define SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "server_to_fms/srv/detail/try_on_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace server_to_fms
{

namespace srv
{

namespace builder
{

class Init_TryOnRequest_Request_shoe_name
{
public:
  explicit Init_TryOnRequest_Request_shoe_name(::server_to_fms::srv::TryOnRequest_Request & msg)
  : msg_(msg)
  {}
  ::server_to_fms::srv::TryOnRequest_Request shoe_name(::server_to_fms::srv::TryOnRequest_Request::_shoe_name_type arg)
  {
    msg_.shoe_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::server_to_fms::srv::TryOnRequest_Request msg_;
};

class Init_TryOnRequest_Request_customer_id
{
public:
  Init_TryOnRequest_Request_customer_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TryOnRequest_Request_shoe_name customer_id(::server_to_fms::srv::TryOnRequest_Request::_customer_id_type arg)
  {
    msg_.customer_id = std::move(arg);
    return Init_TryOnRequest_Request_shoe_name(msg_);
  }

private:
  ::server_to_fms::srv::TryOnRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::server_to_fms::srv::TryOnRequest_Request>()
{
  return server_to_fms::srv::builder::Init_TryOnRequest_Request_customer_id();
}

}  // namespace server_to_fms


namespace server_to_fms
{

namespace srv
{

namespace builder
{

class Init_TryOnRequest_Response_estimated_mins
{
public:
  explicit Init_TryOnRequest_Response_estimated_mins(::server_to_fms::srv::TryOnRequest_Response & msg)
  : msg_(msg)
  {}
  ::server_to_fms::srv::TryOnRequest_Response estimated_mins(::server_to_fms::srv::TryOnRequest_Response::_estimated_mins_type arg)
  {
    msg_.estimated_mins = std::move(arg);
    return std::move(msg_);
  }

private:
  ::server_to_fms::srv::TryOnRequest_Response msg_;
};

class Init_TryOnRequest_Response_success
{
public:
  Init_TryOnRequest_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TryOnRequest_Response_estimated_mins success(::server_to_fms::srv::TryOnRequest_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TryOnRequest_Response_estimated_mins(msg_);
  }

private:
  ::server_to_fms::srv::TryOnRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::server_to_fms::srv::TryOnRequest_Response>()
{
  return server_to_fms::srv::builder::Init_TryOnRequest_Response_success();
}

}  // namespace server_to_fms


namespace server_to_fms
{

namespace srv
{

namespace builder
{

class Init_TryOnRequest_Event_response
{
public:
  explicit Init_TryOnRequest_Event_response(::server_to_fms::srv::TryOnRequest_Event & msg)
  : msg_(msg)
  {}
  ::server_to_fms::srv::TryOnRequest_Event response(::server_to_fms::srv::TryOnRequest_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::server_to_fms::srv::TryOnRequest_Event msg_;
};

class Init_TryOnRequest_Event_request
{
public:
  explicit Init_TryOnRequest_Event_request(::server_to_fms::srv::TryOnRequest_Event & msg)
  : msg_(msg)
  {}
  Init_TryOnRequest_Event_response request(::server_to_fms::srv::TryOnRequest_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TryOnRequest_Event_response(msg_);
  }

private:
  ::server_to_fms::srv::TryOnRequest_Event msg_;
};

class Init_TryOnRequest_Event_info
{
public:
  Init_TryOnRequest_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TryOnRequest_Event_request info(::server_to_fms::srv::TryOnRequest_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TryOnRequest_Event_request(msg_);
  }

private:
  ::server_to_fms::srv::TryOnRequest_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::server_to_fms::srv::TryOnRequest_Event>()
{
  return server_to_fms::srv::builder::Init_TryOnRequest_Event_info();
}

}  // namespace server_to_fms

#endif  // SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__BUILDER_HPP_
