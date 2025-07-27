// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from server_to_fms:srv/TryOnRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "server_to_fms/srv/try_on_request.hpp"


#ifndef SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__STRUCT_HPP_
#define SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__server_to_fms__srv__TryOnRequest_Request __attribute__((deprecated))
#else
# define DEPRECATED__server_to_fms__srv__TryOnRequest_Request __declspec(deprecated)
#endif

namespace server_to_fms
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TryOnRequest_Request_
{
  using Type = TryOnRequest_Request_<ContainerAllocator>;

  explicit TryOnRequest_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->customer_id = "";
      this->shoe_name = "";
    }
  }

  explicit TryOnRequest_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : customer_id(_alloc),
    shoe_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->customer_id = "";
      this->shoe_name = "";
    }
  }

  // field types and members
  using _customer_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _customer_id_type customer_id;
  using _shoe_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _shoe_name_type shoe_name;

  // setters for named parameter idiom
  Type & set__customer_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->customer_id = _arg;
    return *this;
  }
  Type & set__shoe_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->shoe_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__server_to_fms__srv__TryOnRequest_Request
    std::shared_ptr<server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__server_to_fms__srv__TryOnRequest_Request
    std::shared_ptr<server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TryOnRequest_Request_ & other) const
  {
    if (this->customer_id != other.customer_id) {
      return false;
    }
    if (this->shoe_name != other.shoe_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const TryOnRequest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TryOnRequest_Request_

// alias to use template instance with default allocator
using TryOnRequest_Request =
  server_to_fms::srv::TryOnRequest_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace server_to_fms


#ifndef _WIN32
# define DEPRECATED__server_to_fms__srv__TryOnRequest_Response __attribute__((deprecated))
#else
# define DEPRECATED__server_to_fms__srv__TryOnRequest_Response __declspec(deprecated)
#endif

namespace server_to_fms
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TryOnRequest_Response_
{
  using Type = TryOnRequest_Response_<ContainerAllocator>;

  explicit TryOnRequest_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->estimated_mins = 0l;
    }
  }

  explicit TryOnRequest_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->estimated_mins = 0l;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _estimated_mins_type =
    int32_t;
  _estimated_mins_type estimated_mins;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__estimated_mins(
    const int32_t & _arg)
  {
    this->estimated_mins = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__server_to_fms__srv__TryOnRequest_Response
    std::shared_ptr<server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__server_to_fms__srv__TryOnRequest_Response
    std::shared_ptr<server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TryOnRequest_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->estimated_mins != other.estimated_mins) {
      return false;
    }
    return true;
  }
  bool operator!=(const TryOnRequest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TryOnRequest_Response_

// alias to use template instance with default allocator
using TryOnRequest_Response =
  server_to_fms::srv::TryOnRequest_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace server_to_fms


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__server_to_fms__srv__TryOnRequest_Event __attribute__((deprecated))
#else
# define DEPRECATED__server_to_fms__srv__TryOnRequest_Event __declspec(deprecated)
#endif

namespace server_to_fms
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TryOnRequest_Event_
{
  using Type = TryOnRequest_Event_<ContainerAllocator>;

  explicit TryOnRequest_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit TryOnRequest_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<server_to_fms::srv::TryOnRequest_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<server_to_fms::srv::TryOnRequest_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    server_to_fms::srv::TryOnRequest_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const server_to_fms::srv::TryOnRequest_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<server_to_fms::srv::TryOnRequest_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<server_to_fms::srv::TryOnRequest_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      server_to_fms::srv::TryOnRequest_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<server_to_fms::srv::TryOnRequest_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      server_to_fms::srv::TryOnRequest_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<server_to_fms::srv::TryOnRequest_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<server_to_fms::srv::TryOnRequest_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<server_to_fms::srv::TryOnRequest_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__server_to_fms__srv__TryOnRequest_Event
    std::shared_ptr<server_to_fms::srv::TryOnRequest_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__server_to_fms__srv__TryOnRequest_Event
    std::shared_ptr<server_to_fms::srv::TryOnRequest_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TryOnRequest_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const TryOnRequest_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TryOnRequest_Event_

// alias to use template instance with default allocator
using TryOnRequest_Event =
  server_to_fms::srv::TryOnRequest_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace server_to_fms

namespace server_to_fms
{

namespace srv
{

struct TryOnRequest
{
  using Request = server_to_fms::srv::TryOnRequest_Request;
  using Response = server_to_fms::srv::TryOnRequest_Response;
  using Event = server_to_fms::srv::TryOnRequest_Event;
};

}  // namespace srv

}  // namespace server_to_fms

#endif  // SERVER_TO_FMS__SRV__DETAIL__TRY_ON_REQUEST__STRUCT_HPP_
