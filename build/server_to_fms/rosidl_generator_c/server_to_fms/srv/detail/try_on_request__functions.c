// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from server_to_fms:srv/TryOnRequest.idl
// generated code does not contain a copyright notice
#include "server_to_fms/srv/detail/try_on_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `customer_id`
// Member `shoe_name`
#include "rosidl_runtime_c/string_functions.h"

bool
server_to_fms__srv__TryOnRequest_Request__init(server_to_fms__srv__TryOnRequest_Request * msg)
{
  if (!msg) {
    return false;
  }
  // customer_id
  if (!rosidl_runtime_c__String__init(&msg->customer_id)) {
    server_to_fms__srv__TryOnRequest_Request__fini(msg);
    return false;
  }
  // shoe_name
  if (!rosidl_runtime_c__String__init(&msg->shoe_name)) {
    server_to_fms__srv__TryOnRequest_Request__fini(msg);
    return false;
  }
  return true;
}

void
server_to_fms__srv__TryOnRequest_Request__fini(server_to_fms__srv__TryOnRequest_Request * msg)
{
  if (!msg) {
    return;
  }
  // customer_id
  rosidl_runtime_c__String__fini(&msg->customer_id);
  // shoe_name
  rosidl_runtime_c__String__fini(&msg->shoe_name);
}

bool
server_to_fms__srv__TryOnRequest_Request__are_equal(const server_to_fms__srv__TryOnRequest_Request * lhs, const server_to_fms__srv__TryOnRequest_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // customer_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->customer_id), &(rhs->customer_id)))
  {
    return false;
  }
  // shoe_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->shoe_name), &(rhs->shoe_name)))
  {
    return false;
  }
  return true;
}

bool
server_to_fms__srv__TryOnRequest_Request__copy(
  const server_to_fms__srv__TryOnRequest_Request * input,
  server_to_fms__srv__TryOnRequest_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // customer_id
  if (!rosidl_runtime_c__String__copy(
      &(input->customer_id), &(output->customer_id)))
  {
    return false;
  }
  // shoe_name
  if (!rosidl_runtime_c__String__copy(
      &(input->shoe_name), &(output->shoe_name)))
  {
    return false;
  }
  return true;
}

server_to_fms__srv__TryOnRequest_Request *
server_to_fms__srv__TryOnRequest_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  server_to_fms__srv__TryOnRequest_Request * msg = (server_to_fms__srv__TryOnRequest_Request *)allocator.allocate(sizeof(server_to_fms__srv__TryOnRequest_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(server_to_fms__srv__TryOnRequest_Request));
  bool success = server_to_fms__srv__TryOnRequest_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
server_to_fms__srv__TryOnRequest_Request__destroy(server_to_fms__srv__TryOnRequest_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    server_to_fms__srv__TryOnRequest_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
server_to_fms__srv__TryOnRequest_Request__Sequence__init(server_to_fms__srv__TryOnRequest_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  server_to_fms__srv__TryOnRequest_Request * data = NULL;

  if (size) {
    data = (server_to_fms__srv__TryOnRequest_Request *)allocator.zero_allocate(size, sizeof(server_to_fms__srv__TryOnRequest_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = server_to_fms__srv__TryOnRequest_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        server_to_fms__srv__TryOnRequest_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
server_to_fms__srv__TryOnRequest_Request__Sequence__fini(server_to_fms__srv__TryOnRequest_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      server_to_fms__srv__TryOnRequest_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

server_to_fms__srv__TryOnRequest_Request__Sequence *
server_to_fms__srv__TryOnRequest_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  server_to_fms__srv__TryOnRequest_Request__Sequence * array = (server_to_fms__srv__TryOnRequest_Request__Sequence *)allocator.allocate(sizeof(server_to_fms__srv__TryOnRequest_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = server_to_fms__srv__TryOnRequest_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
server_to_fms__srv__TryOnRequest_Request__Sequence__destroy(server_to_fms__srv__TryOnRequest_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    server_to_fms__srv__TryOnRequest_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
server_to_fms__srv__TryOnRequest_Request__Sequence__are_equal(const server_to_fms__srv__TryOnRequest_Request__Sequence * lhs, const server_to_fms__srv__TryOnRequest_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!server_to_fms__srv__TryOnRequest_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
server_to_fms__srv__TryOnRequest_Request__Sequence__copy(
  const server_to_fms__srv__TryOnRequest_Request__Sequence * input,
  server_to_fms__srv__TryOnRequest_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(server_to_fms__srv__TryOnRequest_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    server_to_fms__srv__TryOnRequest_Request * data =
      (server_to_fms__srv__TryOnRequest_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!server_to_fms__srv__TryOnRequest_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          server_to_fms__srv__TryOnRequest_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!server_to_fms__srv__TryOnRequest_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
server_to_fms__srv__TryOnRequest_Response__init(server_to_fms__srv__TryOnRequest_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // estimated_mins
  return true;
}

void
server_to_fms__srv__TryOnRequest_Response__fini(server_to_fms__srv__TryOnRequest_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // estimated_mins
}

bool
server_to_fms__srv__TryOnRequest_Response__are_equal(const server_to_fms__srv__TryOnRequest_Response * lhs, const server_to_fms__srv__TryOnRequest_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // estimated_mins
  if (lhs->estimated_mins != rhs->estimated_mins) {
    return false;
  }
  return true;
}

bool
server_to_fms__srv__TryOnRequest_Response__copy(
  const server_to_fms__srv__TryOnRequest_Response * input,
  server_to_fms__srv__TryOnRequest_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // estimated_mins
  output->estimated_mins = input->estimated_mins;
  return true;
}

server_to_fms__srv__TryOnRequest_Response *
server_to_fms__srv__TryOnRequest_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  server_to_fms__srv__TryOnRequest_Response * msg = (server_to_fms__srv__TryOnRequest_Response *)allocator.allocate(sizeof(server_to_fms__srv__TryOnRequest_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(server_to_fms__srv__TryOnRequest_Response));
  bool success = server_to_fms__srv__TryOnRequest_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
server_to_fms__srv__TryOnRequest_Response__destroy(server_to_fms__srv__TryOnRequest_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    server_to_fms__srv__TryOnRequest_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
server_to_fms__srv__TryOnRequest_Response__Sequence__init(server_to_fms__srv__TryOnRequest_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  server_to_fms__srv__TryOnRequest_Response * data = NULL;

  if (size) {
    data = (server_to_fms__srv__TryOnRequest_Response *)allocator.zero_allocate(size, sizeof(server_to_fms__srv__TryOnRequest_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = server_to_fms__srv__TryOnRequest_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        server_to_fms__srv__TryOnRequest_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
server_to_fms__srv__TryOnRequest_Response__Sequence__fini(server_to_fms__srv__TryOnRequest_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      server_to_fms__srv__TryOnRequest_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

server_to_fms__srv__TryOnRequest_Response__Sequence *
server_to_fms__srv__TryOnRequest_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  server_to_fms__srv__TryOnRequest_Response__Sequence * array = (server_to_fms__srv__TryOnRequest_Response__Sequence *)allocator.allocate(sizeof(server_to_fms__srv__TryOnRequest_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = server_to_fms__srv__TryOnRequest_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
server_to_fms__srv__TryOnRequest_Response__Sequence__destroy(server_to_fms__srv__TryOnRequest_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    server_to_fms__srv__TryOnRequest_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
server_to_fms__srv__TryOnRequest_Response__Sequence__are_equal(const server_to_fms__srv__TryOnRequest_Response__Sequence * lhs, const server_to_fms__srv__TryOnRequest_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!server_to_fms__srv__TryOnRequest_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
server_to_fms__srv__TryOnRequest_Response__Sequence__copy(
  const server_to_fms__srv__TryOnRequest_Response__Sequence * input,
  server_to_fms__srv__TryOnRequest_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(server_to_fms__srv__TryOnRequest_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    server_to_fms__srv__TryOnRequest_Response * data =
      (server_to_fms__srv__TryOnRequest_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!server_to_fms__srv__TryOnRequest_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          server_to_fms__srv__TryOnRequest_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!server_to_fms__srv__TryOnRequest_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "server_to_fms/srv/detail/try_on_request__functions.h"

bool
server_to_fms__srv__TryOnRequest_Event__init(server_to_fms__srv__TryOnRequest_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    server_to_fms__srv__TryOnRequest_Event__fini(msg);
    return false;
  }
  // request
  if (!server_to_fms__srv__TryOnRequest_Request__Sequence__init(&msg->request, 0)) {
    server_to_fms__srv__TryOnRequest_Event__fini(msg);
    return false;
  }
  // response
  if (!server_to_fms__srv__TryOnRequest_Response__Sequence__init(&msg->response, 0)) {
    server_to_fms__srv__TryOnRequest_Event__fini(msg);
    return false;
  }
  return true;
}

void
server_to_fms__srv__TryOnRequest_Event__fini(server_to_fms__srv__TryOnRequest_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  server_to_fms__srv__TryOnRequest_Request__Sequence__fini(&msg->request);
  // response
  server_to_fms__srv__TryOnRequest_Response__Sequence__fini(&msg->response);
}

bool
server_to_fms__srv__TryOnRequest_Event__are_equal(const server_to_fms__srv__TryOnRequest_Event * lhs, const server_to_fms__srv__TryOnRequest_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!server_to_fms__srv__TryOnRequest_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!server_to_fms__srv__TryOnRequest_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
server_to_fms__srv__TryOnRequest_Event__copy(
  const server_to_fms__srv__TryOnRequest_Event * input,
  server_to_fms__srv__TryOnRequest_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!server_to_fms__srv__TryOnRequest_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!server_to_fms__srv__TryOnRequest_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

server_to_fms__srv__TryOnRequest_Event *
server_to_fms__srv__TryOnRequest_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  server_to_fms__srv__TryOnRequest_Event * msg = (server_to_fms__srv__TryOnRequest_Event *)allocator.allocate(sizeof(server_to_fms__srv__TryOnRequest_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(server_to_fms__srv__TryOnRequest_Event));
  bool success = server_to_fms__srv__TryOnRequest_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
server_to_fms__srv__TryOnRequest_Event__destroy(server_to_fms__srv__TryOnRequest_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    server_to_fms__srv__TryOnRequest_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
server_to_fms__srv__TryOnRequest_Event__Sequence__init(server_to_fms__srv__TryOnRequest_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  server_to_fms__srv__TryOnRequest_Event * data = NULL;

  if (size) {
    data = (server_to_fms__srv__TryOnRequest_Event *)allocator.zero_allocate(size, sizeof(server_to_fms__srv__TryOnRequest_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = server_to_fms__srv__TryOnRequest_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        server_to_fms__srv__TryOnRequest_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
server_to_fms__srv__TryOnRequest_Event__Sequence__fini(server_to_fms__srv__TryOnRequest_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      server_to_fms__srv__TryOnRequest_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

server_to_fms__srv__TryOnRequest_Event__Sequence *
server_to_fms__srv__TryOnRequest_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  server_to_fms__srv__TryOnRequest_Event__Sequence * array = (server_to_fms__srv__TryOnRequest_Event__Sequence *)allocator.allocate(sizeof(server_to_fms__srv__TryOnRequest_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = server_to_fms__srv__TryOnRequest_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
server_to_fms__srv__TryOnRequest_Event__Sequence__destroy(server_to_fms__srv__TryOnRequest_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    server_to_fms__srv__TryOnRequest_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
server_to_fms__srv__TryOnRequest_Event__Sequence__are_equal(const server_to_fms__srv__TryOnRequest_Event__Sequence * lhs, const server_to_fms__srv__TryOnRequest_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!server_to_fms__srv__TryOnRequest_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
server_to_fms__srv__TryOnRequest_Event__Sequence__copy(
  const server_to_fms__srv__TryOnRequest_Event__Sequence * input,
  server_to_fms__srv__TryOnRequest_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(server_to_fms__srv__TryOnRequest_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    server_to_fms__srv__TryOnRequest_Event * data =
      (server_to_fms__srv__TryOnRequest_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!server_to_fms__srv__TryOnRequest_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          server_to_fms__srv__TryOnRequest_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!server_to_fms__srv__TryOnRequest_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
