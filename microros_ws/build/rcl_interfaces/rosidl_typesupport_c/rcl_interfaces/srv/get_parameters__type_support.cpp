// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rcl_interfaces:srv/GetParameters.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rcl_interfaces/srv/detail/get_parameters__struct.h"
#include "rcl_interfaces/srv/detail/get_parameters__type_support.h"
#include "rcl_interfaces/srv/detail/get_parameters__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetParameters_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _GetParameters_Request_type_support_ids_t;

static const _GetParameters_Request_type_support_ids_t _GetParameters_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetParameters_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _GetParameters_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetParameters_Request_type_support_symbol_names_t _GetParameters_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, srv, GetParameters_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetParameters_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetParameters_Request)),
  }
};

typedef struct _GetParameters_Request_type_support_data_t
{
  void * data[3];
} _GetParameters_Request_type_support_data_t;

static _GetParameters_Request_type_support_data_t _GetParameters_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetParameters_Request_message_typesupport_map = {
  3,
  "rcl_interfaces",
  &_GetParameters_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetParameters_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetParameters_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetParameters_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetParameters_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rcl_interfaces__srv__GetParameters_Request__get_type_hash,
  &rcl_interfaces__srv__GetParameters_Request__get_type_description,
  &rcl_interfaces__srv__GetParameters_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rcl_interfaces, srv, GetParameters_Request)() {
  return &::rcl_interfaces::srv::rosidl_typesupport_c::GetParameters_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_parameters__struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_parameters__type_support.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_parameters__functions.h"
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

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetParameters_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _GetParameters_Response_type_support_ids_t;

static const _GetParameters_Response_type_support_ids_t _GetParameters_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetParameters_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _GetParameters_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetParameters_Response_type_support_symbol_names_t _GetParameters_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, srv, GetParameters_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetParameters_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetParameters_Response)),
  }
};

typedef struct _GetParameters_Response_type_support_data_t
{
  void * data[3];
} _GetParameters_Response_type_support_data_t;

static _GetParameters_Response_type_support_data_t _GetParameters_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetParameters_Response_message_typesupport_map = {
  3,
  "rcl_interfaces",
  &_GetParameters_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetParameters_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetParameters_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetParameters_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetParameters_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rcl_interfaces__srv__GetParameters_Response__get_type_hash,
  &rcl_interfaces__srv__GetParameters_Response__get_type_description,
  &rcl_interfaces__srv__GetParameters_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rcl_interfaces, srv, GetParameters_Response)() {
  return &::rcl_interfaces::srv::rosidl_typesupport_c::GetParameters_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_parameters__struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_parameters__type_support.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_parameters__functions.h"
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

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetParameters_Event_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _GetParameters_Event_type_support_ids_t;

static const _GetParameters_Event_type_support_ids_t _GetParameters_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetParameters_Event_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _GetParameters_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetParameters_Event_type_support_symbol_names_t _GetParameters_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, srv, GetParameters_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetParameters_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetParameters_Event)),
  }
};

typedef struct _GetParameters_Event_type_support_data_t
{
  void * data[3];
} _GetParameters_Event_type_support_data_t;

static _GetParameters_Event_type_support_data_t _GetParameters_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetParameters_Event_message_typesupport_map = {
  3,
  "rcl_interfaces",
  &_GetParameters_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetParameters_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetParameters_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetParameters_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetParameters_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rcl_interfaces__srv__GetParameters_Event__get_type_hash,
  &rcl_interfaces__srv__GetParameters_Event__get_type_description,
  &rcl_interfaces__srv__GetParameters_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rcl_interfaces, srv, GetParameters_Event)() {
  return &::rcl_interfaces::srv::rosidl_typesupport_c::GetParameters_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_parameters__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetParameters_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _GetParameters_type_support_ids_t;

static const _GetParameters_type_support_ids_t _GetParameters_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetParameters_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _GetParameters_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetParameters_type_support_symbol_names_t _GetParameters_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, srv, GetParameters)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetParameters)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetParameters)),
  }
};

typedef struct _GetParameters_type_support_data_t
{
  void * data[3];
} _GetParameters_type_support_data_t;

static _GetParameters_type_support_data_t _GetParameters_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetParameters_service_typesupport_map = {
  3,
  "rcl_interfaces",
  &_GetParameters_service_typesupport_ids.typesupport_identifier[0],
  &_GetParameters_service_typesupport_symbol_names.symbol_name[0],
  &_GetParameters_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetParameters_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetParameters_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetParameters_Request_message_type_support_handle,
  &GetParameters_Response_message_type_support_handle,
  &GetParameters_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rcl_interfaces,
    srv,
    GetParameters
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rcl_interfaces,
    srv,
    GetParameters
  ),
  &rcl_interfaces__srv__GetParameters__get_type_hash,
  &rcl_interfaces__srv__GetParameters__get_type_description,
  &rcl_interfaces__srv__GetParameters__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, rcl_interfaces, srv, GetParameters)() {
  return &::rcl_interfaces::srv::rosidl_typesupport_c::GetParameters_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
