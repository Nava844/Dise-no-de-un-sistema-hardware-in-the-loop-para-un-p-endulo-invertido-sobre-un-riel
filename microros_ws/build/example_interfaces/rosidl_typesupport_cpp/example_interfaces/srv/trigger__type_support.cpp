// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from example_interfaces:srv/Trigger.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "example_interfaces/srv/detail/trigger__functions.h"
#include "example_interfaces/srv/detail/trigger__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Trigger_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Trigger_Request_type_support_ids_t;

static const _Trigger_Request_type_support_ids_t _Trigger_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Trigger_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Trigger_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Trigger_Request_type_support_symbol_names_t _Trigger_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, srv, Trigger_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, srv, Trigger_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, srv, Trigger_Request)),
  }
};

typedef struct _Trigger_Request_type_support_data_t
{
  void * data[3];
} _Trigger_Request_type_support_data_t;

static _Trigger_Request_type_support_data_t _Trigger_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Trigger_Request_message_typesupport_map = {
  3,
  "example_interfaces",
  &_Trigger_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Trigger_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Trigger_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Trigger_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Trigger_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &example_interfaces__srv__Trigger_Request__get_type_hash,
  &example_interfaces__srv__Trigger_Request__get_type_description,
  &example_interfaces__srv__Trigger_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace example_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::srv::Trigger_Request>()
{
  return &::example_interfaces::srv::rosidl_typesupport_cpp::Trigger_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, example_interfaces, srv, Trigger_Request)() {
  return get_message_type_support_handle<example_interfaces::srv::Trigger_Request>();
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
// #include "example_interfaces/srv/detail/trigger__functions.h"
// already included above
// #include "example_interfaces/srv/detail/trigger__struct.hpp"
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

namespace example_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Trigger_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Trigger_Response_type_support_ids_t;

static const _Trigger_Response_type_support_ids_t _Trigger_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Trigger_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Trigger_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Trigger_Response_type_support_symbol_names_t _Trigger_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, srv, Trigger_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, srv, Trigger_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, srv, Trigger_Response)),
  }
};

typedef struct _Trigger_Response_type_support_data_t
{
  void * data[3];
} _Trigger_Response_type_support_data_t;

static _Trigger_Response_type_support_data_t _Trigger_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Trigger_Response_message_typesupport_map = {
  3,
  "example_interfaces",
  &_Trigger_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Trigger_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Trigger_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Trigger_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Trigger_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &example_interfaces__srv__Trigger_Response__get_type_hash,
  &example_interfaces__srv__Trigger_Response__get_type_description,
  &example_interfaces__srv__Trigger_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace example_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::srv::Trigger_Response>()
{
  return &::example_interfaces::srv::rosidl_typesupport_cpp::Trigger_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, example_interfaces, srv, Trigger_Response)() {
  return get_message_type_support_handle<example_interfaces::srv::Trigger_Response>();
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
// #include "example_interfaces/srv/detail/trigger__functions.h"
// already included above
// #include "example_interfaces/srv/detail/trigger__struct.hpp"
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

namespace example_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Trigger_Event_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Trigger_Event_type_support_ids_t;

static const _Trigger_Event_type_support_ids_t _Trigger_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Trigger_Event_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Trigger_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Trigger_Event_type_support_symbol_names_t _Trigger_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, srv, Trigger_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, srv, Trigger_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, srv, Trigger_Event)),
  }
};

typedef struct _Trigger_Event_type_support_data_t
{
  void * data[3];
} _Trigger_Event_type_support_data_t;

static _Trigger_Event_type_support_data_t _Trigger_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Trigger_Event_message_typesupport_map = {
  3,
  "example_interfaces",
  &_Trigger_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Trigger_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Trigger_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Trigger_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Trigger_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &example_interfaces__srv__Trigger_Event__get_type_hash,
  &example_interfaces__srv__Trigger_Event__get_type_description,
  &example_interfaces__srv__Trigger_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace example_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::srv::Trigger_Event>()
{
  return &::example_interfaces::srv::rosidl_typesupport_cpp::Trigger_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, example_interfaces, srv, Trigger_Event)() {
  return get_message_type_support_handle<example_interfaces::srv::Trigger_Event>();
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
// #include "example_interfaces/srv/detail/trigger__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Trigger_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Trigger_type_support_ids_t;

static const _Trigger_type_support_ids_t _Trigger_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _Trigger_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Trigger_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Trigger_type_support_symbol_names_t _Trigger_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, srv, Trigger)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, example_interfaces, srv, Trigger)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, srv, Trigger)),
  }
};

typedef struct _Trigger_type_support_data_t
{
  void * data[3];
} _Trigger_type_support_data_t;

static _Trigger_type_support_data_t _Trigger_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Trigger_service_typesupport_map = {
  3,
  "example_interfaces",
  &_Trigger_service_typesupport_ids.typesupport_identifier[0],
  &_Trigger_service_typesupport_symbol_names.symbol_name[0],
  &_Trigger_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Trigger_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Trigger_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<example_interfaces::srv::Trigger_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<example_interfaces::srv::Trigger_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<example_interfaces::srv::Trigger_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<example_interfaces::srv::Trigger>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<example_interfaces::srv::Trigger>,
  &example_interfaces__srv__Trigger__get_type_hash,
  &example_interfaces__srv__Trigger__get_type_description,
  &example_interfaces__srv__Trigger__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace example_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<example_interfaces::srv::Trigger>()
{
  return &::example_interfaces::srv::rosidl_typesupport_cpp::Trigger_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, example_interfaces, srv, Trigger)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<example_interfaces::srv::Trigger>();
}

#ifdef __cplusplus
}
#endif
